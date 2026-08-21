
/* v8::internal::Runtime_NewStrictArguments(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_NewStrictArguments(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  void *local_70;
  int local_64;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_0158aa18(param_1,param_2,param_3);
    return uVar7;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439)) {
    local_64 = 0;
    FUN_01591ac0(&local_70,param_3,&local_64);
    iVar12 = local_64;
    puVar5 = (ulong *)Factory::NewArgumentsObject((Factory *)param_3,param_2,local_64);
    if (iVar12 != 0) {
      puVar6 = (ulong *)Factory::NewUninitializedFixedArray((Factory *)param_3,iVar12);
      uVar7 = *puVar6;
      if (0 < iVar12) {
        uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        iVar12 = 0;
        lVar11 = 0;
        do {
          uVar10 = **(ulong **)((long)local_70 + lVar11 * 8);
          *(int *)(uVar7 + (long)iVar12 + 7) = (int)uVar10;
          if (((uVar8 & 0x40000) != 0 || (uVar8 & 0x18) == 0) && (uVar10 & 1) != 0) {
            uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar7 + (long)iVar12 + 7;
            if (((uint)uVar9 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar7,lVar1,uVar10);
              uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar10);
            }
          }
          uVar7 = *puVar6;
          lVar11 = lVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (lVar11 < local_64);
      }
      uVar8 = *puVar5;
      *(int *)(uVar8 + 7) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar10 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar7);
          uVar10 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar7);
        }
      }
    }
    pvVar4 = local_70;
    uVar7 = *puVar5;
    local_70 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

