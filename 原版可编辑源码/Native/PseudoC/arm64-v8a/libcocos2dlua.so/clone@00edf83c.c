
/* covariant return thunk to cocos2d::MoveBy::clone() const */

long __thiscall cocos2d::MoveBy::clone(MoveBy *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00edf848 to 00fdf85f has its CatchHandler @ 00edfa0c */
  lVar2 = create(*(float *)(this + 0x24),(Vec3 *)(this + 0x30));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

