
/* cocos2d::renderer::NodeProxy::~NodeProxy() */

void __thiscall cocos2d::renderer::NodeProxy::~NodeProxy(NodeProxy *this)

{
  ~NodeProxy(this);
  operator_delete(this);
  return;
}

