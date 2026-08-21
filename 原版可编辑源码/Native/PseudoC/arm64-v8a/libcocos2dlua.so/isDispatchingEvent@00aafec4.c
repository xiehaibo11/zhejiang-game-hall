
/* fairygui::UIEventDispatcher::isDispatchingEvent(int) */

bool __thiscall fairygui::UIEventDispatcher::isDispatchingEvent(UIEventDispatcher *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00aafec4 to 00bafeeb has its CatchHandler @ 00ab0344 */
  plVar1 = *(long **)(this + 0x28);
  do {
    if (plVar1 == *(long **)(this + 0x30)) {
      return false;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(int *)(lVar2 + 0x30) != param_1);
  return 0 < *(int *)(lVar2 + 0x40);
}

