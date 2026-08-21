
/* fairygui::GTree::afterCollapsed(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::afterCollapsed(GTree *this,GTreeNode *param_1)

{
  long lVar1;
  long *plVar2;
  GController *this_00;
  GComponent *this_01;
  GTreeNode *local_58 [2];
  void *local_48;
  GComponent *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(GTreeNode **)(this + 1000) == param_1) {
    checkChildren(this,param_1,0);
  }
  else {
    plVar2 = *(long **)(this + 0x3d0);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00a8e2f0 to 00b8e2f7 has its CatchHandler @ 00a8e3f0 */
      local_40 = (GComponent *)((ulong)local_40 & 0xffffffffffffff00);
                    /* try { // try from 00a8e2f8 to 00b8e4d7 has its CatchHandler @ 00a8e0c0 */
      local_58[0] = param_1;
      (**(code **)(*plVar2 + 0x30))(plVar2,local_58,&local_40);
    }
    this_01 = *(GComponent **)(param_1 + 0x38);
    if (this_01 != (GComponent *)0x0) {
      plVar2 = *(long **)(this + 0x3a0);
      if (plVar2 != (long *)0x0) {
        local_58[0] = param_1;
        local_40 = this_01;
        (**(code **)(*plVar2 + 0x30))(plVar2,local_58,&local_40);
        this_01 = *(GComponent **)(param_1 + 0x38);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_58,"expanded");
      this_00 = (GController *)GComponent::getController(this_01,(basic_string *)local_58);
      if (((ulong)local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      if (this_00 != (GController *)0x0) {
        GController::setSelectedIndex(this_00,0,true);
      }
      if (*(long *)(*(long *)(param_1 + 0x38) + 0xa0) != 0) {
        hideFolderNode(this,param_1);
      }
    }
  }
                    /* catch() { ... } // from try @ 00a8e290 with catch @ 00a8e3b0 */
                    /* catch() { ... } // from try @ 00a8e150 with catch @ 00a8e3b4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

