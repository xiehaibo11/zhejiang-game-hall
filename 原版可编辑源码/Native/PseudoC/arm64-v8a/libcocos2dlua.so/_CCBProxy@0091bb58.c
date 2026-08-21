
/* CCBProxy::~CCBProxy() */

void __thiscall CCBProxy::~CCBProxy(CCBProxy *this)

{
  cocos2d::Layer::~Layer((Layer *)this);
  operator_delete(this);
  return;
}

