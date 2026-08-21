
/* std::__ndk1::function<void (int, fairygui::GObject*)>::~function() */

void __thiscall
std::__ndk1::function<void(int,fairygui::GObject*)>::~function
          (function<void(int,fairygui::GObject*)> *this)

{
  function<void(int,fairygui::GObject*)> *pfVar1;
  
  pfVar1 = *(function<void(int,fairygui::GObject*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a775d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(int,fairygui::GObject*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a775c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

