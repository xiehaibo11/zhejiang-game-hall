
/* v8::internal::MicrotaskQueue::EnqueueMicrotask(v8::internal::Microtask) */

void __thiscall
v8::internal::MicrotaskQueue::EnqueueMicrotask(MicrotaskQueue *this,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  if (uVar7 != uVar3) {
    lVar6 = *(long *)(this + 0x18);
    pvVar2 = *(void **)(this + 0x20);
    goto LAB_00f5fd40;
  }
  uVar3 = uVar7 * 2;
  if ((long)uVar3 < 9) {
    uVar3 = 8;
  }
  uVar4 = uVar3 << 3;
  if (uVar3 >> 0x3d != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar4);
  pvVar5 = *(void **)(this + 0x20);
  if ((long)uVar7 < 1) {
    if (pvVar5 != (void *)0x0) goto LAB_00f5fd28;
  }
  else {
    lVar6 = *(long *)(this + 0x18);
    uVar4 = 0;
    do {
      lVar1 = 0;
      if (uVar7 != 0) {
        lVar1 = (long)(lVar6 + uVar4) / (long)uVar7;
      }
      *(undefined8 *)((long)pvVar2 + uVar4 * 8) =
           *(undefined8 *)((long)pvVar5 + ((lVar6 + uVar4) - lVar1 * uVar7) * 8);
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
LAB_00f5fd28:
    operator_delete__(pvVar5);
    uVar7 = *(ulong *)(this + 8);
  }
  lVar6 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 0x20) = pvVar2;
  *(ulong *)(this + 0x10) = uVar3;
LAB_00f5fd40:
  lVar1 = 0;
  if (uVar3 != 0) {
    lVar1 = (long)(uVar7 + lVar6) / (long)uVar3;
  }
  *(undefined8 *)((long)pvVar2 + ((uVar7 + lVar6) - lVar1 * uVar3) * 8) = param_2;
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  return;
}

