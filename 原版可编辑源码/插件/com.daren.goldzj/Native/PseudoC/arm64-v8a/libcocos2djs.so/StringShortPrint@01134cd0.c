
/* v8::internal::String::StringShortPrint(v8::internal::StringStream*, bool) */

void __thiscall
v8::internal::String::StringShortPrint(String *this,StringStream *param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  Heap *pHVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 **ppuVar13;
  undefined8 uVar14;
  ushort *puVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  char local_88;
  ushort *local_80;
  ushort *local_78;
  long local_70;
  
  ppuVar13 = &local_1b0;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar16 = *(ulong *)this;
  iVar19 = *(int *)(uVar16 + 7);
  puVar1 = &DAT_01a5faed;
  if (0x1f < *(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1))) {
    puVar1 = &DAT_0189703a;
  }
  if (iVar19 < 0x401) {
    uVar8 = ReadOnlyHeap::Contains(uVar16);
    if (((uVar8 & 1) != 0) ||
       ((pHVar9 = *(Heap **)((uVar16 & 0xfffffffffffc0000) + 0x18), pHVar9 != (Heap *)0x0 &&
        (uVar16 = Heap::Contains(pHVar9,*(undefined8 *)this), (uVar16 & 1) != 0)))) {
      uVar8 = *(ulong *)this;
      local_a0 = 0;
      local_88 = '\0';
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uVar16 = (ulong)local_1b0 >> 0x20;
      local_1b0 = (undefined1 *)(uVar16 << 0x20);
      local_80 = (ushort *)0x0;
      local_78 = (ushort *)0x0;
      iVar2 = *(int *)(uVar8 + 7);
      iVar17 = 0;
      do {
        switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
        case 0:
          goto switchD_01134e10_caseD_0;
        case 1:
        case 9:
          local_98 = 0;
          if ((int)uVar8 == 0) goto switchD_01134ef0_caseD_1;
          uStack_90 = 0;
          local_98 = 1;
          uStack_94 = 0x21;
          local_1b0 = (undefined1 *)(uVar16 << 0x20);
          local_a0 = uVar8;
          uVar16 = ConsStringIterator::Search((ConsStringIterator *)&local_1a0,(int *)&local_1b0);
          if ((int)uVar16 == 0) goto LAB_01134f68;
          iVar6 = (int)local_1b0;
          iVar2 = *(int *)(uVar16 + 7);
          iVar17 = (int)local_1b0;
          goto LAB_01134ec8;
        case 2:
          lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
          local_80 = (ushort *)(lVar10 + (long)iVar17 * 2);
          goto LAB_01134f28;
        case 3:
        case 0xb:
          iVar17 = iVar17 + (*(int *)(uVar8 + 0xf) >> 1);
        case 5:
        case 0xd:
          uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
          break;
        default:
          goto switchD_01134e10_caseD_4;
        case 8:
          local_80 = (ushort *)(uVar8 + (long)iVar17 + 0xb);
          goto LAB_01134f5c;
        case 10:
          lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
          local_80 = (ushort *)(lVar10 + iVar17);
LAB_01134f5c:
          local_88 = '\x01';
          local_78 = (ushort *)((long)local_80 + (long)iVar2);
          goto LAB_01134f68;
        }
      } while( true );
    }
    pcVar11 = "<Invalid String>";
    uVar7 = __strlen_chk("<Invalid String>",0x11);
    ppuVar13 = (undefined1 **)0x0;
    uVar14 = 0;
  }
  else {
    pcVar11 = "<Very long string[%s%u]>";
    uVar7 = __strlen_chk("<Very long string[%s%u]>",0x19);
    uVar14 = 2;
    local_1b0 = puVar1;
    local_1a8 = iVar19;
  }
  StringStream::Add(param_1,pcVar11,uVar7,ppuVar13,uVar14);
  goto LAB_01134e54;
LAB_01134ec8:
  switch(*(ushort *)((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_01134ef0_caseD_0;
  case 1:
  case 9:
    goto switchD_01134ef0_caseD_1;
  case 2:
    lVar10 = (**(code **)(**(long **)(uVar16 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar10 + (long)iVar17 * 2);
    goto LAB_01135010;
  case 3:
  case 0xb:
    iVar17 = iVar17 + (*(int *)(uVar16 + 0xf) >> 1);
    goto switchD_01134ef0_caseD_5;
  default:
    goto switchD_01134e10_caseD_4;
  case 5:
  case 0xd:
    goto switchD_01134ef0_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar16 + (long)iVar17 + 0xb);
    break;
  case 10:
    lVar10 = (**(code **)(**(long **)(uVar16 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar10 + iVar17);
  }
  local_88 = '\x01';
  local_78 = (ushort *)((long)local_80 + (long)(iVar2 - iVar6));
  goto joined_r0x0113505c;
switchD_01134ef0_caseD_5:
  uVar16 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
  goto LAB_01134ec8;
switchD_01134ef0_caseD_0:
  local_80 = (ushort *)(uVar16 + (long)iVar17 * 2 + 0xb);
LAB_01135010:
  local_88 = '\0';
  local_78 = local_80 + (iVar2 - iVar6);
  goto joined_r0x0113505c;
switchD_01134e10_caseD_0:
  local_80 = (ushort *)(uVar8 + (long)iVar17 * 2 + 0xb);
LAB_01134f28:
  local_88 = '\0';
  local_78 = local_80 + iVar2;
LAB_01134f68:
  local_98 = 0;
switchD_01134ef0_caseD_1:
joined_r0x0113505c:
  if (iVar19 < 1) {
    bVar4 = true;
  }
  else {
    bVar4 = true;
    iVar17 = iVar19;
    do {
      if (local_80 == local_78) {
        StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
        if (local_88 != '\0') goto LAB_01134fd4;
LAB_01134f84:
        puVar15 = local_80 + 1;
        uVar18 = (uint)*local_80;
      }
      else {
        if (local_88 == '\0') goto LAB_01134f84;
LAB_01134fd4:
        puVar15 = (ushort *)((long)local_80 + 1);
        uVar18 = (uint)(byte)*local_80;
      }
      iVar17 = iVar17 + -1;
      bVar4 = (bool)(bVar4 & uVar18 - 0x20 < 0x5f);
      local_80 = puVar15;
    } while (iVar17 != 0);
  }
  uVar8 = *(ulong *)this;
  uVar16 = (ulong)local_1b0 >> 0x20;
  local_1b0 = (undefined1 *)(uVar16 << 0x20);
  local_80 = (ushort *)0x0;
  local_78 = (ushort *)0x0;
  iVar2 = *(int *)(uVar8 + 7);
  iVar17 = 0;
LAB_01135080:
  switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_011350a8_caseD_0;
  case 1:
  case 9:
    local_98 = 0;
    if ((int)uVar8 == 0) goto switchD_01135138_caseD_1;
    local_98 = 1;
    uStack_94 = 0x21;
    uStack_90 = 0;
    local_1b0 = (undefined1 *)(uVar16 << 0x20);
    local_a0 = uVar8;
    uVar16 = ConsStringIterator::Search((ConsStringIterator *)&local_1a0,(int *)&local_1b0);
    if ((int)uVar16 == 0) goto LAB_011351b0;
    iVar6 = (int)local_1b0;
    iVar2 = *(int *)(uVar16 + 7);
    iVar17 = (int)local_1b0;
    goto LAB_01135110;
  case 2:
    lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar10 + (long)iVar17 * 2);
    goto LAB_01135170;
  case 3:
  case 0xb:
    iVar17 = iVar17 + (*(int *)(uVar8 + 0xf) >> 1);
    goto switchD_011350a8_caseD_5;
  default:
    goto switchD_01134e10_caseD_4;
  case 5:
  case 0xd:
    goto switchD_011350a8_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar8 + (long)iVar17 + 0xb);
    break;
  case 10:
    lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar10 + iVar17);
  }
  local_88 = '\x01';
  local_78 = (ushort *)((long)local_80 + (long)iVar2);
  goto LAB_011351b0;
switchD_011350a8_caseD_5:
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  goto LAB_01135080;
LAB_01135110:
  switch(*(ushort *)((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_01135138_caseD_0;
  case 1:
  case 9:
    goto switchD_01135138_caseD_1;
  case 2:
    lVar10 = (**(code **)(**(long **)(uVar16 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar10 + (long)iVar17 * 2);
    goto LAB_01135280;
  case 3:
  case 0xb:
    iVar17 = iVar17 + (*(int *)(uVar16 + 0xf) >> 1);
    goto switchD_01135138_caseD_5;
  default:
    goto switchD_01134e10_caseD_4;
  case 5:
  case 0xd:
    goto switchD_01135138_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar16 + (long)iVar17 + 0xb);
    break;
  case 10:
    lVar10 = (**(code **)(**(long **)(uVar16 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar10 + iVar17);
  }
  local_88 = '\x01';
  local_78 = (ushort *)((long)local_80 + (long)(iVar2 - iVar6));
  goto joined_r0x011352d0;
switchD_01135138_caseD_5:
  uVar16 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
  goto LAB_01135110;
switchD_01135138_caseD_0:
  local_80 = (ushort *)(uVar16 + (long)iVar17 * 2 + 0xb);
LAB_01135280:
  local_88 = '\0';
  local_78 = local_80 + (iVar2 - iVar6);
  if (bVar4) goto LAB_011351b8;
LAB_011352d4:
  if (param_2) {
    iVar17 = *(int *)(*(long *)this + 7);
    uVar7 = __strlen_chk("<String[%s%u]\\: ",0x11);
    local_1b0 = puVar1;
    local_1a8 = iVar17;
    StringStream::Add(param_1,"<String[%s%u]\\: ",uVar7,&local_1b0,2);
  }
  if (0 < iVar19) {
    do {
      while (local_80 == local_78) {
        StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
        if (local_88 == '\0') goto LAB_011353d4;
LAB_01135380:
        puVar15 = (ushort *)((long)local_80 + 1);
        uVar5 = *local_80;
        uVar18 = (uint)(byte)uVar5;
        local_80 = puVar15;
        if ((byte)uVar5 != 0x5c) goto LAB_01135398;
LAB_011353ec:
        uVar7 = __strlen_chk(&DAT_01896be2,3);
        puVar12 = &DAT_01896be2;
LAB_01135358:
        StringStream::Add(param_1,puVar12,uVar7,0,0);
        iVar19 = iVar19 + -1;
        if (iVar19 == 0) goto LAB_0113545c;
      }
      if (local_88 != '\0') goto LAB_01135380;
LAB_011353d4:
      puVar15 = local_80 + 1;
      uVar18 = (uint)*local_80;
      local_80 = puVar15;
      if (uVar18 == 0x5c) goto LAB_011353ec;
LAB_01135398:
      if (uVar18 == 0xd) {
        uVar7 = __strlen_chk(&DAT_019da8ad,3);
        puVar12 = &DAT_019da8ad;
        goto LAB_01135358;
      }
      if (uVar18 == 10) {
        uVar7 = __strlen_chk(&DAT_019da8aa,3);
        puVar12 = &DAT_019da8aa;
        goto LAB_01135358;
      }
      if (uVar18 - 0x20 < 0x5f) {
        StringStream::Put(param_1,(char)uVar18);
      }
      else {
        uVar7 = __strlen_chk("\\x%02x",7);
        local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,uVar18);
        StringStream::Add(param_1,"\\x%02x",uVar7,&local_1b0,1);
      }
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  goto LAB_0113545c;
switchD_01134e10_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_011350a8_caseD_0:
  local_80 = (ushort *)(uVar8 + (long)iVar17 * 2 + 0xb);
LAB_01135170:
  local_88 = '\0';
  local_78 = local_80 + iVar2;
LAB_011351b0:
  local_98 = 0;
switchD_01135138_caseD_1:
joined_r0x011352d0:
  if (!bVar4) goto LAB_011352d4;
LAB_011351b8:
  if (param_2) {
    iVar17 = *(int *)(*(long *)this + 7);
    uVar7 = __strlen_chk("<String[%s%u]: ",0x10);
    local_1b0 = puVar1;
    local_1a8 = iVar17;
    StringStream::Add(param_1,"<String[%s%u]: ",uVar7,&local_1b0,2);
  }
  if (0 < iVar19) {
    do {
      if (local_80 == local_78) {
        StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
        if (local_88 != '\0') goto LAB_0113524c;
LAB_01135204:
        puVar15 = local_80 + 1;
      }
      else {
        if (local_88 == '\0') goto LAB_01135204;
LAB_0113524c:
        puVar15 = (ushort *)((long)local_80 + 1);
      }
      uVar5 = *local_80;
      local_80 = puVar15;
      StringStream::Put(param_1,(byte)uVar5);
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
LAB_0113545c:
  if (param_2) {
    StringStream::Put(param_1,'>');
  }
LAB_01134e54:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

