
undefined8 FUN_0154f2e0(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  ulong *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xc1);
  }
  if (DAT_01d46c98 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c98 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d46c98;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46c98 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (ulong *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar6,"V8.Runtime_Runtime_NewArray",0,0,0,0,0,0,0,&local_70,0);
    puVar15 = local_68;
    local_68 = (ulong *)0x0;
    if (puVar15 != (ulong *)0x0) {
      (**(code **)(*puVar15 + 8))();
    }
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_NewArray";
    local_b8 = pbVar6;
    local_a8 = uVar9;
  }
  local_68 = param_2 + -1;
  local_70 = (long *)(long)(param_1 + -3);
  uVar9 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar14 = *param_2;
  if (((uVar14 & 1) == 0) ||
     (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar14 = *(ulong *)((long)param_2 - (long)(param_1 * 8 + -0x10));
  if (((uVar14 & 1) == 0) ||
     (*(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[argc + 1].IsJSReceiver()");
  }
  puVar15 = (ulong *)((long)param_2 - (long)(param_1 * 8 + -8));
  uVar14 = *puVar15;
  if ((uVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[argc + 2].IsHeapObject()");
  }
  if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x55) {
    puVar15 = (ulong *)0x0;
  }
  if (param_1 + -3 == 1) {
    iVar13 = (int)*local_68;
    if ((*local_68 & 1) == 0) {
      bVar4 = false;
      if (iVar13 < 0) {
        bVar7 = false;
        bVar5 = false;
      }
      else {
        bVar7 = false;
        bVar5 = false;
        if ((uint)(iVar13 >> 1) < 0x2000001) {
          bVar7 = iVar13 >> 1 != 0;
          bVar4 = 0x7ff7 < iVar13 && bVar7;
          bVar5 = puVar15 != (ulong *)0x0;
        }
      }
    }
    else {
      bVar4 = false;
      bVar7 = false;
      bVar5 = false;
    }
  }
  else {
    bVar4 = false;
    bVar7 = false;
    bVar5 = puVar15 != (ulong *)0x0;
  }
  plVar8 = (long *)v8::internal::JSFunction::GetDerivedMap(param_3,param_2);
  if (plVar8 != (long *)0x0) {
    if (bVar5) {
      uVar14 = (ulong)(*(byte *)(*puVar15 + 3) >> 1 & 0x1f);
    }
    else {
      uVar14 = (ulong)(*(byte *)(*plVar8 + 10) >> 3);
    }
    if ((bVar7) && ((uVar16 = (uint)uVar14, 5 < uVar16 || ((uVar14 & 1) == 0)))) {
      if ((uVar16 < 7) && ((0x55U >> uVar14 & 1) != 0)) {
        uVar14 = 0x7010501030101 >> ((ulong)(uVar16 << 3) & 0x3f);
      }
      if (puVar15 != (ulong *)0x0) {
        *(uint *)(*puVar15 + 3) = *(uint *)(*puVar15 + 3) & 0xffffffc0 | ((uint)uVar14 & 0xff) << 1;
      }
    }
    uVar10 = v8::internal::Map::AsElementsKind(param_3,plVar8,uVar14 & 0xffffffff);
    puVar1 = puVar15;
    if (1 < ((uint)uVar14 & 0xff)) {
      puVar1 = (ulong *)0x0;
    }
    pIVar11 = (Isolate *)v8::internal::Factory::NewJSObjectFromMap(param_3,uVar10,0,puVar1);
    v8::internal::Factory::NewJSArrayStorage((Factory *)param_3,pIVar11,0,0,0);
    bVar3 = *(byte *)((*(ulong *)pIVar11 & 0xffffffff00000000 | 10) +
                     (ulong)*(uint *)(*(ulong *)pIVar11 - 1));
    lVar12 = v8::internal::ArrayConstructInitializeElements(pIVar11,&local_70);
    if (lVar12 != 0) {
      bVar3 = *(byte *)((*(ulong *)pIVar11 & 0xffffffff00000000 | 10) +
                       (ulong)*(uint *)(*(ulong *)pIVar11 - 1)) ^ bVar3;
      if (puVar15 == (ulong *)0x0) {
        if ((!(bool)(bVar3 < 8 & (bVar4 ^ 1U))) && (*(int *)(*(long *)(param_3 + 0xea0) + 0xb) == 2)
           ) {
          v8::internal::Protectors::InvalidateArrayConstructor(param_3);
        }
      }
      else if ((bVar4 || !bVar5) || (7 < bVar3)) {
        *(uint *)(*puVar15 + 3) = *(uint *)(*puVar15 + 3) & 0xfffffffe | 0x40;
      }
      goto LAB_0154f644;
    }
  }
  pIVar11 = param_3 + 0x180;
LAB_0154f644:
  uVar10 = *(undefined8 *)pIVar11;
  *(undefined8 *)(param_3 + 0x95a0) = uVar9;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar10;
}

