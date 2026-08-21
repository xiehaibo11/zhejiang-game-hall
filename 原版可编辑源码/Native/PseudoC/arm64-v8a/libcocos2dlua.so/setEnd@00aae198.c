
/* fairygui::InputProcessor::setEnd(fairygui::TouchInfo*, fairygui::GObject*) */

void fairygui::InputProcessor::setEnd(TouchInfo *param_1,GObject *param_2)

{
  clock_t cVar1;
  int iVar2;
  
                    /* catch() { ... } // from try @ 00aae0cc with catch @ 00aae19c
                       catch() { ... } // from try @ 00aae148 with catch @ 00aae19c */
  param_2[0x28] = (GObject)0x0;
  cVar1 = clock();
  iVar2 = 1;
  if ((float)((double)(cVar1 - *(long *)(param_2 + 0x30)) / 1000000.0) < 0.45) {
    iVar2 = 1;
    if (*(int *)(param_2 + 0x14) != 2) {
      iVar2 = *(int *)(param_2 + 0x14) + 1;
    }
  }
  *(int *)(param_2 + 0x14) = iVar2;
  *(clock_t *)(param_2 + 0x30) = cVar1;
  return;
}

