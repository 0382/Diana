#pragma once

#include "other.hpp"

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