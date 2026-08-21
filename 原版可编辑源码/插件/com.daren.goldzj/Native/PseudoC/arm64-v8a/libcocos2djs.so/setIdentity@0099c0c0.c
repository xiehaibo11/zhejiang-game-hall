
/* cocos2d::Quaternion::setIdentity() */

void __thiscall cocos2d::Quaternion::setIdentity(Quaternion *this)

{
                    /* try { // try from 0099c0c8 to 00a9c0df has its CatchHandler @ 0099c254 */
  *(undefined8 *)(this + 8) = 0x3f80000000000000;
  *(undefined8 *)this = 0;
  return;
}

