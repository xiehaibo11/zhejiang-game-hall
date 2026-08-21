
ulong FUN_015a2840(undefined8 param_1,ulong *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  byte **local_1d0;
  byte *local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  RuntimeCallStats *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  int local_184;
  long *local_180;
  long *plStack_178;
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
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78;
  char local_68;
  ushort *local_60;
  ushort *puStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = (RuntimeCallStats *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_1b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_1b0,(ulong)&local_1b0 | 8,0x235);
  }
  if (DAT_01d47560 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47560 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47560;
  local_1d0 = (byte **)0x0;
  if ((*DAT_01d47560 & 5) != 0) {
    local_180 = (long *)0x0;
    plStack_178 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_GlobalPrint",0,0,0,0,0,0,0,&local_180,
                       0);
    plVar4 = plStack_178;
    plStack_178 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_180;
    local_180 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_1d0 = &local_1c8;
    local_1c0 = "V8.Runtime_Runtime_GlobalPrint";
    local_1c8 = pbVar3;
    local_1b8 = uVar5;
  }
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  local_80 = 0;
  local_68 = '\0';
  local_184 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
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
  plStack_178 = (long *)0x0;
  local_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  local_60 = (ushort *)0x0;
  puStack_58 = (ushort *)0x0;
  iVar10 = *(int *)(uVar8 + 7);
  iVar9 = 0;
  uVar7 = uVar8;
LAB_015a29b8:
  switch(*(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_015a29e0_caseD_0;
  case 1:
  case 9:
    local_78 = 0;
    if ((int)uVar7 == 0) goto switchD_015a2a64_caseD_1;
    v8::internal::ConsStringIterator::Initialize((ConsStringIterator *)&local_180,uVar7,0);
    local_184 = 0;
    if ((local_78 == 0) ||
       (uVar7 = v8::internal::ConsStringIterator::Continue
                          ((ConsStringIterator *)&local_180,&local_184), iVar9 = local_184,
       (int)uVar7 == 0)) goto switchD_015a2a64_caseD_1;
    iVar1 = *(int *)(uVar7 + 7);
    iVar10 = local_184;
    goto LAB_015a2a3c;
  case 2:
    lVar6 = (**(code **)(**(long **)(uVar7 + 0xb) + 0x30))();
    local_60 = (ushort *)(lVar6 + (long)iVar9 * 2);
    goto LAB_015a2a9c;
  case 3:
  case 0xb:
    iVar9 = iVar9 + (*(int *)(uVar7 + 0xf) >> 1);
    goto switchD_015a29e0_caseD_5;
  default:
    goto switchD_015a29e0_caseD_4;
  case 5:
  case 0xd:
    goto switchD_015a29e0_caseD_5;
  case 8:
    local_60 = (ushort *)(uVar7 + (long)iVar9 + 0xb);
    break;
  case 10:
    lVar6 = (**(code **)(**(long **)(uVar7 + 0xb) + 0x30))();
    local_60 = (ushort *)(lVar6 + iVar9);
  }
  local_68 = '\x01';
  puStack_58 = (ushort *)((long)local_60 + (long)iVar10);
  goto LAB_015a2ad8;
switchD_015a29e0_caseD_5:
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
  goto LAB_015a29b8;
LAB_015a2a3c:
  switch(*(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_015a2a64_caseD_0;
  case 1:
  case 9:
    goto switchD_015a2a64_caseD_1;
  case 2:
    lVar6 = (**(code **)(**(long **)(uVar7 + 0xb) + 0x30))();
    local_60 = (ushort *)(lVar6 + (long)iVar10 * 2);
    goto LAB_015a2be4;
  case 3:
  case 0xb:
    iVar10 = iVar10 + (*(int *)(uVar7 + 0xf) >> 1);
    goto switchD_015a2a64_caseD_5;
  default:
    goto switchD_015a29e0_caseD_4;
  case 5:
  case 0xd:
    goto switchD_015a2a64_caseD_5;
  case 8:
    local_60 = (ushort *)(uVar7 + (long)iVar10 + 0xb);
    break;
  case 10:
    lVar6 = (**(code **)(**(long **)(uVar7 + 0xb) + 0x30))();
    local_60 = (ushort *)(lVar6 + iVar10);
  }
  local_68 = '\x01';
  puStack_58 = (ushort *)((long)local_60 + (long)(iVar1 - iVar9));
  goto switchD_015a2a64_caseD_1;
switchD_015a2a64_caseD_5:
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
  goto LAB_015a2a3c;
switchD_015a2a64_caseD_0:
  local_60 = (ushort *)(uVar7 + (long)iVar10 * 2 + 0xb);
LAB_015a2be4:
  local_68 = '\0';
  puStack_58 = local_60 + (iVar1 - iVar9);
switchD_015a2a64_caseD_1:
  uVar7 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_180);
  do {
    if ((uVar7 & 1) == 0) {
      if ((local_1d0 != (byte **)0x0) && (*local_1c8 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_1c8,local_1c0,local_1b8);
      }
      if (local_1b0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_1b0,(RuntimeCallTimer *)((ulong)&local_1b0 | 8))
        ;
      }
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_60 == puStack_58) {
      v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_180);
      if (local_68 != '\0') goto LAB_015a2b44;
LAB_015a2af8:
      uVar7 = (ulong)*local_60;
      local_60 = local_60 + 1;
    }
    else {
      if (local_68 == '\0') goto LAB_015a2af8;
LAB_015a2b44:
      uVar7 = (ulong)(byte)*local_60;
      local_60 = (ushort *)((long)local_60 + 1);
    }
    v8::internal::PrintF("%c",uVar7);
    uVar7 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_180);
  } while( true );
switchD_015a29e0_caseD_0:
  local_60 = (ushort *)(uVar7 + (long)iVar9 * 2 + 0xb);
LAB_015a2a9c:
  local_68 = '\0';
  puStack_58 = local_60 + iVar10;
LAB_015a2ad8:
  local_78 = 0;
  goto switchD_015a2a64_caseD_1;
switchD_015a29e0_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

