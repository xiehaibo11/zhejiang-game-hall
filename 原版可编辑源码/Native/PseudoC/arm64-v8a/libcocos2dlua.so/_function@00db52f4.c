
/* std::__ndk1::function<void (cocos2d::Ref*, cocos2d::ui::ListView::EventType)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::Ref*,cocos2d::ui::ListView::EventType)>::~function
          (function<void(cocos2d::Ref*,cocos2d::ui::ListView::EventType)> *this)

{
  function<void(cocos2d::Ref*,cocos2d::ui::ListView::EventType)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::Ref*,cocos2d::ui::ListView::EventType)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00db531c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::Ref*,cocos2d::ui::ListView::EventType)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00db5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

