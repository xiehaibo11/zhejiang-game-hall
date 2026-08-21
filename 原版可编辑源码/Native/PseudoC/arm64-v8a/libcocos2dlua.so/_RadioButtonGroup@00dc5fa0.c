
/* cocos2d::ui::RadioButtonGroup::~RadioButtonGroup() */

void __thiscall cocos2d::ui::RadioButtonGroup::~RadioButtonGroup(RadioButtonGroup *this)

{
  RadioButtonGroup *pRVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pRVar1 = *(RadioButtonGroup **)(this + 0x530);
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined ***)this = &PTR__RadioButtonGroup_016ddd60;
  *(undefined ***)(this + 0x318) = &PTR__RadioButtonGroup_016de430;
  if (this + 0x510 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
LAB_00dc5ffc:
    (*pcVar2)();
  }
  else if (pRVar1 != (RadioButtonGroup *)0x0) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
    goto LAB_00dc5ffc;
  }
  puVar3 = *(undefined8 **)(this + 0x4f0);
  puVar4 = *(undefined8 **)(this + 0x4f8);
  *(undefined8 *)(this + 0x540) = 0;
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x4f0);
  }
  pRVar1 = *(RadioButtonGroup **)(this + 0x530);
  *(undefined8 **)(this + 0x4f8) = puVar3;
  if (this + 0x510 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RadioButtonGroup *)0x0) goto LAB_00dc605c;
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dc605c:
  puVar3 = *(undefined8 **)(this + 0x4f0);
  puVar4 = *(undefined8 **)(this + 0x4f8);
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x4f0);
  }
  *(undefined8 **)(this + 0x4f8) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x4f8) = puVar3;
    operator_delete(puVar3);
  }
  Widget::~Widget((Widget *)this);
  return;
}

