
/* std::__ndk1::function<void (spTrackEntry*, spEvent*)>::~function() */

void __thiscall
std::__ndk1::function<void(spTrackEntry*,spEvent*)>::~function
          (function<void(spTrackEntry*,spEvent*)> *this)

{
  function<void(spTrackEntry*,spEvent*)> *pfVar1;
  
  pfVar1 = *(function<void(spTrackEntry*,spEvent*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00d4f5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(spTrackEntry*,spEvent*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d4f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

