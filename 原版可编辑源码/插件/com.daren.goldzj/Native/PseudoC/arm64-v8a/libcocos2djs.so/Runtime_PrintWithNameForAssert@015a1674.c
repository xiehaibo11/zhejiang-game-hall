
/* v8::internal::Runtime_PrintWithNameForAssert(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_PrintWithNameForAssert(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong local_198;
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
    uVar6 = *param_2;
    if (((uVar6 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsString()");
    }
    PrintF(" * ");
    local_90 = 0;
    local_198 = local_198 & 0xffffffff00000000;
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
    iVar1 = *(int *)(uVar6 + 7);
    iVar7 = 0;
LAB_015a1728:
    switch(*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7) & 0xf) {
    case 0:
      goto switchD_015a1750_caseD_0;
    case 1:
    case 9:
      local_88 = 0;
      if ((int)uVar6 == 0) goto switchD_015a17d8_caseD_1;
      ConsStringIterator::Initialize((ConsStringIterator *)&local_190,uVar6,0);
      local_198 = local_198 & 0xffffffff00000000;
      if ((local_88 == 0) ||
         (uVar6 = ConsStringIterator::Continue((ConsStringIterator *)&local_190,(int *)&local_198),
         (int)uVar6 == 0)) goto switchD_015a17d8_caseD_1;
      iVar3 = (int)local_198;
      iVar1 = *(int *)(uVar6 + 7);
      iVar7 = (int)local_198;
      goto LAB_015a17b0;
    case 2:
      lVar4 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
      local_70 = (ushort *)(lVar4 + (long)iVar7 * 2);
      goto LAB_015a1810;
    case 3:
    case 0xb:
      iVar7 = iVar7 + (*(int *)(uVar6 + 0xf) >> 1);
      goto switchD_015a1750_caseD_5;
    default:
      goto switchD_015a1750_caseD_4;
    case 5:
    case 0xd:
      goto switchD_015a1750_caseD_5;
    case 8:
      local_70 = (ushort *)(uVar6 + (long)iVar7 + 0xb);
      break;
    case 10:
      lVar4 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
      local_70 = (ushort *)(lVar4 + iVar7);
    }
    local_78 = '\x01';
    puStack_68 = (ushort *)((long)local_70 + (long)iVar1);
    goto LAB_015a184c;
  }
  uVar5 = FUN_015a19d8(param_1,param_2,param_3);
  goto LAB_015a1904;
switchD_015a1750_caseD_5:
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
  goto LAB_015a1728;
LAB_015a17b0:
  switch(*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_015a17d8_caseD_0;
  case 1:
  case 9:
    goto switchD_015a17d8_caseD_1;
  case 2:
    lVar4 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar4 + (long)iVar7 * 2);
    goto LAB_015a1958;
  case 3:
  case 0xb:
    iVar7 = iVar7 + (*(int *)(uVar6 + 0xf) >> 1);
    goto switchD_015a17d8_caseD_5;
  default:
    goto switchD_015a1750_caseD_4;
  case 5:
  case 0xd:
    goto switchD_015a17d8_caseD_5;
  case 8:
    local_70 = (ushort *)(uVar6 + (long)iVar7 + 0xb);
    break;
  case 10:
    lVar4 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar4 + iVar7);
  }
  local_78 = '\x01';
  puStack_68 = (ushort *)((long)local_70 + (long)(iVar1 - iVar3));
  goto switchD_015a17d8_caseD_1;
switchD_015a17d8_caseD_5:
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
  goto LAB_015a17b0;
switchD_015a1750_caseD_0:
  local_70 = (ushort *)(uVar6 + (long)iVar7 * 2 + 0xb);
LAB_015a1810:
  local_78 = '\0';
  puStack_68 = local_70 + iVar1;
LAB_015a184c:
  local_88 = 0;
  goto switchD_015a17d8_caseD_1;
switchD_015a1750_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_015a17d8_caseD_0:
  local_70 = (ushort *)(uVar6 + (long)iVar7 * 2 + 0xb);
LAB_015a1958:
  local_78 = '\0';
  puStack_68 = local_70 + (iVar1 - iVar3);
switchD_015a17d8_caseD_1:
  uVar6 = StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
  while ((uVar6 & 1) != 0) {
    if (local_70 == puStack_68) {
      StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
      if (local_78 != '\0') goto LAB_015a18b8;
LAB_015a186c:
      uVar6 = (ulong)*local_70;
      local_70 = local_70 + 1;
    }
    else {
      if (local_78 == '\0') goto LAB_015a186c;
LAB_015a18b8:
      uVar6 = (ulong)(byte)*local_70;
      local_70 = (ushort *)((long)local_70 + 1);
    }
    PrintF("%c",uVar6);
    uVar6 = StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
  }
  PrintF(": ");
  local_198 = param_2[-1];
  Object::ShortPrint((Object *)&local_198,(__sFILE *)waitpid);
  PrintF("\n");
  uVar5 = *(undefined8 *)(param_3 + 0xa0);
LAB_015a1904:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

