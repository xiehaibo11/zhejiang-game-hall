
/* fairygui::Transition::checkAllComplete() */

void __thiscall fairygui::Transition::checkAllComplete(Transition *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  GObject *this_00;
  Transition *pTVar6;
  code *pcVar7;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((this[0x68] == (Transition)0x0) || (*(int *)(this + 100) != 0)) goto LAB_00a9a628;
  if ((*(int *)(this + 0x60) < 0) ||
     (iVar4 = *(int *)(this + 0x60) + -1, *(int *)(this + 0x60) = iVar4, 0 < iVar4)) {
    internalPlay(this);
    goto LAB_00a9a628;
  }
  plVar1 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  this[0x68] = (Transition)0x0;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    this_00 = *(GObject **)(*plVar1 + 0x88);
    if ((this_00 != (GObject *)0x0) && (uVar3 = *(uint *)(*plVar1 + 0x90), uVar3 != 0)) {
      GObject::releaseDisplayLock(this_00,uVar3);
      *(undefined4 *)(*plVar1 + 0x90) = 0;
    }
  }
  pTVar6 = *(Transition **)(this + 0xa0);
  if (pTVar6 == (Transition *)0x0) goto LAB_00a9a628;
  if (this + 0x80 == pTVar6) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pTVar6 + 0x18))(pTVar6,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pTVar6 + 0x10))();
  }
  pTVar6 = *(Transition **)(this + 0xa0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (this + 0x80 == pTVar6) {
    pcVar7 = *(code **)(*(long *)pTVar6 + 0x20);
LAB_00a9a6f8:
    (*pcVar7)();
  }
  else if (pTVar6 != (Transition *)0x0) {
    pcVar7 = *(code **)(*(long *)pTVar6 + 0x28);
    goto LAB_00a9a6f8;
  }
  if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*local_50 + 0x30))();
  if (alStack_70 == local_50) {
    (**(code **)(*local_50 + 0x20))();
  }
  else if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x28))();
  }
LAB_00a9a628:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

