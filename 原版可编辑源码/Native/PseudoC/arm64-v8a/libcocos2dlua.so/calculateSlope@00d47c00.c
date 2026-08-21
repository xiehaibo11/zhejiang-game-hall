
/* cocos2d::Terrain::Chunk::calculateSlope() */

void __thiscall cocos2d::Terrain::Chunk::calculateSlope(Chunk *this)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
                    /* try { // try from 00d47c04 to 00e47c0f has its CatchHandler @ 00d47d6c */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar1 = *(undefined4 **)this;
  local_48 = *puVar1;
  fVar8 = (float)puVar1[1];
  uStack_44 = puVar1[2];
  lVar2 = *(long *)(this + 8) - (long)puVar1;
  fVar9 = fVar8;
  uStack_3c = uStack_44;
  local_40 = local_48;
  if (lVar2 != 0) {
    uVar5 = 1;
    puVar4 = puVar1;
                    /* try { // try from 00d47c6c to 00e47c73 has its CatchHandler @ 00d47d54 */
    while (puVar6 = puVar4, uVar5 < (ulong)(lVar2 >> 5)) {
                    /* try { // try from 00d47c74 to 00e47d83 has its CatchHandler @ 00d47a4c */
      puVar4 = puVar6 + 8;
      uVar5 = uVar5 + 1;
      if ((float)puVar6[9] < fVar9) {
        fVar9 = (float)puVar6[9];
        uStack_3c = puVar6[10];
        local_40 = *puVar4;
      }
    }
    if (lVar2 != 0) {
      uVar5 = 1;
      while (puVar4 = puVar1, uVar5 < (ulong)(lVar2 >> 5)) {
        puVar1 = puVar4 + 8;
        uVar5 = uVar5 + 1;
        if (fVar8 < (float)puVar4[9]) {
          local_48 = *puVar1;
          uStack_44 = puVar4[10];
          fVar8 = (float)puVar4[9];
        }
      }
    }
  }
  fVar7 = (float)Vec2::distance((Vec2 *)&local_40,(Vec2 *)&local_48);
  *(float *)(this + 0xf8) = (fVar8 - fVar9) / fVar7;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

