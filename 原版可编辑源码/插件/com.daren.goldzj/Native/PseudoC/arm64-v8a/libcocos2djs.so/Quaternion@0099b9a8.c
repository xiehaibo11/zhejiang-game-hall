
/* cocos2d::Quaternion::Quaternion(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Quaternion::Quaternion(Quaternion *this,Mat4 *param_1)

{
                    /* try { // try from 0099b9b4 to 00a9ba97 has its CatchHandler @ 0099b84c */
  Mat4::getRotation(param_1,this);
  return;
}

