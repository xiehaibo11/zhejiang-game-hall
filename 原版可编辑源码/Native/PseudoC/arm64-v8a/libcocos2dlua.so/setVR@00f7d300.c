
/* cocos2d::GLView::setVR(cocos2d::VRIRenderer*) */

void __thiscall cocos2d::GLView::setVR(GLView *this,VRIRenderer *param_1)

{
  VRIRenderer *pVVar1;
  
  pVVar1 = *(VRIRenderer **)(this + 0x70);
  if (pVVar1 != param_1) {
    if (pVVar1 != (VRIRenderer *)0x0) {
      (**(code **)(*(long *)pVVar1 + 0x18))();
      if (*(long **)(this + 0x70) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x70) + 8))();
      }
    }
    if (param_1 != (VRIRenderer *)0x0) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,this);
    }
    *(VRIRenderer **)(this + 0x70) = param_1;
  }
  return;
}

