
/* fairygui::InputProcessor::cancelClick(int) */

void __thiscall fairygui::InputProcessor::cancelClick(InputProcessor *this,int param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != *(long **)(this + 0x20)) {
    lVar2 = 0;
    lVar4 = 0;
    do {
      lVar5 = *plVar3;
      if (*(int *)(lVar5 + 0x10) == param_1) {
        if (lVar5 == 0) {
          return;
        }
        goto LAB_00aadf4c;
      }
      plVar3 = plVar3 + 1;
      lVar1 = lVar5;
      if (*(int *)(lVar5 + 0x10) != -1) {
        lVar5 = lVar4;
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
      lVar4 = lVar5;
    } while (*(long **)(this + 0x20) != plVar3);
    if (lVar5 != 0) {
      *(int *)(lVar2 + 0x10) = param_1;
      lVar5 = lVar2;
LAB_00aadf4c:
      *(undefined1 *)(lVar5 + 0x29) = 1;
    }
  }
  return;
}

