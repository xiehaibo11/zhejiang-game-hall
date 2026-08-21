
/* cocos2d::Grid3D::calculateVertexPoints() */

void __thiscall cocos2d::Grid3D::calculateVertexPoints(Grid3D *this)

{
  undefined8 *puVar1;
  Grid3D GVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *__src;
  void *__dest;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  size_t __size;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 local_b4;
  long local_b0;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00f08028 to 0100802b has its CatchHandler @ 00f081b4 */
  local_b0 = *(long *)(lVar3 + 0x28);
  iVar4 = Texture2D::getPixelsWide(*(Texture2D **)(this + 0x30));
  iVar5 = Texture2D::getPixelsHigh(*(Texture2D **)(this + 0x30));
  lVar6 = Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x30));
  fVar22 = *(float *)(lVar6 + 4);
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
    *(undefined8 *)(this + 0x78) = 0;
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    free(*(void **)(this + 0x80));
    *(undefined8 *)(this + 0x80) = 0;
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    free(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
    *(undefined8 *)(this + 0x88) = 0;
  }
                    /* try { // try from 00f080a4 to 010080ab has its CatchHandler @ 00f081b0 */
  fVar20 = *(float *)(this + 0x28);
  fVar19 = *(float *)(this + 0x2c);
                    /* try { // try from 00f080ac to 010081cb has its CatchHandler @ 00f07e6c */
  fVar21 = (fVar20 + 1.0) * (fVar19 + 1.0);
  __size = (ulong)(uint)(int)fVar21 * 0xc;
  __src = malloc(__size);
  *(void **)(this + 0x78) = __src;
  __dest = malloc(__size);
  *(void **)(this + 0x80) = __dest;
  pvVar7 = malloc((ulong)(uint)(int)fVar21 << 3);
  *(void **)(this + 0x70) = pvVar7;
  pvVar8 = malloc((long)((fVar20 * fVar19 + fVar20 * fVar19) * 6.0));
  *(void **)(this + 0x88) = pvVar8;
  if (0.0 < fVar20) {
    iVar9 = 0;
    fVar21 = 0.0;
    do {
      iVar9 = iVar9 + 1;
      fVar25 = (float)iVar9;
      if (0.0 < fVar19) {
        fVar24 = 0.0;
        iVar14 = 1;
        do {
          fVar20 = fVar24 * fVar20;
          fVar15 = *(float *)(this + 0x38);
          fVar16 = *(float *)(this + 0x3c);
          fVar18 = fVar21 * (fVar19 + 1.0);
          fVar17 = (fVar19 + 1.0) * fVar25;
          uVar11 = (uint)(fVar24 + fVar18);
          uVar13 = (uint)(fVar24 + fVar17);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f080a4 with catch @ 00f081b0
                        */
          fVar19 = fVar24 * fVar16;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f08028 with catch @ 00f081b4
                        */
          fVar24 = (float)iVar14;
          fVar23 = fVar21 * fVar15 + *(float *)(this + 0x5c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f07ebc with catch @ 00f081c8
                        */
          uVar12 = (uint)(fVar17 + fVar24);
                    /* try { // try from 00f081cc to 0100822f has its CatchHandler @ 00f081cc
                       catch() { ... } // from try @ 00f081cc with catch @ 00f081cc
                       catch() { ... } // from try @ 00f08248 with catch @ 00f081cc */
          uVar10 = (uint)(fVar18 + fVar24);
          local_bc = (undefined2)uVar11;
          uStack_ba = (undefined2)uVar13;
          uStack_b8 = (undefined2)uVar10;
          local_b4 = CONCAT22(uStack_b8,(short)uVar12);
          puVar1 = (undefined8 *)((long)pvVar8 + (long)((int)(fVar21 + fVar20) * 6) * 2);
          fVar19 = fVar19 + *(float *)(this + 0x60);
          *(undefined4 *)(puVar1 + 1) = local_b4;
          *puVar1 = CONCAT26(uStack_ba,CONCAT24(uStack_b8,CONCAT22(uStack_ba,local_bc)));
          fVar15 = fVar15 + fVar23;
                    /* try { // try from 00f08230 to 0100823b has its CatchHandler @ 00f08284 */
          fVar16 = fVar16 + fVar19;
          uStack_b6 = uStack_ba;
                    /* try { // try from 00f08240 to 01008247 has its CatchHandler @ 00f0826c */
                    /* try { // try from 00f08248 to 010082b7 has its CatchHandler @ 00f081cc */
          Vec3::Vec3((Vec3 *)&local_100,fVar23,fVar19,0.0);
                    /* catch() { ... } // from try @ 00f08240 with catch @ 00f0826c */
          Vec3::Vec3((Vec3 *)&local_110,fVar15,fVar19,0.0);
                    /* catch() { ... } // from try @ 00f08230 with catch @ 00f08284 */
          Vec3::Vec3((Vec3 *)&local_120,fVar15,fVar16,0.0);
          Vec3::Vec3((Vec3 *)&local_130,fVar23,fVar16,0.0);
                    /* catch() { ... } // from try @ 00f08328 with catch @ 00f082f0 */
          GVar2 = this[0x48];
          *(undefined8 *)((long)__src + (ulong)(uVar11 * 3) * 4) = local_100;
          *(undefined4 *)((long)__src + (ulong)(uVar11 * 3 + 2) * 4) = local_f8;
          fVar23 = fVar23 / (float)iVar4;
                    /* try { // try from 00f08320 to 01008327 has its CatchHandler @ 00f08388 */
          *(float *)((long)pvVar7 + (ulong)(uVar11 * 2) * 4) = fVar23;
                    /* try { // try from 00f08328 to 010083a3 has its CatchHandler @ 00f082f0 */
          *(undefined8 *)((long)__src + (ulong)(uVar13 * 3) * 4) = local_110;
          *(undefined4 *)((long)__src + (ulong)(uVar13 * 3 + 2) * 4) = local_108;
          *(undefined8 *)((long)__src + (ulong)(uVar12 * 3) * 4) = local_120;
          if (GVar2 != (Grid3D)0x0) {
            fVar19 = fVar22 - fVar19;
          }
          fVar15 = fVar15 / (float)iVar4;
          fVar19 = fVar19 / (float)iVar5;
          *(float *)((long)pvVar7 + (ulong)((uVar11 & 0xffff) << 1 | 1) * 4) = fVar19;
          *(float *)((long)pvVar7 + (ulong)(uVar13 * 2) * 4) = fVar15;
                    /* catch() { ... } // from try @ 00f08320 with catch @ 00f08388 */
          *(float *)((long)pvVar7 + (ulong)((uVar13 & 0xffff) << 1 | 1) * 4) = fVar19;
          *(float *)((long)pvVar7 + (ulong)(uVar12 * 2) * 4) = fVar15;
          if (GVar2 != (Grid3D)0x0) {
            fVar16 = fVar22 - fVar16;
          }
                    /* try { // try from 00f083a4 to 0100845f has its CatchHandler @ 00f083a4
                       catch() { ... } // from try @ 00f083a4 with catch @ 00f083a4
                       catch() { ... } // from try @ 00f08498 with catch @ 00f083a4 */
          fVar16 = fVar16 / (float)iVar5;
          *(undefined4 *)((long)__src + (ulong)(uVar12 * 3 + 2) * 4) = local_118;
          *(undefined8 *)((long)__src + (ulong)(uVar10 * 3) * 4) = local_130;
          *(undefined4 *)((long)__src + (ulong)(uVar10 * 3 + 2) * 4) = local_128;
          *(float *)((long)pvVar7 + (ulong)((uVar12 & 0xffff) << 1 | 1) * 4) = fVar16;
          *(float *)((long)pvVar7 + (ulong)(uVar10 * 2) * 4) = fVar23;
          *(float *)((long)pvVar7 + (ulong)((uVar10 & 0xffff) << 1 | 1) * 4) = fVar16;
          fVar20 = *(float *)(this + 0x28);
          fVar19 = *(float *)(this + 0x2c);
          iVar14 = iVar14 + 1;
        } while (fVar24 < fVar19);
      }
      fVar21 = fVar25;
    } while (fVar25 < fVar20);
    __src = *(void **)(this + 0x78);
    __dest = *(void **)(this + 0x80);
    fVar21 = (fVar20 + 1.0) * (fVar19 + 1.0);
  }
  memcpy(__dest,__src,(long)(fVar21 * 12.0));
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f08460 to 01008473 has its CatchHandler @ 00f08574 */
  __stack_chk_fail();
}

