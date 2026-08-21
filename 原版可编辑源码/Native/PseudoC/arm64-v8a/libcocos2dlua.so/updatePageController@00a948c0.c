
/* fairygui::ScrollPane::updatePageController() */

void __thiscall fairygui::ScrollPane::updatePageController(ScrollPane *this)

{
  int iVar1;
  GController *pGVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  pGVar2 = *(GController **)(this + 0x130);
  if (pGVar2 == (GController *)0x0) {
    return;
  }
  if (pGVar2[0x60] != (GController)0x0) {
    return;
  }
  if (*(int *)(this + 0x24) == 0) {
                    /* try { // try from 00a94900 to 00b9492f has its CatchHandler @ 00a94864 */
    if (this[0x58] != (ScrollPane)0x0) {
      fVar4 = *(float *)(this + 0x5c);
      fVar5 = *(float *)(this + 0x7c);
      goto LAB_00a9490c;
    }
  }
  else if (this[0x58] != (ScrollPane)0x0) {
    fVar4 = *(float *)(this + 0x60);
    fVar5 = *(float *)(this + 0x80);
LAB_00a9490c:
                    /* try { // try from 00a94930 to 00b94943 has its CatchHandler @ 00a94984 */
    iVar3 = (uint)(fVar5 * 0.5 < fVar4 - fVar5 * (float)(int)(fVar4 / fVar5)) + (int)(fVar4 / fVar5)
    ;
    goto LAB_00a9493c;
  }
  iVar3 = 0;
LAB_00a9493c:
  iVar1 = GController::getPageCount(pGVar2);
                    /* try { // try from 00a94944 to 00b9499f has its CatchHandler @ 00a94864 */
  if (iVar3 < iVar1) {
    pGVar2 = *(GController **)(this + 0x130);
    *(undefined8 *)(this + 0x130) = 0;
    GController::setSelectedIndex(pGVar2,iVar3,true);
    *(GController **)(this + 0x130) = pGVar2;
  }
  return;
}

