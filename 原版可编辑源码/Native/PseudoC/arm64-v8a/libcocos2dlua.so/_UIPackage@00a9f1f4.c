
/* fairygui::UIPackage::~UIPackage() */

void __thiscall fairygui::UIPackage::~UIPackage(UIPackage *this)

{
  byte bVar1;
  UIPackage UVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  
                    /* catch() { ... } // from try @ 00a9f19c with catch @ 00a9f208 */
  *(undefined ***)this = &PTR__UIPackage_016a7740;
  puVar9 = *(undefined8 **)(this + 0x78);
  for (puVar6 = *(undefined8 **)(this + 0x70); puVar6 != puVar9; puVar6 = puVar6 + 1) {
    cocos2d::Ref::release((Ref *)*puVar6);
  }
  for (plVar7 = *(long **)(this + 0xe8); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((void *)plVar7[5] != (void *)0x0) {
      operator_delete((void *)plVar7[5]);
    }
  }
  pbVar8 = *(byte **)(this + 0x148);
  if (pbVar8 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x150);
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
      pbVar3 = *(byte **)(this + 0x148);
    }
    *(byte **)(this + 0x150) = pbVar8;
    operator_delete(pbVar3);
  }
  if (*(long *)(this + 0x130) != 0) {
    FUN_00aa28f8(this + 0x130);
    operator_delete(*(void **)(this + 0x130));
  }
  pbVar8 = *(byte **)(this + 0x118);
  if (pbVar8 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x120);
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
      pbVar3 = *(byte **)(this + 0x118);
    }
    *(byte **)(this + 0x120) = pbVar8;
    operator_delete(pbVar3);
  }
  if (((byte)this[0x100] & 1) != 0) {
    operator_delete(*(void **)(this + 0x110));
  }
  puVar6 = *(void **)(this + 0xe8);
  while (puVar6 != (void *)0x0) {
    pvVar4 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0xd8);
  *(undefined8 *)(this + 0xd8) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  puVar6 = *(void **)(this + 0xc0);
  while (puVar6 != (void *)0x0) {
    pvVar4 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  puVar6 = *(void **)(this + 0x98);
  while (puVar6 != (void *)0x0) {
    pvVar4 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x70);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar4;
    operator_delete(pvVar4);
  }
  if (((byte)this[0x58] & 1) == 0) {
    UVar2 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    UVar2 = this[0x40];
  }
  if (((byte)UVar2 & 1) == 0) {
    UVar2 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    UVar2 = this[0x28];
  }
  if (((byte)UVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

