
/* v8::internal::TranslatedState::~TranslatedState() */

void __thiscall v8::internal::TranslatedState::~TranslatedState(TranslatedState *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar10;
  
  puVar9 = *(undefined8 **)(this + 0x38);
  puVar13 = *(undefined8 **)(this + 0x40);
  lVar3 = (long)puVar13 - (long)puVar9;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x50);
    plVar5 = (long *)((long)puVar9 + (uVar6 >> 6 & 0x3fffffffffffff8));
    lVar7 = *plVar5 + (uVar6 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar9 + (*(long *)(this + 0x58) + uVar6 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0x58) + uVar6 & 0x1ff) * 8;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 8, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00edbae0;
      }
    }
  }
LAB_00edbae0:
  *(undefined8 *)(this + 0x58) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar9);
    puVar13 = *(undefined8 **)(this + 0x40);
    puVar9 = (undefined8 *)(*(long *)(this + 0x38) + 8);
    *(undefined8 **)(this + 0x38) = puVar9;
    lVar3 = (long)puVar13 - (long)puVar9;
  }
  if (uVar6 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar6 != 2) goto LAB_00edbb34;
    uVar4 = 0x200;
  }
  *(undefined8 *)(this + 0x50) = uVar4;
LAB_00edbb34:
  if (puVar9 != puVar13) {
    do {
      puVar10 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar10;
    } while (puVar13 != puVar10);
    lVar3 = *(long *)(this + 0x40) - *(long *)(this + 0x38);
    if (lVar3 != 0) {
      *(ulong *)(this + 0x40) = *(long *)(this + 0x40) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  pvVar11 = *(void **)this;
  if (pvVar11 == (void *)0x0) {
    return;
  }
  pvVar12 = *(void **)(this + 8);
  pvVar2 = pvVar11;
  if (pvVar12 != pvVar11) {
    do {
      puVar9 = *(undefined8 **)((long)pvVar12 + -0x28);
      lVar3 = *(long *)((long)pvVar12 + -0x20) - (long)puVar9;
      if (lVar3 != 0) {
        uVar8 = *(ulong *)((long)pvVar12 + -0x10);
        plVar5 = (long *)((long)puVar9 + (uVar8 >> 4 & 0xffffffffffffff8));
        uVar6 = *(long *)((long)pvVar12 + -8) + uVar8;
        lVar7 = *plVar5 + (uVar8 & 0x7f) * 0x20;
        lVar1 = *(long *)((long)puVar9 + (uVar6 >> 4 & 0xffffffffffffff8)) + (uVar6 & 0x7f) * 0x20;
        while (lVar1 != lVar7) {
          while (lVar7 = lVar7 + 0x20, lVar7 - *plVar5 == 0x1000) {
            plVar5 = plVar5 + 1;
            lVar7 = *plVar5;
            if (lVar1 == lVar7) goto LAB_00edbc14;
          }
        }
      }
LAB_00edbc14:
      *(undefined8 *)((long)pvVar12 + -8) = 0;
      while (uVar6 = lVar3 >> 3, 2 < uVar6) {
        operator_delete((void *)*puVar9);
        puVar9 = (undefined8 *)(*(long *)((long)pvVar12 + -0x28) + 8);
        *(undefined8 **)((long)pvVar12 + -0x28) = puVar9;
        lVar3 = *(long *)((long)pvVar12 + -0x20) - (long)puVar9;
      }
      if (uVar6 == 1) {
        uVar4 = 0x40;
LAB_00edbc64:
        *(undefined8 *)((long)pvVar12 + -0x10) = uVar4;
      }
      else if (uVar6 == 2) {
        uVar4 = 0x80;
        goto LAB_00edbc64;
      }
      puVar9 = *(undefined8 **)((long)pvVar12 + -0x20);
      puVar13 = *(undefined8 **)((long)pvVar12 + -0x28);
      if (*(undefined8 **)((long)pvVar12 + -0x28) != puVar9) {
        do {
          puVar10 = puVar13 + 1;
          operator_delete((void *)*puVar13);
          puVar13 = puVar10;
        } while (puVar9 != puVar10);
        lVar3 = *(long *)((long)pvVar12 + -0x20) - *(long *)((long)pvVar12 + -0x28);
        if (lVar3 != 0) {
          *(ulong *)((long)pvVar12 + -0x20) =
               *(long *)((long)pvVar12 + -0x20) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
      }
      puVar9 = (undefined8 *)((long)pvVar12 + -0x30);
      pvVar12 = (void *)((long)pvVar12 + -0x58);
      if ((void *)*puVar9 != (void *)0x0) {
        operator_delete((void *)*puVar9);
      }
    } while (pvVar12 != pvVar11);
    pvVar2 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar11;
  operator_delete(pvVar2);
  return;
}

