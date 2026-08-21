
/* v8::internal::String::ToCString(v8::internal::AllowNullsFlag, v8::internal::RobustnessFlag, int,
   int, int*) */

void v8::internal::String::ToCString
               (undefined8 *param_1,ulong *param_2,int param_3,int param_4,int param_5,int param_6,
               int *param_7)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ushort uVar7;
  ulong uVar8;
  Heap *pHVar9;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong local_a8;
  int local_a0;
  char local_98;
  ushort *local_90;
  ushort *puStack_88;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (param_4 != 0) {
LAB_01135f24:
    uVar8 = *param_2;
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    local_98 = '\0';
    local_90 = (ushort *)0x0;
    puStack_88 = (ushort *)0x0;
    iVar18 = *(int *)(uVar8 + 7);
    iVar14 = param_5;
    iVar3 = 0x7fffffff - param_5;
    if (-1 < param_6) {
      iVar3 = param_6;
    }
    do {
      local_1b4 = param_5;
      switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
      case 0:
        goto switchD_01135fb0_caseD_0;
      case 1:
      case 9:
        local_a8 = local_a8 & 0xffffffff00000000;
        if ((int)uVar8 == 0) goto switchD_01136034_caseD_1;
        local_a8 = 0x2100000001;
        local_1b4 = 0;
        local_b0 = uVar8;
        local_a0 = param_5;
        uVar8 = ConsStringIterator::Search((ConsStringIterator *)&local_1b0,&local_1b4);
        iVar14 = local_1b4;
        if ((int)uVar8 == 0) goto LAB_011360bc;
        iVar20 = *(int *)(uVar8 + 7);
        iVar18 = local_1b4;
        goto LAB_0113600c;
      case 2:
        lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
        local_90 = (ushort *)(lVar10 + (long)iVar14 * 2);
        goto LAB_01136074;
      case 3:
      case 0xb:
        iVar14 = iVar14 + (*(int *)(uVar8 + 0xf) >> 1);
      case 5:
      case 0xd:
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
        break;
      default:
        goto switchD_01135fb0_caseD_4;
      case 8:
        local_90 = (ushort *)(uVar8 + (long)iVar14 + 0xb);
        goto LAB_011360b0;
      case 10:
        lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
        local_90 = (ushort *)(lVar10 + iVar14);
LAB_011360b0:
        local_98 = '\x01';
        puStack_88 = (ushort *)((long)local_90 + ((long)iVar18 - (long)param_5));
        goto LAB_011360bc;
      }
    } while( true );
  }
  uVar19 = *param_2;
  uVar8 = ReadOnlyHeap::Contains(uVar19);
  if (((uVar8 & 1) != 0) ||
     ((pHVar9 = *(Heap **)((uVar19 & 0xfffffffffffc0000) + 0x18), pHVar9 != (Heap *)0x0 &&
      (uVar8 = Heap::Contains(pHVar9,*param_2), (uVar8 & 1) != 0)))) goto LAB_01135f24;
  *param_1 = 0;
  goto LAB_011364d0;
LAB_0113600c:
  do {
    switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
    case 0:
      goto switchD_01136034_caseD_0;
    case 1:
    case 9:
      goto switchD_01136034_caseD_1;
    case 2:
      lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
      local_90 = (ushort *)(lVar10 + (long)iVar18 * 2);
      goto LAB_01136530;
    case 3:
    case 0xb:
      iVar18 = iVar18 + (*(int *)(uVar8 + 0xf) >> 1);
    case 5:
    case 0xd:
      uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
      break;
    default:
      goto switchD_01135fb0_caseD_4;
    case 8:
      local_90 = (ushort *)(uVar8 + (long)iVar18 + 0xb);
      goto LAB_011365a0;
    case 10:
      lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
      local_90 = (ushort *)(lVar10 + iVar18);
LAB_011365a0:
      local_98 = '\x01';
      puStack_88 = (ushort *)((long)local_90 + (long)(iVar20 - iVar14));
      goto switchD_01136034_caseD_1;
    }
  } while( true );
switchD_01136034_caseD_0:
  local_90 = (ushort *)(uVar8 + (long)iVar18 * 2 + 0xb);
LAB_01136530:
  local_98 = '\0';
  puStack_88 = local_90 + (iVar20 - iVar14);
switchD_01136034_caseD_1:
  uVar8 = StringCharacterStream::HasMore((StringCharacterStream *)&local_1b0);
  iVar14 = 0;
  if (((uVar8 & 1) != 0) && (0 < iVar3)) {
    iVar14 = 0;
    iVar18 = param_5;
    uVar16 = 0xffff;
    do {
      iVar18 = iVar18 + 1;
      if (local_90 == puStack_88) {
        StringCharacterStream::HasMore((StringCharacterStream *)&local_1b0);
        if (local_98 == '\0') goto LAB_01136140;
LAB_01136110:
        puVar2 = (ushort *)((long)local_90 + 1);
        uVar7 = *local_90;
        uVar17 = (ushort)(byte)uVar7;
        local_90 = puVar2;
        if ((byte)uVar7 < 0x80) goto LAB_01136128;
LAB_01136158:
        if (uVar17 < 0x800) {
          iVar20 = 2;
        }
        else {
          iVar20 = 3;
          if ((uVar17 & 0xfc00) == 0xdc00 && (uVar16 & 0xfc00) == 0xd800) {
            iVar20 = 1;
          }
        }
      }
      else {
        if (local_98 != '\0') goto LAB_01136110;
LAB_01136140:
        puVar2 = local_90 + 1;
        uVar17 = *local_90;
        local_90 = puVar2;
        if (0x7f < uVar17) goto LAB_01136158;
LAB_01136128:
        iVar20 = 1;
      }
      iVar14 = iVar20 + iVar14;
      uVar8 = StringCharacterStream::HasMore((StringCharacterStream *)&local_1b0);
    } while (((uVar8 & 1) != 0) && (uVar16 = uVar17, iVar18 < iVar3 + param_5));
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar14;
  }
  pvVar11 = operator_new__((long)(iVar14 + 1),(nothrow_t *)&std::nothrow);
  if (pvVar11 == (void *)0x0) {
    plVar12 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar12 + 0x18))();
    pvVar11 = operator_new__((long)(iVar14 + 1),(nothrow_t *)&std::nothrow);
    if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  uVar8 = *param_2;
  local_90 = (ushort *)0x0;
  puStack_88 = (ushort *)0x0;
  iVar18 = *(int *)(uVar8 + 7);
  iVar14 = param_5;
LAB_01136218:
  local_1b4 = param_5;
  switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_01136240_caseD_0;
  case 1:
  case 9:
    local_a8 = local_a8 & 0xffffffff00000000;
    if ((int)uVar8 == 0) goto switchD_011362c4_caseD_1;
    local_a8 = 0x2100000001;
    local_1b4 = 0;
    local_b0 = uVar8;
    local_a0 = param_5;
    uVar8 = ConsStringIterator::Search((ConsStringIterator *)&local_1b0,&local_1b4);
    iVar14 = local_1b4;
    if ((int)uVar8 == 0) goto LAB_0113634c;
    iVar20 = *(int *)(uVar8 + 7);
    iVar18 = local_1b4;
    goto LAB_0113629c;
  case 2:
    lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar10 + (long)iVar14 * 2);
    goto LAB_01136304;
  case 3:
  case 0xb:
    iVar14 = iVar14 + (*(int *)(uVar8 + 0xf) >> 1);
    goto switchD_01136240_caseD_5;
  default:
    goto switchD_01135fb0_caseD_4;
  case 5:
  case 0xd:
    goto switchD_01136240_caseD_5;
  case 8:
    local_90 = (ushort *)(uVar8 + (long)iVar14 + 0xb);
    break;
  case 10:
    lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar10 + iVar14);
  }
  local_98 = '\x01';
  puStack_88 = (ushort *)((long)local_90 + ((long)iVar18 - (long)param_5));
  goto LAB_0113634c;
switchD_01135fb0_caseD_0:
  local_90 = (ushort *)(uVar8 + (long)iVar14 * 2 + 0xb);
LAB_01136074:
  local_98 = '\0';
  puStack_88 = local_90 + (iVar18 - param_5);
LAB_011360bc:
  local_a8 = local_a8 & 0xffffffff00000000;
  goto switchD_01136034_caseD_1;
switchD_01136240_caseD_5:
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  goto LAB_01136218;
LAB_0113629c:
  switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_011362c4_caseD_0;
  case 1:
  case 9:
    goto switchD_011362c4_caseD_1;
  case 2:
    lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar10 + (long)iVar18 * 2);
    goto LAB_01136584;
  case 3:
  case 0xb:
    iVar18 = iVar18 + (*(int *)(uVar8 + 0xf) >> 1);
    goto switchD_011362c4_caseD_5;
  default:
    goto switchD_01135fb0_caseD_4;
  case 5:
  case 0xd:
    goto switchD_011362c4_caseD_5;
  case 8:
    local_90 = (ushort *)(uVar8 + (long)iVar18 + 0xb);
    break;
  case 10:
    lVar10 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar10 + iVar18);
  }
  local_98 = '\x01';
  puStack_88 = (ushort *)((long)local_90 + (long)(iVar20 - iVar14));
  goto switchD_011362c4_caseD_1;
switchD_011362c4_caseD_5:
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  goto LAB_0113629c;
switchD_01136240_caseD_0:
  local_90 = (ushort *)(uVar8 + (long)iVar14 * 2 + 0xb);
LAB_01136304:
  local_98 = '\0';
  puStack_88 = local_90 + (iVar18 - param_5);
LAB_0113634c:
  local_a8 = local_a8 & 0xffffffff00000000;
  goto switchD_011362c4_caseD_1;
switchD_01135fb0_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_011362c4_caseD_0:
  local_90 = (ushort *)(uVar8 + (long)iVar18 * 2 + 0xb);
LAB_01136584:
  local_98 = '\0';
  puStack_88 = local_90 + (iVar20 - iVar14);
switchD_011362c4_caseD_1:
  uVar8 = StringCharacterStream::HasMore((StringCharacterStream *)&local_1b0);
  iVar14 = 0;
  if ((uVar8 & 1) != 0) {
    iVar18 = param_5 + -1;
    uVar15 = 0xffffffff;
    do {
      iVar18 = iVar18 + 1;
      if (iVar3 + param_5 <= iVar18) break;
      if (local_90 == puStack_88) {
        StringCharacterStream::HasMore((StringCharacterStream *)&local_1b0);
        if (local_98 == '\0') goto LAB_011363e8;
LAB_011363c4:
        uVar13 = (uint)(byte)*local_90;
        local_90 = (ushort *)((long)local_90 + 1);
      }
      else {
        if (local_98 != '\0') goto LAB_011363c4;
LAB_011363e8:
        uVar13 = (uint)*local_90;
        local_90 = local_90 + 1;
      }
      uVar4 = 0x20;
      if (uVar13 != 0 || param_3 != 1) {
        uVar4 = uVar13;
      }
      pbVar1 = (byte *)((long)pvVar11 + (long)iVar14);
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) {
        *pbVar1 = bVar5;
LAB_01136414:
        iVar20 = 1;
      }
      else if (uVar4 < 0x800) {
        *pbVar1 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar1[1] = bVar5 & 0x3f | 0x80;
        iVar20 = 2;
      }
      else if (((uVar15 & 0xfc00) == 0xd800) && ((uVar4 & 0xfc00) == 0xdc00)) {
        uVar15 = (uVar15 & 0x3ff) * 0x400 + 0x10000;
        uVar13 = uVar15 | uVar4 & 0x3ff;
        if (0x7f < uVar13) {
          pbVar1[-3] = (byte)(uVar15 >> 0x12) | 0xf0;
          pbVar1[-2] = (byte)(uVar15 >> 0xc) & 0x3f | 0x80;
          pbVar1[-1] = (byte)(uVar13 >> 6) & 0x3f | 0x80;
          *pbVar1 = bVar5 & 0x3f | 0x80;
          goto LAB_01136414;
        }
        pbVar1[-3] = bVar5;
        iVar20 = -2;
      }
      else {
        *pbVar1 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar1[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        pbVar1[2] = bVar5 & 0x3f | 0x80;
        iVar20 = 3;
      }
      iVar14 = iVar20 + iVar14;
      uVar8 = StringCharacterStream::HasMore((StringCharacterStream *)&local_1b0);
      uVar15 = uVar4;
    } while ((uVar8 & 1) != 0);
  }
  *(undefined1 *)((long)pvVar11 + (long)iVar14) = 0;
  *param_1 = pvVar11;
LAB_011364d0:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

