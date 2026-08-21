
/* cocos2d::renderer::Camera::setNode(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::Camera::setNode(Camera *this,NodeProxy *param_1)

{
  if (*(Ref **)(this + 0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x10));
  }
  *(NodeProxy **)(this + 0x10) = param_1;
  if (param_1 != (NodeProxy *)0x0) {
    Ref::retain((Ref *)param_1);
    return;
  }
                    /* catch() { ... } // from try @ 009be5b4 with catch @ 009be750 */
  return;
}

