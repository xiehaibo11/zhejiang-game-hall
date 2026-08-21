
/* std::__ndk1::function<cocos2d::Ref* ()>::~function() */

void __thiscall std::__ndk1::function<cocos2d::Ref*()>::~function(function<cocos2d::Ref*()> *this)

{
  function<cocos2d::Ref*()> *pfVar1;
  
  pfVar1 = *(function<cocos2d::Ref*()> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00fbecf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<cocos2d::Ref*()> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00fbece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

