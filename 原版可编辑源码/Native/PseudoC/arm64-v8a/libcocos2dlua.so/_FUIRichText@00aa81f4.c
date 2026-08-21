
/* fairygui::FUIRichText::~FUIRichText() */

void __thiscall fairygui::FUIRichText::~FUIRichText(FUIRichText *this)

{
  FUIRichText FVar1;
  FUIRichText *pFVar2;
  void *pvVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar7 = *(long **)(this + 0x2f8);
  plVar9 = *(long **)(this + 0x300);
  *(undefined ***)this = &PTR__FUIRichText_016a8818;
  for (; plVar7 != plVar9; plVar7 = plVar7 + 1) {
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 8))();
    }
  }
  plVar9 = *(long **)(this + 0x318);
  for (plVar7 = *(long **)(this + 0x310); plVar7 != plVar9; plVar7 = plVar7 + 1) {
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 8))();
    }
  }
  pFVar2 = *(FUIRichText **)(this + 0x400);
  if (this + 0x3e0 == pFVar2) {
    pcVar5 = *(code **)(*(long *)pFVar2 + 0x20);
  }
  else {
    if (pFVar2 == (FUIRichText *)0x0) goto LAB_00aa82b4;
    pcVar5 = *(code **)(*(long *)pFVar2 + 0x28);
  }
  (*pcVar5)();
LAB_00aa82b4:
  if (((byte)this[0x3b8] & 1) == 0) {
    FVar1 = this[0x360];
  }
  else {
    operator_delete(*(void **)(this + 0x3c8));
    FVar1 = this[0x360];
  }
  if (((byte)FVar1 & 1) == 0) {
    puVar8 = *(undefined8 **)(this + 0x328);
  }
  else {
    operator_delete(*(void **)(this + 0x370));
    puVar8 = *(undefined8 **)(this + 0x328);
  }
  if (puVar8 == (undefined8 *)0x0) {
    pvVar3 = *(void **)(this + 0x310);
  }
  else {
    puVar6 = *(undefined8 **)(this + 0x330);
    puVar4 = puVar8;
    if (puVar6 != puVar8) {
      pvVar3 = (void *)puVar6[-3];
      puVar4 = puVar6 + -3;
      while( true ) {
        if (pvVar3 != (void *)0x0) {
          puVar6[-2] = pvVar3;
          operator_delete(pvVar3);
        }
        if (puVar8 == puVar4) break;
        pvVar3 = (void *)puVar4[-3];
        puVar6 = puVar4;
        puVar4 = puVar4 + -3;
      }
      puVar4 = *(undefined8 **)(this + 0x328);
    }
    *(undefined8 **)(this + 0x330) = puVar8;
    operator_delete(puVar4);
    pvVar3 = *(void **)(this + 0x310);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x318) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x2f8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x300) = pvVar3;
    operator_delete(pvVar3);
  }
  cocos2d::Node::~Node((Node *)this);
  return;
}

