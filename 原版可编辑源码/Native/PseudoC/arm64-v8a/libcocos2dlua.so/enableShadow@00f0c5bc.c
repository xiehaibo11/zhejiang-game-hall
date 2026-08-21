
/* cocos2d::Label::enableShadow(cocos2d::Color4B const&, cocos2d::Size const&, int) */

void cocos2d::Label::enableShadow(Color4B *param_1,Size *param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  Color4B CVar6;
  Color4B CVar7;
  Color4B CVar8;
  Color4B CVar9;
  Texture2D *pTVar10;
  void *pvVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  void *local_98 [2];
  void *local_88;
  long local_80;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined2 *)(param_1 + 0x60e) = 0x101;
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(ulong)(uint)param_3;
  CVar6 = *(Color4B *)param_2;
  param_1[0x628] = CVar6;
  CVar8 = *(Color4B *)(param_2 + 1);
  param_1[0x629] = CVar8;
  CVar9 = *(Color4B *)(param_2 + 2);
  param_1[0x62a] = CVar9;
  CVar7 = *(Color4B *)(param_2 + 3);
  param_1[0x62b] = CVar7;
  if (((param_1[0x39c] == (Color4B)0x0) && (param_1[0x30c] == (Color4B)0x0)) &&
     (*(long *)(param_1 + 0x3c0) != 0)) {
    _getFontDefinition();
    if (*(long *)(param_1 + 0x3c8) == 0) {
      createShadowSpriteForSystemFont((Label *)param_1,(FontDefinition *)local_98);
    }
    else {
      uVar4 = Color4B::operator!=((Color4B *)param_2,(Color4F *)(param_1 + 0x618));
      if ((uVar4 & 1) == 0) {
        (**(code **)(*(long *)*(Ref **)(param_1 + 0x3c8) + 200))
                  (*(undefined4 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x614));
      }
      else {
        Ref::release(*(Ref **)(param_1 + 0x3c8));
        *(undefined8 *)(param_1 + 0x3c8) = 0;
        createShadowSpriteForSystemFont((Label *)param_1,(FontDefinition *)local_98);
      }
    }
    if (((ulong)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    CVar6 = *(Color4B *)param_2;
    CVar8 = *(Color4B *)(param_2 + 1);
    CVar9 = *(Color4B *)(param_2 + 2);
    CVar7 = *(Color4B *)(param_2 + 3);
  }
  *(float *)(param_1 + 0x618) = (float)(byte)CVar6 / 255.0;
  *(float *)(param_1 + 0x61c) = (float)(byte)CVar8 / 255.0;
  *(float *)(param_1 + 0x620) = (float)(byte)CVar9 / 255.0;
  *(float *)(param_1 + 0x624) = (float)(byte)CVar7 / 255.0;
  if (*(int *)(param_1 + 0x308) - 1U < 2) {
    ppuVar1 = &GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP;
    if (param_1[0x60f] != (Color4B)0x0) {
      ppuVar1 = &GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,*ppuVar1);
    if (*(long *)(param_1 + 0x3d0) == 0) {
      pTVar10 = (Texture2D *)0x0;
    }
    else {
      std::__ndk1::
      unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
      ::unordered_map((unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
                       *)local_98,(unordered_map *)(*(long *)(param_1 + 0x3d0) + 0x28));
      pvVar3 = local_98[0];
      if (local_80 == 0) {
        pTVar10 = (Texture2D *)0x0;
      }
      else {
        pTVar10 = *(Texture2D **)((long)local_88 + 0x18);
      }
      while (local_88 != (void *)0x0) {
        pvVar11 = *(void **)local_88;
        local_98[0] = pvVar3;
        operator_delete(local_88);
        pvVar3 = local_98[0];
        local_88 = pvVar11;
      }
      local_98[0] = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_b0,pTVar10);
    (**(code **)(*(long *)param_1 + 0x310))(param_1,uVar5);
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

