
/* cocos2d::ParticleSystemQuad::initWithTotalParticles(int) */

void __thiscall
cocos2d::ParticleSystemQuad::initWithTotalParticles(ParticleSystemQuad *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  Configuration *this_00;
  undefined8 uVar7;
  EventListener *pEVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  ParticleSystemQuad *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar6 = ParticleSystem::initWithTotalParticles((ParticleSystem *)this,param_1);
  if ((uVar6 & 1) != 0) {
    uVar6 = allocMemory(this);
    if ((uVar6 & 1) != 0) {
      iVar2 = *(int *)(this + 0x508);
      if (0 < iVar2) {
        lVar11 = *(long *)(this + 0x538);
        uVar10 = 0;
        lVar13 = 0;
        do {
          iVar12 = (int)lVar13;
          *(short *)(lVar11 + (ulong)uVar10 * 2) = (short)(iVar12 << 2);
          uVar3 = (ushort)(iVar12 << 2) | 1;
          *(ushort *)(lVar11 + (ulong)(uVar10 + 1) * 2) = uVar3;
          uVar4 = (ushort)(iVar12 << 2) | 2;
          *(ushort *)(lVar11 + (ulong)(uVar10 + 2) * 2) = uVar4;
          *(ushort *)(lVar11 + (ulong)(uVar10 + 5) * 2) = uVar3;
          lVar13 = lVar13 + 1;
          *(ushort *)(lVar11 + (ulong)(uVar10 + 4) * 2) = uVar4;
          uVar1 = uVar10 + 3;
          uVar10 = uVar10 + 6;
          *(ushort *)(lVar11 + (ulong)uVar1 * 2) = (ushort)(iVar12 << 2) | 3;
        } while (iVar2 != lVar13);
      }
      this_00 = (Configuration *)Configuration::getInstance();
      uVar6 = Configuration::supportsShareableVAO(this_00);
      if ((uVar6 & 1) == 0) {
        setupVBO(this);
      }
      else {
        setupVBOandVAO(this);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
      uVar7 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)&local_70);
      (**(code **)(*(long *)this + 0x310))(this,uVar7);
      if (((byte)local_70._0_1_ & 1) != 0) {
        operator_delete(pvStack_60);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,"event_renderer_recreated");
      local_70 = &PTR_FUN_0170ea38;
      pvStack_60 = (void *)0x0;
      local_68 = listenRendererRecreated;
      local_58 = this;
      local_50 = &local_70;
      pEVar8 = (EventListener *)
               EventListenerCustom::create((basic_string *)local_88,(function *)&local_70);
      if (&local_70 == local_50) {
        pcVar9 = (code *)(*local_50)[4];
LAB_00f35e8c:
        (*pcVar9)();
      }
      else if (local_50 != (undefined ***)0x0) {
        pcVar9 = (code *)(*local_50)[5];
        goto LAB_00f35e8c;
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      EventDispatcher::addEventListenerWithSceneGraphPriority
                (*(EventDispatcher **)(this + 0x1f0),pEVar8,(Node *)this);
      uVar7 = 1;
      goto LAB_00f35eb4;
    }
    Ref::release((Ref *)this);
  }
  uVar7 = 0;
LAB_00f35eb4:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

