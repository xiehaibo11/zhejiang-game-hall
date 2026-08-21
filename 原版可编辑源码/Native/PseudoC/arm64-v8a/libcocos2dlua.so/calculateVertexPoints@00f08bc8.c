
/* cocos2d::TiledGrid3D::calculateVertexPoints() */

void __thiscall cocos2d::TiledGrid3D::calculateVertexPoints(TiledGrid3D *this)

{
  uint uVar1;
  TiledGrid3D TVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *__src;
  void *__dest;
  float *pfVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  size_t __size;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar5 = Texture2D::getPixelsWide(*(Texture2D **)(this + 0x30));
  iVar6 = Texture2D::getPixelsHigh(*(Texture2D **)(this + 0x30));
  lVar7 = Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x30));
  fVar20 = *(float *)(lVar7 + 4);
  fVar21 = *(float *)(this + 0x28);
  fVar22 = *(float *)(this + 0x2c);
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
  uVar15 = (uint)(fVar21 * fVar22);
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
    *(undefined8 *)(this + 0x88) = 0;
  }
  uVar11 = uVar15 << 2;
  __size = ((long)(int)uVar11 + (long)(int)uVar11 * 2) * 4;
  __src = malloc(__size);
  *(float **)(this + 0x78) = __src;
  __dest = malloc(__size);
  *(void **)(this + 0x80) = __dest;
  pfVar8 = malloc(-(ulong)((uVar15 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 | (ulong)uVar11 << 3)
  ;
  *(float **)(this + 0x70) = pfVar8;
  pvVar9 = malloc(-(ulong)((uVar15 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                  (ulong)(uVar15 * 6) << 1);
  fVar21 = *(float *)(this + 0x28);
  *(void **)(this + 0x88) = pvVar9;
  if (0.0 < fVar21) {
    fVar22 = *(float *)(this + 0x2c);
    iVar10 = 0;
    fVar16 = 0.0;
    pfVar12 = __src;
    do {
      if (0.0 < fVar22) {
        TVar2 = this[0x48];
        fVar21 = 0.0;
        iVar14 = 1;
        do {
          fVar17 = *(float *)(this + 0x38);
          fVar18 = *(float *)(this + 0x3c);
          fVar19 = *(float *)(this + 0x5c);
          fVar22 = *(float *)(this + 0x60);
          pfVar12[2] = 0.0;
          fVar19 = fVar16 * fVar17 + fVar19;
          fVar22 = fVar21 * fVar18 + fVar22;
          fVar17 = fVar17 + fVar19;
          fVar18 = fVar18 + fVar22;
          *pfVar12 = fVar19;
          pfVar12[1] = fVar22;
          fVar21 = fVar19 / (float)iVar5;
          pfVar12[3] = fVar17;
          pfVar12[4] = fVar22;
          pfVar12[6] = fVar19;
          pfVar12[7] = fVar18;
          if (TVar2 != (TiledGrid3D)0x0) {
            fVar22 = fVar20 - fVar22;
          }
          pfVar12[9] = fVar17;
          pfVar12[10] = fVar18;
          fVar17 = fVar17 / (float)iVar5;
          if (TVar2 != (TiledGrid3D)0x0) {
            fVar18 = fVar20 - fVar18;
          }
          fVar22 = fVar22 / (float)iVar6;
          *pfVar8 = fVar21;
          pfVar8[1] = fVar22;
          pfVar8[2] = fVar17;
          pfVar8[3] = fVar22;
          fVar18 = fVar18 / (float)iVar6;
          pfVar12[5] = 0.0;
          pfVar12[8] = 0.0;
          pfVar12[0xb] = 0.0;
          pfVar8[4] = fVar21;
          pfVar8[5] = fVar18;
          pfVar8[6] = fVar17;
          pfVar8[7] = fVar18;
          fVar22 = *(float *)(this + 0x2c);
          pfVar12 = pfVar12 + 0xc;
          pfVar8 = pfVar8 + 8;
          fVar21 = (float)iVar14;
          iVar14 = iVar14 + 1;
        } while (fVar21 < fVar22);
        fVar21 = *(float *)(this + 0x28);
      }
      iVar10 = iVar10 + 1;
      fVar16 = (float)iVar10;
    } while (fVar16 < fVar21);
  }
  if (0 < (int)uVar15) {
    uVar11 = 0;
    uVar13 = 0;
    do {
      iVar5 = (int)uVar13;
      *(short *)((long)pvVar9 + (ulong)uVar11 * 2) = (short)(iVar5 << 2);
      uVar3 = (ushort)(iVar5 << 2) | 1;
      *(ushort *)((long)pvVar9 + (ulong)(uVar11 + 1) * 2) = uVar3;
      uVar4 = (ushort)(iVar5 << 2) | 2;
      *(ushort *)((long)pvVar9 + (ulong)(uVar11 + 2) * 2) = uVar4;
      *(ushort *)((long)pvVar9 + (ulong)(uVar11 + 3) * 2) = uVar3;
      uVar13 = uVar13 + 1;
      *(ushort *)((long)pvVar9 + (ulong)(uVar11 + 4) * 2) = uVar4;
      uVar1 = uVar11 + 5;
      uVar11 = uVar11 + 6;
      *(ushort *)((long)pvVar9 + (ulong)uVar1 * 2) = (ushort)(iVar5 << 2) | 3;
    } while (uVar15 != uVar13);
  }
                    /* try { // try from 00f08e40 to 01008e43 has its CatchHandler @ 00f08e6c */
  memcpy(__dest,__src,
         -(ulong)((uVar15 * 3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
         (ulong)(uVar15 * 0xc) << 2);
  return;
}

