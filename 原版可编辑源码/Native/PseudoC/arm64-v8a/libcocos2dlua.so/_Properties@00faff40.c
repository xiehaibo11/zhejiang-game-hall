
/* cocos2d::Properties::~Properties() */

void __thiscall cocos2d::Properties::~Properties(Properties *this)

{
  Properties PVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  Properties *this_00;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  
  pbVar4 = *(byte **)(this + 0xa0);
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + 0x10));
    }
    operator_delete(pbVar4);
  }
  puVar3 = *(undefined8 **)(this + 0x78);
  *(undefined8 *)(this + 0xa0) = 0;
  lVar2 = *(long *)(this + 0x80) - (long)puVar3;
  if (lVar2 != 0) {
    uVar5 = 0;
    this_00 = (Properties *)*puVar3;
    while( true ) {
      if (this_00 != (Properties *)0x0) {
        ~Properties(this_00);
        operator_delete(this_00);
        puVar3 = *(undefined8 **)(this + 0x78);
      }
      puVar3[uVar5] = 0;
      uVar5 = uVar5 + 1;
      if ((ulong)(lVar2 >> 3) <= uVar5) break;
      puVar3 = *(undefined8 **)(this + 0x78);
      this_00 = (Properties *)puVar3[uVar5];
    }
  }
  puVar3 = *(undefined8 **)(this + 0x98);
  if (puVar3 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar3;
    if (pvVar6 != (void *)0x0) {
      pvVar8 = pvVar6;
      pvVar7 = (void *)puVar3[1];
      if ((void *)puVar3[1] != pvVar6) {
        do {
          if ((*(byte *)((long)pvVar7 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar7 + -8));
          }
          pvVar8 = (void *)((long)pvVar7 + -0x30);
          if ((*(byte *)((long)pvVar7 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar7 + -0x20));
          }
          pvVar7 = pvVar8;
        } while (pvVar6 != pvVar8);
        pvVar8 = (void *)*puVar3;
      }
      puVar3[1] = pvVar6;
      operator_delete(pvVar8);
    }
    operator_delete(puVar3);
  }
  pvVar6 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x98) = 0;
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x58);
  if (pvVar6 != (void *)0x0) {
    pvVar8 = pvVar6;
    pvVar7 = *(void **)(this + 0x60);
    if (*(void **)(this + 0x60) != pvVar6) {
      do {
        if ((*(byte *)((long)pvVar7 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar7 + -8));
        }
        pvVar8 = (void *)((long)pvVar7 + -0x30);
        if ((*(byte *)((long)pvVar7 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar7 + -0x20));
        }
        pvVar7 = pvVar8;
      } while (pvVar6 != pvVar8);
      pvVar8 = *(void **)(this + 0x58);
    }
    *(void **)(this + 0x60) = pvVar6;
    operator_delete(pvVar8);
  }
  if (((byte)this[0x40] & 1) == 0) {
    PVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    PVar1 = this[0x28];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    PVar1 = this[0x10];
  }
                    /* try { // try from 00fb00f0 to 010b0107 has its CatchHandler @ 00fb00f0
                       catch() { ... } // from try @ 00fb00f0 with catch @ 00fb00f0
                       catch() { ... } // from try @ 00fb0110 with catch @ 00fb00f0 */
  if (((byte)PVar1 & 1) == 0) {
    return;
  }
                    /* try { // try from 00fb0108 to 010b010f has its CatchHandler @ 00fb0128 */
  operator_delete(*(void **)(this + 0x20));
  return;
}

