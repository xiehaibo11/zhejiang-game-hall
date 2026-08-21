
/* cocos2d::PUNoise3D::genNoise(double, double, double) */

undefined1  [16] __thiscall
cocos2d::PUNoise3D::genNoise(PUNoise3D *this,double param_1,double param_2,double param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  uVar8 = (ulong)(uint)(int)param_3 & 0xff;
  dVar9 = param_1 - (double)(long)param_1;
  lVar1 = (long)*(int *)(this + ((long)*(int *)(this + (ulong)((int)param_1 & 0xffU) * 4 + 8) +
                                ((ulong)(uint)(int)param_2 & 0xff)) * 4 + 8) + uVar8;
  uVar7 = *(uint *)(this + lVar1 * 4 + 8);
  uVar5 = uVar7 & 0xf;
  dVar11 = param_2 - (double)(long)param_2;
  dVar15 = param_3 - (double)(long)param_3;
  dVar13 = dVar9;
  if (7 < uVar5) {
    dVar13 = dVar11;
  }
  lVar2 = (long)*(int *)(this + ((long)*(int *)(this + (ulong)(((int)param_1 & 0xffU) + 1) * 4 + 8)
                                + ((ulong)(uint)(int)param_2 & 0xff)) * 4 + 8) + uVar8;
  dVar22 = dVar11;
  if ((3 < uVar5) && (dVar22 = dVar9, (uVar5 | 2) != 0xe)) {
    dVar22 = dVar15;
  }
  uVar5 = *(uint *)(this + lVar2 * 4 + 8);
  if ((uVar7 & 1) != 0) {
    dVar13 = -dVar13;
  }
  uVar6 = uVar5 & 0xf;
  dVar12 = dVar9 + -1.0;
  if ((uVar7 & 2) != 0) {
    dVar22 = -dVar22;
  }
  lVar3 = (long)*(int *)(this + ((long)*(int *)(this + (ulong)((int)param_1 & 0xffU) * 4 + 8) +
                                ((ulong)(uint)(int)param_2 & 0xff)) * 4 + 8 + 4) + uVar8;
  dVar21 = dVar12;
  if (7 < uVar6) {
    dVar21 = dVar11;
  }
  dVar20 = dVar11;
                    /* try { // try from 00e40d1c to 00f40d1f has its CatchHandler @ 00e40d60 */
  if ((3 < uVar6) && (dVar20 = dVar12, (uVar6 | 2) != 0xe)) {
    dVar20 = dVar15;
  }
  lVar4 = (long)*(int *)(this + ((long)*(int *)(this + (ulong)(((int)param_1 & 0xffU) + 1) * 4 + 8)
                                + ((ulong)(uint)(int)param_2 & 0xff)) * 4 + 8 + 4) + uVar8;
  uVar7 = *(uint *)(this + lVar3 * 4 + 8);
  dVar14 = dVar9 * dVar9 * dVar9 * (dVar9 * (dVar9 * 6.0 + -15.0) + 10.0);
  if ((uVar5 & 1) != 0) {
    dVar21 = -dVar21;
  }
  if ((uVar5 & 2) != 0) {
    dVar20 = -dVar20;
  }
  uVar5 = uVar7 & 0xf;
  dVar17 = dVar11 + -1.0;
  dVar19 = dVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40d1c with catch @ 00e40d60
                        */
  if (7 < uVar5) {
    dVar19 = dVar17;
  }
  dVar24 = dVar17;
  if ((3 < uVar5) && (dVar24 = dVar9, (uVar5 | 2) != 0xe)) {
    dVar24 = dVar15;
  }
  uVar5 = *(uint *)(this + lVar4 * 4 + 8);
  if ((uVar7 & 1) != 0) {
    dVar19 = -dVar19;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40e14 with catch @ 00e40da4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40e44 with catch @ 00e40da4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40e74 with catch @ 00e40da4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40e9c with catch @ 00e40da4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40ec8 with catch @ 00e40da4
                        */
  uVar6 = uVar5 & 0xf;
  if ((uVar7 & 2) != 0) {
    dVar24 = -dVar24;
  }
  dVar26 = dVar12;
  if (7 < uVar6) {
    dVar26 = dVar17;
  }
  dVar27 = dVar17;
  if ((3 < uVar6) && (dVar27 = dVar12, (uVar6 | 2) != 0xe)) {
    dVar27 = dVar15;
  }
  uVar7 = *(uint *)(this + lVar1 * 4 + 0xc);
  if ((uVar5 & 1) != 0) {
    dVar26 = -dVar26;
  }
  if ((uVar5 & 2) != 0) {
    dVar27 = -dVar27;
  }
                    /* try { // try from 00e40e0c to 00f40e13 has its CatchHandler @ 00e40f08 */
  uVar5 = uVar7 & 0xf;
                    /* try { // try from 00e40e14 to 00f40e37 has its CatchHandler @ 00e40da4 */
  dVar22 = dVar13 + dVar22 + dVar14 * ((dVar21 + dVar20) - (dVar13 + dVar22));
  dVar13 = dVar9;
  if (7 < uVar5) {
    dVar13 = dVar11;
  }
  dVar20 = dVar15 + -1.0;
  dVar21 = dVar11;
                    /* try { // try from 00e40e38 to 00f40e43 has its CatchHandler @ 00e40f08 */
  if ((3 < uVar5) && (dVar21 = dVar9, (uVar5 | 2) != 0xe)) {
    dVar21 = dVar20;
  }
                    /* try { // try from 00e40e44 to 00f40e6b has its CatchHandler @ 00e40da4 */
  uVar5 = *(uint *)(this + lVar2 * 4 + 0xc);
  dVar18 = dVar11 * dVar11 * dVar11 * (dVar11 * (dVar11 * 6.0 + -15.0) + 10.0);
  if ((uVar7 & 1) != 0) {
    dVar13 = -dVar13;
  }
  uVar6 = uVar5 & 0xf;
  if ((uVar7 & 2) != 0) {
    dVar21 = -dVar21;
  }
                    /* try { // try from 00e40e6c to 00f40e73 has its CatchHandler @ 00e40f04 */
                    /* try { // try from 00e40e74 to 00f40e93 has its CatchHandler @ 00e40da4 */
  dVar25 = dVar12;
  if (7 < uVar6) {
    dVar25 = dVar11;
  }
  if ((3 < uVar6) && (dVar11 = dVar12, (uVar6 | 2) != 0xe)) {
    dVar11 = dVar20;
  }
                    /* try { // try from 00e40e94 to 00f40e9b has its CatchHandler @ 00e40f04 */
  uVar7 = *(uint *)(this + lVar3 * 4 + 0xc);
                    /* try { // try from 00e40e9c to 00f40ebb has its CatchHandler @ 00e40da4 */
  if ((uVar5 & 1) != 0) {
    dVar25 = -dVar25;
  }
                    /* try { // try from 00e40ebc to 00f40ec7 has its CatchHandler @ 00e40f04 */
  if ((uVar5 & 2) != 0) {
    dVar11 = -dVar11;
  }
  uVar5 = uVar7 & 0xf;
                    /* try { // try from 00e40ec8 to 00f40f0b has its CatchHandler @ 00e40da4 */
  dVar16 = dVar9;
  if (7 < uVar5) {
    dVar16 = dVar17;
  }
  dVar23 = dVar17;
  if ((3 < uVar5) && (dVar23 = dVar9, (uVar5 | 2) != 0xe)) {
    dVar23 = dVar20;
  }
  uVar5 = *(uint *)(this + lVar4 * 4 + 0xc);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40e6c with catch @ 00e40f04
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40e94 with catch @ 00e40f04
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40ebc with catch @ 00e40f04
                        */
  dVar11 = dVar13 + dVar21 + dVar14 * ((dVar25 + dVar11) - (dVar13 + dVar21));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40e0c with catch @ 00e40f08
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40e38 with catch @ 00e40f08
                        */
  if ((uVar7 & 1) != 0) {
    dVar16 = -dVar16;
  }
  uVar6 = uVar5 & 0xf;
  dVar22 = dVar22 + dVar18 * ((dVar19 + dVar24 + dVar14 * ((dVar26 + dVar27) - (dVar19 + dVar24))) -
                             dVar22);
  if ((uVar7 & 2) != 0) {
    dVar23 = -dVar23;
  }
  dVar13 = dVar12;
  if (7 < uVar6) {
    dVar13 = dVar17;
  }
  if ((3 < uVar6) && (dVar17 = dVar12, (uVar6 | 2) != 0xe)) {
    dVar17 = dVar20;
  }
  if ((uVar5 & 1) != 0) {
    dVar13 = -dVar13;
  }
  if ((uVar5 & 2) != 0) {
    dVar17 = -dVar17;
  }
  auVar10._0_8_ =
       ABS(dVar22 + dVar15 * dVar15 * dVar15 * (dVar15 * (dVar15 * 6.0 + -15.0) + 10.0) *
                    ((dVar11 + dVar18 * ((dVar16 + dVar23 +
                                         dVar14 * ((dVar13 + dVar17) - (dVar16 + dVar23))) - dVar11)
                     ) - dVar22));
  auVar10._8_8_ = 0;
  return auVar10;
}

