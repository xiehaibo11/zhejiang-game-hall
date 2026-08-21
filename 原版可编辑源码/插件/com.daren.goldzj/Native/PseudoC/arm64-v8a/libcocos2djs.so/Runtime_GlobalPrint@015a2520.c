
/* v8::internal::Runtime_GlobalPrint(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_GlobalPrint(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int local_194;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_88;
  char local_78;
  ushort *local_70;
  ushort *puStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar5 = *param_2;
    if (((uVar5 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsString()");
    }
    local_194 = 0;
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
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
    local_78 = '\0';
    local_70 = (ushort *)0x0;
    puStack_68 = (ushort *)0x0;
    iVar7 = *(int *)(uVar5 + 7);
    iVar6 = 0;
    uVar4 = uVar5;
LAB_015a25c4:
    switch(*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7) & 0xf) {
    case 0:
      goto switchD_015a25ec_caseD_0;
    case 1:
    case 9:
      local_88 = 0;
      if ((int)uVar4 == 0) goto switchD_015a2670_caseD_1;
      ConsStringIterator::Initialize((ConsStringIterator *)&local_190,uVar4,0);
      local_194 = 0;
      if ((local_88 == 0) ||
         (uVar4 = ConsStringIterator::Continue((ConsStringIterator *)&local_190,&local_194),
         iVar6 = local_194, (int)uVar4 == 0)) goto switchD_015a2670_caseD_1;
      iVar1 = *(int *)(uVar4 + 7);
      iVar7 = local_194;
      goto LAB_015a2648;
    case 2:
      lVar3 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
      local_70 = (ushort *)(lVar3 + (long)iVar6 * 2);
      goto LAB_015a26a8;
    case 3:
    case 0xb:
      iVar6 = iVar6 + (*(int *)(uVar4 + 0xf) >> 1);
      goto switchD_015a25ec_caseD_5;
    default:
      goto switchD_015a25ec_caseD_4;
    case 5:
    case 0xd:
      goto switchD_015a25ec_caseD_5;
    case 8:
      local_70 = (ushort *)(uVar4 + (long)iVar6 + 0xb);
      break;
    case 10:
      lVar3 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
      local_70 = (ushort *)(lVar3 + iVar6);
    }
    local_78 = '\x01';
    puStack_68 = (ushort *)((long)local_70 + (long)iVar7);
    goto LAB_015a26e4;
  }
  uVar5 = FUN_015a2840(param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
  goto LAB_015a281c;
switchD_015a25ec_caseD_5:
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  goto LAB_015a25c4;
LAB_015a2648:
  switch(*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_015a2670_caseD_0;
  case 1:
  case 9:
    goto switchD_015a2670_caseD_1;
  case 2:
    lVar3 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar3 + (long)iVar7 * 2);
    goto LAB_015a27bc;
  case 3:
  case 0xb:
    iVar7 = iVar7 + (*(int *)(uVar4 + 0xf) >> 1);
    goto switchD_015a2670_caseD_5;
  default:
    goto switchD_015a25ec_caseD_4;
  case 5:
  case 0xd:
    goto switchD_015a2670_caseD_5;
  case 8:
    local_70 = (ushort *)(uVar4 + (long)iVar7 + 0xb);
    break;
  case 10:
    lVar3 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar3 + iVar7);
  }
  local_78 = '\x01';
  puStack_68 = (ushort *)((long)local_70 + (long)(iVar1 - iVar6));
  goto switchD_015a2670_caseD_1;
switchD_015a2670_caseD_5:
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  goto LAB_015a2648;
switchD_015a25ec_caseD_0:
  local_70 = (ushort *)(uVar4 + (long)iVar6 * 2 + 0xb);
LAB_015a26a8:
  local_78 = '\0';
  puStack_68 = local_70 + iVar7;
LAB_015a26e4:
  local_88 = 0;
  goto switchD_015a2670_caseD_1;
switchD_015a25ec_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_015a2670_caseD_0:
  local_70 = (ushort *)(uVar4 + (long)iVar7 * 2 + 0xb);
LAB_015a27bc:
  local_78 = '\0';
  puStack_68 = local_70 + (iVar1 - iVar6);
switchD_015a2670_caseD_1:
  uVar4 = StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
  while ((uVar4 & 1) != 0) {
    if (local_70 == puStack_68) {
      StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
      if (local_78 == '\0') goto LAB_015a2704;
LAB_015a2750:
      uVar4 = (ulong)(byte)*local_70;
      local_70 = (ushort *)((long)local_70 + 1);
    }
    else {
      if (local_78 != '\0') goto LAB_015a2750;
LAB_015a2704:
      uVar4 = (ulong)*local_70;
      local_70 = local_70 + 1;
    }
    PrintF("%c",uVar4);
    uVar4 = StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
LAB_015a281c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

