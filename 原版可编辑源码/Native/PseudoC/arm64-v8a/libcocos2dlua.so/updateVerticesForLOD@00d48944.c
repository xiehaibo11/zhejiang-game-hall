
/* cocos2d::Terrain::Chunk::updateVerticesForLOD() */

void __thiscall cocos2d::Terrain::Chunk::updateVerticesForLOD(Chunk *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(int *)(this + 0xa4) != *(int *)(this + 0xa0)) {
    std::__ndk1::
    vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
    ::assign<cocos2d::Terrain::TerrainVertexData*>
              ((vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
                *)(this + 0x100),*(TerrainVertexData **)this,*(TerrainVertexData **)(this + 8));
    if ((1 < (int)*(uint *)(this + 0xa0)) && (1.2 < ABS(*(float *)(this + 0xf8)))) {
      fVar23 = *(float *)(this + 0xf4);
      uVar6 = 1 << (ulong)(*(uint *)(this + 0xa0) & 0x1f);
      if ((int)uVar6 < (int)((int)fVar23 - uVar6)) {
        lVar13 = (long)(int)uVar6;
        uVar5 = uVar6;
        if ((int)uVar6 < 0) {
          uVar5 = uVar6 + 1;
        }
        iVar4 = (int)uVar5 >> 1;
        iVar9 = (int)*(float *)(this + 0xf0) - uVar6;
        uVar1 = (int)*(float *)(this + 0xf0) + 1;
        lVar7 = (long)((ulong)uVar5 << 0x20) >> 0x21;
        lVar11 = lVar13;
        iVar3 = uVar6 - iVar4;
        iVar16 = iVar4;
        do {
          iVar16 = uVar6 + iVar16;
          if ((int)uVar6 < iVar9) {
            lVar12 = *(long *)(this + 0x100);
            lVar17 = -lVar13;
            lVar18 = lVar13;
            iVar19 = uVar6 - iVar4;
            do {
              fVar25 = 0.0;
              fVar24 = 0.0;
              if (lVar11 - lVar7 < lVar11 + lVar7) {
                fVar24 = 0.0;
                lVar22 = (long)iVar3 + (long)(int)uVar1 * (long)iVar19;
                fVar25 = 0.0;
                lVar2 = (long)iVar3;
                do {
                    /* try { // try from 00d48ac8 to 00e48acf has its CatchHandler @ 00d48c44 */
                  if (lVar18 - lVar7 < lVar18 + lVar7) {
                    iVar14 = (int)lVar11 - (int)lVar2;
                    if (-1 < lVar2 - lVar11) {
                      iVar14 = (int)(lVar2 - lVar11);
                    }
                    pfVar15 = (float *)(*(long *)this + lVar22 * 0x20 + 4);
                    lVar21 = lVar17 + iVar19;
                    iVar8 = iVar4;
                    uVar10 = uVar5 & 0xfffffffe;
                    do {
                      fVar26 = *pfVar15;
                      iVar20 = iVar8;
                      if (-1 < lVar21) {
                        iVar20 = (int)lVar21;
                      }
                      pfVar15 = (float *)((long)pfVar15 +
                                         (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 |
                                         (ulong)uVar1 << 5));
                      uVar10 = uVar10 - 1;
                      lVar21 = lVar21 + 1;
                      fVar25 = fVar25 + fVar26;
                      fVar24 = fVar24 + (float)((iVar4 - iVar20) * (iVar4 - iVar14));
                      iVar8 = iVar8 + -1;
                    } while (uVar10 != 0);
                  }
                  lVar2 = lVar2 + 1;
                    /* try { // try from 00d48ad0 to 00e48c47 has its CatchHandler @ 00d48a7c */
                  lVar22 = lVar22 + 1;
                } while (iVar16 != (int)lVar2);
              }
              lVar2 = lVar18 + lVar11 * (int)uVar1;
              lVar18 = lVar18 + lVar13;
              iVar19 = iVar19 + uVar6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48ad0 with catch @ 00d48a7c
                        */
              lVar17 = lVar17 - lVar13;
              *(float *)(lVar12 + lVar2 * 0x20 + 4) = fVar25 / fVar24;
            } while (lVar18 < iVar9);
          }
          lVar11 = lVar11 + lVar13;
          iVar3 = iVar3 + uVar6;
        } while (lVar11 < (int)((int)fVar23 - uVar6));
      }
    }
    glBufferData(0x8892,*(long *)(this + 0x108) - *(long *)(this + 0x100),*(long *)(this + 0x100),
                 0x88e0);
    *(undefined4 *)(this + 0xa4) = *(undefined4 *)(this + 0xa0);
  }
  return;
}

