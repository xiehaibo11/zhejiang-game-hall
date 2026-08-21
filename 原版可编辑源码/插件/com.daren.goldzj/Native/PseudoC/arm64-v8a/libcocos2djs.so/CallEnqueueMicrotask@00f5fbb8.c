
/* v8::internal::MicrotaskQueue::CallEnqueueMicrotask(v8::internal::Isolate*, long, unsigned long)
    */

undefined8
v8::internal::MicrotaskQueue::CallEnqueueMicrotask(Isolate *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_2 + 8);
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar8 != uVar4) {
    lVar7 = *(long *)(param_2 + 0x18);
    pvVar3 = *(void **)(param_2 + 0x20);
    goto LAB_00f5fc64;
  }
  uVar4 = uVar8 * 2;
  if ((long)uVar4 < 9) {
    uVar4 = 8;
  }
  uVar5 = uVar4 << 3;
  if (uVar4 >> 0x3d != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar5);
  pvVar6 = *(void **)(param_2 + 0x20);
  if ((long)uVar8 < 1) {
    if (pvVar6 != (void *)0x0) goto LAB_00f5fc4c;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x18);
    uVar5 = 0;
    do {
      lVar1 = lVar7 + uVar5;
      lVar2 = 0;
      if (uVar8 != 0) {
        lVar2 = lVar1 / (long)uVar8;
      }
      *(undefined8 *)((long)pvVar3 + uVar5 * 8) =
           *(undefined8 *)((long)pvVar6 + (lVar1 - lVar2 * uVar8) * 8);
      uVar5 = uVar5 + 1;
    } while (uVar8 != uVar5);
LAB_00f5fc4c:
    operator_delete__(pvVar6);
    uVar8 = *(ulong *)(param_2 + 8);
  }
  lVar7 = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(void **)(param_2 + 0x20) = pvVar3;
  *(ulong *)(param_2 + 0x10) = uVar4;
LAB_00f5fc64:
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = (long)(lVar7 + uVar8) / (long)uVar4;
  }
  *(ulong *)((long)pvVar3 + ((lVar7 + uVar8) - lVar1 * uVar4) * 8) = param_3;
  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
  return *(undefined8 *)(param_1 + 0xa0);
}

