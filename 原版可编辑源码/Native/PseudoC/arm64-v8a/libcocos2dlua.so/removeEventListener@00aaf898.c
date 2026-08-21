
/* fairygui::UIEventDispatcher::removeEventListener(int, fairygui::EventTag const&) */

void __thiscall
fairygui::UIEventDispatcher::removeEventListener
          (UIEventDispatcher *this,int param_1,EventTag *param_2)

{
  size_t __n;
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *__dest;
  long *plVar4;
  
                    /* try { // try from 00aaf8ac to 00baf8e7 has its CatchHandler @ 00aaf68c */
  __dest = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  if (__dest != puVar2) {
    do {
                    /* try { // try from 00aaf8e8 to 00baf943 has its CatchHandler @ 00ab03d0 */
      while ((plVar4 = (long *)*__dest, (int)plVar4[6] == param_1 &&
             ((plVar4[7] == *(long *)param_2 || (*(long *)param_2 == 0))))) {
        plVar1 = (long *)plVar4[4];
        if (0 < *(int *)(this + 0x40)) {
          plVar4[4] = 0;
          if (plVar4 == plVar1) {
            pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00aaf8d0:
            (*pcVar3)();
          }
          else if (plVar1 != (long *)0x0) {
            pcVar3 = *(code **)(*plVar1 + 0x28);
            goto LAB_00aaf8d0;
          }
          puVar2 = *(undefined8 **)(this + 0x30);
          break;
        }
        if (plVar4 == plVar1) {
          pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00aaf954:
          (*pcVar3)();
        }
        else if (plVar1 != (long *)0x0) {
          pcVar3 = *(code **)(*plVar1 + 0x28);
          goto LAB_00aaf954;
        }
        operator_delete(plVar4);
                    /* try { // try from 00aaf964 to 00baf9bf has its CatchHandler @ 00ab03f8 */
        __n = *(long *)(this + 0x30) - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar2 = __dest + ((long)__n >> 3);
        *(undefined8 **)(this + 0x30) = puVar2;
        if (puVar2 == __dest) {
          return;
        }
      }
      __dest = __dest + 1;
    } while (puVar2 != __dest);
  }
  return;
}

