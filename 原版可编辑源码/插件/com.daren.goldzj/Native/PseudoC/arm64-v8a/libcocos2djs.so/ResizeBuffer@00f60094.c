
/* v8::internal::MicrotaskQueue::ResizeBuffer(long) */

void __thiscall v8::internal::MicrotaskQueue::ResizeBuffer(MicrotaskQueue *this,long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = param_1 << 3;
  if ((ulong)param_1 >> 0x3d != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new__(uVar5);
  lVar7 = *(long *)(this + 8);
  pvVar6 = *(void **)(this + 0x20);
  if (lVar7 < 1) {
    if (pvVar6 == (void *)0x0) goto LAB_00f60108;
  }
  else {
    lVar1 = *(long *)(this + 0x10);
    lVar2 = *(long *)(this + 0x18);
    lVar8 = 0;
    do {
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = (lVar2 + lVar8) / lVar1;
      }
      *(undefined8 *)((long)pvVar4 + lVar8 * 8) =
           *(undefined8 *)((long)pvVar6 + ((lVar2 + lVar8) - lVar3 * lVar1) * 8);
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar7);
  }
  operator_delete__(pvVar6);
LAB_00f60108:
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 0x20) = pvVar4;
  *(long *)(this + 0x10) = param_1;
  return;
}

