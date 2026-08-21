
/* cocos2d::CCPUBoxEmitter::~CCPUBoxEmitter() */

void __thiscall cocos2d::CCPUBoxEmitter::~CCPUBoxEmitter(CCPUBoxEmitter *this)

{
  PUEmitter::~PUEmitter((PUEmitter *)this);
  operator_delete(this);
  return;
}

