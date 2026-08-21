
void FUN_00d4bacc(long param_1)

{
  Terrain *this;
  ulong uVar1;
  Terrain *pTVar2;
  Terrain *pTVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 00d4bad8 to 00e4badb has its CatchHandler @ 00d4bb48 */
  this = *(Terrain **)(param_1 + 8);
  iVar5 = *(int *)(this + 0x8052c);
  fVar7 = *(float *)(this + 0x80534);
  if (0 < (int)((float)iVar5 / fVar7)) {
    iVar6 = *(int *)(this + 0x80528);
    fVar8 = *(float *)(this + 0x80530);
    uVar1 = 0;
    pTVar2 = this + 0x4f8;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4bad8 with catch @ 00d4bb48
                        */
      pTVar3 = pTVar2;
      uVar4 = (ulong)(uint)(int)((float)iVar6 / fVar8);
      if (0 < (int)((float)iVar6 / fVar8)) {
        do {
          cocos2d::Terrain::Chunk::finish(*(Chunk **)pTVar3);
          uVar4 = uVar4 - 1;
          pTVar3 = pTVar3 + 8;
        } while (uVar4 != 0);
      }
      uVar1 = uVar1 + 1;
      pTVar2 = pTVar2 + 0x800;
    } while (uVar1 != (uint)(int)((float)iVar5 / fVar7));
  }
  cocos2d::Terrain::initTextures(this);
  *(undefined8 *)(this + 0x300) = *(undefined8 *)(this + 0x2f8);
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0x310);
  return;
}

