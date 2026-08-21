
/* cocos2d::PUEmitter::postUpdateEmitter(float) */

void cocos2d::PUEmitter::postUpdateEmitter(float param_1)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar1 = (undefined8 *)getDerivedPosition();
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  uVar4 = *(undefined8 *)(in_x0 + 0x44);
  fVar5 = *(float *)(in_x0 + 0x4c);
  *(undefined8 *)(in_x0 + 0x44) = uVar2;
  *(float *)(in_x0 + 0x4c) = fVar3;
  *(ulong *)(in_x0 + 0x50) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                (float)uVar2 - (float)uVar4);
                    /* catch() { ... } // from try @ 00e322e8 with catch @ 00e32380 */
  *(float *)(in_x0 + 0x58) = fVar3 - fVar5;
  return;
}

