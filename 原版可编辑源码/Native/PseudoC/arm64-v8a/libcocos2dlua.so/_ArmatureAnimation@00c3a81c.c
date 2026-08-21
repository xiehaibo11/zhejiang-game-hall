
/* cocostudio::ArmatureAnimation::~ArmatureAnimation() */

void __thiscall cocostudio::ArmatureAnimation::~ArmatureAnimation(ArmatureAnimation *this)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  ArmatureAnimation *pAVar4;
  byte *pbVar5;
  void *pvVar6;
  code *pcVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  *(undefined ***)this = &PTR__ArmatureAnimation_016c8968;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  if (*(Ref **)(this + 0x140) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  pAVar4 = *(ArmatureAnimation **)(this + 0x1d0);
  if (this + 0x1b0 == pAVar4) {
    pcVar7 = *(code **)(*(long *)pAVar4 + 0x20);
LAB_00c3a888:
    (*pcVar7)();
  }
  else if (pAVar4 != (ArmatureAnimation *)0x0) {
    pcVar7 = *(code **)(*(long *)pAVar4 + 0x28);
    goto LAB_00c3a888;
  }
  pAVar4 = *(ArmatureAnimation **)(this + 0x1a0);
  if (this + 0x180 == pAVar4) {
    pcVar7 = *(code **)(*(long *)pAVar4 + 0x20);
LAB_00c3a8b4:
    (*pcVar7)();
  }
  else if (pAVar4 != (ArmatureAnimation *)0x0) {
    pcVar7 = *(code **)(*(long *)pAVar4 + 0x28);
    goto LAB_00c3a8b4;
  }
  pbVar14 = *(byte **)(this + 0x118);
  if (pbVar14 != (byte *)0x0) {
    pbVar8 = *(byte **)(this + 0x120);
    pbVar5 = pbVar14;
    if (pbVar8 != pbVar14) {
      bVar3 = pbVar8[-0x18];
      pbVar5 = pbVar8 + -0x18;
      while( true ) {
        if ((bVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar8 + -8));
        }
        if (pbVar14 == pbVar5) break;
        bVar3 = pbVar5[-0x18];
        pbVar8 = pbVar5;
        pbVar5 = pbVar5 + -0x18;
      }
      pbVar5 = *(byte **)(this + 0x118);
    }
    *(byte **)(this + 0x120) = pbVar14;
    operator_delete(pbVar5);
  }
  puVar16 = *(undefined8 **)(this + 0xf0);
  puVar2 = *(undefined8 **)(this + 0xf8);
  lVar9 = (long)puVar2 - (long)puVar16;
  if (lVar9 != 0) {
    uVar12 = *(ulong *)(this + 0x108);
    plVar11 = (long *)((long)puVar16 + (uVar12 >> 6 & 0x3fffffffffffff8));
    lVar13 = *plVar11 + (uVar12 & 0x1ff) * 8;
    while (*(long *)((long)puVar16 + (*(long *)(this + 0x110) + uVar12 >> 6 & 0x3fffffffffffff8)) +
           (*(long *)(this + 0x110) + uVar12 & 0x1ff) * 8 != lVar13) {
      lVar13 = lVar13 + 8;
      if (lVar13 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        lVar13 = *plVar11;
      }
    }
  }
  *(undefined8 *)(this + 0x110) = 0;
  while (uVar12 = lVar9 >> 3, 2 < uVar12) {
    operator_delete((void *)*puVar16);
    puVar2 = *(undefined8 **)(this + 0xf8);
    puVar16 = (undefined8 *)(*(long *)(this + 0xf0) + 8);
    *(undefined8 **)(this + 0xf0) = puVar16;
    lVar9 = (long)puVar2 - (long)puVar16;
  }
  if (uVar12 == 1) {
    uVar10 = 0x100;
LAB_00c3a9d4:
    *(undefined8 *)(this + 0x108) = uVar10;
  }
  else if (uVar12 == 2) {
    uVar10 = 0x200;
    goto LAB_00c3a9d4;
  }
  if (puVar16 != puVar2) {
    do {
      puVar15 = puVar16 + 1;
      operator_delete((void *)*puVar16);
      puVar16 = puVar15;
    } while (puVar2 != puVar15);
    lVar9 = *(long *)(this + 0xf8) - *(long *)(this + 0xf0);
    if (lVar9 != 0) {
      *(ulong *)(this + 0xf8) = *(long *)(this + 0xf8) + (lVar9 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xe8));
  }
  puVar16 = *(undefined8 **)(this + 0xc0);
  puVar2 = *(undefined8 **)(this + 200);
  lVar9 = (long)puVar2 - (long)puVar16;
  if (lVar9 != 0) {
    uVar12 = *(ulong *)(this + 0xd8);
    plVar11 = (long *)((long)puVar16 + (uVar12 >> 6 & 0x3fffffffffffff8));
    lVar13 = *plVar11 + (uVar12 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar16 + (*(long *)(this + 0xe0) + uVar12 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0xe0) + uVar12 & 0x1ff) * 8;
    while (lVar1 != lVar13) {
      while (lVar13 = lVar13 + 8, lVar13 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        lVar13 = *plVar11;
        if (lVar1 == lVar13) goto LAB_00c3aa94;
      }
    }
  }
LAB_00c3aa94:
  *(undefined8 *)(this + 0xe0) = 0;
  while (uVar12 = lVar9 >> 3, 2 < uVar12) {
    operator_delete((void *)*puVar16);
    puVar2 = *(undefined8 **)(this + 200);
    puVar16 = (undefined8 *)(*(long *)(this + 0xc0) + 8);
    *(undefined8 **)(this + 0xc0) = puVar16;
    lVar9 = (long)puVar2 - (long)puVar16;
  }
  if (uVar12 == 1) {
    uVar10 = 0x100;
  }
  else {
    if (uVar12 != 2) goto LAB_00c3aae8;
    uVar10 = 0x200;
  }
  *(undefined8 *)(this + 0xd8) = uVar10;
LAB_00c3aae8:
  if (puVar16 != puVar2) {
    do {
      puVar15 = puVar16 + 1;
      operator_delete((void *)*puVar16);
      puVar16 = puVar15;
    } while (puVar2 != puVar15);
    lVar9 = *(long *)(this + 200) - *(long *)(this + 0xc0);
    if (lVar9 != 0) {
      *(ulong *)(this + 200) = *(long *)(this + 200) + (lVar9 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  pvVar6 = *(void **)(this + 0x98);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar6;
    operator_delete(pvVar6);
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  ProcessBase::~ProcessBase((ProcessBase *)this);
  return;
}

