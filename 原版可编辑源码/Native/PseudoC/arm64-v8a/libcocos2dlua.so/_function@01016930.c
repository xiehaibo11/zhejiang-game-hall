
/* std::__ndk1::function<void (cocos2d::Physics3DObject*)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::Physics3DObject*)>::~function
          (function<void(cocos2d::Physics3DObject*)> *this)

{
  function<void(cocos2d::Physics3DObject*)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::Physics3DObject*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x01016958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::Physics3DObject*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0101694c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

