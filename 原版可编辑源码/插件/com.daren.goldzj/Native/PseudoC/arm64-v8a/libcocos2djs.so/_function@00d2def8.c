
/* std::__ndk1::function<void (dragonBones::BaseObject*, int)>::~function() */

void __thiscall
std::__ndk1::function<void(dragonBones::BaseObject*,int)>::~function
          (function<void(dragonBones::BaseObject*,int)> *this)

{
  function<void(dragonBones::BaseObject*,int)> *pfVar1;
  
  pfVar1 = *(function<void(dragonBones::BaseObject*,int)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00d2df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(dragonBones::BaseObject*,int)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d2df14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

