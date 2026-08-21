
/* cocos2d::ShuffleTiles::update(float) */

void __thiscall cocos2d::ShuffleTiles::update(ShuffleTiles *this,float param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(this + 0x58);
                    /* catch() { ... } // from try @ 00ee9598 with catch @ 00ee9624 */
  if (0.0 < fVar8) {
    puVar3 = *(undefined8 **)(this + 0x78);
    fVar6 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar9 = 0.0;
    do {
      if (0.0 < fVar6) {
        iVar5 = 1;
        puVar4 = puVar3;
        fVar8 = 0.0;
        do {
          fStack_8c = fVar8;
                    /* catch() { ... } // from try @ 00ee955c with catch @ 00ee967c */
          *puVar4 = CONCAT44((float)((ulong)puVar4[2] >> 0x20) * param_1,(float)puVar4[2] * param_1)
          ;
          local_90 = fVar9;
          TiledGrid3DAction::getOriginalTile(this);
          puVar3 = puVar4 + 3;
                    /* try { // try from 00ee9698 to 00fe96cb has its CatchHandler @ 00ee9698
                       catch() { ... } // from try @ 00ee9698 with catch @ 00ee9698
                       catch() { ... } // from try @ 00ee9704 with catch @ 00ee9698 */
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x300) + 0x38);
          uVar7 = NEON_scvtf(CONCAT44((int)((float)((ulong)uVar7 >> 0x20) *
                                           (float)((ulong)*puVar4 >> 0x20)),
                                      (int)((float)uVar7 * (float)*puVar4)),4);
          fVar8 = (float)uVar7;
          fVar6 = (float)((ulong)uVar7 >> 0x20);
          local_88 = CONCAT44((float)((ulong)local_88 >> 0x20) + fVar6,(float)local_88 + fVar8);
          local_7c = CONCAT44((float)((ulong)local_7c >> 0x20) + fVar6,(float)local_7c + fVar8);
          local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) + fVar6,(float)local_70 + fVar8);
                    /* try { // try from 00ee96cc to 00fe96df has its CatchHandler @ 00ee9794 */
          local_64 = CONCAT44((float)((ulong)local_64 >> 0x20) + fVar6,(float)local_64 + fVar8);
          TiledGrid3DAction::setTile((TiledGrid3DAction *)this,(Vec2 *)&local_90,(Quad3 *)&local_88)
          ;
          fVar6 = *(float *)(this + 0x5c);
          fVar8 = (float)iVar5;
          iVar5 = iVar5 + 1;
          puVar4 = puVar3;
        } while (fVar8 < fVar6);
        fVar8 = *(float *)(this + 0x58);
                    /* try { // try from 00ee96fc to 00fe9703 has its CatchHandler @ 00ee9764 */
      }
      iVar2 = iVar2 + 1;
      fVar9 = (float)iVar2;
    } while (fVar9 < fVar8);
  }
                    /* try { // try from 00ee9704 to 00fe97af has its CatchHandler @ 00ee9698 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

