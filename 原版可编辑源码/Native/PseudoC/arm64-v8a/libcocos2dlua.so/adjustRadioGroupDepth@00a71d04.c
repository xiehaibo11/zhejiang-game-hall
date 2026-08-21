
/* fairygui::GComponent::adjustRadioGroupDepth(fairygui::GObject*, fairygui::GController*) */

void __thiscall
fairygui::GComponent::adjustRadioGroupDepth(GComponent *this,GObject *param_1,GController *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  GObject *pGVar7;
  long lVar8;
  
                    /* try { // try from 00a71d20 to 00b71d37 has its CatchHandler @ 00a72090 */
  lVar1 = *(long *)(this + 0x1e0);
  lVar2 = *(long *)(this + 0x1e8);
  if (0 < lVar2 - lVar1) {
                    /* try { // try from 00a71d44 to 00b71d5b has its CatchHandler @ 00a72044 */
    lVar8 = 0;
    lVar5 = -1;
    lVar3 = -1;
                    /* try { // try from 00a71d60 to 00b71d77 has its CatchHandler @ 00a7203c */
    do {
      pGVar7 = *(GObject **)(lVar1 + lVar8 * 8);
      lVar4 = lVar5;
      lVar6 = lVar8;
                    /* try { // try from 00a71d80 to 00b71db7 has its CatchHandler @ 00a72038 */
      if ((((pGVar7 != param_1) && (lVar6 = lVar3, pGVar7 != (GObject *)0x0)) &&
          (lVar3 = __dynamic_cast(pGVar7,&GObject::typeinfo,&GButton::typeinfo,0), lVar3 != 0)) &&
         (lVar4 = lVar8, *(GController **)(pGVar7 + 0x2a0) != param_2 || lVar8 <= lVar5)) {
        lVar4 = lVar5;
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar4;
      lVar3 = lVar6;
    } while (lVar8 < lVar2 - lVar1 >> 3);
                    /* try { // try from 00a71db8 to 00b71ef3 has its CatchHandler @ 00a71a2c */
    if (lVar6 < lVar4) {
      if (*(long *)(this + 0x278) != 0) {
        (**(code **)(**(long **)(lVar1 + lVar4 * 8) + 0x78))();
      }
      swapChildrenAt(this,(int)lVar6,(int)lVar4);
      return;
    }
  }
  return;
}

