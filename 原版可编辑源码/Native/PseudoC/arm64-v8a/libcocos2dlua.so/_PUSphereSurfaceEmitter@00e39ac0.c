
/* cocos2d::PUSphereSurfaceEmitter::~PUSphereSurfaceEmitter() */

void __thiscall
cocos2d::PUSphereSurfaceEmitter::~PUSphereSurfaceEmitter(PUSphereSurfaceEmitter *this)

{
  PUEmitter::~PUEmitter((PUEmitter *)this);
  operator_delete(this);
  return;
}

