
/* cocos2d::extension::ScrollView::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::extension::ScrollView::visit(ScrollView *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  ScrollView *pSVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  Director *pDVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  ScrollView *local_88;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = (**(code **)(*(long *)this + 0x178))();
  if ((uVar5 & 1) == 0) goto LAB_00e168e0;
  uVar3 = Node::processParentFlags((Node *)this,param_2,param_3);
                    /* try { // try from 00e166c8 to 00f167bf has its CatchHandler @ 00e16860 */
  pDVar6 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar6,0);
  pSVar1 = this + 0x8c;
  Director::loadMatrix(pDVar6,0,pSVar1);
  CustomCommand::init((CustomCommand *)(this + 0x3c0),*(float *)(this + 0x170));
  local_a0 = &PTR_FUN_016ed6a8;
  uStack_90 = 0;
  local_98 = onBeforeDraw;
  local_88 = this;
  local_80 = (long *)&local_a0;
  FUN_008820fc(&local_a0,this + 0x3e0);
  if (&local_a0 == (undefined ***)local_80) {
    pcVar8 = *(code **)(*local_80 + 0x20);
LAB_00e1675c:
    (*pcVar8)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar8 = *(code **)(*local_80 + 0x28);
    goto LAB_00e1675c;
  }
  lVar7 = Director::getInstance();
  Renderer::addCommand(*(Renderer **)(lVar7 + 0x1b0),(RenderCommand *)(this + 0x3c0));
  uVar5 = Node::isVisitableByVisitingCamera((Node *)this);
  lVar7 = *(long *)(this + 0x178);
  if (lVar7 == *(long *)(this + 0x180)) {
    if ((uVar5 & 1) != 0) {
                    /* try { // try from 00e16840 to 00f1687f has its CatchHandler @ 00e16508 */
      (**(code **)(*(long *)this + 0x348))(this,param_1,pSVar1,uVar3);
    }
  }
  else {
    if (*(long *)(this + 0x180) - lVar7 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        plVar10 = *(long **)(lVar7 + uVar11 * 8);
        iVar4 = (**(code **)(*plVar10 + 0x30))(plVar10);
        if (-1 < iVar4) break;
                    /* try { // try from 00e167c0 to 00f1683f has its CatchHandler @ 00e16864 */
        (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pSVar1,uVar3);
        lVar7 = *(long *)(this + 0x178);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < *(long *)(this + 0x180) - lVar7 >> 3);
    }
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pSVar1,uVar3);
    }
    lVar7 = *(long *)(this + 0x178);
    lVar9 = *(long *)(this + 0x180);
    for (uVar11 = uVar11 & 0xffffffff; (long)uVar11 < lVar9 - lVar7 >> 3; uVar11 = uVar11 + 1) {
      plVar10 = *(long **)(lVar7 + uVar11 * 8);
      (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pSVar1,uVar3);
      lVar7 = *(long *)(this + 0x178);
      lVar9 = *(long *)(this + 0x180);
    }
  }
                    /* catch() { ... } // from try @ 00e166c8 with catch @ 00e16860 */
                    /* catch() { ... } // from try @ 00e167c0 with catch @ 00e16864 */
  CustomCommand::init((CustomCommand *)(this + 0x410),*(float *)(this + 0x170));
  local_a0 = &PTR_FUN_016ed6a8;
  uStack_90 = 0;
  local_98 = onAfterDraw;
  local_88 = this;
  local_80 = (long *)&local_a0;
  FUN_008820fc(&local_a0,this + 0x430);
  if (&local_a0 == (undefined ***)local_80) {
    pcVar8 = *(code **)(*local_80 + 0x20);
LAB_00e168c0:
    (*pcVar8)();
  }
  else if (local_80 != (long *)0x0) {
                    /* try { // try from 00e168b0 to 00f168eb has its CatchHandler @ 00e168b0
                       catch() { ... } // from try @ 00e168b0 with catch @ 00e168b0
                       catch() { ... } // from try @ 00e168f8 with catch @ 00e168b0 */
    pcVar8 = *(code **)(*local_80 + 0x28);
    goto LAB_00e168c0;
  }
  lVar7 = Director::getInstance();
  Renderer::addCommand(*(Renderer **)(lVar7 + 0x1b0),(RenderCommand *)(this + 0x410));
  Director::popMatrix(pDVar6,0);
LAB_00e168e0:
                    /* try { // try from 00e168ec to 00f168f7 has its CatchHandler @ 00e16918 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00e168f8 to 00f1692b has its CatchHandler @ 00e168b0 */
  return;
}

