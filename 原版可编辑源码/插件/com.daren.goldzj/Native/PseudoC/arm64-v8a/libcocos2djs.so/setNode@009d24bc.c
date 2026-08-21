
/* cocos2d::renderer::ModelBatcher::setNode(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::ModelBatcher::setNode(ModelBatcher *this,NodeProxy *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x50);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(NodeProxy **)(this + 0x50) = param_1;
    if (param_1 != (NodeProxy *)0x0) {
                    /* try { // try from 009d24f8 to 00ad250b has its CatchHandler @ 009d336c */
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

