
/* fairygui::UIEventDispatcher::hasEventListener(int, fairygui::EventTag const&) const */

undefined8 __thiscall
fairygui::UIEventDispatcher::hasEventListener(UIEventDispatcher *this,int param_1,EventTag *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 != *(long **)(this + 0x30)) {
    do {
      lVar2 = *plVar1;
                    /* try { // try from 00aaf9e0 to 00bafa3f has its CatchHandler @ 00ab03fc */
      if ((*(int *)(lVar2 + 0x30) == param_1) &&
         (((*(long *)(lVar2 + 0x38) == *(long *)param_2 || (*(long *)param_2 == 0)) &&
          (*(long *)(lVar2 + 0x20) != 0)))) {
        return 1;
      }
      plVar1 = plVar1 + 1;
    } while (*(long **)(this + 0x30) != plVar1);
  }
  return 0;
}

