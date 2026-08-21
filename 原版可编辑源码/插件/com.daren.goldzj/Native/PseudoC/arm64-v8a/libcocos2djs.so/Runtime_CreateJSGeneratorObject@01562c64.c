
/* v8::internal::Runtime_CreateJSGeneratorObject(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_CreateJSGeneratorObject(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_015630a4(param_1,param_2,param_3);
    return uVar10;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if ((uVar10 & 1) != 0) {
    uVar7 = uVar10 & 0xffffffff00000000;
    uVar9 = uVar7 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar10 - 1)) == 0x439) {
      if ((((*(uint *)((uVar7 | *(uint *)(uVar10 + 0xb)) + 0x1b) & 0x1f) - 10 & 0xff) < 5) &&
         (1 < ((*(uint *)((uVar7 | *(uint *)(uVar10 + 0xb)) + 0x1b) & 0x1f) - 0xd & 0xff))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "IsAsyncFunction(function->shared().kind()) implies IsAsyncGeneratorFunction(function->shared().kind())"
                );
      }
      uVar8 = *(uint *)((uVar7 | *(uint *)(uVar10 + 0xb)) + 0x1b) & 0x1f;
      if ((6 < uVar8 - 10) && (1 < uVar8 - 1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsResumableFunction(function->shared().kind())");
      }
      uVar11 = uVar7 | *(uint *)(uVar10 + 0xb);
      uVar12 = uVar7 | *(uint *)(uVar11 + 0xf);
      if ((*(short *)(uVar9 + *(uint *)(uVar12 - 1)) == 0x5b) &&
         (*(short *)(uVar9 + *(uint *)((uVar7 | *(uint *)(uVar12 + 0x13)) - 1)) == 0x86)) {
        uVar8 = *(uint *)(uVar12 + 0xf);
      }
      else {
        uVar8 = *(uint *)(uVar11 + 3);
        if (((uVar8 & 1) == 0) || (*(short *)(uVar9 + *(uint *)((uVar7 | uVar8) - 1)) != 0x86)) {
          uVar8 = *(uint *)((uVar7 | *(uint *)(uVar11 + 3)) + 3);
        }
        else {
          uVar8 = *(uint *)(uVar11 + 3);
        }
      }
      iVar4 = *(int *)((uVar7 | uVar8) + 0x13);
      iVar1 = iVar4 + 7;
      if (-1 < iVar4) {
        iVar1 = iVar4;
      }
      puVar5 = (ulong *)Factory::NewFixedArray
                                  ((Factory *)param_3,
                                   (uint)*(ushort *)((uVar7 | *(uint *)(uVar10 + 0xb)) + 0x15) +
                                   (iVar1 >> 3),0);
      puVar6 = (ulong *)Factory::NewJSGeneratorObject((Factory *)param_3,param_2);
      uVar7 = *puVar6;
      uVar10 = *param_2;
      *(int *)(uVar7 + 0xb) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar10);
        }
      }
      uVar7 = *puVar6;
      uVar10 = *(ulong *)(param_3 + 0x2bc8);
      *(int *)(uVar7 + 0xf) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xf,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xf,uVar10);
        }
      }
      uVar7 = *puVar6;
      uVar10 = param_2[-1];
      *(int *)(uVar7 + 0x13) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x13,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x13,uVar10);
        }
      }
      uVar7 = *puVar6;
      uVar10 = *puVar5;
      *(int *)(uVar7 + 0x23) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x23,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x23,uVar10);
        }
      }
      *(undefined4 *)(*puVar6 + 0x1b) = 0;
      *(undefined4 *)(*puVar6 + 0x1f) = 0xfffffffc;
      uVar10 = *puVar6;
      if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x419) {
        *(undefined4 *)(uVar10 + 0x2b) = 0;
        uVar10 = *puVar6;
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

