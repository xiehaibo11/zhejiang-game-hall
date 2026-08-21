
/* cocos2d::NodeGrid::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::NodeGrid::visit(NodeGrid *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  NodeGrid *pNVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  Director *pDVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined **local_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  NodeGrid *local_98;
  undefined ***local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
                    /* try { // try from 00f2c12c to 0102c17b has its CatchHandler @ 00f2c0e0 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (this[0x1f9] == (NodeGrid)0x0) goto LAB_00f2c4a8;
                    /* catch() { ... } // from try @ 00f2c124 with catch @ 00f2c160 */
  if (((param_3 & 1) == 0) && (this[0x161] == (NodeGrid)0x0)) {
    uVar10 = 0;
  }
  else {
    Node::transform((Mat4 *)this);
    *(undefined8 *)(this + 0xc4) = uStack_78;
    *(undefined8 *)(this + 0xbc) = uStack_80;
    *(undefined8 *)(this + 0xb4) = uStack_88;
    *(undefined ****)(this + 0xac) = local_90;
    *(NodeGrid **)(this + 0xa4) = local_98;
    *(undefined8 *)(this + 0x9c) = uStack_a0;
    *(code **)(this + 0x94) = pcStack_a8;
    *(undefined ***)(this + 0x8c) = local_b0;
    Mat4::~Mat4((Mat4 *)&local_b0);
    uVar10 = 1;
  }
  this[0x161] = (NodeGrid)0x0;
  GroupCommand::init((GroupCommand *)(this + 0x308),*(float *)(this + 0x170));
                    /* try { // try from 00f2c1c0 to 0102c203 has its CatchHandler @ 00f2c1c0
                       catch() { ... } // from try @ 00f2c1c0 with catch @ 00f2c1c0
                       catch() { ... } // from try @ 00f2c20c with catch @ 00f2c1c0 */
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x308));
  Renderer::pushGroup(param_1,*(int *)(this + 800));
  pDVar5 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar5,0);
  pNVar1 = this + 0x8c;
  Director::loadMatrix(pDVar5,0,pNVar1);
                    /* try { // try from 00f2c204 to 0102c20b has its CatchHandler @ 00f2c240 */
  if ((*(long *)(this + 0x300) == 0) || (*(char *)(*(long *)(this + 0x300) + 0x21) == '\0')) {
    uVar13 = 1;
  }
  else {
    lVar6 = Director::getInstance();
                    /* try { // try from 00f2c20c to 0102c25b has its CatchHandler @ 00f2c1c0 */
    uVar13 = *(undefined4 *)(lVar6 + 0x194);
    GridBase::set2DProjection();
  }
  CustomCommand::init((CustomCommand *)(this + 0x330),*(float *)(this + 0x170));
                    /* catch() { ... } // from try @ 00f2c204 with catch @ 00f2c240 */
  local_b0 = &PTR_FUN_01707e10;
  uStack_a0 = 0;
  pcStack_a8 = onGridBeginDraw;
  local_98 = this;
  local_90 = &local_b0;
  FUN_008820fc(&local_b0,this + 0x350);
  if (&local_b0 == local_90) {
    pcVar9 = (code *)(*local_90)[4];
LAB_00f2c28c:
    (*pcVar9)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_90)[5];
    goto LAB_00f2c28c;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x330));
  plVar7 = *(long **)(this + 0x2f8);
                    /* try { // try from 00f2c2a0 to 0102c2e3 has its CatchHandler @ 00f2c2a0
                       catch() { ... } // from try @ 00f2c2a0 with catch @ 00f2c2a0
                       catch() { ... } // from try @ 00f2c2ec with catch @ 00f2c2a0 */
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x358))(plVar7,param_1,pNVar1,uVar10);
  }
  uVar8 = Node::isVisitableByVisitingCamera((Node *)this);
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    if ((uVar8 & 1) == 0) goto LAB_00f2c418;
    (**(code **)(*(long *)this + 0x348))(this,param_1,pNVar1,uVar10);
    lVar6 = *(long *)(this + 0x300);
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(this);
                    /* try { // try from 00f2c2e4 to 0102c2eb has its CatchHandler @ 00f2c320 */
    lVar6 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
                    /* try { // try from 00f2c2ec to 0102c33b has its CatchHandler @ 00f2c2a0 */
    if (lVar6 < 1) {
      uVar11 = 0;
    }
    else {
      plVar7 = (long *)**(undefined8 **)(this + 0x178);
      if (plVar7 == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        do {
          iVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
          if (-1 < iVar4) break;
                    /* catch() { ... } // from try @ 00f2c2e4 with catch @ 00f2c320 */
          (**(code **)(*plVar7 + 0x358))(plVar7,param_1,pNVar1,uVar10);
          if (lVar6 >> 3 <= (long)uVar11) {
            uVar11 = uVar11 & 0xffffffff;
            goto joined_r0x00f2c39c;
          }
          plVar7 = *(long **)(*(long *)(this + 0x178) + uVar11 * 8);
          uVar11 = uVar11 + 1;
        } while (plVar7 != (long *)0x0);
        uVar11 = uVar11 - 1;
      }
    }
joined_r0x00f2c39c:
    if ((uVar8 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pNVar1,uVar10);
    }
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar12 = (undefined8 *)(*(long *)(this + 0x178) + uVar11 * 8); puVar12 != puVar2;
        puVar12 = puVar12 + 1) {
      (**(code **)(*(long *)*puVar12 + 0x358))((long *)*puVar12,param_1,pNVar1,uVar10);
    }
LAB_00f2c418:
    lVar6 = *(long *)(this + 0x300);
  }
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x21) != '\0')) {
    Director::setProjection(pDVar5,uVar13);
  }
  CustomCommand::init((CustomCommand *)(this + 0x380),*(float *)(this + 0x170));
  local_b0 = &PTR_FUN_01707e10;
  uStack_a0 = 0;
  pcStack_a8 = onGridEndDraw;
  local_98 = this;
  local_90 = &local_b0;
  FUN_008820fc(&local_b0,this + 0x3a0);
  if (&local_b0 == local_90) {
    pcVar9 = (code *)(*local_90)[4];
LAB_00f2c484:
    (*pcVar9)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_90)[5];
    goto LAB_00f2c484;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x380));
  Renderer::popGroup(param_1);
  Director::popMatrix(pDVar5,0);
LAB_00f2c4a8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

