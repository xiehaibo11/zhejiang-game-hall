
/* cocos2d::PUTriangle::getRandomVertexAndNormal() */

void cocos2d::PUTriangle::getRandomVertexAndNormal(void)

{
  int iVar1;
  long in_x0;
  Vec3 *in_x8;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  
                    /* catch() { ... } // from try @ 00e35678 with catch @ 00e369ac */
                    /* catch() { ... } // from try @ 00e36738 with catch @ 00e369b4 */
                    /* catch() { ... } // from try @ 00e3666c with catch @ 00e369b8
                       catch() { ... } // from try @ 00e366c4 with catch @ 00e369b8 */
  iVar1 = rand();
                    /* catch() { ... } // from try @ 00e360c4 with catch @ 00e369d0 */
  fVar4 = (float)iVar1 * 4.656613e-10 * 3.0;
  Vec3::Vec3(in_x8);
                    /* catch() { ... } // from try @ 00e35e64 with catch @ 00e369f4
                       catch() { ... } // from try @ 00e36198 with catch @ 00e369f4 */
  Vec3::Vec3(in_x8 + 0xc);
                    /* catch() { ... } // from try @ 00e362ec with catch @ 00e369f8 */
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (1.0 <= fVar4) {
                    /* catch() { ... } // from try @ 00e35850 with catch @ 00e36a2c */
    if (2.0 <= fVar4) {
      uVar3 = *(undefined8 *)(in_x0 + 0x28);
      *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(in_x0 + 0x30);
      puVar2 = (undefined8 *)(in_x0 + 0x4c);
      *(undefined8 *)in_x8 = uVar3;
    }
    else {
      uVar3 = *(undefined8 *)(in_x0 + 0x1c);
      *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(in_x0 + 0x24);
                    /* catch() { ... } // from try @ 00e3582c with catch @ 00e36a3c
                       catch() { ... } // from try @ 00e3587c with catch @ 00e36a3c */
      *(undefined8 *)in_x8 = uVar3;
      puVar2 = (undefined8 *)(in_x0 + 0x40);
    }
  }
  else {
    uVar3 = *(undefined8 *)(in_x0 + 0x10);
    *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(in_x0 + 0x18);
                    /* catch() { ... } // from try @ 00e35890 with catch @ 00e36a18 */
    *(undefined8 *)in_x8 = uVar3;
    puVar2 = (undefined8 *)(in_x0 + 0x34);
  }
  uVar3 = *puVar2;
  *(undefined4 *)(in_x8 + 0x14) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(in_x8 + 0xc) = uVar3;
  return;
}

