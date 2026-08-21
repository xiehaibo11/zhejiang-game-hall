
/* cocos2d::renderer::BaseRenderer::init(cocos2d::renderer::DeviceGraphics*,
   std::__ndk1::vector<cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template> >&) */

undefined8 __thiscall
cocos2d::renderer::BaseRenderer::init(BaseRenderer *this,DeviceGraphics *param_1,vector *param_2)

{
  ProgramLib *this_00;
  
  *(DeviceGraphics **)(this + 0x10) = param_1;
  Ref::retain((Ref *)param_1);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (ProgramLib *)0x0) {
    ProgramLib::ProgramLib(this_00,*(DeviceGraphics **)(this + 0x10),param_2);
  }
  *(ProgramLib **)(this + 0x18) = this_00;
  return 1;
}

