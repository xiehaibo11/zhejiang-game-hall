
/* cocos2d::Camera::onEnter() */

void __thiscall cocos2d::Camera::onEnter(Camera *this)

{
  Scene *pSVar1;
  
  if ((*(long *)(this + 0x2f8) == 0) &&
     (pSVar1 = (Scene *)(**(code **)(*(long *)this + 0x368))(this), pSVar1 != (Scene *)0x0)) {
    setScene(this,pSVar1);
  }
  Node::onEnter((Node *)this);
  return;
}

