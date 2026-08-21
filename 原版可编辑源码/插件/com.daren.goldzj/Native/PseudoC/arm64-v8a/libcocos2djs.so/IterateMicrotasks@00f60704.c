
/* v8::internal::MicrotaskQueue::IterateMicrotasks(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::MicrotaskQueue::IterateMicrotasks(MicrotaskQueue *this,RootVisitor *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(this + 8) != 0) {
    lVar9 = *(long *)(this + 0x18) + *(long *)(this + 8);
    lVar5 = *(long *)(this + 0x10);
    if (lVar9 <= *(long *)(this + 0x10)) {
      lVar5 = lVar9;
    }
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,0xf,0,*(long *)(this + 0x20) + *(long *)(this + 0x18) * 8,
               *(long *)(this + 0x20) + lVar5 * 8);
    uVar2 = (*(long *)(this + 8) + *(long *)(this + 0x18)) - *(long *)(this + 0x10);
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,0xf,0,*(long *)(this + 0x20),
               *(long *)(this + 0x20) + (uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU)) * 8);
  }
  uVar2 = *(ulong *)(this + 0x10);
  if ((long)uVar2 < 9) {
    return;
  }
  lVar9 = *(long *)(this + 8);
  uVar3 = uVar2;
  do {
    uVar6 = uVar3;
    uVar3 = (long)uVar6 >> 1;
  } while (lVar9 * 2 < (long)uVar6);
  if ((long)uVar6 < 9) {
    uVar6 = 8;
  }
  if ((long)uVar2 <= (long)uVar6) {
    return;
  }
  uVar3 = uVar6 << 3;
  if (uVar6 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  puVar1 = operator_new__(uVar3);
  pvVar4 = *(void **)(this + 0x20);
  if (lVar9 < 1) {
    if (pvVar4 == (void *)0x0) goto LAB_00f60820;
  }
  else {
    lVar5 = *(long *)(this + 0x18);
    puVar7 = puVar1;
    do {
      lVar8 = 0;
      if (uVar2 != 0) {
        lVar8 = lVar5 / (long)uVar2;
      }
      lVar8 = lVar5 - lVar8 * uVar2;
      lVar9 = lVar9 + -1;
      lVar5 = lVar5 + 1;
      *puVar7 = *(undefined8 *)((long)pvVar4 + lVar8 * 8);
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
  }
  operator_delete__(pvVar4);
LAB_00f60820:
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 **)(this + 0x20) = puVar1;
  *(ulong *)(this + 0x10) = uVar6;
  return;
}

