
/* fairygui::GTree::getSelectedNodes(std::__ndk1::vector<fairygui::GTreeNode*,
   std::__ndk1::allocator<fairygui::GTreeNode*> >&) const */

void __thiscall fairygui::GTree::getSelectedNodes(GTree *this,vector *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  GTreeNode *local_68;
  int *local_60;
  int *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_60 = (int *)0x0;
  GList::getSelection((GList *)this,(vector *)&local_60);
  piVar4 = local_58;
  for (piVar1 = local_60; piVar1 != piVar4; piVar1 = piVar1 + 1) {
    lVar5 = GComponent::getChildAt((GComponent *)this,*piVar1);
    local_68 = *(GTreeNode **)(lVar5 + 0x1c0);
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
      std::__ndk1::vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>>::
      __push_back_slow_path<fairygui::GTreeNode*const&>
                ((vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>> *)
                 param_1,&local_68);
    }
    else {
      *puVar2 = local_68;
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
    }
  }
  if (local_60 != (int *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

