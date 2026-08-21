
/* cocos2d::GLView::setDesignResolutionSize(float, float, ResolutionPolicy) */

void __thiscall
cocos2d::GLView::setDesignResolutionSize
          (float param_1,float param_2,GLView *this,undefined4 param_4)

{
  if ((param_1 != 0.0) && (param_2 != 0.0)) {
    Size::setSize((Size *)(this + 0x2c),param_1,param_2);
    *(undefined4 *)(this + 0x68) = param_4;
    updateDesignResolutionSize(this);
    return;
  }
  return;
}

