
/* fairygui::GTree::createCell(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::createCell(GTree *this,GTreeNode *param_1)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  long lVar4;
  GComponent *this_00;
  GObject *this_01;
  UIEventDispatcher *this_02;
  GController *this_03;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  GComponent *this_04;
  GComponent *local_98;
  GTreeNode *local_90;
  code *local_88;
  void *pvStack_80;
  GTree *local_78;
  GTreeNode **local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar2 = *(basic_string *)(param_1 + 0x70);
  if (((byte)bVar2 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x78);
  }
  pbVar1 = (basic_string *)(this + 0x308);
  if (uVar7 != 0) {
    pbVar1 = (basic_string *)(param_1 + 0x70);
  }
  lVar4 = GObjectPool::getObject(*(GObjectPool **)(this + 0x328),pbVar1);
  if (lVar4 == 0) {
    this_00 = (GComponent *)0x0;
  }
  else {
    this_00 = (GComponent *)__dynamic_cast(lVar4,&GObject::typeinfo,&GComponent::typeinfo,0);
  }
  *(GTreeNode **)(this_00 + 0x1c0) = param_1;
  GTreeNode::setCell(param_1,this_00);
  this_04 = *(GComponent **)(param_1 + 0x38);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"indent");
                    /* try { // try from 00a8db44 to 00b8dbdf has its CatchHandler @ 00a8db44
                       catch() { ... } // from try @ 00a8db44 with catch @ 00a8db44
                       catch() { ... } // from try @ 00a8dbe8 with catch @ 00a8db44 */
  this_01 = (GObject *)GComponent::getChild(this_04,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (this_01 != (GObject *)0x0) {
    GObject::setSize(this_01,(float)((*(int *)(param_1 + 0x40) + -1) * *(int *)(this + 0x3e0)),
                     *(float *)(this_01 + 0xd4),false);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"expanded");
  this_02 = (UIEventDispatcher *)GComponent::getController(this_00,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (this_02 != (UIEventDispatcher *)0x0) {
    local_90 = (GTreeNode *)&PTR_FUN_016a70f8;
    pvStack_80 = (void *)0x0;
    local_88 = onExpandedStateChanged;
                    /* try { // try from 00a8dbe0 to 00b8dbe7 has its CatchHandler @ 00a8dc60 */
                    /* try { // try from 00a8dbe8 to 00b8dc7b has its CatchHandler @ 00a8db44 */
    local_78 = this;
    local_70 = &local_90;
    UIEventDispatcher::addEventListener(this_02,2,(function *)&local_90,(EventTag *)&EventTag::None)
    ;
    if (&local_90 == local_70) {
      pcVar6 = *(code **)(*local_70 + 0x20);
LAB_00a8dc20:
      (*pcVar6)();
    }
    else if (local_70 != (GTreeNode **)0x0) {
      pcVar6 = *(code **)(*local_70 + 0x28);
      goto LAB_00a8dc20;
    }
    GController::setSelectedIndex((GController *)this_02,(uint)(byte)param_1[0x44],true);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"leaf");
  this_03 = (GController *)GComponent::getController(this_00,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
                    /* catch() { ... } // from try @ 00a8dbe0 with catch @ 00a8dc60 */
    operator_delete(pvStack_80);
  }
  if (this_03 != (GController *)0x0) {
    GController::setSelectedIndex(this_03,(byte)param_1[0x45] ^ 1,true);
  }
  if (param_1[0x45] != (GTreeNode)0x0) {
    local_90 = (GTreeNode *)&PTR_FUN_016a70f8;
    pvStack_80 = (void *)0x0;
    local_88 = onCellTouchBegin;
    local_78 = this;
    local_70 = &local_90;
    UIEventDispatcher::addEventListener
              ((UIEventDispatcher *)this_00,10,(function *)&local_90,(EventTag *)&EventTag::None);
    if (&local_90 == local_70) {
      pcVar6 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (GTreeNode **)0x0) goto LAB_00a8dce8;
      pcVar6 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar6)();
  }
LAB_00a8dce8:
  plVar5 = *(long **)(this + 0x3a0);
  if (plVar5 != (long *)0x0) {
    local_98 = this_00;
    local_90 = param_1;
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_90,&local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

