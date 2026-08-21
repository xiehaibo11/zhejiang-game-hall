
/* std::__ndk1::function<fairygui::GLoader* ()>::~function() */

void __thiscall
std::__ndk1::function<fairygui::GLoader*()>::~function(function<fairygui::GLoader*()> *this)

{
  function<fairygui::GLoader*()> *pfVar1;
  
  pfVar1 = *(function<fairygui::GLoader*()> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a9dc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<fairygui::GLoader*()> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a9dc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
                    /* catch() { ... } // from try @ 00a9dc24 with catch @ 00a9dc78 */
  return;
}

