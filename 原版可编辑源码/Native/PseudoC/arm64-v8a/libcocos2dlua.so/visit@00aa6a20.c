
/* fairygui::FUIContainer::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
fairygui::FUIContainer::visit(FUIContainer *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  FUIContainer *pFVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  Director *pDVar6;
  GLProgramCache *this_00;
  GLProgram *this_01;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  undefined **local_b0;
  code *local_a8;
  void *pvStack_a0;
  FUIContainer *local_98;
  long *local_90;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x308) == 0) {
    lVar9 = *(long *)(this + 0x300);
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x10) == '\0')) {
      cocos2d::Node::visit((Node *)this,param_1,param_2,param_3);
      goto LAB_00aa6fb0;
    }
    if (((this[0x161] != (FUIContainer)0x0) || ((param_3 & 3) != 0)) ||
       (this[0x88] != (FUIContainer)0x0)) {
      *(undefined1 *)(lVar9 + 0x34) = 1;
    }
    cocos2d::CustomCommand::init((CustomCommand *)(lVar9 + 0x40),*(float *)(this + 0x170));
    local_b0 = &PTR_FUN_016a80d0;
    pvStack_a0 = (void *)0x0;
    local_a8 = onBeforeVisitScissor;
    local_98 = this;
    local_90 = (long *)&local_b0;
    FUN_008820fc(&local_b0,*(long *)(this + 0x300) + 0x60);
    if (&local_b0 == (undefined ***)local_90) {
      pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00aa6f0c:
      (*pcVar8)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar8 = *(code **)(*local_90 + 0x28);
      goto LAB_00aa6f0c;
    }
    cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(*(long *)(this + 0x300) + 0x40));
    cocos2d::Node::visit((Node *)this,param_1,param_2,param_3);
    cocos2d::CustomCommand::init
              ((CustomCommand *)(*(long *)(this + 0x300) + 0x90),*(float *)(this + 0x170));
    local_b0 = &PTR_FUN_016a80d0;
    pvStack_a0 = (void *)0x0;
    local_a8 = onAfterVisitScissor;
    local_98 = this;
    local_90 = (long *)&local_b0;
    FUN_008820fc(&local_b0,*(long *)(this + 0x300) + 0xb0);
    if (&local_b0 == (undefined ***)local_90) {
      pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00aa6f9c:
      (*pcVar8)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar8 = *(code **)(*local_90 + 0x28);
      goto LAB_00aa6f9c;
    }
    cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(*(long *)(this + 0x300) + 0x90));
    goto LAB_00aa6fb0;
  }
  if ((this[0x1f9] == (FUIContainer)0x0) || (*(long *)(this + 0x178) == *(long *)(this + 0x180)))
  goto LAB_00aa6fb0;
  uVar4 = cocos2d::Node::processParentFlags((Node *)this,param_2,param_3);
  pDVar6 = (Director *)cocos2d::Director::getInstance();
  cocos2d::Director::pushMatrix(pDVar6,0);
  pFVar1 = this + 0x8c;
  cocos2d::Director::loadMatrix(pDVar6,0,pFVar1);
  cocos2d::GroupCommand::init
            ((GroupCommand *)(*(long *)(this + 0x308) + 0x10),*(float *)(this + 0x170));
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(*(long *)(this + 0x308) + 0x10));
  cocos2d::Renderer::pushGroup(param_1,*(int *)(*(long *)(this + 0x308) + 0x28));
  cocos2d::CustomCommand::init
            ((CustomCommand *)(*(long *)(this + 0x308) + 0x40),*(float *)(this + 0x170));
  local_b0 = &PTR_FUN_016a8020;
  local_98 = *(FUIContainer **)(*(long *)(this + 0x308) + 8);
  pvStack_a0 = (void *)0x0;
  local_a8 = cocos2d::StencilStateManager::onBeforeVisit;
  local_90 = (long *)&local_b0;
  FUN_008820fc(&local_b0,*(long *)(this + 0x308) + 0x60);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00aa6bf4:
    (*pcVar8)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar8 = *(code **)(*local_90 + 0x28);
    goto LAB_00aa6bf4;
  }
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(*(long *)(this + 0x308) + 0x40));
  if ((*(long *)(this + 0x308) != 0) &&
     (fVar13 = (float)cocos2d::StencilStateManager::getAlphaThreshold
                                (*(StencilStateManager **)(*(long *)(this + 0x308) + 8)),
     fVar13 < 1.0)) {
    this_00 = (GLProgramCache *)cocos2d::GLProgramCache::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_ALPHA_TEST_NO_MV);
    this_01 = (GLProgram *)cocos2d::GLProgramCache::getGLProgram(this_00,(basic_string *)&local_b0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(pvStack_a0);
    }
    iVar5 = glGetUniformLocation
                      (*(undefined4 *)(this_01 + 0x24),
                       cocos2d::GLProgram::UNIFORM_NAME_ALPHA_TEST_VALUE);
    cocos2d::GLProgram::use(this_01);
    cocos2d::GLProgram::setUniformLocationWith1f(this_01,iVar5,fVar13);
    FUN_00aa656c(**(undefined8 **)(this + 0x308),this_01);
  }
  (**(code **)(*(long *)**(undefined8 **)(this + 0x308) + 0x358))
            ((long *)**(undefined8 **)(this + 0x308),param_1,pFVar1,uVar4);
  cocos2d::CustomCommand::init
            ((CustomCommand *)(*(long *)(this + 0x308) + 0x90),*(float *)(this + 0x170));
  local_b0 = &PTR_FUN_016a8020;
  local_98 = *(FUIContainer **)(*(long *)(this + 0x308) + 8);
  pvStack_a0 = (void *)0x0;
  local_a8 = cocos2d::StencilStateManager::onAfterDrawStencil;
  local_90 = (long *)&local_b0;
  FUN_008820fc(&local_b0,*(long *)(this + 0x308) + 0xb0);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00aa6d30:
    (*pcVar8)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar8 = *(code **)(*local_90 + 0x28);
    goto LAB_00aa6d30;
  }
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(*(long *)(this + 0x308) + 0x90));
  uVar7 = cocos2d::Node::isVisitableByVisitingCamera((Node *)this);
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    if ((uVar7 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pFVar1,uVar4);
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
        (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pFVar1,uVar4);
        if (lVar9 >> 3 <= (long)uVar12) {
          uVar12 = uVar12 & 0xffffffff;
          goto joined_r0x00aa6e04;
        }
        plVar10 = *(long **)(*(long *)(this + 0x178) + uVar12 * 8);
        uVar12 = uVar12 + 1;
      } while (plVar10 != (long *)0x0);
      uVar12 = uVar12 - 1;
    }
joined_r0x00aa6e04:
    if ((uVar7 & 1) != 0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pFVar1,uVar4);
    }
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar11 = (undefined8 *)(*(long *)(this + 0x178) + uVar12 * 8); puVar11 != puVar2;
        puVar11 = puVar11 + 1) {
      (**(code **)(*(long *)*puVar11 + 0x358))((long *)*puVar11,param_1,pFVar1,uVar4);
    }
  }
  cocos2d::CustomCommand::init
            ((CustomCommand *)(*(long *)(this + 0x308) + 0xe0),*(float *)(this + 0x170));
  local_b0 = &PTR_FUN_016a8020;
  local_98 = *(FUIContainer **)(*(long *)(this + 0x308) + 8);
  pvStack_a0 = (void *)0x0;
  local_a8 = cocos2d::StencilStateManager::onAfterVisit;
  local_90 = (long *)&local_b0;
  FUN_008820fc(&local_b0,*(long *)(this + 0x308) + 0x100);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar8 = *(code **)(*local_90 + 0x20);
LAB_00aa6ec4:
    (*pcVar8)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar8 = *(code **)(*local_90 + 0x28);
    goto LAB_00aa6ec4;
  }
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(*(long *)(this + 0x308) + 0xe0));
  cocos2d::Renderer::popGroup(param_1);
  cocos2d::Director::popMatrix(pDVar6,0);
LAB_00aa6fb0:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

