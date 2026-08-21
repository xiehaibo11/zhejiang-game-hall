
/* cocos2d::Director::setOpenGLView(cocos2d::GLView*) */

void __thiscall cocos2d::Director::setOpenGLView(Director *this,GLView *param_1)

{
  Configuration *this_00;
  Size *pSVar1;
  
  if (*(GLView **)(this + 0x108) != param_1) {
    this_00 = (Configuration *)Configuration::getInstance();
    Configuration::gatherGPUInfo(this_00);
    if (*(Ref **)(this + 0x108) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x108));
    }
    *(GLView **)(this + 0x108) = param_1;
    Ref::retain((Ref *)param_1);
    pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x108) + 200))();
    Size::operator=((Size *)(this + 0x198),pSVar1);
    this[0x1c0] = (Director)0x1;
    if (*(long *)(this + 0x108) != 0) {
      GL::blendFunc(1,0x303);
      Renderer::setDepthTest(*(Renderer **)(this + 0x1b0),false);
      setProjection(this,*(undefined4 *)(this + 0x194));
    }
    Renderer::initGLView(*(Renderer **)(this + 0x1b0));
                    /* try { // try from 00f991e4 to 010991f7 has its CatchHandler @ 00f99264 */
    if (*(EventDispatcher **)(this + 0xb0) != (EventDispatcher *)0x0) {
      EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0xb0),true);
      return;
    }
  }
  return;
}

