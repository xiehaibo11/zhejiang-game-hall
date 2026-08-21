
/* fairygui::Transition::onDelayedPlay() */

void __thiscall fairygui::Transition::onDelayedPlay(Transition *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  GObject *this_00;
  Transition *pTVar5;
  code *pcVar6;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  internalPlay(this);
  this[0x68] = (Transition)(0 < *(int *)(this + 100));
  if (0 < *(int *)(this + 100)) {
    if (((byte)this[0xb0] & 1) != 0) {
      plVar2 = *(long **)(this + 0x50);
      for (plVar1 = *(long **)(this + 0x48); plVar1 != plVar2; plVar1 = plVar1 + 1) {
        this_00 = *(GObject **)(*plVar1 + 0x88);
        if ((this_00 != (GObject *)0x0) && (this_00 != *(GObject **)(this + 0x40))) {
          uVar4 = GObject::addDisplayLock(this_00);
          *(undefined4 *)(*plVar1 + 0x90) = uVar4;
        }
      }
    }
    goto LAB_00a97f74;
  }
  pTVar5 = *(Transition **)(this + 0xa0);
  if (pTVar5 == (Transition *)0x0) goto LAB_00a97f74;
  if (this + 0x80 == pTVar5) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pTVar5 + 0x18))(pTVar5,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pTVar5 + 0x10))();
  }
  pTVar5 = *(Transition **)(this + 0xa0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (this + 0x80 == pTVar5) {
    pcVar6 = *(code **)(*(long *)pTVar5 + 0x20);
LAB_00a97f30:
    (*pcVar6)();
  }
  else if (pTVar5 != (Transition *)0x0) {
    pcVar6 = *(code **)(*(long *)pTVar5 + 0x28);
    goto LAB_00a97f30;
  }
  if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*local_50 + 0x30))();
  if (alStack_70 == local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a97f74;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_00a97f74:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

