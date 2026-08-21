
/* non-virtual thunk to cocos2d::FlipY3D::~FlipY3D() */

void __thiscall cocos2d::FlipY3D::~FlipY3D(FlipY3D *this)

{
  Action::~Action((Action *)(this + -0x28));
                    /* try { // try from 00ed83b4 to 00fd83bf has its CatchHandler @ 00ed8698 */
  operator_delete((Action *)(this + -0x28));
  return;
}

