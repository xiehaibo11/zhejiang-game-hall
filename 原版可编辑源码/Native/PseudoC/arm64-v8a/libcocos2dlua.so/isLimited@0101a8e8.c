
/* cocos2d::Physics3D6DofConstraint::isLimited(int) const */

bool __thiscall
cocos2d::Physics3D6DofConstraint::isLimited(Physics3D6DofConstraint *this,int param_1)

{
  long lVar1;
  
  if (param_1 < 3) {
    lVar1 = *(long *)(this + 0x28) + (long)param_1 * 4;
                    /* try { // try from 0101a904 to 0111a90b has its CatchHandler @ 0101aa38 */
    return *(float *)(lVar1 + 0x2c0) <= *(float *)(lVar1 + 0x2d0);
  }
                    /* try { // try from 0101a90c to 0111aa53 has its CatchHandler @ 0101a8a4 */
  lVar1 = *(long *)(this + 0x28) + (long)param_1 * 0x40;
  return *(float *)(lVar1 + 700) <= *(float *)(lVar1 + 0x2c0);
}

