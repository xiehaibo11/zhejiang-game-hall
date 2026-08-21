
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::DictMaker::~DictMaker() */

void __thiscall cocos2d::DictMaker::~DictMaker(DictMaker *this)

{
  undefined8 *puVar1;
  DictMaker DVar2;
  Value *pVVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Value *this_00;
  Value *pVVar11;
  void *pvVar12;
  
  puVar10 = *(undefined8 **)(this + 0x100);
  puVar1 = *(undefined8 **)(this + 0x108);
  lVar4 = (long)puVar1 - (long)puVar10;
  *(undefined ***)this = &PTR__DictMaker_01c66d90;
  if (lVar4 != 0) {
    uVar7 = *(ulong *)(this + 0x118);
    plVar6 = (long *)((long)puVar10 + (uVar7 >> 7 & 0x1fffffffffffff8));
    lVar8 = *plVar6 + (uVar7 & 0x3ff) * 4;
    while (*(long *)((long)puVar10 + (*(long *)(this + 0x120) + uVar7 >> 7 & 0x1fffffffffffff8)) +
           (*(long *)(this + 0x120) + uVar7 & 0x3ff) * 4 != lVar8) {
      lVar8 = lVar8 + 4;
      if (lVar8 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar8 = *plVar6;
      }
    }
  }
  *(undefined8 *)(this + 0x120) = 0;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar10);
    puVar1 = *(undefined8 **)(this + 0x108);
    puVar10 = (undefined8 *)(*(long *)(this + 0x100) + 8);
    *(undefined8 **)(this + 0x100) = puVar10;
    lVar4 = (long)puVar1 - (long)puVar10;
  }
  if (uVar7 == 1) {
    uVar5 = 0x200;
LAB_008711cc:
    *(undefined8 *)(this + 0x118) = uVar5;
  }
  else if (uVar7 == 2) {
    uVar5 = 0x400;
    goto LAB_008711cc;
  }
  if (puVar10 != puVar1) {
    do {
      puVar9 = puVar10 + 1;
      operator_delete((void *)*puVar10);
      puVar10 = puVar9;
    } while (puVar1 != puVar9);
    lVar4 = *(long *)(this + 0x108);
    if (lVar4 != *(long *)(this + 0x100)) {
      *(ulong *)(this + 0x108) =
           lVar4 + (~((lVar4 + -8) - *(long *)(this + 0x100)) & 0xfffffffffffffff8U);
    }
  }
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xf8));
  }
  puVar10 = *(undefined8 **)(this + 0xd0);
  puVar1 = *(undefined8 **)(this + 0xd8);
  lVar4 = (long)puVar1 - (long)puVar10;
  if (lVar4 != 0) {
    uVar7 = *(ulong *)(this + 0xe8);
    plVar6 = (long *)((long)puVar10 + (uVar7 >> 6 & 0x3fffffffffffff8));
    lVar8 = *plVar6 + (uVar7 & 0x1ff) * 8;
    while (*(long *)((long)puVar10 + (*(long *)(this + 0xf0) + uVar7 >> 6 & 0x3fffffffffffff8)) +
           (*(long *)(this + 0xf0) + uVar7 & 0x1ff) * 8 != lVar8) {
      lVar8 = lVar8 + 8;
      if (lVar8 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar8 = *plVar6;
      }
    }
  }
  *(undefined8 *)(this + 0xf0) = 0;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar10);
    puVar1 = *(undefined8 **)(this + 0xd8);
    puVar10 = (undefined8 *)(*(long *)(this + 0xd0) + 8);
    *(undefined8 **)(this + 0xd0) = puVar10;
    lVar4 = (long)puVar1 - (long)puVar10;
  }
  if (uVar7 == 1) {
    uVar5 = 0x100;
LAB_008712dc:
    *(undefined8 *)(this + 0xe8) = uVar5;
  }
  else if (uVar7 == 2) {
    uVar5 = 0x200;
    goto LAB_008712dc;
  }
  if (puVar10 != puVar1) {
    do {
      puVar9 = puVar10 + 1;
      operator_delete((void *)*puVar10);
      puVar10 = puVar9;
    } while (puVar1 != puVar9);
    lVar4 = *(long *)(this + 0xd8);
    if (lVar4 != *(long *)(this + 0xd0)) {
      *(ulong *)(this + 0xd8) =
           lVar4 + (~((lVar4 + -8) - *(long *)(this + 0xd0)) & 0xfffffffffffffff8U);
    }
  }
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete(*(void **)(this + 200));
  }
  puVar10 = *(undefined8 **)(this + 0xa0);
  puVar1 = *(undefined8 **)(this + 0xa8);
  lVar4 = (long)puVar1 - (long)puVar10;
  if (lVar4 != 0) {
    uVar7 = *(ulong *)(this + 0xb8);
    plVar6 = (long *)((long)puVar10 + (uVar7 >> 6 & 0x3fffffffffffff8));
    lVar8 = *plVar6 + (uVar7 & 0x1ff) * 8;
    while (*(long *)((long)puVar10 + (*(long *)(this + 0xc0) + uVar7 >> 6 & 0x3fffffffffffff8)) +
           (*(long *)(this + 0xc0) + uVar7 & 0x1ff) * 8 != lVar8) {
      lVar8 = lVar8 + 8;
      if (lVar8 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar8 = *plVar6;
      }
    }
  }
  *(undefined8 *)(this + 0xc0) = 0;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar10);
    puVar1 = *(undefined8 **)(this + 0xa8);
    puVar10 = (undefined8 *)(*(long *)(this + 0xa0) + 8);
    *(undefined8 **)(this + 0xa0) = puVar10;
    lVar4 = (long)puVar1 - (long)puVar10;
  }
  if (uVar7 == 1) {
    uVar5 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_008713f0;
    uVar5 = 0x200;
  }
  *(undefined8 *)(this + 0xb8) = uVar5;
LAB_008713f0:
  if (puVar10 != puVar1) {
    do {
      puVar9 = puVar10 + 1;
      operator_delete((void *)*puVar10);
      puVar10 = puVar9;
    } while (puVar1 != puVar9);
    lVar4 = *(long *)(this + 0xa8);
    if (lVar4 != *(long *)(this + 0xa0)) {
      *(ulong *)(this + 0xa8) =
           lVar4 + (~((lVar4 + -8) - *(long *)(this + 0xa0)) & 0xfffffffffffffff8U);
    }
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x98));
  }
  if (((byte)this[0x68] & 1) == 0) {
    DVar2 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    DVar2 = this[0x50];
  }
  if (((byte)DVar2 & 1) == 0) {
    pVVar11 = *(Value **)(this + 0x38);
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    pVVar11 = *(Value **)(this + 0x38);
  }
  if (pVVar11 == (Value *)0x0) {
    puVar10 = *(undefined8 **)(this + 0x20);
  }
  else {
    this_00 = *(Value **)(this + 0x40);
    pVVar3 = pVVar11;
    if (this_00 != pVVar11) {
      do {
        this_00 = this_00 + -0x10;
        cocos2d::Value::~Value(this_00);
      } while (pVVar11 != this_00);
      pVVar3 = *(Value **)(this + 0x38);
    }
    *(Value **)(this + 0x40) = pVVar11;
    operator_delete(pVVar3);
    puVar10 = *(undefined8 **)(this + 0x20);
  }
  while (puVar10 != (void *)0x0) {
    pvVar12 = (void *)*puVar10;
    cocos2d::Value::~Value((Value *)(puVar10 + 5));
    if ((*(byte *)(puVar10 + 2) & 1) != 0) {
      operator_delete((void *)puVar10[4]);
    }
    operator_delete(puVar10);
    puVar10 = pvVar12;
  }
  pvVar12 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
    return;
  }
  return;
}

