
/* std::__ndk1::function<void (cocos2d::ui::Widget*, cocos2d::ui::Widget*)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::ui::Widget*,cocos2d::ui::Widget*)>::~function
          (function<void(cocos2d::ui::Widget*,cocos2d::ui::Widget*)> *this)

{
  function<void(cocos2d::ui::Widget*,cocos2d::ui::Widget*)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::ui::Widget*,cocos2d::ui::Widget*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00da96f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::ui::Widget*,cocos2d::ui::Widget*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00da96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

