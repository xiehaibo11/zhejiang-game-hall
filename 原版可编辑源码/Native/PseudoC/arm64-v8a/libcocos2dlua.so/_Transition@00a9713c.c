
/* fairygui::Transition::~Transition() */

void __thiscall fairygui::Transition::~Transition(Transition *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Transition *pTVar3;
  void *pvVar4;
  code *pcVar5;
  TransitionItem *this_00;
  
  *(undefined ***)this = &PTR__Transition_016a7528;
  if (this[0x68] != (Transition)0x0) {
    GTween::kill((Ref *)this);
  }
  puVar2 = *(undefined8 **)(this + 0x50);
  for (puVar1 = *(undefined8 **)(this + 0x48); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    this_00 = (TransitionItem *)*puVar1;
    if (this_00 != (TransitionItem *)0x0) {
      TransitionItem::~TransitionItem(this_00);
      operator_delete(this_00);
    }
  }
  pTVar3 = *(Transition **)(this + 0xa0);
  this[0x68] = (Transition)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  if (this + 0x80 == pTVar3) {
    pcVar5 = *(code **)(*(long *)pTVar3 + 0x20);
LAB_00a971d8:
    (*pcVar5)();
  }
  else if (pTVar3 != (Transition *)0x0) {
    pcVar5 = *(code **)(*(long *)pTVar3 + 0x28);
    goto LAB_00a971d8;
  }
  pTVar3 = *(Transition **)(this + 0xa0);
  if (this + 0x80 == pTVar3) {
    pcVar5 = *(code **)(*(long *)pTVar3 + 0x20);
  }
  else {
    if (pTVar3 == (Transition *)0x0) goto LAB_00a97204;
    pcVar5 = *(code **)(*(long *)pTVar3 + 0x28);
  }
  (*pcVar5)();
LAB_00a97204:
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

