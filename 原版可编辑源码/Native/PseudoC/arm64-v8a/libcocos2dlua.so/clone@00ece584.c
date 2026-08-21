
/* covariant return thunk to cocos2d::CatmullRomBy::clone() const */

long __thiscall cocos2d::CatmullRomBy::clone(CatmullRomBy *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00ece588 to 00fce58f has its CatchHandler @ 00ece5e4 */
  lVar2 = clone(this + -0x28);
                    /* try { // try from 00ece598 to 00fce5a3 has its CatchHandler @ 00ece5dc */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
                    /* try { // try from 00ece5a4 to 00fce5ff has its CatchHandler @ 00ece508 */
  return lVar1;
}

