
/* v8::internal::Runtime_NewArgumentsElements(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_NewArgumentsElements(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_0158c7b4(param_1,param_2,param_3);
    return uVar8;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar6 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((param_2[-1] & 1) == 0) {
    if ((param_2[-2] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsSmi()");
    }
    uVar11 = *param_2;
    uVar2 = (int)param_2[-1] >> 1;
    uVar3 = (int)param_2[-2] >> 1;
    puVar7 = (ulong *)Factory::NewUninitializedFixedArray((Factory *)param_3,uVar2);
    uVar13 = *puVar7;
    uVar8 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
    uVar4 = uVar3;
    if ((int)uVar2 <= (int)uVar3) {
      uVar4 = uVar2;
    }
    if (0 < (int)uVar4) {
      iVar10 = 0;
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
        *(undefined4 *)(uVar13 + (long)iVar10 + 7) = *(undefined4 *)(param_3 + 0xa8);
        uVar13 = *puVar7;
        iVar10 = iVar10 + 4;
      } while (uVar12 < uVar4);
    }
    if ((int)uVar3 < (int)uVar2) {
      lVar15 = (long)(int)uVar4;
      iVar10 = (uVar2 - uVar4) + 1;
      iVar14 = uVar4 << 2;
      do {
        uVar12 = *(ulong *)(uVar11 + (long)iVar10 * 8);
        *(int *)(uVar13 + (long)iVar14 + 7) = (int)uVar12;
        if (((uVar8 & 0x40000) != 0 || (uVar8 & 0x18) == 0) && (uVar12 & 1) != 0) {
          uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          lVar1 = uVar13 + (long)iVar14 + 7;
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,lVar1,uVar12);
            uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar12);
          }
        }
        uVar13 = *puVar7;
        lVar15 = lVar15 + 1;
        iVar10 = iVar10 + -1;
        iVar14 = iVar14 + 4;
      } while (lVar15 < (int)uVar2);
      if (param_3 == (Isolate *)0x0) {
        return uVar13;
      }
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar6) {
      *(long *)(param_3 + 0x95a8) = lVar6;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].IsSmi()");
}

