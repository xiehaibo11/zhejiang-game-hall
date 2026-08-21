
/* v8::internal::String::PrintUC16(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&, int, int) */

void __thiscall
v8::internal::String::PrintUC16(String *this,basic_ostream *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int local_198 [2];
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
  ulong local_90;
  ulong local_88;
  int local_80;
  char local_78;
  ushort *local_70;
  ushort *puStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)this;
  if (param_3 < 0) {
    param_3 = *(int *)(uVar5 + 7);
  }
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
  iVar6 = param_2;
LAB_01135558:
  local_198[0] = param_2;
  switch(*(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_01135580_caseD_0;
  case 1:
  case 9:
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar5 == 0) goto switchD_01135604_caseD_1;
    local_88 = 0x2100000001;
    local_198[0] = 0;
    local_90 = uVar5;
    local_80 = param_2;
    uVar5 = ConsStringIterator::Search((ConsStringIterator *)&local_190,local_198);
    iVar6 = local_198[0];
    if ((int)uVar5 == 0) goto LAB_0113568c;
    iVar1 = *(int *)(uVar5 + 7);
    iVar7 = local_198[0];
    goto LAB_011355dc;
  case 2:
    lVar3 = (**(code **)(**(long **)(uVar5 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar3 + (long)iVar6 * 2);
    goto LAB_01135644;
  case 3:
  case 0xb:
    iVar6 = iVar6 + (*(int *)(uVar5 + 0xf) >> 1);
    goto switchD_01135580_caseD_5;
  default:
    goto switchD_01135580_caseD_4;
  case 5:
  case 0xd:
    goto switchD_01135580_caseD_5;
  case 8:
    local_70 = (ushort *)(uVar5 + (long)iVar6 + 0xb);
    break;
  case 10:
    lVar3 = (**(code **)(**(long **)(uVar5 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar3 + iVar6);
  }
  local_78 = '\x01';
  puStack_68 = (ushort *)((long)local_70 + ((long)iVar7 - (long)param_2));
  goto LAB_0113568c;
switchD_01135580_caseD_5:
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  goto LAB_01135558;
LAB_011355dc:
  switch(*(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_01135604_caseD_0;
  case 1:
  case 9:
    goto switchD_01135604_caseD_1;
  case 2:
    lVar3 = (**(code **)(**(long **)(uVar5 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar3 + (long)iVar7 * 2);
    goto LAB_011356c4;
  case 3:
  case 0xb:
    iVar7 = iVar7 + (*(int *)(uVar5 + 0xf) >> 1);
    goto switchD_01135604_caseD_5;
  default:
    goto switchD_01135580_caseD_4;
  case 5:
  case 0xd:
    goto switchD_01135604_caseD_5;
  case 8:
    local_70 = (ushort *)(uVar5 + (long)iVar7 + 0xb);
    break;
  case 10:
    lVar3 = (**(code **)(**(long **)(uVar5 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar3 + iVar7);
  }
  local_78 = '\x01';
  puStack_68 = (ushort *)((long)local_70 + (long)(iVar1 - iVar6));
  goto LAB_01135708;
switchD_01135604_caseD_5:
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  goto LAB_011355dc;
switchD_01135604_caseD_0:
  local_70 = (ushort *)(uVar5 + (long)iVar7 * 2 + 0xb);
LAB_011356c4:
  local_78 = '\0';
  puStack_68 = local_70 + (iVar1 - iVar6);
LAB_01135708:
  iVar6 = param_3 - param_2;
  if (iVar6 == 0 || param_3 < param_2) goto LAB_01135784;
  goto LAB_01135750;
switchD_01135580_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_01135580_caseD_0:
  local_70 = (ushort *)(uVar5 + (long)iVar6 * 2 + 0xb);
LAB_01135644:
  local_78 = '\0';
  puStack_68 = local_70 + (iVar7 - param_2);
LAB_0113568c:
  local_88 = local_88 & 0xffffffff00000000;
switchD_01135604_caseD_1:
  iVar6 = param_3 - param_2;
  if (iVar6 == 0 || param_3 < param_2) goto LAB_01135784;
LAB_01135750:
  do {
    uVar5 = StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
    if ((uVar5 & 1) == 0) break;
    if (local_70 == puStack_68) {
      StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
      if (local_78 != '\0') goto LAB_01135728;
LAB_01135770:
      uVar4 = *local_70;
      local_70 = local_70 + 1;
    }
    else {
      if (local_78 == '\0') goto LAB_01135770;
LAB_01135728:
      uVar4 = (ushort)(byte)*local_70;
      local_70 = (ushort *)((long)local_70 + 1);
    }
    local_198[0] = CONCAT22(local_198[0]._2_2_,uVar4);
    internal::operator<<(param_1,(AsUC16 *)local_198);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
LAB_01135784:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

