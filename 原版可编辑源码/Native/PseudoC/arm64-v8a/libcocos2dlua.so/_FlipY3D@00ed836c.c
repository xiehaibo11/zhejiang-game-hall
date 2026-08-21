
/* cocos2d::FlipY3D::~FlipY3D() */

void __thiscall cocos2d::FlipY3D::~FlipY3D(FlipY3D *this)

{
                    /* try { // try from 00ed836c to 00fd8377 has its CatchHandler @ 00ed8630 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

