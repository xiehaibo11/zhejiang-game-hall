
/* fairygui::GTreeNode::addChildAt(fairygui::GTreeNode*, int) */

GTreeNode * __thiscall
fairygui::GTreeNode::addChildAt(GTreeNode *this,GTreeNode *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  GTreeNode *pGVar6;
  vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>> *this_00;
  GTree *this_01;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  GTreeNode *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(GTreeNode **)(param_1 + 0x30) == this) {
    plVar2 = *(long **)(this + 0x58);
    plVar4 = *(long **)(this + 0x60);
    plVar11 = plVar4;
    plVar12 = plVar2;
    if (plVar2 != plVar4) {
      pGVar6 = (GTreeNode *)*plVar2;
      plVar9 = plVar2;
      while ((plVar11 = plVar9, plVar12 = plVar9, pGVar6 != param_1 &&
             (plVar9 = plVar9 + 1, plVar11 = plVar4, plVar12 = plVar4, plVar4 != plVar9))) {
        pGVar6 = (GTreeNode *)*plVar9;
      }
    }
    iVar7 = (int)((ulong)((long)plVar12 - (long)plVar2) >> 3);
                    /* try { // try from 00a8f23c to 00b8f23f has its CatchHandler @ 00a8f274 */
    if (plVar11 == plVar4) {
      iVar7 = -1;
    }
                    /* try { // try from 00a8f240 to 00b8f287 has its CatchHandler @ 00a8f1f0 */
    moveChild(this,param_1,iVar7,param_2);
  }
  else {
    cocos2d::Ref::retain((Ref *)param_1);
    pGVar6 = *(GTreeNode **)(param_1 + 0x30);
    if (pGVar6 != (GTreeNode *)0x0) {
      puVar8 = *(undefined8 **)(pGVar6 + 0x58);
      puVar3 = *(undefined8 **)(pGVar6 + 0x60);
      if (puVar3 != puVar8) {
        puVar10 = puVar8;
        if ((GTreeNode *)*puVar8 != param_1) {
          do {
            if (puVar3 + -1 == puVar10) goto LAB_00a8f15c;
            puVar1 = puVar10 + 1;
            puVar10 = puVar10 + 1;
          } while ((GTreeNode *)*puVar1 != param_1);
        }
        if ((puVar10 != puVar3) &&
           (iVar7 = (int)((ulong)((long)puVar10 - (long)puVar8) >> 3), iVar7 != -1)) {
          removeChildAt(pGVar6,iVar7);
        }
      }
    }
LAB_00a8f15c:
    *(GTreeNode **)(param_1 + 0x30) = this;
    this_00 = (vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>> *)
              (this + 0x58);
    puVar8 = *(undefined8 **)(this + 0x60);
    local_50 = param_1;
    if ((int)((ulong)((long)puVar8 - *(long *)this_00) >> 3) == param_2) {
      if (*(undefined8 **)(this + 0x68) == puVar8) {
        std::__ndk1::vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>>::
        __push_back_slow_path<fairygui::GTreeNode*const&>(this_00,&local_50);
      }
      else {
        *puVar8 = param_1;
        *(undefined8 **)(this + 0x60) = puVar8 + 1;
      }
    }
    else {
      std::__ndk1::vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>>::insert
                (this_00,*(long *)this_00 + (long)param_2 * 8,&local_50);
    }
    cocos2d::Ref::retain((Ref *)local_50);
    cocos2d::Ref::release((Ref *)param_1);
    *(int *)(param_1 + 0x40) = *(int *)(this + 0x40) + 1;
    setTree(param_1,*(GTree **)(this + 0x28));
    this_01 = *(GTree **)(this + 0x28);
                    /* try { // try from 00a8f1f0 to 00b8f23b has its CatchHandler @ 00a8f1f0
                       catch() { ... } // from try @ 00a8f1f0 with catch @ 00a8f1f0
                       catch() { ... } // from try @ 00a8f240 with catch @ 00a8f1f0 */
    if (((this_01 != (GTree *)0x0) && (*(GTreeNode **)(this_01 + 1000) == this)) ||
       ((*(long *)(this + 0x38) != 0 &&
        ((*(long *)(*(long *)(this + 0x38) + 0xa0) != 0 && (this[0x44] != (GTreeNode)0x0)))))) {
      GTree::afterInserted(this_01,param_1);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00a8f23c with catch @ 00a8f274 */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

