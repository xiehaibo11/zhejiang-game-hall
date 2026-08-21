
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::renderer::Program::link() */

void __thiscall cocos2d::renderer::Program::link(Program *this)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  void *pvVar18;
  int local_d8;
  int local_d4;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_a8 [8];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  ulong local_70;
  long local_68;
  
                    /* try { // try from 009b6b9c to 00ab6bef has its CatchHandler @ 009b6b9c
                       catch() { ... } // from try @ 009b6b9c with catch @ 009b6b9c
                       catch() { ... } // from try @ 009b6e1c with catch @ 009b6b9c */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((this[0x7c] != (Program)0x0) ||
     (uVar6 = FUN_009b73ec(0x8b31,this + 0x48,&local_b0), (uVar6 & 1) == 0)) goto LAB_009b7200;
  uVar6 = FUN_009b73ec(0x8b30,this + 0x60,&local_b4);
                    /* try { // try from 009b6bf0 to 00ab6c07 has its CatchHandler @ 009b6e2c */
  if ((uVar6 & 1) == 0) {
    glDeleteShader(local_b0);
    goto LAB_009b7200;
  }
  uVar6 = glCreateProgram();
  uVar17 = uVar6 & 0xffffffff;
  glAttachShader(uVar6,local_b0);
                    /* try { // try from 009b6c10 to 00ab6c1b has its CatchHandler @ 009b6e28 */
  glAttachShader(uVar17,local_b4);
                    /* try { // try from 009b6c1c to 00ab6c27 has its CatchHandler @ 009b6e24 */
  glLinkProgram(uVar17);
                    /* try { // try from 009b6c28 to 00ab6e1b has its CatchHandler @ 009b6e3c */
  local_b8 = 1;
  glGetProgramiv(uVar17,0x8b82,&local_b8);
  if (local_b8 != 0) {
    glDeleteShader(local_b0);
    glDeleteShader(local_b4);
    *(int *)(this + 0xc) = (int)uVar6;
    glGetProgramiv(uVar17,0x8b89,&local_ac);
    if ((0 < local_ac) && (glGetProgramiv(uVar17,0x8b8a,&local_d4), iVar5 = local_d4, 0 < local_d4))
    {
      pcVar7 = malloc((long)local_d4 + 1);
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      if (0 < local_ac) {
        pvVar18 = (void *)((ulong)&local_d0 | 1);
        iVar16 = 1;
        do {
          glGetActiveAttrib(uVar6 & 0xffffffff,iVar16 + -1,iVar5,0,&uStack_80,&local_78,pcVar7);
          pcVar7[local_d4] = '\0';
          sVar8 = strlen(pcVar7);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_a0,pcVar7,sVar8);
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = (void *)0x0;
          sVar8 = strlen(pcVar7);
          if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar8 < 0x17) {
            local_d0 = CONCAT71(local_d0._1_7_,(char)((int)sVar8 << 1));
            pvVar10 = pvVar18;
            if (sVar8 != 0) goto LAB_009b6d80;
          }
          else {
            uVar17 = sVar8 + 0x10 & 0xfffffffffffffff0;
            pvVar10 = operator_new(uVar17);
            local_d0 = uVar17 | 1;
            uStack_c8 = sVar8;
            local_c0 = pvVar10;
LAB_009b6d80:
            memcpy(pvVar10,pcVar7,sVar8);
          }
          *(undefined1 *)((long)pvVar10 + sVar8) = 0;
          uVar17 = local_d0 >> 1 & 0x7f;
          pvVar10 = pvVar18;
          if ((local_d0 & 1) != 0) {
            uVar17 = uStack_c8;
            pvVar10 = local_c0;
          }
          local_88 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                               ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_d8,pvVar10,
                                uVar17);
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          uStack_7c = glGetAttribLocation(uVar6 & 0xffffffff,pcVar7);
          puVar1 = *(ulong **)(this + 0x20);
          if (puVar1 < *(ulong **)(this + 0x28)) {
            puVar1[2] = (ulong)local_90;
            puVar1[1] = uStack_98;
            *puVar1 = local_a0;
            uStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = 0;
            *(uint *)(puVar1 + 5) = local_78;
            puVar1[4] = CONCAT44(uStack_7c,uStack_80);
            puVar1[3] = local_88;
            *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x30;
                    /* try { // try from 009b6e1c to 00ab6e93 has its CatchHandler @ 009b6b9c */
          }
          else {
                    /* catch() { ... } // from try @ 009b6c1c with catch @ 009b6e24 */
                    /* catch() { ... } // from try @ 009b6c10 with catch @ 009b6e28 */
            std::__ndk1::
            vector<cocos2d::renderer::Program::Attribute,std::__ndk1::allocator<cocos2d::renderer::Program::Attribute>>
            ::__push_back_slow_path<cocos2d::renderer::Program::Attribute>
                      ((vector<cocos2d::renderer::Program::Attribute,std::__ndk1::allocator<cocos2d::renderer::Program::Attribute>>
                        *)(this + 0x18),(Attribute *)&local_a0);
          }
                    /* catch() { ... } // from try @ 009b6bf0 with catch @ 009b6e2c */
          if (local_ac <= iVar16) break;
          iVar16 = iVar16 + 1;
          iVar5 = local_d4;
        } while( true );
      }
                    /* catch() { ... } // from try @ 009b6c28 with catch @ 009b6e3c */
      free(pcVar7);
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    glGetProgramiv(uVar6 & 0xffffffff,0x8b86,&local_d4);
    if ((0 < local_d4) &&
       (glGetProgramiv(uVar6 & 0xffffffff,0x8b87,&local_d8), iVar5 = local_d8, 0 < local_d8)) {
      pcVar7 = malloc((long)local_d8 + 1);
                    /* try { // try from 009b6e94 to 00ab6eeb has its CatchHandler @ 009b6e94
                       catch() { ... } // from try @ 009b6e94 with catch @ 009b6e94
                       catch() { ... } // from try @ 009b7150 with catch @ 009b6e94 */
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      if (0 < local_d4) {
        iVar16 = 0;
        pvVar18 = (void *)((ulong)&local_d0 | 1);
        do {
                    /* try { // try from 009b6eec to 00ab6f03 has its CatchHandler @ 009b7160 */
          glGetActiveUniform(uVar6 & 0xffffffff,iVar16,iVar5,0,&uStack_80,&local_78,pcVar7);
          bVar4 = false;
                    /* try { // try from 009b6f0c to 00ab6f17 has its CatchHandler @ 009b715c */
          pcVar7[local_d8] = '\0';
          if (3 < local_d8) {
                    /* try { // try from 009b6f18 to 00ab6f23 has its CatchHandler @ 009b7158 */
            pcVar9 = strrchr(pcVar7,0x5b);
            if (pcVar9 == (char *)0x0) {
              bVar4 = false;
            }
            else {
                    /* try { // try from 009b6f24 to 00ab714f has its CatchHandler @ 009b7170 */
              bVar4 = true;
              *pcVar9 = '\0';
            }
          }
          sVar8 = strlen(pcVar7);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_a0,pcVar7,sVar8);
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = (void *)0x0;
          sVar8 = strlen(pcVar7);
          if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar8 < 0x17) {
            local_d0 = CONCAT71(local_d0._1_7_,(char)((int)sVar8 << 1));
            pvVar10 = pvVar18;
            if (sVar8 != 0) goto LAB_009b6fa8;
          }
          else {
            uVar17 = sVar8 + 0x10 & 0xfffffffffffffff0;
            pvVar10 = operator_new(uVar17);
            local_d0 = uVar17 | 1;
            uStack_c8 = sVar8;
            local_c0 = pvVar10;
LAB_009b6fa8:
            memcpy(pvVar10,pcVar7,sVar8);
          }
          *(undefined1 *)((long)pvVar10 + sVar8) = 0;
          uVar17 = local_d0 >> 1 & 0x7f;
          pvVar10 = pvVar18;
          if ((local_d0 & 1) != 0) {
            uVar17 = uStack_c8;
            pvVar10 = local_c0;
          }
          local_88 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                               (a_Stack_a8,pvVar10,uVar17);
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          uStack_7c = glGetUniformLocation(uVar6 & 0xffffffff,pcVar7);
          iVar5 = glGetError();
          if (iVar5 != 0) {
            __android_log_print(6,"renderer"," (371): error: 0x%x  uniformName: %s\n",iVar5,pcVar7);
          }
          if (bVar4) {
            if (DAT_01d380b0 == 0) goto LAB_009b7168;
            uVar17 = (ulong)local_78;
            uVar13 = DAT_01d380b0 - 1;
            if ((uVar13 & DAT_01d380b0) == 0) {
              uVar14 = uVar13 & uVar17;
            }
            else {
              uVar14 = uVar17;
              if (DAT_01d380b0 <= uVar17) {
                uVar14 = 0;
                if (DAT_01d380b0 != 0) {
                  uVar14 = uVar17 / DAT_01d380b0;
                }
                uVar14 = uVar17 - uVar14 * DAT_01d380b0;
              }
            }
            plVar11 = *(long **)(DAT_01d380a8 + uVar14 * 8);
            plVar12 = (long *)0x0;
            if (plVar11 != (long *)0x0) {
              do {
                while( true ) {
                  while( true ) {
                    plVar12 = (long *)*plVar11;
                    if (plVar12 == (long *)0x0) goto LAB_009b716c;
                    uVar15 = plVar12[1];
                    plVar11 = plVar12;
                    if (uVar15 != uVar17) break;
                    if (*(uint *)(plVar12 + 2) == local_78) goto LAB_009b716c;
                  }
                  if ((uVar13 & DAT_01d380b0) == 0) break;
                  if (DAT_01d380b0 <= uVar15) {
                    uVar2 = 0;
                    if (DAT_01d380b0 != 0) {
                      uVar2 = uVar15 / DAT_01d380b0;
                    }
                    uVar15 = uVar15 - uVar2 * DAT_01d380b0;
                  }
                  if (uVar15 != uVar14) goto LAB_009b7168;
                }
              } while ((uVar15 & uVar13) == uVar14);
              goto LAB_009b7168;
            }
          }
          else {
            uStack_80 = 0xffffffff;
            if (DAT_01d38088 != 0) {
              uVar17 = (ulong)local_78;
              uVar13 = DAT_01d38088 - 1;
              if ((uVar13 & DAT_01d38088) == 0) {
                uVar14 = uVar13 & uVar17;
              }
              else {
                uVar14 = uVar17;
                if (DAT_01d38088 <= uVar17) {
                  uVar14 = 0;
                  if (DAT_01d38088 != 0) {
                    uVar14 = uVar17 / DAT_01d38088;
                  }
                  uVar14 = uVar17 - uVar14 * DAT_01d38088;
                }
              }
              plVar11 = *(long **)(DAT_01d38080 + uVar14 * 8);
              plVar12 = (long *)0x0;
              if (plVar11 == (long *)0x0) goto LAB_009b716c;
              do {
                while( true ) {
                  while( true ) {
                    plVar12 = (long *)*plVar11;
                    if (plVar12 == (long *)0x0) goto LAB_009b716c;
                    uVar15 = plVar12[1];
                    plVar11 = plVar12;
                    if (uVar15 != uVar17) break;
                    if (*(uint *)(plVar12 + 2) == local_78) goto LAB_009b716c;
                  }
                  if ((uVar13 & DAT_01d38088) == 0) break;
                  if (DAT_01d38088 <= uVar15) {
                    uVar2 = 0;
                    if (DAT_01d38088 != 0) {
                      uVar2 = uVar15 / DAT_01d38088;
                    }
                    uVar15 = uVar15 - uVar2 * DAT_01d38088;
                  }
                    /* try { // try from 009b7150 to 00ab71c7 has its CatchHandler @ 009b6e94 */
                  if (uVar15 != uVar14) goto LAB_009b7168;
                }
                    /* catch() { ... } // from try @ 009b6f0c with catch @ 009b715c */
                    /* catch() { ... } // from try @ 009b6eec with catch @ 009b7160 */
              } while ((uVar15 & uVar13) == uVar14);
            }
LAB_009b7168:
            plVar12 = (long *)0x0;
          }
LAB_009b716c:
          local_70 = *(ulong *)((long)plVar12 + 0x18);
                    /* catch() { ... } // from try @ 009b6f24 with catch @ 009b7170 */
          puVar1 = *(ulong **)(this + 0x38);
          if (puVar1 < *(ulong **)(this + 0x40)) {
            puVar1[2] = (ulong)local_90;
            puVar1[1] = uStack_98;
            *puVar1 = local_a0;
            uStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = 0;
            puVar1[6] = local_70;
            puVar1[5] = CONCAT44(uStack_74,local_78);
            puVar1[4] = CONCAT44(uStack_7c,uStack_80);
            puVar1[3] = local_88;
            *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x38;
          }
          else {
            std::__ndk1::
            vector<cocos2d::renderer::Program::Uniform,std::__ndk1::allocator<cocos2d::renderer::Program::Uniform>>
            ::__push_back_slow_path<cocos2d::renderer::Program::Uniform>
                      ((vector<cocos2d::renderer::Program::Uniform,std::__ndk1::allocator<cocos2d::renderer::Program::Uniform>>
                        *)(this + 0x30),(Uniform *)&local_a0);
          }
                    /* try { // try from 009b71c8 to 00ab721f has its CatchHandler @ 009b71c8
                       catch() { ... } // from try @ 009b71c8 with catch @ 009b71c8
                       catch() { ... } // from try @ 009b74cc with catch @ 009b71c8 */
          iVar16 = iVar16 + 1;
          iVar5 = local_d8;
        } while (iVar16 < local_d4);
      }
      free(pcVar7);
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    this[0x7c] = (Program)0x1;
    goto LAB_009b7200;
  }
                    /* try { // try from 009b7240 to 00ab724b has its CatchHandler @ 009b74d8 */
  __android_log_print(6,"renderer"," (293): ERROR: Failed to link program: %u\n",uVar17);
                    /* try { // try from 009b724c to 00ab7257 has its CatchHandler @ 009b74d4 */
                    /* try { // try from 009b7258 to 00ab74cb has its CatchHandler @ 009b74ec */
  local_ac = 0;
  glGetProgramiv(uVar6 & 0xffffffff,0x8b84,&local_ac);
  iVar5 = local_ac;
  if (local_ac < 1) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (void *)0x0;
LAB_009b7328:
    pvVar18 = (void *)((ulong)&local_d0 | 1);
  }
  else {
    pcVar7 = malloc((long)local_ac);
    glGetProgramInfoLog(uVar6 & 0xffffffff,iVar5,0,pcVar7);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    sVar8 = strlen(pcVar7);
    if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar8 < 0x17) {
      pvVar18 = (void *)((ulong)&local_a0 | 1);
      local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar8 << 1));
      if (sVar8 != 0) goto LAB_009b72f4;
    }
    else {
      uVar17 = sVar8 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = operator_new(uVar17);
      local_a0 = uVar17 | 1;
      uStack_98 = sVar8;
      local_90 = pvVar18;
LAB_009b72f4:
      memcpy(pvVar18,pcVar7,sVar8);
    }
    *(undefined1 *)((long)pvVar18 + sVar8) = 0;
    free(pcVar7);
    uStack_c8 = uStack_98;
    local_d0 = local_a0;
    local_c0 = local_90;
    pvVar18 = local_90;
    if ((local_a0 & 1) == 0) goto LAB_009b7328;
  }
  __android_log_print(6,"renderer"," (295): %s\n",pvVar18);
  glDeleteShader(local_b0);
  glDeleteShader(local_b4);
  glDeleteProgram(uVar6 & 0xffffffff);
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
LAB_009b7200:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 009b7220 to 00ab7237 has its CatchHandler @ 009b74dc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

