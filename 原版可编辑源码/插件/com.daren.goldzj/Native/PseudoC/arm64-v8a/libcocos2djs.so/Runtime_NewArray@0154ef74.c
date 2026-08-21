
/* v8::internal::Runtime_NewArray(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_NewArray(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long local_70;
  ulong *puStack_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_0154f2e0(param_1,param_2,param_3);
    return uVar11;
  }
  puStack_68 = param_2 + -1;
  local_70 = (long)(param_1 + -3);
  uVar11 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar13 = *(ulong *)((long)param_2 - (long)(param_1 * 8 + -0x10));
  if (((uVar13 & 1) == 0) ||
     (*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[argc + 1].IsJSReceiver()");
  }
  puVar14 = (ulong *)((long)param_2 - (long)(param_1 * 8 + -8));
  uVar13 = *puVar14;
  if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[argc + 2].IsHeapObject()");
  }
  if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x55) {
    puVar14 = (ulong *)0x0;
  }
  if (param_1 + -3 == 1) {
    iVar12 = (int)*puStack_68;
    if ((*puStack_68 & 1) == 0) {
      bVar4 = false;
      if (iVar12 < 0) {
        bVar6 = false;
        bVar5 = false;
      }
      else {
        bVar6 = false;
        bVar5 = false;
        if ((uint)(iVar12 >> 1) < 0x2000001) {
          bVar6 = iVar12 >> 1 != 0;
          bVar4 = 0x7ff7 < iVar12 && bVar6;
          bVar5 = puVar14 != (ulong *)0x0;
        }
      }
    }
    else {
      bVar4 = false;
      bVar6 = false;
      bVar5 = false;
    }
  }
  else {
    bVar4 = false;
    bVar6 = false;
    bVar5 = puVar14 != (ulong *)0x0;
  }
  plVar7 = (long *)JSFunction::GetDerivedMap(param_3);
  if (plVar7 != (long *)0x0) {
    if (bVar5) {
      uVar13 = (ulong)(*(byte *)(*puVar14 + 3) >> 1 & 0x1f);
    }
    else {
      uVar13 = (ulong)(*(byte *)(*plVar7 + 10) >> 3);
    }
    if ((bVar6) && ((uVar15 = (uint)uVar13, 5 < uVar15 || ((uVar13 & 1) == 0)))) {
      if ((uVar15 < 7) && ((0x55U >> uVar13 & 1) != 0)) {
        uVar13 = 0x7010501030101 >> ((ulong)(uVar15 << 3) & 0x3f);
      }
      if (puVar14 != (ulong *)0x0) {
        *(uint *)(*puVar14 + 3) = *(uint *)(*puVar14 + 3) & 0xffffffc0 | ((uint)uVar13 & 0xff) << 1;
      }
    }
    uVar8 = Map::AsElementsKind(param_3,plVar7,uVar13 & 0xffffffff);
    puVar1 = puVar14;
    if (1 < ((uint)uVar13 & 0xff)) {
      puVar1 = (ulong *)0x0;
    }
    pIVar9 = (Isolate *)Factory::NewJSObjectFromMap(param_3,uVar8,0,puVar1);
    Factory::NewJSArrayStorage((Factory *)param_3,pIVar9,0,0,0);
    bVar3 = *(byte *)((*(ulong *)pIVar9 & 0xffffffff00000000 | 10) +
                     (ulong)*(uint *)(*(ulong *)pIVar9 - 1));
    lVar10 = ArrayConstructInitializeElements(pIVar9,&local_70);
    if (lVar10 != 0) {
      bVar3 = *(byte *)((*(ulong *)pIVar9 & 0xffffffff00000000 | 10) +
                       (ulong)*(uint *)(*(ulong *)pIVar9 - 1)) ^ bVar3;
      if (puVar14 == (ulong *)0x0) {
        if ((!(bool)(bVar3 < 8 & (bVar4 ^ 1U))) && (*(int *)(*(long *)(param_3 + 0xea0) + 0xb) == 2)
           ) {
          Protectors::InvalidateArrayConstructor(param_3);
        }
      }
      else if ((bVar4 || !bVar5) || (7 < bVar3)) {
        *(uint *)(*puVar14 + 3) = *(uint *)(*puVar14 + 3) & 0xfffffffe | 0x40;
      }
      goto LAB_0154f1f4;
    }
  }
  pIVar9 = param_3 + 0x180;
LAB_0154f1f4:
  uVar8 = *(undefined8 *)pIVar9;
  *(undefined8 *)(param_3 + 0x95a0) = uVar11;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

