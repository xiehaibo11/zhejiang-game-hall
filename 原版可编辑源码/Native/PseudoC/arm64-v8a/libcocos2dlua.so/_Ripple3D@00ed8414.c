
/* cocos2d::Ripple3D::~Ripple3D() */

void __thiscall cocos2d::Ripple3D::~Ripple3D(Ripple3D *this)

{
                    /* try { // try from 00ed8420 to 00fd844f has its CatchHandler @ 00ed8698 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

