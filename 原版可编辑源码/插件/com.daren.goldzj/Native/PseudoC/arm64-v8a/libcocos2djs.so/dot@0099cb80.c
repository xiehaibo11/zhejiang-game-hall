
/* cocos2d::Vec3::dot(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

float cocos2d::Vec3::dot(Vec3 *param_1,Vec3 *param_2)

{
                    /* catch() { ... } // from try @ 0099ca28 with catch @ 0099cb84 */
                    /* catch() { ... } // from try @ 0099ca1c with catch @ 0099cb88 */
                    /* catch() { ... } // from try @ 0099c9fc with catch @ 0099cb8c */
                    /* catch() { ... } // from try @ 0099ca34 with catch @ 0099cb9c */
  return *(float *)param_1 * *(float *)param_2 +
         (float)*(undefined8 *)(param_1 + 4) * (float)*(undefined8 *)(param_2 + 4) +
         (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
         (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
}

