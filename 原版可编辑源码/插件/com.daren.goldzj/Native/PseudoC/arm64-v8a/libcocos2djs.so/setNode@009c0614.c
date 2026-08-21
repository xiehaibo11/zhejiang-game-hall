
/* cocos2d::renderer::Light::setNode(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::Light::setNode(Light *this,NodeProxy *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x168);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(NodeProxy **)(this + 0x168) = param_1;
    if (param_1 != (NodeProxy *)0x0) {
                    /* try { // try from 009c0648 to 00ac065f has its CatchHandler @ 009c08fc */
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

