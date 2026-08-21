
/* fairygui::Transition::onDelayedPlayItem(fairygui::GTweener*) */

void __thiscall fairygui::Transition::onDelayedPlayItem(Transition *this,GTweener *param_1)

{
  TransitionItem *pTVar1;
  
  pTVar1 = *(TransitionItem **)(param_1 + 0x88);
  *(undefined8 *)(pTVar1 + 0x80) = 0;
  *(int *)(this + 100) = *(int *)(this + 100) + -1;
  applyValue(this,pTVar1);
  if ((*(float *)(this + 0xcc) <= *(float *)pTVar1) && (*(long **)(pTVar1 + 0x70) != (long *)0x0)) {
    (**(code **)(**(long **)(pTVar1 + 0x70) + 0x30))();
  }
  checkAllComplete(this);
  return;
}

