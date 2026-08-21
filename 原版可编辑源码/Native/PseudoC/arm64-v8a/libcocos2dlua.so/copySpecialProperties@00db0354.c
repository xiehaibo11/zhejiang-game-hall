
/* cocos2d::ui::Layout::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Layout::copySpecialProperties(Layout *this,Widget *param_1)

{
  Color3B *pCVar1;
  int iVar2;
  Layout LVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  if (param_1 == (Widget *)0x0) {
    return;
  }
  lVar6 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0);
                    /* try { // try from 00db038c to 00eb039b has its CatchHandler @ 00db03c0 */
  if (lVar6 == 0) {
    return;
  }
                    /* try { // try from 00db039c to 00eb03ff has its CatchHandler @ 00db0134 */
  setBackGroundImageScale9Enabled(this,*(bool *)(lVar6 + 0x530));
                    /* catch() { ... } // from try @ 00db0254 with catch @ 00db03a0 */
  setBackGroundImage(this,lVar6 + 0x540,*(undefined4 *)(lVar6 + 0x56c));
  Rect::operator=((Rect *)(this + 0x558),(Rect *)(lVar6 + 0x558));
                    /* catch() { ... } // from try @ 00db0204 with catch @ 00db03c0
                       catch() { ... } // from try @ 00db038c with catch @ 00db03c0 */
  if ((this[0x530] != (Layout)0x0) && (*(Scale9Sprite **)(this + 0x538) != (Scale9Sprite *)0x0)) {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x538),(Rect *)(lVar6 + 0x558));
  }
                    /* catch() { ... } // from try @ 00db0260 with catch @ 00db03dc */
  setBackGroundColorType(this,*(undefined4 *)(lVar6 + 0x568));
  LVar3 = *(Layout *)(lVar6 + 0x592);
  plVar7 = *(long **)(this + 0x580);
  *(undefined2 *)(this + 0x590) = *(undefined2 *)(lVar6 + 0x590);
  this[0x592] = LVar3;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x4c0))(plVar7,lVar6 + 0x590);
  }
  uVar4 = *(undefined2 *)(lVar6 + 0x593);
  pCVar1 = (Color3B *)(lVar6 + 0x596);
  this[0x595] = *(Layout *)(lVar6 + 0x595);
  *(undefined2 *)(this + 0x593) = uVar4;
  if (*(Color3B **)(this + 0x588) == (Color3B *)0x0) {
    uVar4 = *(undefined2 *)pCVar1;
    this[0x598] = *(Layout *)(lVar6 + 0x598);
    *(undefined2 *)(this + 0x596) = uVar4;
  }
  else {
    LayerGradient::setStartColor(*(Color3B **)(this + 0x588));
    LVar3 = *(Layout *)(lVar6 + 0x598);
    *(undefined2 *)(this + 0x596) = *(undefined2 *)pCVar1;
    this[0x598] = LVar3;
    if (*(LayerGradient **)(this + 0x588) != (LayerGradient *)0x0) {
      LayerGradient::setEndColor(*(LayerGradient **)(this + 0x588),pCVar1);
    }
  }
  this[0x5a4] = *(Layout *)(lVar6 + 0x5a4);
  if (*(int *)(this + 0x568) == 2) {
    plVar7 = *(long **)(this + 0x588);
  }
  else {
    if (*(int *)(this + 0x568) != 1) goto LAB_00db049c;
    plVar7 = *(long **)(this + 0x580);
  }
  (**(code **)(*plVar7 + 0x490))();
LAB_00db049c:
  *(undefined8 *)(this + 0x59c) = *(undefined8 *)(lVar6 + 0x59c);
  if (*(LayerGradient **)(this + 0x588) != (LayerGradient *)0x0) {
    LayerGradient::setVector(*(LayerGradient **)(this + 0x588),(Vec2 *)(lVar6 + 0x59c));
  }
  (**(code **)(*(long *)this + 0x690))(this,*(undefined4 *)(lVar6 + 0x5a8));
  (**(code **)(*(long *)this + 0x680))(this,*(undefined1 *)(lVar6 + 0x5a5));
  iVar2 = *(int *)(lVar6 + 0x5ac);
  if (*(int *)(this + 0x5ac) != iVar2) {
    uVar5 = (**(code **)(*(long *)this + 0x688))(this);
    (**(code **)(*(long *)this + 0x680))(this,0);
    *(int *)(this + 0x5ac) = iVar2;
    (**(code **)(*(long *)this + 0x680))(this,uVar5 & 1);
  }
  this[0x7b2] = *(Layout *)(lVar6 + 0x7b2);
  this[0x7b3] = *(Layout *)(lVar6 + 0x7b3);
  this[0x7b1] = *(Layout *)(lVar6 + 0x7b1);
  return;
}

