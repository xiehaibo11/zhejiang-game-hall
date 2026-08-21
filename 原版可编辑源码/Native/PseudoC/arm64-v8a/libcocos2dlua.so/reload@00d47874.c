
/* cocos2d::Terrain::reload() */

void __thiscall cocos2d::Terrain::reload(Terrain *this)

{
  ulong uVar1;
  Terrain *pTVar2;
  ulong uVar3;
  Terrain *pTVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = *(int *)(this + 0x8052c);
  fVar7 = *(float *)(this + 0x80534);
  if (0 < (int)((float)iVar5 / fVar7)) {
    iVar6 = *(int *)(this + 0x80528);
    fVar8 = *(float *)(this + 0x80530);
    uVar1 = 0;
    pTVar2 = this + 0x4f8;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d47780 with catch @ 00d478fc
                        */
      uVar3 = (ulong)(uint)(int)((float)iVar6 / fVar8);
      pTVar4 = pTVar2;
      if (0 < (int)((float)iVar6 / fVar8)) {
        do {
          Chunk::finish(*(Chunk **)pTVar4);
          uVar3 = uVar3 - 1;
          pTVar4 = pTVar4 + 8;
        } while (uVar3 != 0);
      }
      uVar1 = uVar1 + 1;
      pTVar2 = pTVar2 + 0x800;
    } while (uVar1 != (uint)(int)((float)iVar5 / fVar7));
  }
  initTextures(this);
  *(undefined8 *)(this + 0x300) = *(undefined8 *)(this + 0x2f8);
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0x310);
  return;
}

