
/* cocos2d::ui::Layout::setBackGroundColor(cocos2d::Color3B const&, cocos2d::Color3B const&) */

void __thiscall
cocos2d::ui::Layout::setBackGroundColor(Layout *this,Color3B *param_1,Color3B *param_2)

{
  Layout LVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)param_1;
  this[0x595] = *(Layout *)(param_1 + 2);
                    /* catch() { ... } // from try @ 00dafe14 with catch @ 00dafecc */
  *(undefined2 *)(this + 0x593) = uVar2;
  if (*(Color3B **)(this + 0x588) == (Color3B *)0x0) {
    uVar2 = *(undefined2 *)param_2;
    this[0x598] = *(Layout *)(param_2 + 2);
    *(undefined2 *)(this + 0x596) = uVar2;
  }
  else {
    LayerGradient::setStartColor(*(Color3B **)(this + 0x588));
    LVar1 = *(Layout *)(param_2 + 2);
    *(undefined2 *)(this + 0x596) = *(undefined2 *)param_2;
    this[0x598] = LVar1;
    if (*(LayerGradient **)(this + 0x588) != (LayerGradient *)0x0) {
                    /* try { // try from 00daff04 to 00eaffbf has its CatchHandler @ 00daff04
                       catch() { ... } // from try @ 00daff04 with catch @ 00daff04
                       catch() { ... } // from try @ 00daffc4 with catch @ 00daff04
                       catch() { ... } // from try @ 00db00c0 with catch @ 00daff04 */
      LayerGradient::setEndColor(*(LayerGradient **)(this + 0x588),param_2);
      return;
    }
  }
  return;
}

