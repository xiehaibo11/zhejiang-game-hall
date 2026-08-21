
/* cocos2d::Mat4::getDownVector(cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::getDownVector(Mat4 *this,Vec3 *param_1)

{
                    /* try { // try from 0099a878 to 00a9a8bb has its CatchHandler @ 0099a984 */
  *(float *)param_1 = -*(float *)(this + 0x10);
  *(float *)(param_1 + 4) = -*(float *)(this + 0x14);
  *(float *)(param_1 + 8) = -*(float *)(this + 0x18);
  return;
}

