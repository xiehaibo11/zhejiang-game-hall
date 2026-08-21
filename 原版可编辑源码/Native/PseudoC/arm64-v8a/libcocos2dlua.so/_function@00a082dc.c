
/* std::__ndk1::function<void (bool)>::~function() */

void __thiscall std::__ndk1::function<void(bool)>::~function(function<void(bool)> *this)

{
  function<void(bool)> *pfVar1;
  
                    /* try { // try from 00a082dc to 00b082e7 has its CatchHandler @ 00a08324 */
  pfVar1 = *(function<void(bool)> **)(this + 0x20);
                    /* try { // try from 00a082e8 to 00b08343 has its CatchHandler @ 00a08268 */
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a08304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(bool)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a082f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

