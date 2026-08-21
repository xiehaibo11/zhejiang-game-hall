
/* cocos2d::LabelRenderer::bindNodeProxy(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::LabelRenderer::bindNodeProxy(LabelRenderer *this,NodeProxy *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x30);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(NodeProxy **)(this + 0x30) = param_1;
    if (param_1 != (NodeProxy *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

