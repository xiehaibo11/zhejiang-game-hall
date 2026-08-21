
/* std::__ndk1::function<void (fairygui::GTreeNode*, bool)>::~function() */

void __thiscall
std::__ndk1::function<void(fairygui::GTreeNode*,bool)>::~function
          (function<void(fairygui::GTreeNode*,bool)> *this)

{
  function<void(fairygui::GTreeNode*,bool)> *pfVar1;
  
  pfVar1 = *(function<void(fairygui::GTreeNode*,bool)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a8d720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(fairygui::GTreeNode*,bool)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a8d714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

