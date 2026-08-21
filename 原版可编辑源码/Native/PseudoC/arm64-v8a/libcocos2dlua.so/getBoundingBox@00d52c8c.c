
/* spine::SkeletonRenderer::getBoundingBox() const */

void spine::SkeletonRenderer::getBoundingBox(void)

{
  bool bVar1;
  long *in_x0;
  float *pfVar2;
  float fVar3;
  Rect *in_x8;
  long lVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
                    /* try { // try from 00d52ca8 to 00e52cb3 has its CatchHandler @ 00d52d40 */
  fVar13 = (float)(**(code **)(*in_x0 + 0x58))();
  fVar14 = (float)(**(code **)(*in_x0 + 0x68))();
  lVar4 = in_x0[0x71];
                    /* try { // try from 00d52ce0 to 00e52cf3 has its CatchHandler @ 00d52d64 */
  if (*(int *)(lVar4 + 0x20) < 1) {
    fVar3 = 3.4028235e+38;
    fVar5 = -3.4028235e+38;
    fVar18 = fVar3;
    fVar17 = fVar5;
  }
  else {
    fVar9 = -3.4028235e+38;
    fVar10 = 3.4028235e+38;
    fVar3 = 3.4028235e+38;
                    /* try { // try from 00d52cf4 to 00e52d83 has its CatchHandler @ 00d5274c */
    fVar5 = -3.4028235e+38;
    lVar8 = 0;
    fVar11 = -3.4028235e+38;
    fVar12 = 3.4028235e+38;
    fVar18 = fVar3;
    fVar17 = fVar5;
    do {
      lVar4 = *(long *)(*(long *)(lVar4 + 0x28) + lVar8 * 8);
      lVar7 = *(long *)(lVar4 + 0x28);
      if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 00d52ca8 with catch @ 00d52d40 */
        if (*(int *)(lVar7 + 8) == 2) {
                    /* catch() { ... } // from try @ 00d52838 with catch @ 00d52d68 */
          spVertexAttachment_computeWorldVertices
                    (lVar7,lVar4,0,*(undefined4 *)(lVar7 + 0x40),in_x0[0x6f],0,2);
                    /* catch() { ... } // from try @ 00d52dd8 with catch @ 00d52d84
                       catch() { ... } // from try @ 00d52f60 with catch @ 00d52d84 */
          iVar6 = *(int *)(lVar7 + 0x40);
          if (0 < iVar6) goto LAB_00d52d90;
        }
        else {
                    /* catch() { ... } // from try @ 00d52c78 with catch @ 00d52d44 */
          if (*(int *)(lVar7 + 8) == 0) {
                    /* catch() { ... } // from try @ 00d527a0 with catch @ 00d52d48 */
            spRegionAttachment_computeWorldVertices
                      (lVar7,*(undefined8 *)(lVar4 + 8),in_x0[0x6f],0,2);
            iVar6 = 8;
                    /* catch() { ... } // from try @ 00d52ce0 with catch @ 00d52d64 */
LAB_00d52d90:
            lVar4 = 0;
            do {
              pfVar2 = (float *)(in_x0[0x6f] + lVar4 * 4);
              lVar4 = lVar4 + 2;
              fVar15 = fVar13 * *pfVar2;
              fVar16 = fVar14 * pfVar2[1];
              bVar1 = fVar18 <= fVar15;
              fVar18 = fVar15;
              if (bVar1) {
                fVar18 = fVar12;
              }
              bVar1 = fVar3 <= fVar16;
              fVar3 = fVar16;
              if (bVar1) {
                fVar3 = fVar10;
              }
              bVar1 = fVar15 <= fVar17;
              fVar17 = fVar15;
              if (bVar1) {
                fVar17 = fVar11;
              }
                    /* try { // try from 00d52dd0 to 00e52dd7 has its CatchHandler @ 00d52fb4 */
              bVar1 = fVar16 <= fVar5;
              fVar5 = fVar16;
              if (bVar1) {
                fVar5 = fVar9;
              }
                    /* try { // try from 00d52dd8 to 00e52e4b has its CatchHandler @ 00d52d84 */
              fVar12 = fVar18;
              fVar10 = fVar3;
              fVar11 = fVar17;
              fVar9 = fVar5;
            } while (lVar4 < iVar6);
          }
        }
      }
      lVar4 = in_x0[0x71];
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar4 + 0x20));
  }
  pfVar2 = (float *)(**(code **)(*in_x0 + 0xb0))();
  if (fVar18 == 3.4028235e+38) {
    fVar5 = 0.0;
    fVar17 = 0.0;
    fVar3 = 0.0;
    fVar18 = 0.0;
  }
                    /* try { // try from 00d52e4c to 00e52e57 has its CatchHandler @ 00d52fd4 */
  cocos2d::Rect::Rect(in_x8,*pfVar2 + fVar18,pfVar2[1] + fVar3,fVar17 - fVar18,fVar5 - fVar3);
  return;
}

