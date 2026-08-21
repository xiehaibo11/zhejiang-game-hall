
/* v8::internal::HeapSnapshot::~HeapSnapshot() */

void __thiscall v8::internal::HeapSnapshot::~HeapSnapshot(HeapSnapshot *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  pvVar2 = *(void **)(this + 0x170);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x178) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar10 = *(void **)(this + 0x158);
  while (puVar10 != (void *)0x0) {
    pvVar2 = (void *)*puVar10;
    operator_delete(puVar10);
    puVar10 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x148);
  *(undefined8 *)(this + 0x148) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x130);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x138) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar10 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  lVar3 = (long)puVar1 - (long)puVar10;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x120);
    lVar7 = puVar10[uVar6 / 0xaa] + (uVar6 % 0xaa) * 0x18;
    lVar5 = puVar10[(*(long *)(this + 0x128) + uVar6) / 0xaa] +
            ((*(long *)(this + 0x128) + uVar6) % 0xaa) * 0x18;
    if (lVar5 != lVar7) {
      plVar8 = puVar10 + uVar6 / 0xaa;
      do {
        lVar7 = lVar7 + 0x18;
        if (lVar7 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar7 = *plVar8;
        }
      } while (lVar5 != lVar7);
    }
  }
  *(undefined8 *)(this + 0x128) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar10);
    puVar1 = *(undefined8 **)(this + 0x110);
    puVar10 = (undefined8 *)(*(long *)(this + 0x108) + 8);
    *(undefined8 **)(this + 0x108) = puVar10;
    lVar3 = (long)puVar1 - (long)puVar10;
  }
  if (uVar6 == 1) {
    uVar4 = 0x55;
LAB_0119bdac:
    *(undefined8 *)(this + 0x120) = uVar4;
  }
  else if (uVar6 == 2) {
    uVar4 = 0xaa;
    goto LAB_0119bdac;
  }
  if (puVar10 != puVar1) {
    do {
      puVar9 = puVar10 + 1;
      operator_delete((void *)*puVar10);
      puVar10 = puVar9;
    } while (puVar1 != puVar9);
    lVar3 = *(long *)(this + 0x110) - *(long *)(this + 0x108);
    if (lVar3 != 0) {
      *(ulong *)(this + 0x110) =
           *(long *)(this + 0x110) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x100));
  }
  puVar10 = *(undefined8 **)(this + 0xd8);
  puVar1 = *(undefined8 **)(this + 0xe0);
  lVar3 = (long)puVar1 - (long)puVar10;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0xf0);
    lVar7 = puVar10[uVar6 / 0x66] + (uVar6 % 0x66) * 0x28;
    lVar5 = puVar10[(*(long *)(this + 0xf8) + uVar6) / 0x66] +
            ((*(long *)(this + 0xf8) + uVar6) % 0x66) * 0x28;
    if (lVar5 != lVar7) {
      plVar8 = puVar10 + uVar6 / 0x66;
      do {
        lVar7 = lVar7 + 0x28;
        if (lVar7 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar7 = *plVar8;
        }
      } while (lVar5 != lVar7);
    }
  }
  *(undefined8 *)(this + 0xf8) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar10);
    puVar1 = *(undefined8 **)(this + 0xe0);
    puVar10 = (undefined8 *)(*(long *)(this + 0xd8) + 8);
    *(undefined8 **)(this + 0xd8) = puVar10;
    lVar3 = (long)puVar1 - (long)puVar10;
  }
  if (uVar6 == 1) {
    uVar4 = 0x33;
  }
  else {
    if (uVar6 != 2) goto LAB_0119bee0;
    uVar4 = 0x66;
  }
  *(undefined8 *)(this + 0xf0) = uVar4;
LAB_0119bee0:
  if (puVar10 != puVar1) {
    do {
      puVar9 = puVar10 + 1;
      operator_delete((void *)*puVar10);
      puVar10 = puVar9;
    } while (puVar1 != puVar9);
    lVar3 = *(long *)(this + 0xe0) - *(long *)(this + 0xd8);
    if (lVar3 != 0) {
      *(ulong *)(this + 0xe0) = *(long *)(this + 0xe0) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xd0));
    return;
  }
  return;
}

