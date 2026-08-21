
/* std::__ndk1::function<void (cocos2d::Ref*, cocos2d::ui::Widget::TouchEventType)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::Ref*,cocos2d::ui::Widget::TouchEventType)>::~function
          (function<void(cocos2d::Ref*,cocos2d::ui::Widget::TouchEventType)> *this)

{
  function<void(cocos2d::Ref*,cocos2d::ui::Widget::TouchEventType)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::Ref*,cocos2d::ui::Widget::TouchEventType)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00da95d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::Ref*,cocos2d::ui::Widget::TouchEventType)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00da95cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

