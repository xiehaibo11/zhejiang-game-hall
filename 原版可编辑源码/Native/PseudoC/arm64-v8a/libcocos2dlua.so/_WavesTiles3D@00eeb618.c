
/* cocos2d::WavesTiles3D::~WavesTiles3D() */

void __thiscall cocos2d::WavesTiles3D::~WavesTiles3D(WavesTiles3D *this)

{
                    /* try { // try from 00eeb624 to 00feb6c3 has its CatchHandler @ 00eeb5a8 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

