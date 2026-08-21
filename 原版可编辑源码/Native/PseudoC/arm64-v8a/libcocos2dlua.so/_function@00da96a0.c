
/* std::__ndk1::function<cocos2d::ui::Widget* (cocos2d::ui::Widget::FocusDirection)>::~function() */

void __thiscall
std::__ndk1::function<cocos2d::ui::Widget*(cocos2d::ui::Widget::FocusDirection)>::~function
          (function<cocos2d::ui::Widget*(cocos2d::ui::Widget::FocusDirection)> *this)

{
  function<cocos2d::ui::Widget*(cocos2d::ui::Widget::FocusDirection)> *pfVar1;
  
  pfVar1 = *(function<cocos2d::ui::Widget*(cocos2d::ui::Widget::FocusDirection)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00da96c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<cocos2d::ui::Widget*(cocos2d::ui::Widget::FocusDirection)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00da96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

