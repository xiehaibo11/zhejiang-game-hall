
/* fairygui::Transition::clearHooks() */

void __thiscall fairygui::Transition::clearHooks(Transition *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar4 = *plVar1;
    plVar3 = *(long **)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0x70) = 0;
                    /* try { // try from 00a98a18 to 00b98f7f has its CatchHandler @ 00a98a18
                       catch() { ... } // from try @ 00a98a18 with catch @ 00a98a18
                       catch() { ... } // from try @ 00a99000 with catch @ 00a98a18 */
    if ((long *)(lVar4 + 0x50) == plVar3) {
      pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00a98a38:
      (*pcVar5)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar3 + 0x28);
      goto LAB_00a98a38;
    }
    lVar4 = *(long *)(*plVar1 + 0x28);
    if (lVar4 != 0) {
      plVar3 = *(long **)(lVar4 + 0x60);
      *(undefined8 *)(lVar4 + 0x60) = 0;
      if ((long *)(lVar4 + 0x40) == plVar3) {
        pcVar5 = *(code **)(*plVar3 + 0x20);
      }
      else {
        if (plVar3 == (long *)0x0) goto LAB_00a989fc;
        pcVar5 = *(code **)(*plVar3 + 0x28);
      }
      (*pcVar5)();
    }
LAB_00a989fc:
    plVar1 = plVar1 + 1;
                    /* catch() { ... } // from try @ 00a989cc with catch @ 00a98a04 */
  } while( true );
}

