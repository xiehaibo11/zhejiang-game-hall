
/* cocos2d::Grid3D::setVertex(cocos2d::Vec2 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Grid3D::setVertex(Grid3D *this,Vec2 *param_1,Vec3 *param_2)

{
  undefined4 *puVar1;
  
                    /* catch() { ... } // from try @ 00f08460 with catch @ 00f08574 */
                    /* catch() { ... } // from try @ 00f085c0 with catch @ 00f08590 */
  puVar1 = (undefined4 *)
           (*(long *)(this + 0x78) +
           (long)(int)((*(float *)(param_1 + 4) +
                       *(float *)param_1 * (*(float *)(this + 0x2c) + 1.0)) * 3.0) * 4);
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = *(undefined4 *)(param_2 + 4);
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  return;
}

