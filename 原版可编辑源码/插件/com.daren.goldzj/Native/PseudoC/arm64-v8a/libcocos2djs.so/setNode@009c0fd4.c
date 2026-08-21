
/* cocos2d::renderer::Model::setNode(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::Model::setNode(Model *this,NodeProxy *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)this;
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
                    /* try { // try from 009c0ff8 to 00ac10db has its CatchHandler @ 009c0e4c */
      Ref::release(this_00);
    }
    *(NodeProxy **)this = param_1;
    if (param_1 != (NodeProxy *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

