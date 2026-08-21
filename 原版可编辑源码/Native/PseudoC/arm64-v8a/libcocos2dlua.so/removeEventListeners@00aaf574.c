
/* fairygui::UIEventDispatcher::removeEventListeners() */

void __thiscall fairygui::UIEventDispatcher::removeEventListeners(UIEventDispatcher *this)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  if (puVar5 != puVar2) {
    if (*(int *)(this + 0x40) < 1) {
      do {
        plVar4 = (long *)*puVar5;
        if (plVar4 != (long *)0x0) {
          plVar1 = (long *)plVar4[4];
          if (plVar4 == plVar1) {
            pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00aaf5ec:
            (*pcVar3)();
          }
          else if (plVar1 != (long *)0x0) {
            pcVar3 = *(code **)(*plVar1 + 0x28);
            goto LAB_00aaf5ec;
          }
          operator_delete(plVar4);
          puVar2 = *(undefined8 **)(this + 0x30);
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar2);
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
    }
    else {
      do {
        plVar1 = (long *)*puVar5;
        plVar4 = (long *)plVar1[4];
        plVar1[4] = 0;
        if (plVar1 == plVar4) {
          pcVar3 = *(code **)(*plVar4 + 0x20);
LAB_00aaf5ac:
          (*pcVar3)();
        }
        else if (plVar4 != (long *)0x0) {
          pcVar3 = *(code **)(*plVar4 + 0x28);
          goto LAB_00aaf5ac;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != *(undefined8 **)(this + 0x30));
    }
  }
  return;
}

