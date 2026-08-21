
/* cocos2d::PULineEmitter::~PULineEmitter() */

void __thiscall cocos2d::PULineEmitter::~PULineEmitter(PULineEmitter *this)

{
  PUEmitter::~PUEmitter((PUEmitter *)this);
  operator_delete(this);
  return;
}

