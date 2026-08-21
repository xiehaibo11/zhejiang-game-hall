
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::DictMaker::~DictMaker() */

void __thiscall cocos2d::DictMaker::~DictMaker(DictMaker *this)

{
  long lVar1;
  undefined8 *puVar2;
  DictMaker DVar3;
  Value *pVVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  Value *this_00;
  Value *pVVar13;
  
  puVar12 = *(undefined8 **)(this + 0x100);
  puVar2 = *(undefined8 **)(this + 0x108);
  lVar6 = (long)puVar2 - (long)puVar12;
  *(undefined ***)this = &PTR__DictMaker_01720168;
  if (lVar6 != 0) {
    uVar9 = *(ulong *)(this + 0x118);
    plVar8 = (long *)((long)puVar12 + (uVar9 >> 7 & 0x1fffffffffffff8));
    lVar10 = *plVar8 + (uVar9 & 0x3ff) * 4;
    while (*(long *)((long)puVar12 + (*(long *)(this + 0x120) + uVar9 >> 7 & 0x1fffffffffffff8)) +
           (*(long *)(this + 0x120) + uVar9 & 0x3ff) * 4 != lVar10) {
      lVar10 = lVar10 + 4;
      if (lVar10 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar10 = *plVar8;
      }
    }
  }
  *(undefined8 *)(this + 0x120) = 0;
  while (uVar9 = lVar6 >> 3, 2 < uVar9) {
    operator_delete((void *)*puVar12);
    puVar2 = *(undefined8 **)(this + 0x108);
    puVar12 = (undefined8 *)(*(long *)(this + 0x100) + 8);
    *(undefined8 **)(this + 0x100) = puVar12;
    lVar6 = (long)puVar2 - (long)puVar12;
  }
  if (uVar9 == 1) {
    uVar7 = 0x200;
LAB_00f665b0:
    *(undefined8 *)(this + 0x118) = uVar7;
  }
  else if (uVar9 == 2) {
    uVar7 = 0x400;
    goto LAB_00f665b0;
  }
  if (puVar12 != puVar2) {
    do {
      puVar11 = puVar12 + 1;
      operator_delete((void *)*puVar12);
      puVar12 = puVar11;
    } while (puVar2 != puVar11);
    lVar6 = *(long *)(this + 0x108) - *(long *)(this + 0x100);
    if (lVar6 != 0) {
      *(ulong *)(this + 0x108) =
           *(long *)(this + 0x108) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xf8));
  }
  puVar12 = *(undefined8 **)(this + 0xd0);
  puVar2 = *(undefined8 **)(this + 0xd8);
  lVar6 = (long)puVar2 - (long)puVar12;
  if (lVar6 != 0) {
    uVar9 = *(ulong *)(this + 0xe8);
    plVar8 = (long *)((long)puVar12 + (uVar9 >> 6 & 0x3fffffffffffff8));
    lVar10 = *plVar8 + (uVar9 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar12 + (*(long *)(this + 0xf0) + uVar9 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0xf0) + uVar9 & 0x1ff) * 8;
    while (lVar1 != lVar10) {
      while (lVar10 = lVar10 + 8, lVar10 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar10 = *plVar8;
        if (lVar1 == lVar10) goto LAB_00f66670;
      }
    }
  }
LAB_00f66670:
  *(undefined8 *)(this + 0xf0) = 0;
  while (uVar9 = lVar6 >> 3, 2 < uVar9) {
    operator_delete((void *)*puVar12);
    puVar2 = *(undefined8 **)(this + 0xd8);
    puVar12 = (undefined8 *)(*(long *)(this + 0xd0) + 8);
    *(undefined8 **)(this + 0xd0) = puVar12;
    lVar6 = (long)puVar2 - (long)puVar12;
  }
  if (uVar9 == 1) {
    uVar7 = 0x100;
LAB_00f666c0:
    *(undefined8 *)(this + 0xe8) = uVar7;
  }
  else if (uVar9 == 2) {
    uVar7 = 0x200;
    goto LAB_00f666c0;
  }
  if (puVar12 != puVar2) {
    do {
      puVar11 = puVar12 + 1;
      operator_delete((void *)*puVar12);
      puVar12 = puVar11;
    } while (puVar2 != puVar11);
    lVar6 = *(long *)(this + 0xd8) - *(long *)(this + 0xd0);
    if (lVar6 != 0) {
      *(ulong *)(this + 0xd8) = *(long *)(this + 0xd8) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete(*(void **)(this + 200));
  }
  puVar12 = *(undefined8 **)(this + 0xa0);
  puVar2 = *(undefined8 **)(this + 0xa8);
  lVar6 = (long)puVar2 - (long)puVar12;
  if (lVar6 != 0) {
    uVar9 = *(ulong *)(this + 0xb8);
    plVar8 = (long *)((long)puVar12 + (uVar9 >> 6 & 0x3fffffffffffff8));
    lVar10 = *plVar8 + (uVar9 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar12 + (*(long *)(this + 0xc0) + uVar9 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0xc0) + uVar9 & 0x1ff) * 8;
    while (lVar1 != lVar10) {
      while (lVar10 = lVar10 + 8, lVar10 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar10 = *plVar8;
        if (lVar1 == lVar10) goto LAB_00f66780;
      }
    }
  }
LAB_00f66780:
  *(undefined8 *)(this + 0xc0) = 0;
  while (uVar9 = lVar6 >> 3, 2 < uVar9) {
    operator_delete((void *)*puVar12);
    puVar2 = *(undefined8 **)(this + 0xa8);
    puVar12 = (undefined8 *)(*(long *)(this + 0xa0) + 8);
    *(undefined8 **)(this + 0xa0) = puVar12;
    lVar6 = (long)puVar2 - (long)puVar12;
  }
  if (uVar9 == 1) {
    uVar7 = 0x100;
  }
  else {
    if (uVar9 != 2) goto LAB_00f667d4;
    uVar7 = 0x200;
  }
  *(undefined8 *)(this + 0xb8) = uVar7;
LAB_00f667d4:
  if (puVar12 != puVar2) {
    do {
      puVar11 = puVar12 + 1;
      operator_delete((void *)*puVar12);
      puVar12 = puVar11;
    } while (puVar2 != puVar11);
    lVar6 = *(long *)(this + 0xa8) - *(long *)(this + 0xa0);
    if (lVar6 != 0) {
      *(ulong *)(this + 0xa8) = *(long *)(this + 0xa8) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x98));
  }
  if (((byte)this[0x68] & 1) == 0) {
    DVar3 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    DVar3 = this[0x50];
  }
  if (((byte)DVar3 & 1) == 0) {
    pVVar13 = *(Value **)(this + 0x38);
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    pVVar13 = *(Value **)(this + 0x38);
  }
  if (pVVar13 == (Value *)0x0) {
    puVar12 = *(undefined8 **)(this + 0x20);
  }
  else {
    this_00 = *(Value **)(this + 0x40);
    pVVar4 = pVVar13;
    if (this_00 != pVVar13) {
      do {
        this_00 = this_00 + -0x10;
        cocos2d::Value::~Value(this_00);
      } while (pVVar13 != this_00);
      pVVar4 = *(Value **)(this + 0x38);
    }
    *(Value **)(this + 0x40) = pVVar13;
    operator_delete(pVVar4);
    puVar12 = *(undefined8 **)(this + 0x20);
  }
  while (puVar12 != (void *)0x0) {
    pvVar5 = (void *)*puVar12;
    cocos2d::Value::~Value((Value *)(puVar12 + 5));
    if ((*(byte *)(puVar12 + 2) & 1) != 0) {
      operator_delete((void *)puVar12[4]);
    }
    operator_delete(puVar12);
    puVar12 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
    return;
  }
  return;
}

