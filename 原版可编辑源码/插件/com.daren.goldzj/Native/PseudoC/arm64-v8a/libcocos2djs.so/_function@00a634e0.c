
/* std::__ndk1::function<void (cocos2d::extension::EventAssetsManagerEx*)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::extension::EventAssetsManagerEx*)>::~function
          (function<void(cocos2d::extension::EventAssetsManagerEx*)> *this)

{
  function<void(cocos2d::extension::EventAssetsManagerEx*)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::extension::EventAssetsManagerEx*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a63508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::extension::EventAssetsManagerEx*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a634fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

