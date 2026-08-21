
/* fairygui::GComboBox::updateSelectionController() */

void __thiscall fairygui::GComboBox::updateSelectionController(GComboBox *this)

{
  int iVar1;
  int iVar2;
  GController *pGVar3;
  
                    /* catch() { ... } // from try @ 00a6e4b4 with catch @ 00a6e97c */
  pGVar3 = *(GController **)(this + 0x2a8);
                    /* catch() { ... } // from try @ 00a6e698 with catch @ 00a6e998 */
                    /* catch() { ... } // from try @ 00a6e5f4 with catch @ 00a6e99c */
                    /* catch() { ... } // from try @ 00a6e550 with catch @ 00a6e9a0 */
                    /* catch() { ... } // from try @ 00a6e490 with catch @ 00a6e9a4 */
  if (((pGVar3 != (GController *)0x0) && (pGVar3[0x60] == (GController)0x0)) &&
     (iVar1 = *(int *)(this + 0x2fc), iVar2 = GController::getPageCount(pGVar3), iVar1 < iVar2)) {
    pGVar3 = *(GController **)(this + 0x2a8);
    *(undefined8 *)(this + 0x2a8) = 0;
    GController::setSelectedIndex(pGVar3,*(int *)(this + 0x2fc),true);
    *(GController **)(this + 0x2a8) = pGVar3;
  }
  return;
}

