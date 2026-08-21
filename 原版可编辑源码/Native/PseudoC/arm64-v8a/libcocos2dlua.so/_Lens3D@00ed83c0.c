
/* cocos2d::Lens3D::~Lens3D() */

void __thiscall cocos2d::Lens3D::~Lens3D(Lens3D *this)

{
                    /* try { // try from 00ed83c8 to 00fd83d7 has its CatchHandler @ 00ed862c */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

