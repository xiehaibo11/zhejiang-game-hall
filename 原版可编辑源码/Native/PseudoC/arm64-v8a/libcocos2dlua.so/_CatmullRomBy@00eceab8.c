
/* non-virtual thunk to cocos2d::CatmullRomBy::~CatmullRomBy() */

void __thiscall cocos2d::CatmullRomBy::~CatmullRomBy(CatmullRomBy *this)

{
  *(undefined ***)(this + -0x28) = &PTR__CardinalSplineTo_016f57d8;
  *(undefined ***)this = &PTR_clone_016f5840;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
                    /* try { // try from 00eceaf4 to 00fceaff has its CatchHandler @ 00eceba4 */
                    /* try { // try from 00eceb00 to 00fcebff has its CatchHandler @ 00ecea78 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

