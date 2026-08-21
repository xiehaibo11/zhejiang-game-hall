
/* cocos2d::experimental::TMXLayer::getVertexZForPos(cocos2d::Vec2 const&) */

int __thiscall cocos2d::experimental::TMXLayer::getVertexZForPos(TMXLayer *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  
  if (this[0x3a0] == (TMXLayer)0x0) {
    return *(int *)(this + 0x39c);
  }
  if (*(int *)(this + 0x330) == 0) {
    fVar1 = *(float *)(this + 0x314);
    fVar2 = *(float *)(param_1 + 4);
  }
  else {
    if (*(int *)(this + 0x330) != 2) {
      return 0;
    }
                    /* try { // try from 00ef9c6c to 00ff9c7b has its CatchHandler @ 00ef9ddc */
    fVar1 = (float)(int)(*(float *)(this + 0x310) + *(float *)(this + 0x314));
    fVar2 = *(float *)param_1 + *(float *)(param_1 + 4);
  }
                    /* try { // try from 00ef9c8c to 00ff9c9f has its CatchHandler @ 00ef9dcc */
  return (int)-(fVar1 - fVar2);
}

