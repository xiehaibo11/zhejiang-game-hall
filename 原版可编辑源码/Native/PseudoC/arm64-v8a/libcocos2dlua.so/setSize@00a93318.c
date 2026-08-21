
/* fairygui::ScrollPane::setSize(float, float) */

void __thiscall fairygui::ScrollPane::setSize(ScrollPane *this,float param_1,float param_2)

{
  long lVar1;
  GObject *pGVar2;
  Size *pSVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pGVar2 = *(GObject **)(this + 0x110);
  if (pGVar2 != (GObject *)0x0) {
    GObject::setY(pGVar2,param_2 - *(float *)(pGVar2 + 0xcc));
    pGVar2 = *(GObject **)(this + 0x110);
    if (*(long *)(this + 0x118) == 0) {
      GObject::setSize(pGVar2,(param_1 - *(float *)(this + 0x30)) - *(float *)(this + 0x38),
                       *(float *)(pGVar2 + 0xd4),false);
      GObject::setX(*(GObject **)(this + 0x110),*(float *)(this + 0x30));
      pGVar2 = *(GObject **)(this + 0x118);
      goto joined_r0x00a933a8;
    }
                    /* try { // try from 00a93364 to 00b93397 has its CatchHandler @ 00a9326c */
    GObject::setSize(pGVar2,((param_1 - *(float *)(*(long *)(this + 0x118) + 200)) -
                            *(float *)(this + 0x30)) - *(float *)(this + 0x38),
                     *(float *)(pGVar2 + 0xd4),false);
    fVar5 = *(float *)(this + 0x30);
    if (this[0x4c] != (ScrollPane)0x0) {
                    /* try { // try from 00a93398 to 00b933ab has its CatchHandler @ 00a93404 */
      fVar5 = fVar5 + *(float *)(*(long *)(this + 0x118) + 200);
    }
    GObject::setX(*(GObject **)(this + 0x110),fVar5);
  }
  pGVar2 = *(GObject **)(this + 0x118);
joined_r0x00a933a8:
  if (pGVar2 != (GObject *)0x0) {
                    /* try { // try from 00a933b0 to 00b933c3 has its CatchHandler @ 00a93408 */
    if (this[0x4c] == (ScrollPane)0x0) {
      GObject::setX(pGVar2,param_1 - *(float *)(pGVar2 + 200));
                    /* try { // try from 00a933c4 to 00b93423 has its CatchHandler @ 00a9326c */
      pGVar2 = *(GObject **)(this + 0x118);
    }
    fVar5 = param_2;
    if (*(long *)(this + 0x110) != 0) {
      fVar5 = param_2 - *(float *)(*(long *)(this + 0x110) + 0xcc);
    }
    GObject::setSize(pGVar2,*(float *)(pGVar2 + 0xd0),
                     (fVar5 - *(float *)(this + 0x34)) - *(float *)(this + 0x3c),false);
    GObject::setY(*(GObject **)(this + 0x118),*(float *)(this + 0x34));
                    /* catch() { ... } // from try @ 00a932c0 with catch @ 00a93404
                       catch() { ... } // from try @ 00a93398 with catch @ 00a93404 */
  }
                    /* catch() { ... } // from try @ 00a93308 with catch @ 00a93408
                       catch() { ... } // from try @ 00a933b0 with catch @ 00a93408 */
  pSVar3 = (Size *)(this + 100);
  *(float *)pSVar3 = param_1;
  *(float *)(this + 0x68) = param_2;
  if ((*(long *)(this + 0x110) != 0) && (this[0x59] == (ScrollPane)0x0)) {
    param_2 = param_2 - *(float *)(*(long *)(this + 0x110) + 0xcc);
    *(float *)(this + 0x68) = param_2;
  }
  if ((*(long *)(this + 0x118) != 0) && (this[0x59] == (ScrollPane)0x0)) {
    param_1 = param_1 - *(float *)(*(long *)(this + 0x118) + 200);
    *(float *)pSVar3 = param_1;
  }
  uVar6 = NEON_fmov(0x3f800000,4);
  uVar8 = *(undefined8 *)(*(long *)(this + 0xf8) + 0x238);
  uVar7 = *(undefined8 *)(*(long *)(this + 0xf8) + 0x240);
  uVar6 = NEON_fmax(CONCAT44(param_2 - ((float)((ulong)uVar8 >> 0x20) +
                                       (float)((ulong)uVar7 >> 0x20)),
                             param_1 - ((float)uVar8 + (float)uVar7)),uVar6,4);
  *(undefined8 *)(this + 100) = uVar6;
  cocos2d::Size::operator=((Size *)(this + 0x7c),pSVar3);
  if (((this[0x4c] == (ScrollPane)0x0) || (*(long *)(this + 0x118) == 0)) ||
     (this[0x59] != (ScrollPane)0x0)) {
    lVar4 = *(long *)(this + 0xf8);
    fVar5 = *(float *)(lVar4 + 0x238);
  }
  else {
    lVar4 = *(long *)(this + 0xf8);
    fVar5 = *(float *)(lVar4 + 0x238) + *(float *)(*(long *)(this + 0x118) + 200);
  }
  local_30 = (float)(int)fVar5 + *(float *)(lVar4 + 0x248);
  fStack_2c = (*(float *)(lVar4 + 0xcc) - *(float *)(this + 0x68)) -
              ((float)(int)*(float *)(lVar4 + 0x23c) + *(float *)(lVar4 + 0x24c));
  (**(code **)(**(long **)(this + 0x100) + 0x98))(*(long **)(this + 0x100),&local_30);
  handleSizeChanged(this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

