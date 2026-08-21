
/* cocos2d::extension::ScrollView::setContainer(cocos2d::Node*) */

void __thiscall cocos2d::extension::ScrollView::setContainer(ScrollView *this,Node *param_1)

{
  long lVar1;
  Size aSStack_48 [8];
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00e1569c with catch @ 00e158a8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e15684 with catch @ 00e158c0 */
  if (param_1 != (Node *)0x0) {
    (**(code **)(*(long *)this + 0x2a0))(this,1);
    *(Node **)(this + 0x340) = param_1;
                    /* try { // try from 00e158f4 to 00f15997 has its CatchHandler @ 00e158f4
                       catch() { ... } // from try @ 00e158f4 with catch @ 00e158f4
                       catch() { ... } // from try @ 00e159e8 with catch @ 00e158f4 */
    (**(code **)(*(long *)param_1 + 0x1f0))(param_1,0);
    local_40 = 0;
    (**(code **)(**(long **)(this + 0x340) + 0x148))(*(long **)(this + 0x340),&local_40);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x340));
    Size::Size(aSStack_48,(Size *)(this + 0x390));
    Size::operator=((Size *)(this + 0x390),aSStack_48);
    Node::setContentSize((Node *)this,aSStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

