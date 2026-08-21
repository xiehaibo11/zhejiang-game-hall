
/* cocos2d::RenderState::getTopmost(cocos2d::RenderState*) */

RenderState * __thiscall cocos2d::RenderState::getTopmost(RenderState *this,RenderState *param_1)

{
  RenderState *pRVar1;
  
  if (this == param_1) {
    return (RenderState *)0x0;
  }
  while( true ) {
    pRVar1 = this;
    if (this == (RenderState *)0x0) {
      return pRVar1;
    }
    this = *(RenderState **)(this + 0x38);
    if (this == param_1) break;
    if (this == (RenderState *)0x0) {
      return pRVar1;
    }
  }
  return pRVar1;
}

