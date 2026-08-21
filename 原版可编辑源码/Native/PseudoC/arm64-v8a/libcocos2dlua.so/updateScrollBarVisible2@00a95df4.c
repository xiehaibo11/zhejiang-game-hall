
/* fairygui::ScrollPane::updateScrollBarVisible2(fairygui::GScrollBar*) */

void __thiscall fairygui::ScrollPane::updateScrollBarVisible2(ScrollPane *this,GScrollBar *param_1)

{
  long lVar1;
  GTweener *pGVar2;
  code *pcVar3;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  ScrollPane *local_68;
  long *local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 00a959a8 with catch @ 00a95df8 */
                    /* catch() { ... } // from try @ 00a95998 with catch @ 00a95dfc */
                    /* catch() { ... } // from try @ 00a958d4 with catch @ 00a95e00 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a95854 with catch @ 00a95e10
                       catch() { ... } // from try @ 00a95d4c with catch @ 00a95e10 */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a95834 with catch @ 00a95e14 */
                    /* catch() { ... } // from try @ 00a95754 with catch @ 00a95e18 */
                    /* catch() { ... } // from try @ 00a95b0c with catch @ 00a95e38 */
                    /* catch() { ... } // from try @ 00a9597c with catch @ 00a95e3c */
                    /* catch() { ... } // from try @ 00a958b0 with catch @ 00a95e40 */
                    /* catch() { ... } // from try @ 00a95818 with catch @ 00a95e44 */
                    /* catch() { ... } // from try @ 00a95730 with catch @ 00a95e48 */
  if ((((this[0x42] == (ScrollPane)0x0) ||
       (GTween::kill(param_1,0xb,0), this[0x42] == (ScrollPane)0x0)) ||
      (this[0xc4] != (ScrollPane)0x0)) ||
     (((*(int *)(this + 0xd0) != 0 || (this[0xb8] != (ScrollPane)0x0)) ||
      (param_1[0x280] != (GScrollBar)0x0)))) {
                    /* try { // try from 00a95e64 to 00b95eaf has its CatchHandler @ 00a95e64
                       catch() { ... } // from try @ 00a95e64 with catch @ 00a95e64
                       catch() { ... } // from try @ 00a95eb4 with catch @ 00a95e64 */
    GObject::setAlpha((GObject *)param_1,1.0);
    GObject::setVisible((GObject *)param_1,true);
  }
  else if (param_1[0xf4] != (GScrollBar)0x0) {
                    /* try { // try from 00a95eb0 to 00b95eb3 has its CatchHandler @ 00a95ee8 */
                    /* try { // try from 00a95eb4 to 00b95efb has its CatchHandler @ 00a95e64 */
    pGVar2 = (GTweener *)GTween::to(1.0,0.0,0.5);
    pGVar2 = (GTweener *)GTweener::setDelay(pGVar2,0.5);
    local_80 = &PTR_FUN_016a7468;
                    /* catch() { ... } // from try @ 00a95eb0 with catch @ 00a95ee8 */
    uStack_70 = 0;
    local_78 = onBarTweenComplete;
    local_68 = this;
    local_60 = (long *)&local_80;
    pGVar2 = (GTweener *)GTweener::onComplete1(pGVar2,&local_80);
                    /* try { // try from 00a95efc to 00b9644b has its CatchHandler @ 00a95efc
                       catch() { ... } // from try @ 00a95efc with catch @ 00a95efc
                       catch() { ... } // from try @ 00a964cc with catch @ 00a95efc */
    GTweener::setTarget(pGVar2,param_1,0xb);
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00a95e78;
      pcVar3 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar3)();
  }
LAB_00a95e78:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

