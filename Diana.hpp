#pragma once

#include <iostream>
#include <string>
#include <string_view>

#define 如果 if
#define 等 while
#define 到时候

class 圣嘉然;

struct 肩膀{};
struct 脸庞{};
struct 火光
{
    void 照在(const 脸庞 &) {}
};
struct 壁炉
{
    火光 的火光() { return 火光(); }
};
struct 狗{};
struct 猫
{
    void 还没有出现() {}
    bool 来了() const { return false; }
    const 猫 &还在() const { return *this; }
    void 害怕(const 圣嘉然 &) const {}
    void 坐在(const 肩膀 &) const {}
};
struct 狗或猫{};
狗或猫 operator|(const 狗 &, const 猫 &)
{
    return 狗或猫{};
}
struct 老鼠;
struct 鼠条{};
struct 铃铛
{
    void 轻轻鸣响() {}
};

class 人
{
public:
    bool 都喜欢(const 狗或猫 &) { return true; }
    bool 会喜欢(const 老鼠 &) { return false; }
};

struct 鼠鼠人的身体{};
struct 鼠鼠人的心脏
{
    void 在微风里(std::string_view)
    {
        std::cout << "这一切不过是鼠鼠人的梦罢了" << std::endl;
    }
};
struct 鼠鼠人的灵魂
{
    void 透过窗户向里面看去() {}
};
struct 老鼠
{
    void 好想做(const 狗 &) const {}
    void 哭了() const {}
    void 知道(std::string_view) const {}
    void 不知道(std::string_view) const {}
    std::string 为什么要哭() const { return "因为我其实是一只老鼠"; }

    // void 奢望(bool) const {}
    void 明白(bool) const {}

    void 问(const 圣嘉然 &, std::string_view) const {}
    void 一直在身边看着(const 圣嘉然 &) {}

    老鼠 &每天蹑手蹑脚地从洞里爬出来() { return *this; }
    老鼠 &远远地和(const 圣嘉然 &, std::string_view) { return *this; }

    void 重新滚回(void *) {}

    老鼠 &还是() { return *this; }
    老鼠 &好喜欢(const 圣嘉然 &) { return *this; }
    void 好希望(const 人 &, std::string_view) {}
    void 希望(const 圣嘉然 &, std::string_view) {}

    void 引来(const 猫 &) {}

    void 会一直喜欢下去的() {}

    // 获取属性
    void *的洞() { return this->洞; }
    鼠鼠人的身体 的身体() { return this->身体; }
    鼠鼠人的灵魂 的灵魂() { return this->灵魂; }
    鼠鼠人的心脏 的心脏() { return this->心脏; }
    鼠鼠人的心脏 冻僵的心脏() { return this->心脏; }

private:
    void *洞 = nullptr;
    鼠鼠人的身体 身体;
    鼠鼠人的灵魂 灵魂;
    鼠鼠人的心脏 心脏;
};

class 圣嘉然
{
public:
    圣嘉然() {}
    圣嘉然(const 圣嘉然 &) = delete;
    圣嘉然(圣嘉然 &&) = delete;
    圣嘉然 &operator=(const 圣嘉然 &) = delete;
    圣嘉然 &operator=(圣嘉然 &&) = delete;

    // 动作
    void 说(std::string_view 一句话) const {}

    constexpr bool 喜欢(const 猫 &) { return true; }
    constexpr bool 喜欢(const 狗 &) { return false; }
    constexpr bool 喜欢(const 老鼠 &) { return false; }

    bool 怀里抱着的是狗() { return false; }

    const 圣嘉然 &看着(const 老鼠 &) const { return *this; }
    const 圣嘉然 &逗(const 老鼠 &, std::string_view) const { return *this; }
    void 好好地装起来扔到门外(鼠鼠人的身体) const {}
    void 慵懒地靠在沙发上() {}

    // 副词
    const 圣嘉然 &还在() const { return *this; }
    const 圣嘉然 &大概会() const { return *this; }

    // 获取属性
    const 狗 &的狗() const { return this->嘉然小姐的狗; }
    const 猫 &的猫() const { return this->嘉然小姐的猫; }

    const 肩膀 &的肩膀() const { return this->嘉然小姐的肩膀; }
    const 脸庞 &的脸庞() const { return this->嘉然小姐的脸庞; }

private:
    狗 嘉然小姐的狗;
    猫 嘉然小姐的猫;
    肩膀 嘉然小姐的肩膀;
    脸庞 嘉然小姐的脸庞;
};