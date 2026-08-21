
ulong FUN_015630a4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
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
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x128);
  }
  if (DAT_01d46ee8 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46ee8 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46ee8;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46ee8 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_CreateJSGeneratorObject",0,0,0,0,0,0,0
                       ,&local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_CreateJSGeneratorObject";
    local_b8 = pbVar4;
    local_a8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if ((uVar12 & 1) != 0) {
    uVar9 = uVar12 & 0xffffffff00000000;
    uVar11 = uVar9 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x439) {
      if ((((*(uint *)((uVar9 | *(uint *)(uVar12 + 0xb)) + 0x1b) & 0x1f) - 10 & 0xff) < 5) &&
         (1 < ((*(uint *)((uVar9 | *(uint *)(uVar12 + 0xb)) + 0x1b) & 0x1f) - 0xd & 0xff))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "IsAsyncFunction(function->shared().kind()) implies IsAsyncGeneratorFunction(function->shared().kind())"
                );
      }
      uVar10 = *(uint *)((uVar9 | *(uint *)(uVar12 + 0xb)) + 0x1b) & 0x1f;
      if ((6 < uVar10 - 10) && (1 < uVar10 - 1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsResumableFunction(function->shared().kind())");
      }
      uVar13 = uVar9 | *(uint *)(uVar12 + 0xb);
      uVar14 = uVar9 | *(uint *)(uVar13 + 0xf);
      if ((*(short *)(uVar11 + *(uint *)(uVar14 - 1)) == 0x5b) &&
         (*(short *)(uVar11 + *(uint *)((uVar9 | *(uint *)(uVar14 + 0x13)) - 1)) == 0x86)) {
        uVar10 = *(uint *)(uVar14 + 0xf);
      }
      else {
        uVar10 = *(uint *)(uVar13 + 3);
        if (((uVar10 & 1) == 0) || (*(short *)(uVar11 + *(uint *)((uVar9 | uVar10) - 1)) != 0x86)) {
          uVar10 = *(uint *)((uVar9 | *(uint *)(uVar13 + 3)) + 3);
        }
        else {
          uVar10 = *(uint *)(uVar13 + 3);
        }
      }
      iVar3 = *(int *)((uVar9 | uVar10) + 0x13);
      iVar1 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      puVar7 = (ulong *)v8::internal::Factory::NewFixedArray
                                  ((Factory *)param_3,
                                   (uint)*(ushort *)((uVar9 | *(uint *)(uVar12 + 0xb)) + 0x15) +
                                   (iVar1 >> 3),0);
      puVar8 = (ulong *)v8::internal::Factory::NewJSGeneratorObject((Factory *)param_3,param_2);
      uVar9 = *puVar8;
      uVar12 = *param_2;
      *(int *)(uVar9 + 0xb) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar12);
        }
      }
      uVar9 = *puVar8;
      uVar12 = *(ulong *)(param_3 + 0x2bc8);
      *(int *)(uVar9 + 0xf) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xf,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xf,uVar12);
        }
      }
      uVar9 = *puVar8;
      uVar12 = param_2[-1];
      *(int *)(uVar9 + 0x13) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x13,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x13,uVar12);
        }
      }
      uVar9 = *puVar8;
      uVar12 = *puVar7;
      *(int *)(uVar9 + 0x23) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x23,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x23,uVar12);
        }
      }
      *(undefined4 *)(*puVar8 + 0x1b) = 0;
      *(undefined4 *)(*puVar8 + 0x1f) = 0xfffffffc;
      uVar12 = *puVar8;
      if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x419) {
        *(undefined4 *)(uVar12 + 0x2b) = 0;
        uVar12 = *puVar8;
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar6;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
        plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
      }
      if (local_a0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
      }
      return uVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

