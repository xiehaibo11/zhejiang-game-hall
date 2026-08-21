
/* cocos2d::PUBillboardChain::setOtherTextureCoordRange(float, float) */

void __thiscall
cocos2d::PUBillboardChain::setOtherTextureCoordRange
          (PUBillboardChain *this,float param_1,float param_2)

{
  *(float *)(this + 0x24) = param_1;
  *(float *)(this + 0x28) = param_2;
  this[0x1f] = (PUBillboardChain)0x1;
  return;
}

