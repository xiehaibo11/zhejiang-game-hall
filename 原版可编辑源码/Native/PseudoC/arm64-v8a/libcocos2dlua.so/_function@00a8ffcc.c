
/* std::__ndk1::function<fairygui::GComponent* ()>::~function() */

void __thiscall
std::__ndk1::function<fairygui::GComponent*()>::~function(function<fairygui::GComponent*()> *this)

{
  function<fairygui::GComponent*()> *pfVar1;
  
  pfVar1 = *(function<fairygui::GComponent*()> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a8fff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<fairygui::GComponent*()> *)0x0) {
                    /* try { // try from 00a8ffe4 to 00b90017 has its CatchHandler @ 00a8ff2c */
                    /* WARNING: Could not recover jumptable at 0x00a8ffe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

