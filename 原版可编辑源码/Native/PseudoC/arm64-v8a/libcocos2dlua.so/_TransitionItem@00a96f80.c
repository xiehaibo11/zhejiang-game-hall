
/* fairygui::TransitionItem::~TransitionItem() */

void __thiscall fairygui::TransitionItem::~TransitionItem(TransitionItem *this)

{
  TransitionItem *pTVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  TweenConfig *this_00;
  
  if (*(GTweener **)(this + 0x80) != (GTweener *)0x0) {
    GTweener::kill(*(GTweener **)(this + 0x80),false);
    *(undefined8 *)(this + 0x80) = 0;
  }
  pTVar1 = *(TransitionItem **)(this + 0x70);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (this + 0x50 == pTVar1) {
    pcVar3 = *(code **)(*(long *)pTVar1 + 0x20);
LAB_00a96fd8:
    (*pcVar3)();
  }
  else if (pTVar1 != (TransitionItem *)0x0) {
    pcVar3 = *(code **)(*(long *)pTVar1 + 0x28);
    goto LAB_00a96fd8;
  }
  lVar4 = *(long *)(this + 0x28);
  if (lVar4 != 0) {
    plVar2 = *(long **)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0x60) = 0;
    if ((long *)(lVar4 + 0x40) == plVar2) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00a97010:
      (*pcVar3)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      goto LAB_00a97010;
    }
    this_00 = *(TweenConfig **)(this + 0x28);
    if (this_00 != (TweenConfig *)0x0) {
      TweenConfig::~TweenConfig(this_00);
      operator_delete(this_00);
    }
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  pTVar1 = *(TransitionItem **)(this + 0x70);
  *(undefined8 *)(this + 0x48) = 0;
  if (this + 0x50 == pTVar1) {
    pcVar3 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TransitionItem *)0x0) goto LAB_00a97064;
    pcVar3 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar3)();
LAB_00a97064:
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

