
/* cocos2d::TMXLayer::getVertexZForPos(cocos2d::Vec2 const&) */

int __thiscall cocos2d::TMXLayer::getVertexZForPos(TMXLayer *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  
  if (this[0x3c0] != (TMXLayer)0x0) {
    switch(*(undefined4 *)(this + 0x400)) {
    case 0:
    case 1:
    case 3:
      fVar1 = *(float *)(this + 0x3e0);
      fVar2 = *(float *)(param_1 + 4);
      break;
    case 2:
      fVar1 = (float)(int)(*(float *)(this + 0x3dc) + *(float *)(this + 0x3e0));
      fVar2 = *(float *)param_1 + *(float *)(param_1 + 4);
      break;
    default:
      return 0;
    }
    return (int)-(fVar1 - fVar2);
  }
  return *(int *)(this + 0x3bc);
}

