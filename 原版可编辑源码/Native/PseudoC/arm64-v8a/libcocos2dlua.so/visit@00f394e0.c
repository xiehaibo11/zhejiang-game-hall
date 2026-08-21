
/* cocos2d::ProtectedNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ProtectedNode::visit(ProtectedNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  ProtectedNode *pPVar1;
  undefined4 uVar2;
  int iVar3;
  Director *pDVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  if (this[0x1f9] == (ProtectedNode)0x0) {
    return;
  }
  uVar2 = Node::processParentFlags((Node *)this,param_2,param_3);
  pDVar4 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar4,0);
  pPVar1 = this + 0x8c;
  Director::loadMatrix(pDVar4,0,pPVar1);
  (**(code **)(*(long *)this + 0x2b0))(this);
  (**(code **)(*(long *)this + 0x578))(this);
  lVar6 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
  if ((lVar6 < 1) || (plVar7 = (long *)**(undefined8 **)(this + 0x178), plVar7 == (long *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
    do {
      iVar3 = (**(code **)(*plVar7 + 0x30))(plVar7);
      if (-1 < iVar3) break;
      (**(code **)(*plVar7 + 0x358))(plVar7,param_1,pPVar1,uVar2);
      if (lVar6 >> 3 <= (long)uVar9) {
        uVar9 = uVar9 & 0xffffffff;
        goto LAB_00f395d4;
      }
      plVar7 = *(long **)(*(long *)(this + 0x178) + uVar9 * 8);
      uVar9 = uVar9 + 1;
                    /* try { // try from 00f395c4 to 010395db has its CatchHandler @ 00f3969c */
    } while (plVar7 != (long *)0x0);
    uVar9 = uVar9 - 1;
  }
LAB_00f395d4:
                    /* try { // try from 00f395dc to 0103961f has its CatchHandler @ 00f39438 */
  lVar6 = *(long *)(this + 0x300) - (long)*(undefined8 **)(this + 0x2f8);
  if (lVar6 < 1) {
    uVar10 = 0;
  }
  else {
    plVar7 = (long *)**(undefined8 **)(this + 0x2f8);
    uVar10 = 0;
    if (plVar7 != (long *)0x0) {
      uVar10 = 1;
      do {
        iVar3 = (**(code **)(*plVar7 + 0x30))(plVar7);
        if (-1 < iVar3) break;
                    /* try { // try from 00f39620 to 01039637 has its CatchHandler @ 00f39698 */
        (**(code **)(*plVar7 + 0x358))(plVar7,param_1,pPVar1,uVar2);
        if (lVar6 >> 3 <= (long)uVar10) {
          uVar10 = uVar10 & 0xffffffff;
          goto LAB_00f39678;
        }
        plVar7 = *(long **)(*(long *)(this + 0x2f8) + uVar10 * 8);
                    /* try { // try from 00f39638 to 010396b7 has its CatchHandler @ 00f39438 */
        uVar10 = uVar10 + 1;
      } while (plVar7 != (long *)0x0);
      uVar10 = uVar10 - 1;
    }
  }
LAB_00f39678:
  uVar5 = Node::isVisitableByVisitingCamera((Node *)this);
  if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 00f39620 with catch @ 00f39698 */
                    /* catch() { ... } // from try @ 00f395c4 with catch @ 00f3969c */
    (**(code **)(*(long *)this + 0x348))(this,param_1,pPVar1,uVar2);
  }
  puVar11 = *(undefined8 **)(this + 0x300);
  for (puVar8 = (undefined8 *)(*(long *)(this + 0x2f8) + uVar10 * 8); puVar8 != puVar11;
      puVar8 = puVar8 + 1) {
    (**(code **)(*(long *)*puVar8 + 0x358))((long *)*puVar8,param_1,pPVar1,uVar2);
  }
  puVar11 = *(undefined8 **)(this + 0x180);
                    /* try { // try from 00f396e4 to 01039713 has its CatchHandler @ 00f396e4
                       catch() { ... } // from try @ 00f396e4 with catch @ 00f396e4
                       catch() { ... } // from try @ 00f39718 with catch @ 00f396e4 */
  for (puVar8 = (undefined8 *)(*(long *)(this + 0x178) + uVar9 * 8); puVar8 != puVar11;
      puVar8 = puVar8 + 1) {
    (**(code **)(*(long *)*puVar8 + 0x358))((long *)*puVar8,param_1,pPVar1,uVar2);
  }
                    /* try { // try from 00f39714 to 01039717 has its CatchHandler @ 00f39724 */
                    /* try { // try from 00f39718 to 01039737 has its CatchHandler @ 00f396e4 */
                    /* catch() { ... } // from try @ 00f39714 with catch @ 00f39724 */
  Director::popMatrix(pDVar4,0);
  return;
}

