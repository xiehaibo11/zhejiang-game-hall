
/* fairygui::InputProcessor::getTouchPosition(int) */

undefined4 __thiscall fairygui::InputProcessor::getTouchPosition(InputProcessor *this,int param_1)

{
  long *plVar1;
  InputProcessor *pIVar2;
  long lVar3;
  
  plVar1 = *(long **)(this + 0x18);
  do {
    if (plVar1 == *(long **)(this + 0x20)) {
      pIVar2 = this + 0x80;
      goto LAB_00aad720;
    }
    lVar3 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(int *)(lVar3 + 0x10) != param_1);
  pIVar2 = (InputProcessor *)(lVar3 + 8);
LAB_00aad720:
  return *(undefined4 *)pIVar2;
}

