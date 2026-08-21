
/* std::__ndk1::function<void (cocos2d::Ref*, int)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::Ref*,int)>::~function(function<void(cocos2d::Ref*,int)> *this)

{
  function<void(cocos2d::Ref*,int)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::Ref*,int)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00da9578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::Ref*,int)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00da956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

