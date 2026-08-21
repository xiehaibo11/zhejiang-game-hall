
/* fairygui::GTree::afterExpanded(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::afterExpanded(GTree *this,GTreeNode *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  GController *this_00;
  GComponent *this_01;
  GTreeNode *local_58 [2];
  void *local_48;
  GComponent *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(GTreeNode **)(this + 1000) == param_1) {
                    /* try { // try from 00a8e25c to 00b8e26f has its CatchHandler @ 00a8e3f4 */
    iVar2 = 0;
  }
  else {
    plVar3 = *(long **)(this + 0x3d0);
                    /* try { // try from 00a8e1a0 to 00b8e1d3 has its CatchHandler @ 00a8e3f4 */
    if (plVar3 != (long *)0x0) {
      local_40 = (GComponent *)CONCAT71(local_40._1_7_,1);
      local_58[0] = param_1;
      (**(code **)(*plVar3 + 0x30))(plVar3,local_58,&local_40);
    }
    this_01 = *(GComponent **)(param_1 + 0x38);
    if (this_01 == (GComponent *)0x0) goto LAB_00a8e26c;
    plVar3 = *(long **)(this + 0x3a0);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00a8e1dc to 00b8e20b has its CatchHandler @ 00a8e3f0 */
      local_58[0] = param_1;
      local_40 = this_01;
      (**(code **)(*plVar3 + 0x30))(plVar3,local_58,&local_40);
      this_01 = *(GComponent **)(param_1 + 0x38);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_58,"expanded");
                    /* try { // try from 00a8e20c to 00b8e237 has its CatchHandler @ 00a8e0c0 */
    this_00 = (GController *)GComponent::getController(this_01,(basic_string *)local_58);
    if (((ulong)local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    if (this_00 != (GController *)0x0) {
      GController::setSelectedIndex(this_00,1,true);
    }
                    /* try { // try from 00a8e238 to 00b8e24b has its CatchHandler @ 00a8e460 */
    if (*(long *)(*(GObject **)(param_1 + 0x38) + 0xa0) == 0) goto LAB_00a8e26c;
    iVar2 = GComponent::getChildIndex((GComponent *)this,*(GObject **)(param_1 + 0x38));
  }
  checkChildren(this,param_1,iVar2);
LAB_00a8e26c:
                    /* try { // try from 00a8e270 to 00b8e28f has its CatchHandler @ 00a8e0c0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a8e290 to 00b8e2af has its CatchHandler @ 00a8e3b0 */
  __stack_chk_fail();
}

