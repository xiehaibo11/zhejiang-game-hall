
/* std::__ndk1::function<void (fairygui::GTreeNode*, fairygui::GComponent*)>::~function() */

void __thiscall
std::__ndk1::function<void(fairygui::GTreeNode*,fairygui::GComponent*)>::~function
          (function<void(fairygui::GTreeNode*,fairygui::GComponent*)> *this)

{
  function<void(fairygui::GTreeNode*,fairygui::GComponent*)> *pfVar1;
  
  pfVar1 = *(function<void(fairygui::GTreeNode*,fairygui::GComponent*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a8d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(fairygui::GTreeNode*,fairygui::GComponent*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a8d744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

