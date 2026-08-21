
/* fairygui::GTreeNode::moveChild(fairygui::GTreeNode*, int, int) */

int __thiscall
fairygui::GTreeNode::moveChild(GTreeNode *this,GTreeNode *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  GTree *this_00;
  vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>> *this_01;
  int iVar4;
  GTreeNode *local_70;
  long local_68;
  
                    /* try { // try from 00a8f654 to 00b8f69f has its CatchHandler @ 00a8f654
                       catch() { ... } // from try @ 00a8f654 with catch @ 00a8f654
                       catch() { ... } // from try @ 00a8f6a4 with catch @ 00a8f654 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_01 = (vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>> *)
            (this + 0x58);
  iVar4 = (int)((ulong)(*(long *)(this + 0x60) - *(long *)this_01) >> 3);
  iVar2 = iVar4;
  if (param_3 <= iVar4) {
    iVar2 = param_3;
  }
  if (iVar2 != param_2) {
                    /* try { // try from 00a8f6a0 to 00b8f6a3 has its CatchHandler @ 00a8f6d8 */
                    /* try { // try from 00a8f6a4 to 00b8f6eb has its CatchHandler @ 00a8f654 */
    cocos2d::Ref::retain((Ref *)param_1);
    puVar1 = (undefined8 *)(*(long *)(this + 0x58) + (long)param_2 * 8);
    cocos2d::Ref::release((Ref *)*puVar1);
    __n = *(long *)(this + 0x60) - (long)(puVar1 + 1);
    if (__n != 0) {
                    /* catch() { ... } // from try @ 00a8f6a0 with catch @ 00a8f6d8 */
      memmove(puVar1,puVar1 + 1,__n);
    }
    puVar1 = puVar1 + ((long)__n >> 3);
                    /* try { // try from 00a8f6ec to 00b8f7bb has its CatchHandler @ 00a8f6ec
                       catch() { ... } // from try @ 00a8f6ec with catch @ 00a8f6ec
                       catch() { ... } // from try @ 00a8f83c with catch @ 00a8f6ec */
    *(undefined8 **)(this + 0x60) = puVar1;
    local_70 = param_1;
    if (param_3 < iVar4) {
      std::__ndk1::vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>>::insert
                (this_01,*(long *)this_01 + (long)iVar2 * 8,&local_70);
    }
    else if (puVar1 == *(undefined8 **)(this + 0x68)) {
      std::__ndk1::vector<fairygui::GTreeNode*,std::__ndk1::allocator<fairygui::GTreeNode*>>::
      __push_back_slow_path<fairygui::GTreeNode*const&>(this_01,&local_70);
    }
    else {
      *puVar1 = param_1;
      *(undefined8 **)(this + 0x60) = puVar1 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_70);
    cocos2d::Ref::release((Ref *)param_1);
    this_00 = *(GTree **)(this + 0x28);
    param_2 = iVar2;
    if (((this_00 != (GTree *)0x0) && (*(GTreeNode **)(this_00 + 1000) == this)) ||
       ((*(long *)(this + 0x38) != 0 &&
        ((*(long *)(*(long *)(this + 0x38) + 0xa0) != 0 && (this[0x44] != (GTreeNode)0x0)))))) {
      GTree::afterMoved(this_00,param_1);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

