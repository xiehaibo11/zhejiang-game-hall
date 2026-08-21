
/* cocos2d::Vec3::dot(cocos2d::Vec3 const&) const */

float __thiscall cocos2d::Vec3::dot(Vec3 *this,Vec3 *param_1)

{
                    /* try { // try from 0099cfa0 to 00a9d087 has its CatchHandler @ 0099ce3c */
  return *(float *)this * *(float *)param_1 +
         (float)*(undefined8 *)(this + 4) * (float)*(undefined8 *)(param_1 + 4) +
         (float)((ulong)*(undefined8 *)(this + 4) >> 0x20) *
         (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
}

