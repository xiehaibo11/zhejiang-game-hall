
/* v8::internal::Runtime_NewRestParameter(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_NewRestParameter(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  void *pvVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  void *local_70;
  int local_64;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_0158aff8(param_1,param_2,param_3);
    return uVar9;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) != 0) &&
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x439)) {
    uVar5 = *(ushort *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x15);
    local_64 = 0;
    FUN_01591ac0(&local_70,param_3,&local_64);
    uVar6 = local_64 - (uint)uVar5;
    uVar2 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    puVar8 = (ulong *)Factory::NewJSArray((Factory *)param_3,2,uVar2,uVar2,0,0);
    uVar9 = *puVar8;
    if (0 < (int)uVar6) {
      iVar15 = 0;
      uVar13 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7);
      uVar10 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7) & 0xfffffffffffc0000;
      uVar12 = *(ulong *)(uVar10 + 8);
      uVar9 = 0;
      do {
        puVar1 = (undefined4 *)(uVar13 + 7 + (long)iVar15);
        uVar14 = **(ulong **)((long)local_70 + uVar9 * 8 + (ulong)uVar5 * 8);
        *puVar1 = (int)uVar14;
        if (((uVar12 & 0x40000) != 0 || (uVar12 & 0x18) == 0) && (uVar14 & 1) != 0) {
          uVar11 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,puVar1,uVar14);
            uVar11 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)(uVar10 | 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar14);
          }
        }
        uVar9 = uVar9 + 1;
        iVar15 = iVar15 + 4;
      } while (uVar9 < uVar2);
      uVar9 = *puVar8;
    }
    pvVar7 = local_70;
    local_70 = (void *)0x0;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
    }
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar4) {
        *(long *)(param_3 + 0x95a8) = lVar4;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

