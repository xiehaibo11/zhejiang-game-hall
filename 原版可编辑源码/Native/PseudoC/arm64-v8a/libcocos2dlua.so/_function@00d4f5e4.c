
/* std::__ndk1::function<void (spTrackEntry*)>::~function() */

void __thiscall
std::__ndk1::function<void(spTrackEntry*)>::~function(function<void(spTrackEntry*)> *this)

{
  function<void(spTrackEntry*)> *pfVar1;
  
  pfVar1 = *(function<void(spTrackEntry*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00d4f60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(spTrackEntry*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d4f600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

