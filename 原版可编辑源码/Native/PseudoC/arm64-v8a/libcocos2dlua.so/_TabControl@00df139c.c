
/* non-virtual thunk to cocos2d::ui::TabControl::~TabControl() */

void __thiscall cocos2d::ui::TabControl::~TabControl(TabControl *this)

{
  TabControl *pTVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(this + -0x318) = &PTR__TabControl_016e6580;
  puVar3 = *(undefined8 **)(this + 0x238);
  puVar4 = *(undefined8 **)(this + 0x240);
  *(undefined ***)this = &PTR__TabControl_016e6c10;
  if (puVar3 == puVar4) {
    *(undefined8 **)(this + 0x240) = puVar3;
  }
  else {
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        operator_delete((void *)*puVar3);
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x238);
    *(undefined8 **)(this + 0x240) = puVar3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x240) = puVar3;
    operator_delete(puVar3);
  }
  pTVar1 = *(TabControl **)(this + 0x1f8);
  if (this + 0x1d8 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TabControl *)0x0) goto LAB_00df144c;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00df144c:
  Widget::~Widget((Widget *)(this + -0x318));
  return;
}

