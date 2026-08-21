
/* v8::internal::PerfJitLogger::LogWriteDebugInfo(v8::internal::Code,
   v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::PerfJitLogger::LogWriteDebugInfo(undefined8 param_1,ulong param_2,ulong param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  Isolate *pIVar12;
  char *pcVar13;
  int iVar14;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong *local_120;
  undefined8 local_118;
  undefined4 local_108;
  uint local_104;
  long local_100;
  long local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  int local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  char *local_b0;
  timespec local_a8;
  int local_90;
  int local_88;
  char *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = param_2 & 0xffffffff00000000;
  uVar9 = uVar10 | *(uint *)(param_2 + 0xb);
  if (((*(uint *)(param_2 + 0xb) & 1) == 0) ||
     (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x85)) {
    uVar9 = uVar10 | *(uint *)(uVar9 + 3);
  }
  local_e8 = param_3;
  local_e0 = param_2;
  SourcePositionTableIterator::SourcePositionTableIterator
            ((SourcePositionTableIterator *)&local_a8,uVar9,0);
  if (local_90 != -1) {
    iVar11 = 0;
    iVar14 = 0x20;
    do {
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
      iVar11 = iVar11 + -1;
      iVar14 = iVar14 + 0x10;
    } while (local_90 != -1);
    if ((iVar11 != 0) &&
       (uVar9 = SharedFunctionInfo::HasSourceCode((SharedFunctionInfo *)&local_e8), (uVar9 & 1) != 0
       )) {
      pIVar12 = (Isolate *)(local_e8 & 0xffffffff00000000);
      uVar9 = (ulong)pIVar12 | (ulong)*(uint *)(local_e8 + 0xf);
      if (*(short *)(((ulong)pIVar12 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x5b) {
        uVar9 = (ulong)pIVar12 | (ulong)*(uint *)(uVar9 + 0xb);
      }
      pIVar1 = pIVar12 + 0x95b8;
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar12 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar12 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar12);
        }
        *(ulong **)(pIVar12 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar9;
      }
      else {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar9);
      }
      local_108 = 2;
      clock_gettime(1,&local_a8);
      local_100 = local_a8.tv_nsec + local_a8.tv_sec * 1000000000;
      if (*(int *)(local_e0 + 0x17) < 0) {
        local_f8 = Code::OffHeapInstructionStart((Code *)&local_e0);
      }
      else {
        local_f8 = local_e0 + 0x3f;
      }
      uVar9 = local_e0;
      uStack_f0 = (ulong)(uint)-iVar11;
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar12 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar12 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar12);
        }
        *(ulong **)(pIVar12 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar9;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,local_e0);
      }
      uVar9 = local_e8;
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar12 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar12 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar12);
        }
        *(ulong **)(pIVar12 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,local_e8);
      }
      uVar10 = local_e0 & 0xffffffff00000000;
      uVar9 = uVar10 | *(uint *)(local_e0 + 0xb);
      if (((*(uint *)(local_e0 + 0xb) & 1) == 0) ||
         (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x85)) {
        uVar9 = uVar10 | *(uint *)(uVar9 + 3);
      }
      SourcePositionTableIterator::SourcePositionTableIterator
                ((SourcePositionTableIterator *)&local_a8,uVar9,0);
      while (local_90 != -1) {
        local_b0 = local_80;
        if ((*(byte *)(*puVar4 + 0x17) >> 6 & 1) == 0) {
          SourcePositionInfo::SourcePositionInfo((SourcePositionInfo *)&local_130,local_80,puVar5);
          if (local_120 == (ulong *)0x0) goto LAB_014ecc64;
LAB_014ecce0:
          local_c8 = (undefined8 *)*local_120;
          puVar6 = (undefined8 *)Script::GetNameOrSourceURL((Script *)&local_c8);
          if ((((ulong)puVar6 & 1) == 0) ||
             (uVar9 = (ulong)puVar6 & 0xffffffff00000000 | 7,
             0x3f < *(ushort *)(uVar9 + *(uint *)((long)puVar6 - 1)))) goto LAB_014ecc64;
          local_c8 = puVar6;
          if ((*(byte *)(uVar9 + *(uint *)((long)puVar6 - 1)) >> 3 & 1) == 0) {
            String::ToCString(&local_b0,&local_c8,1,1,&local_d8);
            pcVar8 = local_b0;
            local_b0 = (char *)0x0;
            if (pcVar8 != (char *)0x0) {
              operator_delete__(pcVar8);
            }
            iVar11 = (int)local_d8;
          }
          else {
            iVar11 = *(int *)((long)puVar6 + 7);
          }
        }
        else {
          SourcePosition::InliningStack(&local_c8,&local_b0,puVar4);
          uStack_128 = local_c8[1];
          local_130 = *local_c8;
          local_118 = local_c8[3];
          local_120 = (ulong *)local_c8[2];
          if (local_c8 != (undefined8 *)0x0) {
            local_c0 = local_c8;
            operator_delete(local_c8);
          }
          if (local_120 != (ulong *)0x0) goto LAB_014ecce0;
LAB_014ecc64:
          iVar11 = 9;
        }
        iVar14 = iVar14 + iVar11 + 1;
        SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
      }
      uVar2 = iVar14 + 7U & 0xfffffff8;
      local_104 = uVar2;
      fwrite(&local_108,1,0x20,perf_output_handle_);
      if (*(int *)(local_e0 + 0x17) < 0) {
        lVar7 = Code::OffHeapInstructionStart((Code *)&local_e0);
      }
      else {
        lVar7 = local_e0 + 0x3f;
      }
      uVar10 = local_e0 & 0xffffffff00000000;
      uVar9 = uVar10 | *(uint *)(local_e0 + 0xb);
      if (((*(uint *)(local_e0 + 0xb) & 1) == 0) ||
         (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x85)) {
        uVar9 = uVar10 | *(uint *)(uVar9 + 3);
      }
      SourcePositionTableIterator::SourcePositionTableIterator
                ((SourcePositionTableIterator *)&local_a8,uVar9,0);
      if (local_90 != -1) {
        do {
          local_b0 = local_80;
          if ((*(byte *)(*puVar4 + 0x17) >> 6 & 1) == 0) {
            SourcePositionInfo::SourcePositionInfo((SourcePositionInfo *)&local_130,local_80,puVar5)
            ;
          }
          else {
            SourcePosition::InliningStack(&local_c8,&local_b0,puVar4);
            uStack_128 = local_c8[1];
            local_130 = *local_c8;
            local_118 = local_c8[3];
            local_120 = (ulong *)local_c8[2];
            if (local_c8 != (undefined8 *)0x0) {
              local_c0 = local_c8;
              operator_delete(local_c8);
            }
          }
          local_c8 = (undefined8 *)(lVar7 + 0x40 + (long)local_88);
          local_c0 = (undefined8 *)CONCAT44((int)((ulong)local_118 >> 0x20) + 1,(int)local_118 + 1);
          fwrite(&local_c8,1,0x10,perf_output_handle_);
          if (local_120 == (ulong *)0x0) {
LAB_014ecf14:
            pcVar13 = (char *)0x0;
            iVar11 = 9;
            pcVar8 = "<unknown>";
          }
          else {
            local_b0 = (char *)*local_120;
            uVar9 = Script::GetNameOrSourceURL((Script *)&local_b0);
            if ((uVar9 & 1) == 0) goto LAB_014ecf14;
            uVar10 = uVar9 & 0xffffffff00000000 | 7;
            if (((*(ushort *)(uVar10 + *(uint *)(uVar9 - 1)) < 0x40) &&
                ((*(byte *)(uVar10 + *(uint *)(uVar9 - 1)) & 7) == 0)) &&
               ((*(byte *)(uVar10 + *(uint *)(uVar9 - 1)) >> 3 & 1) != 0)) {
              iVar11 = *(int *)(uVar9 + 7);
              pcVar13 = (char *)0x0;
              pcVar8 = (char *)(uVar9 + 0xb);
            }
            else {
              if (0x3f < *(ushort *)(uVar10 + *(uint *)(uVar9 - 1))) goto LAB_014ecf14;
              local_d8 = uVar9;
              String::ToCString(&local_b0,&local_d8,1,1,&local_cc);
              pcVar8 = local_b0;
              pcVar13 = local_b0;
              iVar11 = local_cc;
            }
          }
          fwrite(pcVar8,1,(long)(iVar11 + 1),perf_output_handle_);
          if (pcVar13 != (char *)0x0) {
            operator_delete__(pcVar13);
          }
          SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
        } while (local_90 != -1);
      }
      local_a8.tv_sec = 0;
      fwrite(&local_a8,1,(long)(int)(uVar2 - iVar14),perf_output_handle_);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

