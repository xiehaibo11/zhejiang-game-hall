
/* fairygui::GList::updateSelectionController(int) */

void __thiscall fairygui::GList::updateSelectionController(GList *this,int param_1)

{
  int iVar1;
  GController *pGVar2;
  
  pGVar2 = *(GController **)(this + 800);
  if (((pGVar2 != (GController *)0x0) && (pGVar2[0x60] == (GController)0x0)) &&
     (iVar1 = GController::getPageCount(pGVar2), param_1 < iVar1)) {
    pGVar2 = *(GController **)(this + 800);
    *(undefined8 *)(this + 800) = 0;
    GController::setSelectedIndex(pGVar2,param_1,true);
    *(GController **)(this + 800) = pGVar2;
  }
  return;
}

