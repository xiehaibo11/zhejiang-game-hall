
/* v8::internal::MicrotaskQueue::EnqueueMicrotask(v8::Isolate*, void (*)(void*), void*) */

void __thiscall
v8::internal::MicrotaskQueue::EnqueueMicrotask
          (MicrotaskQueue *this,Isolate *param_1,_func_void_void_ptr *param_2,void *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar4 = Factory::NewForeign((Factory *)param_1,(ulong)param_2);
  uVar5 = Factory::NewForeign((Factory *)param_1,(ulong)param_3);
  puVar6 = (undefined8 *)Factory::NewCallbackTask((Factory *)param_1,uVar4,uVar5);
  uVar12 = *(ulong *)(this + 8);
  uVar8 = *(ulong *)(this + 0x10);
  uVar4 = *puVar6;
  if (uVar12 != uVar8) {
    lVar11 = *(long *)(this + 0x18);
    pvVar7 = *(void **)(this + 0x20);
    goto LAB_00f60018;
  }
  uVar8 = uVar12 * 2;
  if ((long)uVar8 < 9) {
    uVar8 = 8;
  }
  uVar9 = uVar8 << 3;
  if (uVar8 >> 0x3d != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new__(uVar9);
  pvVar10 = *(void **)(this + 0x20);
  if ((long)uVar12 < 1) {
    if (pvVar10 != (void *)0x0) goto LAB_00f60000;
  }
  else {
    lVar11 = *(long *)(this + 0x18);
    uVar9 = 0;
    do {
      lVar3 = 0;
      if (uVar12 != 0) {
        lVar3 = (long)(lVar11 + uVar9) / (long)uVar12;
      }
      *(undefined8 *)((long)pvVar7 + uVar9 * 8) =
           *(undefined8 *)((long)pvVar10 + ((lVar11 + uVar9) - lVar3 * uVar12) * 8);
      uVar9 = uVar9 + 1;
    } while (uVar12 != uVar9);
LAB_00f60000:
    operator_delete__(pvVar10);
    uVar12 = *(ulong *)(this + 8);
  }
  lVar11 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 0x20) = pvVar7;
  *(ulong *)(this + 0x10) = uVar8;
LAB_00f60018:
  lVar3 = 0;
  if (uVar8 != 0) {
    lVar3 = (long)(lVar11 + uVar12) / (long)uVar8;
  }
  *(undefined8 *)((long)pvVar7 + ((lVar11 + uVar12) - lVar3 * uVar8) * 8) = uVar4;
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  if (param_1 != (Isolate *)0x0) {
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions((Isolate *)param_1);
      return;
    }
  }
  return;
}

