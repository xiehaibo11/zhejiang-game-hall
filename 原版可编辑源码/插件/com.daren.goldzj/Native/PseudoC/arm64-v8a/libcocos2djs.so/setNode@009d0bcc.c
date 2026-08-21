
/* cocos2d::renderer::MeshAssembler::setNode(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::MeshAssembler::setNode(MeshAssembler *this,NodeProxy *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x70);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(NodeProxy **)(this + 0x70) = param_1;
    if (param_1 != (NodeProxy *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
                    /* try { // try from 009d0c14 to 00ad0d2f has its CatchHandler @ 009d0920 */
  return;
}

