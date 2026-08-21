
/* fairygui::GTreeNode::setTree(fairygui::GTree*) */

void __thiscall fairygui::GTreeNode::setTree(GTreeNode *this,GTree *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  GTreeNode *this_00;
  undefined8 *puVar4;
  undefined1 local_54 [4];
  GTreeNode *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(GTree **)(this + 0x28) = param_1;
  if (((param_1 != (GTree *)0x0) && (plVar3 = *(long **)(param_1 + 0x3d0), plVar3 != (long *)0x0))
     && (this[0x44] != (GTreeNode)0x0)) {
    local_54[0] = 1;
    local_50 = this;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,local_54);
  }
                    /* try { // try from 00a8f358 to 00b8f38b has its CatchHandler @ 00a8f458 */
  if (this[0x45] != (GTreeNode)0x0) {
    puVar1 = *(undefined8 **)(this + 0x60);
    for (puVar4 = *(undefined8 **)(this + 0x58); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (GTreeNode *)*puVar4;
      *(int *)(this_00 + 0x40) = *(int *)(this + 0x40) + 1;
      setTree(this_00,param_1);
    }
  }
                    /* try { // try from 00a8f38c to 00b8f39f has its CatchHandler @ 00a8f424 */
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a8f3a4 to 00b8f3d7 has its CatchHandler @ 00a8f428 */
  return;
}

