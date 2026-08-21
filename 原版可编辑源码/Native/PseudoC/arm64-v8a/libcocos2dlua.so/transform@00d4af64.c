
/* cocos2d::Terrain::Triangle::transform(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Terrain::Triangle::transform(Triangle *this,Mat4 *param_1)

{
                    /* try { // try from 00d4af6c to 00e4af77 has its CatchHandler @ 00d4b794 */
                    /* try { // try from 00d4af80 to 00e4af8b has its CatchHandler @ 00d4b790 */
                    /* try { // try from 00d4af94 to 00e4afa3 has its CatchHandler @ 00d4b788 */
  Mat4::transformVector
            (param_1,*(float *)this,*(float *)(this + 4),*(float *)(this + 8),1.0,(Vec3 *)this);
                    /* try { // try from 00d4afa4 to 00e4afab has its CatchHandler @ 00d4b784 */
  Mat4::transformVector
            (param_1,*(float *)(this + 0xc),*(float *)(this + 0x10),*(float *)(this + 0x14),1.0,
             (Vec3 *)(this + 0xc));
  Mat4::transformVector
            (param_1,*(float *)(this + 0x18),*(float *)(this + 0x1c),*(float *)(this + 0x20),1.0,
             (Vec3 *)(this + 0x18));
  return;
}

