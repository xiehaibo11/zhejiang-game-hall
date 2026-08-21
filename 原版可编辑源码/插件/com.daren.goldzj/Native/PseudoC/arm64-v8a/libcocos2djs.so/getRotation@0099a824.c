
/* cocos2d::Mat4::getRotation(cocos2d::Quaternion*) const */

void __thiscall cocos2d::Mat4::getRotation(Mat4 *this,Quaternion *param_1)

{
                    /* try { // try from 0099a830 to 00a9a873 has its CatchHandler @ 0099a988 */
  decompose(this,(Vec3 *)0x0,param_1,(Vec3 *)0x0);
  return;
}

