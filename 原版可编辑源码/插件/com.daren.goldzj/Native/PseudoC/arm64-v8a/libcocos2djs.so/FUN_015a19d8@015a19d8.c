
undefined8 FUN_015a19d8(undefined8 param_1,ulong *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  byte **local_1e0;
  byte *local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  RuntimeCallStats *local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long *local_190;
  long *plStack_188;
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
  local_1a0 = 0;
  uStack_1b8 = 0;
  local_1c0 = (RuntimeCallStats *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_1c0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_1c0,(ulong)&local_1c0 | 8,0x260);
  }
  if (DAT_01d47548 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47548 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47548;
  local_1e0 = (byte **)0x0;
  if ((*DAT_01d47548 & 5) != 0) {
    local_190 = (long *)0x0;
    plStack_188 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_PrintWithNameForAssert",0,0,0,0,0,0,0,
                       &local_190,0);
    plVar5 = plStack_188;
    plStack_188 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_190;
    local_190 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_1e0 = &local_1d8;
    local_1d0 = "V8.Runtime_Runtime_PrintWithNameForAssert";
    local_1d8 = pbVar3;
    local_1c8 = uVar6;
  }
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  v8::internal::PrintF(" * ");
  local_90 = 0;
  local_78 = '\0';
  local_198._0_4_ = 0;
  iVar4 = (int)local_198;
  local_198._0_4_ = 0;
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
  plStack_188 = (long *)0x0;
  local_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_70 = (ushort *)0x0;
  puStack_68 = (ushort *)0x0;
  iVar10 = *(int *)(uVar8 + 7);
  iVar9 = 0;
LAB_015a1b60:
  switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_015a1b88_caseD_0;
  case 1:
  case 9:
    local_88 = 0;
    if ((int)uVar8 == 0) goto switchD_015a1c10_caseD_1;
    v8::internal::ConsStringIterator::Initialize((ConsStringIterator *)&local_190,uVar8,0);
    local_198._0_4_ = 0;
    iVar4 = (int)local_198;
    if ((local_88 == 0) ||
       (uVar8 = v8::internal::ConsStringIterator::Continue
                          ((ConsStringIterator *)&local_190,(int *)&local_198),
       iVar9 = (int)local_198, iVar4 = (int)local_198, (int)uVar8 == 0))
    goto switchD_015a1c10_caseD_1;
    iVar1 = *(int *)(uVar8 + 7);
    iVar10 = (int)local_198;
    goto LAB_015a1be8;
  case 2:
    local_198._0_4_ = iVar4;
    lVar7 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar7 + (long)iVar9 * 2);
    goto LAB_015a1c48;
  case 3:
  case 0xb:
    iVar9 = iVar9 + (*(int *)(uVar8 + 0xf) >> 1);
    goto switchD_015a1b88_caseD_5;
  default:
    goto switchD_015a1b88_caseD_4;
  case 5:
  case 0xd:
    goto switchD_015a1b88_caseD_5;
  case 8:
    local_70 = (ushort *)(uVar8 + (long)iVar9 + 0xb);
    local_198._0_4_ = iVar4;
    break;
  case 10:
    local_198._0_4_ = iVar4;
    lVar7 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar7 + iVar9);
  }
  local_78 = '\x01';
  puStack_68 = (ushort *)((long)local_70 + (long)iVar10);
  goto LAB_015a1c84;
switchD_015a1b88_caseD_5:
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  goto LAB_015a1b60;
LAB_015a1be8:
  switch(*(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_015a1c10_caseD_0;
  case 1:
  case 9:
    goto switchD_015a1c10_caseD_1;
  case 2:
    lVar7 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar7 + (long)iVar10 * 2);
    goto LAB_015a1dcc;
  case 3:
  case 0xb:
    iVar10 = iVar10 + (*(int *)(uVar8 + 0xf) >> 1);
    goto switchD_015a1c10_caseD_5;
  default:
    goto switchD_015a1b88_caseD_4;
  case 5:
  case 0xd:
    goto switchD_015a1c10_caseD_5;
  case 8:
    local_70 = (ushort *)(uVar8 + (long)iVar10 + 0xb);
    break;
  case 10:
    lVar7 = (**(code **)(**(long **)(uVar8 + 0xb) + 0x30))();
    local_70 = (ushort *)(lVar7 + iVar10);
  }
  local_78 = '\x01';
  puStack_68 = (ushort *)((long)local_70 + (long)(iVar1 - iVar9));
  iVar4 = (int)local_198;
  goto switchD_015a1c10_caseD_1;
switchD_015a1c10_caseD_5:
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  goto LAB_015a1be8;
switchD_015a1c10_caseD_0:
  local_70 = (ushort *)(uVar8 + (long)iVar10 * 2 + 0xb);
LAB_015a1dcc:
  local_78 = '\0';
  puStack_68 = local_70 + (iVar1 - iVar9);
  iVar4 = (int)local_198;
switchD_015a1c10_caseD_1:
  local_198._0_4_ = iVar4;
  uVar8 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
  do {
    if ((uVar8 & 1) == 0) {
      v8::internal::PrintF(": ");
      local_198 = param_2[-1];
      v8::internal::Object::ShortPrint((Object *)&local_198,(__sFILE *)waitpid);
      v8::internal::PrintF("\n");
      uVar6 = *(undefined8 *)(param_3 + 0xa0);
      if ((local_1e0 != (byte **)0x0) && (*local_1d8 != 0)) {
        plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar5 + 0x28))(plVar5,local_1d8,local_1d0,local_1c8);
      }
      if (local_1c0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_1c0,(RuntimeCallTimer *)((ulong)&local_1c0 | 8))
        ;
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_70 == puStack_68) {
      v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
      if (local_78 != '\0') goto LAB_015a1cf0;
LAB_015a1ca4:
      uVar8 = (ulong)*local_70;
      local_70 = local_70 + 1;
    }
    else {
      if (local_78 == '\0') goto LAB_015a1ca4;
LAB_015a1cf0:
      uVar8 = (ulong)(byte)*local_70;
      local_70 = (ushort *)((long)local_70 + 1);
    }
    v8::internal::PrintF("%c",uVar8);
    uVar8 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_190);
  } while( true );
switchD_015a1b88_caseD_0:
  local_70 = (ushort *)(uVar8 + (long)iVar9 * 2 + 0xb);
  local_198._0_4_ = iVar4;
LAB_015a1c48:
  local_78 = '\0';
  puStack_68 = local_70 + iVar10;
LAB_015a1c84:
  local_88 = 0;
  iVar4 = (int)local_198;
  goto switchD_015a1c10_caseD_1;
switchD_015a1b88_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

