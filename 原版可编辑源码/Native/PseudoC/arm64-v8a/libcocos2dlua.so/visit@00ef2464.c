
/* cocos2d::ClippingNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ClippingNode::visit(ClippingNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  ClippingNode *pCVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  Director *pDVar7;
  GLProgramCache *this_00;
  GLProgram *this_01;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  undefined **local_b0;
  code *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  long *local_90;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((this[0x1f9] == (ClippingNode)0x0) ||
     (uVar6 = (**(code **)(*(long *)this + 0x530))(), (uVar6 & 1) == 0)) goto LAB_00ef2860;
  uVar4 = Node::processParentFlags((Node *)this,param_2,param_3);
  pDVar7 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar7,0);
  pCVar1 = this + 0x8c;
  Director::loadMatrix(pDVar7,0,pCVar1);
  GroupCommand::init((GroupCommand *)(this + 0x310),*(float *)(this + 0x170));
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x310));
  Renderer::pushGroup(param_1,*(int *)(this + 0x328));
  CustomCommand::init((CustomCommand *)(this + 0x330),*(float *)(this + 0x170));
  local_98 = *(undefined8 *)(this + 0x308);
  local_b0 = &PTR_FUN_016a8020;
  pvStack_a0 = (void *)0x0;
  local_a8 = StencilStateManager::onBeforeVisit;
  local_90 = (long *)&local_b0;
  FUN_008820fc(&local_b0,this + 0x350);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00ef258c:
    (*pcVar8)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar8 = *(code **)(*local_90 + 0x28);
    goto LAB_00ef258c;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x330));
  fVar13 = (float)StencilStateManager::getAlphaThreshold(*(StencilStateManager **)(this + 0x308));
  if (fVar13 < 1.0) {
    this_00 = (GLProgramCache *)GLProgramCache::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,GLProgram::SHADER_NAME_POSITION_TEXTURE_ALPHA_TEST_NO_MV);
    this_01 = (GLProgram *)GLProgramCache::getGLProgram(this_00,(basic_string *)&local_b0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(pvStack_a0);
    }
    iVar5 = glGetUniformLocation
                      (*(undefined4 *)(this_01 + 0x24),GLProgram::UNIFORM_NAME_ALPHA_TEST_VALUE);
    GLProgram::use(this_01);
    GLProgram::setUniformLocationWith1f(this_01,iVar5,fVar13);
    FUN_00ef28d0(*(undefined8 *)(this + 0x2f8),this_01);
  }
  (**(code **)(**(long **)(this + 0x2f8) + 0x358))(*(long **)(this + 0x2f8),param_1,pCVar1,uVar4);
  CustomCommand::init((CustomCommand *)(this + 0x380),*(float *)(this + 0x170));
  local_98 = *(undefined8 *)(this + 0x308);
  local_b0 = &PTR_FUN_016a8020;
  pvStack_a0 = (void *)0x0;
  local_a8 = StencilStateManager::onAfterDrawStencil;
  local_90 = (long *)&local_b0;
  FUN_008820fc(&local_b0,this + 0x3a0);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00ef26b0:
    (*pcVar8)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar8 = *(code **)(*local_90 + 0x28);
    goto LAB_00ef26b0;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x380));
  uVar6 = Node::isVisitableByVisitingCamera((Node *)this);
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
                    /* catch() { ... } // from try @ 00ef2784 with catch @ 00ef2758 */
    if ((uVar6 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pCVar1,uVar4);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(this);
    lVar9 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
    if ((lVar9 < 1) || (plVar10 = (long *)**(undefined8 **)(this + 0x178), plVar10 == (long *)0x0))
    {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      do {
        iVar5 = (**(code **)(*plVar10 + 0x30))(plVar10);
        if (-1 < iVar5) break;
        (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pCVar1,uVar4);
        if (lVar9 >> 3 <= (long)uVar12) {
          uVar12 = uVar12 & 0xffffffff;
          goto joined_r0x00ef2780;
        }
        plVar10 = *(long **)(*(long *)(this + 0x178) + uVar12 * 8);
        uVar12 = uVar12 + 1;
      } while (plVar10 != (long *)0x0);
      uVar12 = uVar12 - 1;
    }
joined_r0x00ef2780:
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 00ef2784 to 00ff27e3 has its CatchHandler @ 00ef2758 */
      (**(code **)(*(long *)this + 0x348))(this,param_1,pCVar1,uVar4);
    }
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar11 = (undefined8 *)(*(long *)(this + 0x178) + uVar12 * 8); puVar11 != puVar2;
        puVar11 = puVar11 + 1) {
                    /* catch() { ... } // from try @ 00ef277c with catch @ 00ef27c8 */
      (**(code **)(*(long *)*puVar11 + 0x358))((long *)*puVar11,param_1,pCVar1,uVar4);
    }
  }
  CustomCommand::init((CustomCommand *)(this + 0x3d0),*(float *)(this + 0x170));
  local_98 = *(undefined8 *)(this + 0x308);
  local_b0 = &PTR_FUN_016a8020;
  pvStack_a0 = (void *)0x0;
  local_a8 = StencilStateManager::onAfterVisit;
  local_90 = (long *)&local_b0;
  FUN_008820fc(&local_b0,this + 0x3f0);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00ef283c:
    (*pcVar8)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar8 = *(code **)(*local_90 + 0x28);
    goto LAB_00ef283c;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x3d0));
  Renderer::popGroup(param_1);
  Director::popMatrix(pDVar7,0);
LAB_00ef2860:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

