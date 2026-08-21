
/* cocos2d::Terrain::Triangle::Triangle(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3
   const&) */

void __thiscall
cocos2d::Terrain::Triangle::Triangle(Triangle *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00d4b3ec with catch @ 00d4b870 */
                    /* catch() { ... } // from try @ 00d4b4bc with catch @ 00d4b874 */
                    /* catch() { ... } // from try @ 00d4b094 with catch @ 00d4b878 */
                    /* catch() { ... } // from try @ 00d4b4ac with catch @ 00d4b87c */
                    /* catch() { ... } // from try @ 00d4b014 with catch @ 00d4b880
                       catch() { ... } // from try @ 00d4b11c with catch @ 00d4b880
                       catch() { ... } // from try @ 00d4b1ec with catch @ 00d4b880
                       catch() { ... } // from try @ 00d4b2d4 with catch @ 00d4b880 */
                    /* catch() { ... } // from try @ 00d4b308 with catch @ 00d4b884 */
                    /* catch() { ... } // from try @ 00d4b150 with catch @ 00d4b888 */
  Vec3::Vec3((Vec3 *)this);
                    /* catch() { ... } // from try @ 00d4b220 with catch @ 00d4b88c */
  Vec3::Vec3((Vec3 *)(this + 0xc));
  Vec3::Vec3((Vec3 *)(this + 0x18));
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
                    /* catch() { ... } // from try @ 00d4b8ec with catch @ 00d4b8b0 */
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

