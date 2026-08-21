
/* fairygui::GearDisplay2::evaluate(bool) */

byte __thiscall fairygui::GearDisplay2::evaluate(GearDisplay2 *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(long *)(this + 0x10) == 0) {
    bVar2 = true;
    iVar1 = *(int *)(this + 0x38);
  }
  else {
    bVar2 = 0 < *(int *)(this + 0x3c);
    iVar1 = *(int *)(this + 0x38);
  }
  if (iVar1 != 0) {
    return bVar2 | param_1;
  }
  return bVar2 & param_1;
}

