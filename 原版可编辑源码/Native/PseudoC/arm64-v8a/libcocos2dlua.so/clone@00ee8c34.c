
/* covariant return thunk to cocos2d::ShatteredTiles3D::clone() const */

long __thiscall cocos2d::ShatteredTiles3D::clone(ShatteredTiles3D *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00ee8c34 to 00fe8c3f has its CatchHandler @ 00ee8e44 */
                    /* try { // try from 00ee8c40 to 00fe8c4b has its CatchHandler @ 00ee8e24 */
                    /* try { // try from 00ee8c4c to 00fe8c57 has its CatchHandler @ 00ee8e04 */
  lVar2 = create(*(float *)(this + 0x24),(Size *)(this + 0x30),*(int *)(this + 0x40),
                 (bool)this[0x45]);
                    /* try { // try from 00ee8c58 to 00fe8c63 has its CatchHandler @ 00ee8de4 */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

