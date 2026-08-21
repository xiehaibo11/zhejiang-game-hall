
/* fairygui::PackageItem::~PackageItem() */

void __thiscall fairygui::PackageItem::~PackageItem(PackageItem *this)

{
  byte bVar1;
  PackageItem PVar2;
  byte *pbVar3;
  PackageItem *pPVar4;
  byte *pbVar5;
  code *pcVar6;
  ByteBuffer *this_00;
  undefined8 *puVar7;
  byte *pbVar8;
  
  *(undefined ***)this = &PTR__PackageItem_016a71e0;
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xa8));
  }
  this_00 = *(ByteBuffer **)(this + 0x88);
  *(undefined8 *)(this + 0xa8) = 0;
  if (this_00 != (ByteBuffer *)0x0) {
    ByteBuffer::~ByteBuffer(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x88) = 0;
  if (*(long *)(this + 0x118) != 0) {
    cocos2d::Ref::release(*(Ref **)(*(long *)(this + 0x118) + 0x30));
  }
  *(undefined8 *)(this + 0x118) = 0;
  if (*(Ref **)(this + 200) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 200));
  }
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xa0));
  }
  if (*(Ref **)(this + 0xb8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xb8));
  }
  puVar7 = *(undefined8 **)(this + 0x90);
  if (puVar7 != (undefined8 *)0x0) {
    pbVar8 = (byte *)*puVar7;
    if (pbVar8 != (byte *)0x0) {
      pbVar5 = (byte *)puVar7[1];
      pbVar3 = pbVar8;
      if (pbVar5 != pbVar8) {
        bVar1 = pbVar5[-0x18];
        pbVar3 = pbVar5 + -0x18;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
          if (pbVar8 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar5 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
        pbVar3 = (byte *)*puVar7;
      }
      puVar7[1] = pbVar8;
      operator_delete(pbVar3);
    }
    operator_delete(puVar7);
  }
  puVar7 = *(undefined8 **)(this + 0x98);
  *(undefined8 *)(this + 0x90) = 0;
  if (puVar7 != (undefined8 *)0x0) {
    pbVar8 = (byte *)*puVar7;
    if (pbVar8 != (byte *)0x0) {
      pbVar5 = (byte *)puVar7[1];
      pbVar3 = pbVar8;
      if (pbVar5 != pbVar8) {
        bVar1 = pbVar5[-0x18];
        pbVar3 = pbVar5 + -0x18;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
          if (pbVar8 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar5 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
        pbVar3 = (byte *)*puVar7;
      }
      puVar7[1] = pbVar8;
      operator_delete(pbVar3);
    }
    operator_delete(puVar7);
  }
  pPVar4 = *(PackageItem **)(this + 0x100);
  *(undefined8 *)(this + 0x98) = 0;
  if (this + 0xe0 == pPVar4) {
    pcVar6 = *(code **)(*(long *)pPVar4 + 0x20);
  }
  else {
    if (pPVar4 == (PackageItem *)0x0) goto LAB_00a8ff40;
                    /* try { // try from 00a8ff2c to 00b8ff7b has its CatchHandler @ 00a8ff2c
                       catch() { ... } // from try @ 00a8ff2c with catch @ 00a8ff2c
                       catch() { ... } // from try @ 00a8ffe4 with catch @ 00a8ff2c
                       catch() { ... } // from try @ 00a9002c with catch @ 00a8ff2c */
    pcVar6 = *(code **)(*(long *)pPVar4 + 0x28);
  }
  (*pcVar6)();
LAB_00a8ff40:
  if (((byte)this[0x70] & 1) == 0) {
    PVar2 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
                    /* try { // try from 00a8ff7c to 00b8ffb7 has its CatchHandler @ 00a90070 */
    PVar2 = this[0x50];
  }
  if (((byte)PVar2 & 1) == 0) {
    PVar2 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    PVar2 = this[0x38];
  }
  if (((byte)PVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

