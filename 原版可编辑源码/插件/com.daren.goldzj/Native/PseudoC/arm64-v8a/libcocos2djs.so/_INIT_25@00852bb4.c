
/* WARNING: Type propagation algorithm not settling */

void _INIT_25(void)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  size_t sVar4;
  void *pvVar5;
  byte *pbVar6;
  VertexFormat *pVVar7;
  size_t sVar8;
  byte *pbVar9;
  void *pvVar10;
  ulong uVar11;
  ulong local_168;
  size_t sStack_160;
  void *local_158;
  ulong local_150;
  size_t sStack_148;
  void *local_140;
  ulong local_138;
  size_t sStack_130;
  void *local_128;
  ulong local_120;
  size_t sStack_118;
  void *local_110;
  byte *local_108;
  byte *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined8 local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined8 local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined8 local_90;
  ulong uStack_88;
  void *local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pVVar7 = operator_new(0x58);
  puVar3 = cocos2d::renderer::ATTRIB_NAME_POSITION;
  sStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_POSITION);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_120 | 1);
    local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00852c54;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_120 = uVar11 | 1;
    sStack_118 = sVar8;
    local_110 = pvVar10;
LAB_00852c54:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_110;
  sVar4 = sStack_118;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  if ((local_120 & 1) == 0) {
    local_e0 = local_110;
    uStack_e8 = sStack_118;
    local_f0 = local_120;
  }
  else {
    if (0xffffffffffffffef < sStack_118) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_118 < 0x17) {
      pvVar10 = (void *)((ulong)&local_f0 | 1);
      local_f0 = (ulong)(byte)((int)sStack_118 << 1);
      if (sStack_118 != 0) goto LAB_00852cdc;
    }
    else {
      uVar11 = sStack_118 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_f0 = uVar11 | 1;
      uStack_e8 = sVar4;
      local_e0 = pvVar10;
LAB_00852cdc:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  puVar3 = cocos2d::renderer::ATTRIB_NAME_UV0;
  local_d8 = 2;
  local_d4 = 0x1406;
  local_d2 = 0;
  sStack_130 = 0;
  local_128 = (void *)0x0;
  local_138 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_UV0);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_138 | 1);
    local_138 = CONCAT71(local_138._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00852d6c;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_138 = uVar11 | 1;
    sStack_130 = sVar8;
    local_128 = pvVar10;
LAB_00852d6c:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_128;
  sVar4 = sStack_130;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  if ((local_138 & 1) == 0) {
    local_c0 = local_128;
    uStack_c8 = sStack_130;
    local_d0 = local_138;
  }
  else {
    if (0xffffffffffffffef < sStack_130) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_130 < 0x17) {
      pvVar10 = (void *)((long)&local_d0 + 1);
      local_d0 = (ulong)(byte)((int)sStack_130 << 1);
      if (sStack_130 != 0) goto LAB_00852df8;
    }
    else {
      uVar11 = sStack_130 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_d0 = uVar11 | 1;
      uStack_c8 = sVar4;
      local_c0 = pvVar10;
LAB_00852df8:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  puVar3 = cocos2d::renderer::ATTRIB_NAME_COLOR;
  local_b8 = 2;
  local_b4 = 0x1406;
  local_b2 = 0;
  sStack_148 = 0;
  local_140 = (void *)0x0;
  local_150 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_150 | 1);
    local_150 = CONCAT71(local_150._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00852e88;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_150 = uVar11 | 1;
    sStack_148 = sVar8;
    local_140 = pvVar10;
LAB_00852e88:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_140;
  sVar4 = sStack_148;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  if ((local_150 & 1) == 0) {
    local_a0 = local_140;
    uStack_a8 = sStack_148;
    local_b0 = local_150;
  }
  else {
    if (0xffffffffffffffef < sStack_148) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_148 < 0x17) {
      pvVar10 = (void *)((long)&local_b0 + 1);
      local_b0 = (ulong)(byte)((int)sStack_148 << 1);
      if (sStack_148 != 0) goto LAB_00852f14;
    }
    else {
      uVar11 = sStack_148 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_b0 = uVar11 | 1;
      uStack_a8 = sVar4;
      local_a0 = pvVar10;
LAB_00852f14:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  puVar3 = cocos2d::renderer::ATTRIB_NAME_COLOR0;
  local_98 = 4;
  local_94 = 0x1401;
  local_92 = 1;
  sStack_160 = 0;
  local_158 = (void *)0x0;
  local_168 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR0);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_168 | 1);
    local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00852fa8;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_168 = uVar11 | 1;
    sStack_160 = sVar8;
    local_158 = pvVar10;
LAB_00852fa8:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_158;
  sVar4 = sStack_160;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  if ((local_168 & 1) == 0) {
    local_80 = local_158;
    uStack_88 = sStack_160;
    local_90 = local_168;
  }
  else {
    if (0xffffffffffffffef < sStack_160) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_160 < 0x17) {
      pvVar10 = (void *)((long)&local_90 + 1);
      local_90 = (ulong)(byte)((int)sStack_160 << 1);
      if (sStack_160 != 0) goto LAB_00853034;
    }
    else {
      uVar11 = sStack_160 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_90 = uVar11 | 1;
      uStack_88 = sVar4;
      local_80 = pvVar10;
LAB_00853034:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  local_78 = 4;
  local_74 = 0x1401;
  local_72 = 1;
  FUN_009b936c(&local_108,&local_f0,4);
  cocos2d::renderer::VertexFormat::VertexFormat(pVVar7,(vector *)&local_108);
  pbVar6 = local_108;
  if (local_108 != (byte *)0x0) {
    while (pbVar9 = local_100, pbVar9 != pbVar6) {
      local_100 = pbVar9 + -0x20;
      if ((*local_100 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + -0x10));
      }
    }
    local_100 = pbVar6;
    operator_delete(local_108);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  cocos2d::renderer::VertexFormat::XY_UV_Two_Color = pVVar7;
  pVVar7 = operator_new(0x58);
  puVar3 = cocos2d::renderer::ATTRIB_NAME_POSITION;
  sStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_POSITION);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_120 | 1);
    local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_008531f8;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_120 = uVar11 | 1;
    sStack_118 = sVar8;
    local_110 = pvVar10;
LAB_008531f8:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_110;
  sVar4 = sStack_118;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  if ((local_120 & 1) == 0) {
    local_e0 = local_110;
    uStack_e8 = sStack_118;
    local_f0 = local_120;
  }
  else {
    if (0xffffffffffffffef < sStack_118) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_118 < 0x17) {
      pvVar10 = (void *)((ulong)&local_f0 | 1);
      local_f0 = (ulong)(byte)((int)sStack_118 << 1);
      if (sStack_118 != 0) goto LAB_00853280;
    }
    else {
      uVar11 = sStack_118 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_f0 = uVar11 | 1;
      uStack_e8 = sVar4;
      local_e0 = pvVar10;
LAB_00853280:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  puVar3 = cocos2d::renderer::ATTRIB_NAME_UV0;
  local_d8 = 2;
  local_d4 = 0x1406;
  local_d2 = 0;
  sStack_130 = 0;
  local_128 = (void *)0x0;
  local_138 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_UV0);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_138 | 1);
    local_138 = CONCAT71(local_138._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00853308;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_138 = uVar11 | 1;
    sStack_130 = sVar8;
    local_128 = pvVar10;
LAB_00853308:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_128;
  sVar4 = sStack_130;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  if ((local_138 & 1) == 0) {
    local_c0 = local_128;
    uStack_c8 = sStack_130;
    local_d0 = local_138;
  }
  else {
    if (0xffffffffffffffef < sStack_130) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_130 < 0x17) {
      pvVar10 = (void *)((long)&local_d0 + 1);
      local_d0 = (ulong)(byte)((int)sStack_130 << 1);
      if (sStack_130 != 0) goto LAB_00853394;
    }
    else {
      uVar11 = sStack_130 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_d0 = uVar11 | 1;
      uStack_c8 = sVar4;
      local_c0 = pvVar10;
LAB_00853394:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  puVar3 = cocos2d::renderer::ATTRIB_NAME_COLOR;
  local_b8 = 2;
  local_b4 = 0x1406;
  local_b2 = 0;
  sStack_148 = 0;
  local_140 = (void *)0x0;
  local_150 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_150 | 1);
    local_150 = CONCAT71(local_150._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_0085341c;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_150 = uVar11 | 1;
    sStack_148 = sVar8;
    local_140 = pvVar10;
LAB_0085341c:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_140;
  sVar4 = sStack_148;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  if ((local_150 & 1) == 0) {
    local_a0 = local_140;
    uStack_a8 = sStack_148;
    local_b0 = local_150;
  }
  else {
    if (0xffffffffffffffef < sStack_148) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_148 < 0x17) {
      pvVar10 = (void *)((long)&local_b0 + 1);
      local_b0 = (ulong)(byte)((int)sStack_148 << 1);
      if (sStack_148 != 0) goto LAB_008534a8;
    }
    else {
      uVar11 = sStack_148 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_b0 = uVar11 | 1;
      uStack_a8 = sVar4;
      local_a0 = pvVar10;
LAB_008534a8:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  local_98 = 4;
  local_94 = 0x1401;
  local_92 = 1;
  FUN_009b936c(&local_108,&local_f0,3);
  cocos2d::renderer::VertexFormat::VertexFormat(pVVar7,(vector *)&local_108);
  pbVar6 = local_108;
  pbVar9 = local_100;
  if (local_108 != (byte *)0x0) {
    while (pbVar2 = pbVar9, pbVar2 != pbVar6) {
      pbVar9 = pbVar2 + -0x20;
      if ((*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -0x10));
      }
    }
    local_100 = pbVar6;
    operator_delete(local_108);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  cocos2d::renderer::VertexFormat::XY_UV_Color = pVVar7;
  pVVar7 = operator_new(0x58);
  puVar3 = cocos2d::renderer::ATTRIB_NAME_POSITION;
  sStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_POSITION);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_120 | 1);
    local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_0085363c;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_120 = uVar11 | 1;
    sStack_118 = sVar8;
    local_110 = pvVar10;
LAB_0085363c:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_110;
  sVar4 = sStack_118;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  if ((local_120 & 1) == 0) {
    local_e0 = local_110;
    uStack_e8 = sStack_118;
    local_f0 = local_120;
  }
  else {
    if (0xffffffffffffffef < sStack_118) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_118 < 0x17) {
      pvVar10 = (void *)((ulong)&local_f0 | 1);
      local_f0 = (ulong)(byte)((int)sStack_118 << 1);
      if (sStack_118 != 0) goto LAB_008536c4;
    }
    else {
      uVar11 = sStack_118 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar11);
      local_f0 = uVar11 | 1;
      uStack_e8 = sVar4;
      local_e0 = pvVar10;
LAB_008536c4:
      memcpy(pvVar10,pvVar5,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  }
  puVar3 = cocos2d::renderer::ATTRIB_NAME_COLOR;
  local_d8 = 2;
  local_d4 = 0x1406;
  local_d2 = 0;
  sStack_130 = 0;
  local_128 = (void *)0x0;
  local_138 = 0;
  sVar8 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_138 | 1);
    local_138 = CONCAT71(local_138._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_0085374c;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_138 = uVar11 | 1;
    sStack_130 = sVar8;
    local_128 = pvVar10;
LAB_0085374c:
    memcpy(pvVar10,puVar3,sVar8);
  }
  pvVar5 = local_128;
  sVar4 = sStack_130;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  if ((local_138 & 1) == 0) {
    local_c0 = local_128;
    uStack_c8 = sStack_130;
    local_d0 = local_138;
    goto LAB_008537ec;
  }
  if (0xffffffffffffffef < sStack_130) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sStack_130 < 0x17) {
    pvVar10 = (void *)((long)&local_d0 + 1);
    local_d0 = (ulong)(byte)((int)sStack_130 << 1);
    if (sStack_130 != 0) goto LAB_008537d8;
  }
  else {
    uVar11 = sStack_130 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_d0 = uVar11 | 1;
    uStack_c8 = sVar4;
    local_c0 = pvVar10;
LAB_008537d8:
    memcpy(pvVar10,pvVar5,sVar4);
  }
  *(undefined1 *)((long)pvVar10 + sVar4) = 0;
LAB_008537ec:
  local_b8 = 4;
  local_b4 = 0x1401;
  local_b2 = 1;
  FUN_009b936c(&local_108,&local_f0,2);
  cocos2d::renderer::VertexFormat::VertexFormat(pVVar7,(vector *)&local_108);
  pbVar6 = local_108;
  pbVar9 = local_100;
  if (local_108 != (byte *)0x0) {
    while (pbVar2 = pbVar9, pbVar2 != pbVar6) {
      pbVar9 = pbVar2 + -0x20;
      if ((*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -0x10));
      }
    }
    local_100 = pbVar6;
    operator_delete(local_108);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  cocos2d::renderer::VertexFormat::XY_Color = pVVar7;
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

