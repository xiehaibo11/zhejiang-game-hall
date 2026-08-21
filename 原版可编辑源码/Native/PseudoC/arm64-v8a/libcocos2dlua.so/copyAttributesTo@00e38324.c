
/* cocos2d::PUPositionEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall
cocos2d::PUPositionEmitter::copyAttributesTo(PUPositionEmitter *this,PUEmitter *param_1)

{
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  *(PUPositionEmitter *)(param_1 + 0x218) = this[0x218];
  if (this != (PUPositionEmitter *)param_1) {
    std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign<cocos2d::Vec3*>
              ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(param_1 + 0x200),
               *(Vec3 **)(this + 0x200),*(Vec3 **)(this + 0x208));
    return;
  }
  return;
}

