
/* v8::internal::MicrotaskQueue::EnqueueMicrotask(v8::Isolate*, v8::Local<v8::Function>) */

void __thiscall
v8::internal::MicrotaskQueue::EnqueueMicrotask
          (MicrotaskQueue *this,Isolate *param_1,undefined8 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  pIVar1 = param_1 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar2;
    if (puVar3 == puVar2) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
  }
  puVar6 = (undefined8 *)Factory::NewCallableTask((Factory *)param_1,param_3,puVar5);
  uVar13 = *(ulong *)(this + 8);
  uVar8 = *(ulong *)(this + 0x10);
  uVar12 = *puVar6;
  if (uVar13 != uVar8) {
    lVar11 = *(long *)(this + 0x18);
    pvVar7 = *(void **)(this + 0x20);
    goto LAB_00f5fea0;
  }
  uVar8 = uVar13 * 2;
  if ((long)uVar8 < 9) {
    uVar8 = 8;
  }
  uVar9 = uVar8 << 3;
  if (uVar8 >> 0x3d != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new__(uVar9);
  pvVar10 = *(void **)(this + 0x20);
  if ((long)uVar13 < 1) {
    if (pvVar10 != (void *)0x0) goto LAB_00f5fe88;
  }
  else {
    lVar11 = *(long *)(this + 0x18);
    uVar9 = 0;
    do {
      lVar4 = 0;
      if (uVar13 != 0) {
        lVar4 = (long)(lVar11 + uVar9) / (long)uVar13;
      }
      *(undefined8 *)((long)pvVar7 + uVar9 * 8) =
           *(undefined8 *)((long)pvVar10 + ((lVar11 + uVar9) - lVar4 * uVar13) * 8);
      uVar9 = uVar9 + 1;
    } while (uVar13 != uVar9);
LAB_00f5fe88:
    operator_delete__(pvVar10);
    uVar13 = *(ulong *)(this + 8);
  }
  lVar11 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 0x20) = pvVar7;
  *(ulong *)(this + 0x10) = uVar8;
LAB_00f5fea0:
  lVar4 = 0;
  if (uVar8 != 0) {
    lVar4 = (long)(lVar11 + uVar13) / (long)uVar8;
  }
  *(undefined8 *)((long)pvVar7 + ((lVar11 + uVar13) - lVar4 * uVar8) * 8) = uVar12;
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  if (param_1 != (Isolate *)0x0) {
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
      *(ulong **)(param_1 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_1);
      return;
    }
  }
  return;
}

