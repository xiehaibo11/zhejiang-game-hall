
ulong FUN_011cc4bc(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  Factory *pFVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_a4;
  uint local_a0;
  int local_9c;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x19b);
  }
  if (DAT_01d3fab8 == (byte *)0x0) {
    plVar11 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fab8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11,"disabled-by-default-v8.runtime");
  }
  pbVar7 = DAT_01d3fab8;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3fab8 & 5) != 0) {
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    plVar11 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar12 = (**(code **)(*plVar11 + 0x18))
                       (plVar11,0x58,pbVar7,"V8.Runtime_Runtime_GetProperty",0,0,0,0,0,0,0,&local_98
                        ,0);
    plVar11 = local_90;
    local_90 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    plVar11 = local_98;
    local_98 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_GetProperty";
    local_e8 = pbVar7;
    local_d8 = uVar12;
  }
  uVar12 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar14 = param_2 + -1;
  plVar11 = (long *)*puVar14;
  if ((((ulong)plVar11 & 1) != 0) &&
     (*(ushort *)(((ulong)plVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar11 - 1)) <
      0x40)) {
    uVar10 = *(uint *)((long)plVar11 + 3);
    local_98 = plVar11;
    if ((uVar10 & 0xc0000003) == 0) {
      local_a4 = uVar10 >> 3 & 0xffffff;
    }
    else if (((uVar10 & 3) == 2) ||
            (uVar13 = v8::internal::String::SlowAsArrayIndex((String *)&local_98,&local_a4),
            (uVar13 & 1) == 0)) goto LAB_011cc65c;
    puVar14 = (ulong *)v8::internal::Factory::NewNumberFromUint(param_3,local_a4);
  }
LAB_011cc65c:
  uVar13 = *param_2;
  if ((uVar13 & 1) == 0) goto LAB_011cc664;
  plVar11 = (long *)(uVar13 & 0xffffffff00000000);
  uVar17 = (ulong)plVar11 | 7;
  uVar8 = *(ushort *)(uVar17 + *(uint *)(uVar13 - 1));
  if (*(ushort *)(uVar17 + *(uint *)(uVar13 - 1)) < 0xaa) {
    if ((((0x3f < uVar8) || (iVar9 = (int)*puVar14, (*puVar14 & 1) != 0)) || (iVar9 < 0)) ||
       (iVar9 = iVar9 >> 1, *(int *)(uVar13 + 7) <= iVar9)) goto LAB_011cc664;
    puVar14 = (ulong *)v8::internal::String::Flatten(param_3,param_2,0);
    local_98 = (long *)*puVar14;
    local_a0 = (uint)*(ushort *)
                      (((ulong)local_98 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_98 - 1))
                      + 7);
    local_9c = iVar9;
    uVar8 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_a0,&local_98,&local_9c);
    pFVar15 = (Factory *)v8::internal::Factory::LookupSingleCharacterStringFromCode(param_3,uVar8);
LAB_011cc71c:
    uVar13 = *(ulong *)pFVar15;
  }
  else {
    if (uVar8 == 0xab) {
LAB_011cc6b0:
      if ((*puVar14 & 1) == 0) {
        uVar13 = *param_2;
        bVar4 = *(byte *)((uVar13 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar13 - 1));
        if (((bVar4 & 0xf0) == 0x20) &&
           (*(int *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 7)) + 3) >> 1 <=
            (int)*puVar14 >> 1)) {
          uVar16 = 2;
          if (((uint)(bVar4 < 0x30) & (bVar4 & 8) >> 3) != 0) {
            uVar16 = 3;
          }
          v8::internal::JSObject::TransitionElementsKind(param_2,uVar16);
        }
      }
LAB_011cc664:
      puVar14 = (ulong *)v8::internal::Runtime::GetObjectProperty(param_3,param_2,puVar14,0);
      if (puVar14 == (ulong *)0x0) {
        pFVar15 = param_3 + 0x180;
        goto LAB_011cc71c;
      }
      uVar13 = *puVar14;
    }
    else {
      if (*(short *)(uVar17 + *(uint *)(uVar13 - 1)) != 0xab) {
        if ((*(byte *)(((ulong)plVar11 | 9) + (ulong)*(uint *)(uVar13 - 1)) >> 5 & 1) == 0)
        goto LAB_011cc88c;
        goto LAB_011cc6b0;
      }
      local_98 = (long *)plVar11[0x579];
      iVar9 = v8::internal::Context::global_object((Context *)&local_98);
      local_88 = 0;
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      local_98 = plVar11;
      local_90 = (long *)uVar13;
      v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_98);
      if ((int)local_90 != iVar9) goto LAB_011cc6b0;
LAB_011cc88c:
      uVar13 = *puVar14;
      if (((uVar13 & 1) == 0) ||
         (uVar17 = uVar13 & 0xffffffff00000000 | 7,
         0x40 < *(ushort *)(uVar17 + *(uint *)(uVar13 - 1)))) goto LAB_011cc6b0;
      if ((*(ushort *)(uVar17 + *(uint *)(uVar13 - 1)) & 0xffe0) == 0x20) {
        puVar14 = (ulong *)v8::internal::StringTable::LookupString(param_3,puVar14);
      }
      uVar17 = *param_2;
      uVar13 = uVar17 & 0xffffffff00000000;
      if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xaa) {
        uVar10 = *(uint *)((long)*puVar14 + 3);
        uVar17 = uVar13 | *(uint *)(uVar17 + 3);
        if ((uVar10 & 1) == 0) {
          uVar10 = uVar10 >> 3;
        }
        else {
          local_98 = (long *)*puVar14;
          uVar10 = v8::internal::String::ComputeAndSetHash((String *)&local_98);
        }
        uVar5 = (*(int *)(uVar17 + 0xf) >> 1) - 1;
        uVar10 = uVar5 & uVar10;
        lVar1 = uVar17 + 7;
        uVar19 = *(uint *)(lVar1 + (int)(uVar10 * 4 + 0x14));
        if (uVar19 != *(uint *)(param_3 + 0xa0)) {
          iVar9 = 1;
          do {
            if (*(int *)((uVar13 | uVar19) + 3) == (int)*puVar14) {
              uVar17 = uVar13 | *(uint *)(lVar1 + (int)(uVar10 * 4 + 0x14));
              if ((*(byte *)(uVar17 + 7) >> 1 & 1) == 0) {
                uVar10 = *(uint *)(uVar17 + 0xb);
                uVar13 = uVar13 | uVar10;
                if ((uVar10 & 1) == 0) goto joined_r0x011cc680;
                if (uVar10 != *(uint *)(param_3 + 0xa8)) goto LAB_011cc720;
              }
              break;
            }
            uVar10 = uVar10 + iVar9 & uVar5;
            uVar19 = *(uint *)(lVar1 + (int)(uVar10 * 4 + 0x14));
            iVar9 = iVar9 + 1;
          } while (uVar19 != *(uint *)(param_3 + 0xa0));
        }
        goto LAB_011cc664;
      }
      if ((*(uint *)((uVar13 | 0xb) + (ulong)*(uint *)(uVar17 - 1)) >> 0x15 & 1) == 0)
      goto LAB_011cc664;
      if ((*(uint *)(uVar17 + 3) & 1) == 0) {
        uVar13 = *(ulong *)(uVar13 + 0x410);
      }
      else {
        uVar13 = uVar13 | *(uint *)(uVar17 + 3);
      }
      uVar10 = *(uint *)((long)*puVar14 + 3);
      if ((uVar10 & 1) == 0) {
        uVar10 = uVar10 >> 3;
      }
      else {
        local_98 = (long *)*puVar14;
        uVar10 = v8::internal::String::ComputeAndSetHash((String *)&local_98);
      }
      uVar19 = (*(int *)(uVar13 + 0xf) >> 1) - 1;
      uVar17 = (ulong)(uVar19 & uVar10);
      lVar18 = uVar17 * 0xc00000000;
      lVar1 = uVar13 + 7;
      iVar9 = *(int *)((lVar18 + 0x1400000000 >> 0x20) + lVar1);
      if (iVar9 == *(int *)(param_3 + 0xa0)) goto LAB_011cc664;
      if (iVar9 != (int)*puVar14) {
        iVar9 = 1;
        do {
          uVar17 = (ulong)((int)uVar17 + iVar9 & uVar19);
          lVar18 = uVar17 * 0xc00000000;
          iVar3 = *(int *)((lVar18 + 0x1400000000 >> 0x20) + lVar1);
          if (iVar3 == *(int *)(param_3 + 0xa0)) goto LAB_011cc664;
          iVar9 = iVar9 + 1;
        } while (iVar3 != (int)*puVar14);
      }
      if ((*(uint *)((lVar18 + 0x1c00000000 >> 0x20) + lVar1) >> 1 & 1) != 0) goto LAB_011cc664;
      uVar13 = uVar13 & 0xffffffff00000000 |
               (ulong)*(uint *)((lVar18 + 0x1800000000 >> 0x20) + lVar1);
    }
joined_r0x011cc680:
    if (param_3 == (Factory *)0x0) goto LAB_011cc748;
  }
LAB_011cc720:
  *(undefined8 *)(param_3 + 0x95a0) = uVar12;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
LAB_011cc748:
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar11 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar11 + 0x28))(plVar11,local_e8,local_e0,local_d8);
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}

