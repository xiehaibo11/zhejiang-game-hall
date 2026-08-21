
void * spPathConstraint_computeWorldPositions
                 (long param_1,long param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  ulong uVar17;
  float *pfVar18;
  void *__ptr;
  float *pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float __x;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  float local_12c;
  float local_128;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float afStack_ac [3];
  
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  __x = *(float *)(param_1 + 0x20);
  __ptr = *(void **)(param_1 + 0x48);
  lVar8 = *(long *)(param_1 + 0x38);
  uVar1 = param_3 * 3 + 2;
  if (*(uint *)(param_1 + 0x40) != uVar1) {
    if (__ptr != (void *)0x0) {
      _spFree(__ptr);
    }
                    /* try { // try from 00d7028c to 00e7040f has its CatchHandler @ 00d70ebc */
    __ptr = (void *)_spMalloc(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2,
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                              ,0xe9);
    *(void **)(param_1 + 0x48) = __ptr;
    *(uint *)(param_1 + 0x40) = uVar1;
  }
  iVar24 = *(int *)(param_2 + 0x40);
  iVar2 = *(int *)(param_2 + 0x58);
  uVar1 = iVar24 / 6;
  if (*(int *)(param_2 + 0x5c) == 0) {
    lVar9 = *(long *)(param_2 + 0x50);
    iVar6 = 1;
    if (iVar2 == 0) {
      iVar6 = 2;
    }
    iVar6 = uVar1 - iVar6;
    fVar41 = *(float *)(lVar9 + (long)iVar6 * 4);
    if (param_5 != 0) {
      __x = __x * fVar41;
    }
    if ((param_6 != 0) && (0 < (int)param_3)) {
      uVar23 = (ulong)param_3;
      if (param_3 < 8) {
        uVar51 = 0;
      }
      else {
                    /* try { // try from 00d70c34 to 00e70c3b has its CatchHandler @ 00d70e18 */
        uVar51 = uVar23 & 0xfffffff8;
                    /* try { // try from 00d70c3c to 00e70c43 has its CatchHandler @ 00d70e14 */
        puVar16 = (undefined8 *)(lVar8 + 0x10);
        uVar50 = uVar51;
        do {
                    /* try { // try from 00d70c44 to 00e70c4b has its CatchHandler @ 00d70e10 */
          uVar50 = uVar50 - 8;
                    /* try { // try from 00d70c4c to 00e70c53 has its CatchHandler @ 00d70e0c */
                    /* try { // try from 00d70c54 to 00e70c67 has its CatchHandler @ 00d70e50 */
          puVar16[-1] = CONCAT44(fVar41 * (float)((ulong)puVar16[-1] >> 0x20),
                                 fVar41 * (float)puVar16[-1]);
          puVar16[-2] = CONCAT44(fVar41 * (float)((ulong)puVar16[-2] >> 0x20),
                                 fVar41 * (float)puVar16[-2]);
          puVar16[1] = CONCAT44(fVar41 * (float)((ulong)puVar16[1] >> 0x20),
                                fVar41 * (float)puVar16[1]);
          *puVar16 = CONCAT44(fVar41 * (float)((ulong)*puVar16 >> 0x20),fVar41 * (float)*puVar16);
          puVar16 = puVar16 + 4;
        } while (uVar50 != 0);
        if (uVar51 == uVar23) goto LAB_00d70c88;
      }
                    /* try { // try from 00d70c68 to 00e70c6f has its CatchHandler @ 00d70e08 */
      lVar10 = uVar23 - uVar51;
                    /* try { // try from 00d70c70 to 00e70c73 has its CatchHandler @ 00d70e48 */
      pfVar19 = (float *)(lVar8 + uVar51 * 4);
      do {
                    /* try { // try from 00d70c74 to 00e70c77 has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70c78 to 00e70c7b has its CatchHandler @ 00d70e04 */
        lVar10 = lVar10 + -1;
                    /* try { // try from 00d70c7c to 00e70c7f has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70c80 to 00e70c87 has its CatchHandler @ 00d70e00 */
        *pfVar19 = fVar41 * *pfVar19;
        pfVar19 = pfVar19 + 1;
      } while (lVar10 != 0);
    }
LAB_00d70c88:
                    /* try { // try from 00d70c88 to 00e70c8f has its CatchHandler @ 00d70dfc */
    pfVar19 = *(float **)(param_1 + 0x58);
                    /* try { // try from 00d70c90 to 00e70c93 has its CatchHandler @ 00d70e48 */
                    /* try { // try from 00d70c94 to 00e70c97 has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70c98 to 00e70c9f has its CatchHandler @ 00d70df8 */
    if (*(int *)(param_1 + 0x50) != 8) {
                    /* try { // try from 00d70ca0 to 00e70ca7 has its CatchHandler @ 00d70df4 */
      if (pfVar19 != (float *)0x0) {
                    /* try { // try from 00d70ca8 to 00e70caf has its CatchHandler @ 00d70df0 */
        _spFree(pfVar19);
      }
                    /* try { // try from 00d70cb0 to 00e70cb7 has its CatchHandler @ 00d70dec */
                    /* try { // try from 00d70cb8 to 00e70cbf has its CatchHandler @ 00d70de8 */
      pfVar19 = (float *)_spMalloc(0x20,
                                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                                   ,0xfb);
                    /* try { // try from 00d70cc0 to 00e70cc7 has its CatchHandler @ 00d70de4 */
                    /* try { // try from 00d70cc8 to 00e70ccf has its CatchHandler @ 00d70de0 */
      *(float **)(param_1 + 0x58) = pfVar19;
      *(undefined4 *)(param_1 + 0x50) = 8;
    }
                    /* try { // try from 00d70cd0 to 00e70cd7 has its CatchHandler @ 00d70ddc */
                    /* try { // try from 00d70cd8 to 00e70cdf has its CatchHandler @ 00d70dd8 */
    if ((int)param_3 < 1) {
      return __ptr;
    }
                    /* try { // try from 00d70ce0 to 00e70ce7 has its CatchHandler @ 00d70dd4 */
    lVar10 = 0;
                    /* try { // try from 00d70ce8 to 00e70cef has its CatchHandler @ 00d70dd0 */
    uVar23 = 0;
                    /* try { // try from 00d70cf0 to 00e70cf7 has its CatchHandler @ 00d70dcc */
    iVar20 = 0;
                    /* try { // try from 00d70cf8 to 00e70d07 has its CatchHandler @ 00d70e50 */
    iVar21 = -1;
                    /* try { // try from 00d70d08 to 00e70d0f has its CatchHandler @ 00d70dc8 */
                    /* try { // try from 00d70d10 to 00e70d17 has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70d18 to 00e70d1f has its CatchHandler @ 00d70dc4 */
                    /* try { // try from 00d70d20 to 00e70d27 has its CatchHandler @ 00d70dc0 */
    do {
                    /* try { // try from 00d70d38 to 00e70d43 has its CatchHandler @ 00d70e48 */
      fVar42 = *(float *)(lVar8 + uVar23 * 4);
                    /* try { // try from 00d70d44 to 00e70d5f has its CatchHandler @ 00d70e50 */
      __x = __x + fVar42;
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00d70bc8 with catch @ 00d70e3c */
                    /* catch() { ... } // from try @ 00d70bc0 with catch @ 00d70e40 */
        if (0.0 <= __x) {
          fVar40 = __x;
          if (__x <= fVar41) goto LAB_00d70d6c;
          if (iVar21 != -3) {
            spVertexAttachment_computeWorldVertices(param_2,uVar7,iVar24 + -6,4,pfVar19,0,2);
          }
          fVar29 = pfVar19[2];
          fVar31 = pfVar19[3];
          fVar42 = atan2f(fVar31 - pfVar19[1],fVar29 - *pfVar19);
          sincosf(fVar42,&local_bc,&local_c0);
                    /* try { // try from 00d71010 to 00e71027 has its CatchHandler @ 00d714a4 */
          iVar21 = -3;
          fVar40 = (__x - fVar41) * local_c0;
          fVar48 = (__x - fVar41) * local_bc;
        }
        else {
                    /* catch() { ... } // from try @ 00d70bb0 with catch @ 00d70e44 */
                    /* catch() { ... } // from try @ 00d70c70 with catch @ 00d70e48
                       catch() { ... } // from try @ 00d70c90 with catch @ 00d70e48
                       catch() { ... } // from try @ 00d70d38 with catch @ 00d70e48
                       catch() { ... } // from try @ 00d70d94 with catch @ 00d70e48 */
          if (iVar21 != -2) {
                    /* catch() { ... } // from try @ 00d70ba8 with catch @ 00d70e4c */
                    /* catch() { ... } // from try @ 00d70bb8 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70bd0 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70be8 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70bfc with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70c24 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70c54 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70c74 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70c7c with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70c94 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70cf8 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70d10 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70d44 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70d64 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70d70 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70d84 with catch @ 00d70e50
                       catch() { ... } // from try @ 00d70d9c with catch @ 00d70e50 */
                    /* catch() { ... } // from try @ 00d70a24 with catch @ 00d70e54 */
                    /* catch() { ... } // from try @ 00d708a8 with catch @ 00d70e58 */
                    /* catch() { ... } // from try @ 00d70898 with catch @ 00d70e5c */
                    /* catch() { ... } // from try @ 00d70a0c with catch @ 00d70e60 */
                    /* catch() { ... } // from try @ 00d70a00 with catch @ 00d70e64 */
                    /* catch() { ... } // from try @ 00d7095c with catch @ 00d70e68 */
            spVertexAttachment_computeWorldVertices(param_2,uVar7,2,4,pfVar19,0,2);
          }
                    /* catch() { ... } // from try @ 00d70944 with catch @ 00d70e6c */
          fVar29 = *pfVar19;
          fVar31 = pfVar19[1];
                    /* catch() { ... } // from try @ 00d70938 with catch @ 00d70e70 */
                    /* catch() { ... } // from try @ 00d708cc with catch @ 00d70e74 */
                    /* catch() { ... } // from try @ 00d709dc with catch @ 00d70e78 */
                    /* catch() { ... } // from try @ 00d709cc with catch @ 00d70e7c */
          fVar42 = atan2f(pfVar19[3] - fVar31,pfVar19[2] - fVar29);
                    /* catch() { ... } // from try @ 00d70914 with catch @ 00d70e80 */
                    /* catch() { ... } // from try @ 00d70904 with catch @ 00d70e84 */
                    /* catch() { ... } // from try @ 00d708f0 with catch @ 00d70e88 */
                    /* catch() { ... } // from try @ 00d708d8 with catch @ 00d70e8c */
          sincosf(fVar42,&fStack_c4,&local_c8);
                    /* catch() { ... } // from try @ 00d6ff58 with catch @ 00d70e98 */
          iVar21 = -2;
                    /* catch() { ... } // from try @ 00d6ff48 with catch @ 00d70e9c */
          fVar40 = __x * local_c8;
                    /* catch() { ... } // from try @ 00d70428 with catch @ 00d70ea0
                       catch() { ... } // from try @ 00d704b0 with catch @ 00d70ea0 */
          fVar48 = __x * fStack_c4;
                    /* catch() { ... } // from try @ 00d6fdb8 with catch @ 00d70ea4
                       catch() { ... } // from try @ 00d6fe5c with catch @ 00d70ea4 */
                    /* catch() { ... } // from try @ 00d6ff68 with catch @ 00d70e90 */
                    /* catch() { ... } // from try @ 00d6ff60 with catch @ 00d70e94 */
        }
        pfVar18 = (float *)((long)__ptr + lVar10 * 4);
        *pfVar18 = fVar29 + fVar40;
        pfVar18[1] = fVar31 + fVar48;
LAB_00d71030:
        *(float *)((long)__ptr + lVar10 * 4 + 8) = fVar42;
                    /* try { // try from 00d71038 to 00e71047 has its CatchHandler @ 00d714a0 */
      }
      else {
        fVar48 = fmodf(__x,fVar41);
                    /* try { // try from 00d70d60 to 00e70d63 has its CatchHandler @ 00d70db4 */
        iVar20 = 0;
                    /* try { // try from 00d70d64 to 00e70d6b has its CatchHandler @ 00d70e50 */
        fVar40 = fVar41 + fVar48;
        if (0.0 <= fVar48) {
          fVar40 = fVar48;
        }
LAB_00d70d6c:
                    /* try { // try from 00d70d6c to 00e70d6f has its CatchHandler @ 00d70db0 */
                    /* try { // try from 00d70d70 to 00e70d73 has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70d74 to 00e70d7b has its CatchHandler @ 00d70dac */
                    /* try { // try from 00d70d7c to 00e70d83 has its CatchHandler @ 00d70da8 */
        lVar12 = 0;
        lVar14 = ((long)iVar20 << 0x20) + -0x200000000;
                    /* try { // try from 00d70d84 to 00e70d8b has its CatchHandler @ 00d70e50 */
        iVar5 = iVar20 * 6 + -4;
        do {
                    /* try { // try from 00d70d8c to 00e70d93 has its CatchHandler @ 00d70da4 */
          fVar48 = *(float *)(lVar9 + (long)iVar20 * 4 + lVar12 * 4);
          lVar14 = lVar14 + 0x100000000;
                    /* try { // try from 00d70d94 to 00e70d9b has its CatchHandler @ 00d70e48 */
          lVar12 = lVar12 + 1;
          iVar5 = iVar5 + 6;
                    /* try { // try from 00d70d9c to 00e70d9f has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70da0 to 00e70f47 has its CatchHandler @ 00d6f14c */
        } while (fVar48 < fVar40);
                    /* catch() { ... } // from try @ 00d70d8c with catch @ 00d70da4 */
        iVar3 = (int)lVar12;
                    /* catch() { ... } // from try @ 00d70d7c with catch @ 00d70da8 */
                    /* catch() { ... } // from try @ 00d70d74 with catch @ 00d70dac */
        iVar22 = iVar20 + -1 + iVar3;
                    /* catch() { ... } // from try @ 00d70d6c with catch @ 00d70db0 */
                    /* catch() { ... } // from try @ 00d70d60 with catch @ 00d70db4 */
                    /* catch() { ... } // from try @ 00d70d30 with catch @ 00d70db8 */
        if (iVar22 != 0) {
                    /* catch() { ... } // from try @ 00d70d28 with catch @ 00d70dbc */
                    /* catch() { ... } // from try @ 00d70d20 with catch @ 00d70dc0 */
          fVar29 = *(float *)(lVar9 + (lVar14 >> 0x1e));
                    /* catch() { ... } // from try @ 00d70d18 with catch @ 00d70dc4 */
          fVar40 = fVar40 - fVar29;
                    /* catch() { ... } // from try @ 00d70d08 with catch @ 00d70dc8 */
          fVar48 = fVar48 - fVar29;
        }
                    /* catch() { ... } // from try @ 00d70cf0 with catch @ 00d70dcc */
        fVar40 = fVar40 / fVar48;
                    /* catch() { ... } // from try @ 00d70ce8 with catch @ 00d70dd0 */
        if (((iVar20 + -1) - iVar21) + iVar3 != 0) {
                    /* catch() { ... } // from try @ 00d70ce0 with catch @ 00d70dd4 */
                    /* catch() { ... } // from try @ 00d70cd8 with catch @ 00d70dd8 */
                    /* catch() { ... } // from try @ 00d70cd0 with catch @ 00d70ddc */
                    /* catch() { ... } // from try @ 00d70cc8 with catch @ 00d70de0 */
                    /* catch() { ... } // from try @ 00d70cc0 with catch @ 00d70de4 */
                    /* catch() { ... } // from try @ 00d70cb8 with catch @ 00d70de8 */
          if ((iVar2 == 0) || ((iVar6 + 1) - iVar20 != iVar3)) {
                    /* catch() { ... } // from try @ 00d6fe90 with catch @ 00d70ea8 */
                    /* catch() { ... } // from try @ 00d6ff84 with catch @ 00d70eb8 */
                    /* catch() { ... } // from try @ 00d7028c with catch @ 00d70ebc */
            spVertexAttachment_computeWorldVertices(param_2,uVar7,iVar5,8,pfVar19,0,2);
            iVar21 = iVar22;
          }
          else {
                    /* catch() { ... } // from try @ 00d70cb0 with catch @ 00d70dec */
                    /* catch() { ... } // from try @ 00d70ca8 with catch @ 00d70df0 */
                    /* catch() { ... } // from try @ 00d70ca0 with catch @ 00d70df4 */
                    /* catch() { ... } // from try @ 00d70c98 with catch @ 00d70df8 */
                    /* catch() { ... } // from try @ 00d70c88 with catch @ 00d70dfc */
                    /* catch() { ... } // from try @ 00d70c80 with catch @ 00d70e00 */
                    /* catch() { ... } // from try @ 00d70c78 with catch @ 00d70e04 */
                    /* catch() { ... } // from try @ 00d70c68 with catch @ 00d70e08 */
                    /* catch() { ... } // from try @ 00d70c4c with catch @ 00d70e0c */
                    /* catch() { ... } // from try @ 00d70c44 with catch @ 00d70e10 */
            spVertexAttachment_computeWorldVertices(param_2,uVar7,iVar24 + -4,4,pfVar19,0,2);
                    /* catch() { ... } // from try @ 00d70c3c with catch @ 00d70e14 */
                    /* catch() { ... } // from try @ 00d70c34 with catch @ 00d70e18 */
                    /* catch() { ... } // from try @ 00d70c1c with catch @ 00d70e1c */
                    /* catch() { ... } // from try @ 00d70c14 with catch @ 00d70e20 */
                    /* catch() { ... } // from try @ 00d70c0c with catch @ 00d70e24 */
                    /* catch() { ... } // from try @ 00d70c04 with catch @ 00d70e28 */
                    /* catch() { ... } // from try @ 00d70bf4 with catch @ 00d70e2c */
                    /* catch() { ... } // from try @ 00d70bec with catch @ 00d70e30 */
            spVertexAttachment_computeWorldVertices(param_2,uVar7,0,4,pfVar19,4,2);
            iVar21 = iVar6;
                    /* catch() { ... } // from try @ 00d70be0 with catch @ 00d70e34 */
                    /* catch() { ... } // from try @ 00d70bd8 with catch @ 00d70e38 */
          }
        }
                    /* catch() { ... } // from try @ 00d6ffac with catch @ 00d70ee0 */
        bVar4 = true;
        if ((fVar40 != NAN) && (bVar4 = false, !NAN(fVar40))) {
          bVar4 = fVar40 == 0.0;
        }
        fVar48 = 0.0001;
                    /* catch() { ... } // from try @ 00d6fae8 with catch @ 00d70f10
                       catch() { ... } // from try @ 00d6fe08 with catch @ 00d70f10
                       catch() { ... } // from try @ 00d6fecc with catch @ 00d70f10
                       catch() { ... } // from try @ 00d70470 with catch @ 00d70f10
                       catch() { ... } // from try @ 00d704d0 with catch @ 00d70f10
                       catch() { ... } // from try @ 00d70980 with catch @ 00d70f10
                       catch() { ... } // from try @ 00d70a64 with catch @ 00d70f10 */
        if (!bVar4) {
          fVar48 = fVar40;
        }
        fVar33 = 1.0 - fVar48;
        fVar36 = fVar48 * fVar33;
        fVar43 = fVar48 * fVar48;
        fVar45 = fVar33 * fVar33;
                    /* catch() { ... } // from try @ 00d6f24c with catch @ 00d70f2c */
        fVar30 = fVar33 * fVar36 * 3.0;
        fVar46 = fVar48 * fVar36 * 3.0;
        fVar31 = (float)*(undefined8 *)pfVar19;
        fVar32 = (float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
        fVar35 = (float)*(undefined8 *)(pfVar19 + 2);
        fVar39 = (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
        fVar40 = (float)*(undefined8 *)(pfVar19 + 4);
        fVar29 = (float)((ulong)*(undefined8 *)(pfVar19 + 4) >> 0x20);
                    /* try { // try from 00d70f50 to 00e7100f has its CatchHandler @ 00d70f50
                       catch() { ... } // from try @ 00d70f50 with catch @ 00d70f50
                       catch() { ... } // from try @ 00d71394 with catch @ 00d70f50 */
        fVar44 = fVar31 * fVar33 * fVar45 + fVar35 * fVar30 + fVar40 * fVar46 +
                 (float)*(undefined8 *)(pfVar19 + 6) * fVar48 * fVar43;
        fVar48 = fVar32 * fVar33 * fVar45 + fVar39 * fVar30 + fVar29 * fVar46 +
                 (float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) * fVar48 * fVar43;
        *(ulong *)((long)__ptr + lVar10 * 4) = CONCAT44(fVar48,fVar44);
        iVar20 = iVar22;
        if (param_4 != 0 || uVar23 != 0 && fVar42 == 0.0) {
          fVar39 = fVar36 * fVar39;
          fVar36 = fVar36 * fVar35;
          fVar42 = atan2f(fVar48 - (fVar43 * fVar29 + fVar45 * fVar32 + fVar39 + fVar39),
                          fVar44 - (fVar43 * fVar40 + fVar45 * fVar31 + fVar36 + fVar36));
          goto LAB_00d71030;
        }
      }
                    /* try { // try from 00d70d28 to 00e70d2f has its CatchHandler @ 00d70dbc */
      uVar23 = uVar23 + 1;
                    /* try { // try from 00d70d30 to 00e70d37 has its CatchHandler @ 00d70db8 */
      lVar10 = lVar10 + 3;
      if (uVar23 == param_3) {
        return __ptr;
      }
    } while( true );
  }
  if (iVar2 == 0) {
    pfVar19 = *(float **)(param_1 + 0x58);
    uVar25 = iVar24 - 4;
    uVar1 = uVar1 - 1;
    if (*(uint *)(param_1 + 0x50) != uVar25) {
      if (pfVar19 != (float *)0x0) {
        _spFree(pfVar19);
      }
      pfVar19 = (float *)_spMalloc(-(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar25 << 2,
                                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                                   ,0x144);
      *(float **)(param_1 + 0x58) = pfVar19;
      *(uint *)(param_1 + 0x50) = uVar25;
    }
    spVertexAttachment_computeWorldVertices(param_2,uVar7,2,(ulong)uVar25,pfVar19,0,2);
  }
  else {
    pfVar19 = *(float **)(param_1 + 0x58);
    uVar25 = iVar24 + 2;
    if (*(uint *)(param_1 + 0x50) != uVar25) {
      if (pfVar19 != (float *)0x0) {
        _spFree(pfVar19);
      }
      pfVar19 = (float *)_spMalloc(-(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar25 << 2,
                                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                                   ,0x137);
      *(float **)(param_1 + 0x58) = pfVar19;
      *(uint *)(param_1 + 0x50) = uVar25;
    }
    spVertexAttachment_computeWorldVertices(param_2,uVar7,2,iVar24 + -2,pfVar19,0,2);
    spVertexAttachment_computeWorldVertices(param_2,uVar7,0,2,pfVar19,iVar24 + -2,2);
                    /* try { // try from 00d70428 to 00e7045b has its CatchHandler @ 00d70ea0 */
    pfVar19[iVar24] = *pfVar19;
    pfVar19[iVar24 + 1] = pfVar19[1];
  }
  uVar23 = (ulong)uVar1;
  pfVar18 = *(float **)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x60) != uVar1) {
    if (pfVar18 != (float *)0x0) {
      _spFree(pfVar18);
    }
    pfVar18 = (float *)_spMalloc(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                                 ,0x14e);
                    /* try { // try from 00d70470 to 00e7049f has its CatchHandler @ 00d70f10 */
    *(float **)(param_1 + 0x68) = pfVar18;
    *(uint *)(param_1 + 0x60) = uVar1;
  }
  uVar50 = *(ulong *)pfVar19;
  if ((int)uVar1 < 1) {
    fVar40 = (float)(uVar50 >> 0x20);
    fVar48 = 0.0;
    uVar52 = 0;
    fVar41 = 0.0;
    uVar53 = 0;
    fVar42 = 0.0;
    uVar51 = 0;
    local_128 = 0.0;
  }
  else {
    pfVar11 = pfVar19 + 4;
    fVar48 = 0.0;
    uVar7 = NEON_fmov(0x3e400000,4);
    uVar26 = NEON_fmov(0x40400000,4);
    uVar27 = NEON_fmov(0x3f400000,4);
                    /* try { // try from 00d704b0 to 00e704bb has its CatchHandler @ 00d70ea0 */
    pfVar15 = pfVar18;
    uVar51 = uVar50;
    do {
      uVar52 = *(ulong *)(pfVar11 + -2);
      uVar53 = *(ulong *)pfVar11;
      uVar23 = uVar23 - 1;
      fVar45 = (float)uVar52;
      fVar41 = (float)(uVar52 >> 0x20);
      fVar42 = (float)(uVar53 >> 0x20);
      fVar43 = (float)uVar51;
      fVar44 = (float)(uVar51 >> 0x20);
                    /* try { // try from 00d704d0 to 00e70893 has its CatchHandler @ 00d70f10 */
      uVar51 = *(ulong *)(pfVar11 + 2);
      fVar32 = ((fVar43 - (fVar45 + fVar45)) + (float)uVar53) * (float)uVar7;
      fVar35 = ((fVar44 - (fVar41 + fVar41)) + fVar42) * (float)((ulong)uVar7 >> 0x20);
      fVar40 = (float)(uVar51 >> 0x20);
      fVar29 = ((float)uVar51 + ((fVar45 - (float)uVar53) * (float)uVar26 - fVar43)) * 0.09375;
      fVar31 = (fVar40 + ((fVar41 - fVar42) * (float)((ulong)uVar26 >> 0x20) - fVar44)) * 0.09375;
      fVar36 = fVar32 + fVar32 + fVar29;
      fVar39 = fVar35 + fVar35 + fVar31;
      fVar32 = (fVar45 - fVar43) * (float)uVar27 + fVar32 + fVar29 * 0.16666667;
      fVar35 = (fVar41 - fVar44) * (float)((ulong)uVar27 >> 0x20) + fVar35 + fVar31 * 0.16666667;
      fVar43 = fVar29 + fVar36;
      fVar45 = fVar31 + fVar39;
      fVar36 = fVar36 + fVar32;
      fVar39 = fVar39 + fVar35;
      fVar44 = fVar43 + fVar36;
      fVar46 = fVar45 + fVar39;
      fVar29 = fVar29 + fVar43 + fVar44;
      fVar31 = fVar31 + fVar45 + fVar46;
      fVar48 = fVar48 + SQRT(fVar32 * fVar32 + fVar35 * fVar35) +
               SQRT(fVar36 * fVar36 + fVar39 * fVar39) + SQRT(fVar44 * fVar44 + fVar46 * fVar46) +
               SQRT(fVar29 * fVar29 + fVar31 * fVar31);
      *pfVar15 = fVar48;
      pfVar11 = pfVar11 + 6;
      pfVar15 = pfVar15 + 1;
      uVar50 = uVar51;
      local_128 = fVar40;
    } while (uVar23 != 0);
  }
  if (param_5 != 0) {
    __x = __x * fVar48;
  }
  if ((param_6 != 0) && (0 < (int)param_3)) {
    uVar23 = (ulong)param_3;
    if (param_3 < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar23 & 0xfffffff8;
      puVar16 = (undefined8 *)(lVar8 + 0x10);
      uVar17 = uVar13;
      do {
        uVar17 = uVar17 - 8;
        puVar16[-1] = CONCAT44(fVar48 * (float)((ulong)puVar16[-1] >> 0x20),
                               fVar48 * (float)puVar16[-1]);
        puVar16[-2] = CONCAT44(fVar48 * (float)((ulong)puVar16[-2] >> 0x20),
                               fVar48 * (float)puVar16[-2]);
        puVar16[1] = CONCAT44(fVar48 * (float)((ulong)puVar16[1] >> 0x20),fVar48 * (float)puVar16[1]
                             );
        *puVar16 = CONCAT44(fVar48 * (float)((ulong)*puVar16 >> 0x20),fVar48 * (float)*puVar16);
        puVar16 = puVar16 + 4;
      } while (uVar17 != 0);
      if (uVar13 == uVar23) goto LAB_00d70644;
    }
    lVar9 = uVar23 - uVar13;
    pfVar11 = (float *)(lVar8 + uVar13 * 4);
    do {
      lVar9 = lVar9 + -1;
      *pfVar11 = fVar48 * *pfVar11;
      pfVar11 = pfVar11 + 1;
    } while (lVar9 != 0);
  }
LAB_00d70644:
  if (0 < (int)param_3) {
    lVar10 = (long)(int)uVar25;
    lVar9 = 0;
    uVar23 = 0;
    iVar24 = 0;
    iVar6 = 0;
    iVar20 = -1;
    local_12c = 0.0;
    do {
      fVar29 = *(float *)(lVar8 + uVar23 * 4);
      __x = __x + fVar29;
      if (iVar2 == 0) {
        if (__x < 0.0) {
          fVar29 = *pfVar19;
          fVar35 = pfVar19[1];
          fVar31 = atan2f(pfVar19[3] - fVar35,pfVar19[2] - fVar29);
          sincosf(fVar31,&fStack_b4,&local_b8);
          fVar32 = __x * fStack_b4;
          fVar29 = fVar29 + __x * local_b8;
        }
        else {
          fVar31 = __x;
          if (__x <= fVar48) goto LAB_00d7076c;
          fVar29 = pfVar19[lVar10 + -2];
          fVar35 = pfVar19[lVar10 + -1];
                    /* try { // try from 00d70ab8 to 00e70ba7 has its CatchHandler @ 00d6f14c */
          fVar31 = atan2f(fVar35 - pfVar19[lVar10 + -3],fVar29 - pfVar19[lVar10 + -4]);
          sincosf(fVar31,afStack_ac,&local_b0);
          fVar29 = fVar29 + (__x - fVar48) * local_b0;
          uVar51 = uVar51 & 0xffffffff;
          fVar32 = (__x - fVar48) * afStack_ac[0];
        }
        pfVar11 = (float *)((long)__ptr + lVar9 * 4);
        *pfVar11 = fVar29;
        pfVar11[1] = fVar35 + fVar32;
LAB_00d7070c:
        *(float *)((long)__ptr + lVar9 * 4 + 8) = fVar31;
      }
      else {
        fVar32 = fmodf(__x,fVar48);
        iVar24 = 0;
        fVar31 = fVar48 + fVar32;
        if (0.0 <= fVar32) {
          fVar31 = fVar32;
        }
LAB_00d7076c:
        lVar12 = ((long)iVar24 << 0x20) + -0x200000000;
        uVar1 = iVar24 * 6;
        pfVar11 = pfVar18 + iVar24;
        iVar24 = iVar24 + -1;
        uVar1 = uVar1 | 1;
        do {
          uVar25 = uVar1;
          fVar32 = *pfVar11;
          lVar12 = lVar12 + 0x100000000;
          iVar24 = iVar24 + 1;
          pfVar11 = pfVar11 + 1;
          uVar1 = uVar25 + 6;
        } while (fVar32 < fVar31);
        if (iVar24 != 0) {
          fVar35 = *(float *)((long)pfVar18 + (lVar12 >> 0x1e));
          fVar31 = fVar31 - fVar35;
          fVar32 = fVar32 - fVar35;
        }
        if (iVar20 != iVar24) {
          fVar45 = pfVar19[(int)(uVar25 - 1)];
          uVar50 = (ulong)(uint)fVar45;
          fVar40 = pfVar19[(int)uVar25];
          fVar46 = pfVar19[(int)(uVar25 + 1)];
          uVar52 = (ulong)(uint)fVar46;
          fVar41 = pfVar19[(int)(uVar25 + 2)];
          fVar35 = pfVar19[(int)(uVar25 + 3)];
          uVar53 = (ulong)(uint)fVar35;
          fVar42 = pfVar19[(int)(uVar25 + 4)];
          local_128 = pfVar19[(int)(uVar25 + 6)];
          uVar51 = (ulong)(uint)pfVar19[(int)(uVar25 + 5)];
          fVar44 = ((fVar45 - (fVar46 + fVar46)) + fVar35) * 0.03;
          fVar43 = ((fVar40 - (fVar41 + fVar41)) + fVar42) * 0.03;
          fVar36 = (pfVar19[(int)(uVar25 + 5)] + ((fVar46 - fVar35) * 3.0 - fVar45)) * 0.006;
          fVar35 = (local_128 + ((fVar41 - fVar42) * 3.0 - fVar40)) * 0.006;
                    /* try { // try from 00d70898 to 00e708a3 has its CatchHandler @ 00d70e5c */
                    /* try { // try from 00d708a8 to 00e708bb has its CatchHandler @ 00d70e58 */
          fVar33 = fVar35 + fVar43 + fVar43;
          fVar39 = fVar36 + fVar44 + fVar44;
          fVar37 = (fVar46 - fVar45) * 0.3 + fVar44 + fVar36 * 0.16666667;
          fVar46 = (fVar41 - fVar40) * 0.3 + fVar43 + fVar35 * 0.16666667;
          fVar30 = fVar35 + fVar33;
          fVar43 = fVar36 + fVar39;
          fVar39 = fVar39 + fVar37;
                    /* try { // try from 00d708cc to 00e708d3 has its CatchHandler @ 00d70e74 */
          fVar33 = fVar33 + fVar46;
          fVar34 = fVar35 + fVar30;
                    /* try { // try from 00d708d8 to 00e708ef has its CatchHandler @ 00d70e8c */
          fVar44 = fVar36 + fVar43;
          fVar43 = fVar43 + fVar39;
          fVar30 = fVar30 + fVar33;
                    /* try { // try from 00d708f0 to 00e708ff has its CatchHandler @ 00d70e88 */
          fVar45 = fVar36 + fVar44;
          fVar44 = fVar44 + fVar43;
                    /* try { // try from 00d70904 to 00e7090f has its CatchHandler @ 00d70e84 */
          fVar28 = fVar34 + fVar30;
          fVar34 = fVar35 + fVar34;
          fVar47 = SQRT(fVar37 * fVar37 + fVar46 * fVar46);
          fVar38 = fVar36 + fVar45;
                    /* try { // try from 00d70914 to 00e70927 has its CatchHandler @ 00d70e80 */
          fVar45 = fVar45 + fVar44;
          fVar37 = fVar35 + fVar34;
          fVar34 = fVar34 + fVar28;
          fVar33 = fVar47 + SQRT(fVar39 * fVar39 + fVar33 * fVar33);
                    /* try { // try from 00d70938 to 00e7093f has its CatchHandler @ 00d70e70 */
          fVar46 = fVar35 + fVar37;
          fVar49 = fVar36 + fVar38;
                    /* try { // try from 00d70944 to 00e7095b has its CatchHandler @ 00d70e6c */
          fVar38 = fVar38 + fVar45;
          fVar37 = fVar37 + fVar34;
          *(float *)(param_1 + 0x80) = fVar47;
          *(float *)(param_1 + 0x84) = fVar33;
          fVar33 = fVar33 + SQRT(fVar43 * fVar43 + fVar30 * fVar30);
                    /* try { // try from 00d7095c to 00e7096b has its CatchHandler @ 00d70e68 */
          fVar39 = fVar33 + SQRT(fVar44 * fVar44 + fVar28 * fVar28);
          fVar30 = fVar49 + fVar38;
          fVar44 = fVar46 + fVar37;
          *(float *)(param_1 + 0x88) = fVar33;
          *(float *)(param_1 + 0x8c) = fVar39;
                    /* try { // try from 00d70980 to 00e709bb has its CatchHandler @ 00d70f10 */
          fVar46 = fVar35 + fVar46;
          fVar49 = fVar36 + fVar49;
          fVar39 = fVar39 + SQRT(fVar45 * fVar45 + fVar34 * fVar34);
          fVar33 = fVar46 + fVar44;
          fVar46 = fVar35 + fVar46;
          fVar28 = fVar49 + fVar30;
          fVar49 = fVar36 + fVar49;
          fVar34 = fVar49 + fVar28;
          fVar45 = fVar46 + fVar33;
          fVar43 = fVar39 + SQRT(fVar38 * fVar38 + fVar37 * fVar37);
                    /* try { // try from 00d709cc to 00e709d7 has its CatchHandler @ 00d70e7c */
          fVar36 = fVar36 + fVar49 + fVar34;
                    /* try { // try from 00d709dc to 00e709ef has its CatchHandler @ 00d70e78 */
          fVar35 = fVar35 + fVar46 + fVar45;
          *(float *)(param_1 + 0x90) = fVar39;
          *(float *)(param_1 + 0x94) = fVar43;
          fVar43 = fVar43 + SQRT(fVar30 * fVar30 + fVar44 * fVar44);
          fVar44 = fVar43 + SQRT(fVar28 * fVar28 + fVar33 * fVar33);
                    /* try { // try from 00d70a00 to 00e70a07 has its CatchHandler @ 00d70e64 */
          fVar39 = fVar44 + SQRT(fVar34 * fVar34 + fVar45 * fVar45);
                    /* try { // try from 00d70a0c to 00e70a23 has its CatchHandler @ 00d70e60 */
          iVar6 = 0;
          local_12c = fVar39 + SQRT(fVar36 * fVar36 + fVar35 * fVar35);
          *(float *)(param_1 + 0x98) = fVar43;
          *(float *)(param_1 + 0x9c) = fVar44;
          *(float *)(param_1 + 0xa0) = fVar39;
          *(float *)(param_1 + 0xa4) = local_12c;
                    /* try { // try from 00d70a24 to 00e70a33 has its CatchHandler @ 00d70e54 */
          iVar20 = iVar24;
        }
        fVar31 = (fVar31 / fVar32) * local_12c;
        lVar12 = ((long)iVar6 << 0x20) + -0x200000000;
        pfVar11 = (float *)(param_1 + 0x80 + (long)iVar6 * 4);
        iVar6 = iVar6 + -1;
        do {
          fVar32 = *pfVar11;
          lVar12 = lVar12 + 0x100000000;
          iVar6 = iVar6 + 1;
          pfVar11 = pfVar11 + 1;
        } while (fVar32 < fVar31);
        if (iVar6 == 0) {
          fVar31 = fVar31 / fVar32;
        }
        else {
                    /* try { // try from 00d70a64 to 00e70ab7 has its CatchHandler @ 00d70f10 */
          fVar35 = *(float *)(param_1 + (lVar12 >> 0x1e) + 0x80);
          fVar31 = (fVar31 - fVar35) / (fVar32 - fVar35) + (float)iVar6;
        }
        fVar31 = fVar31 * 0.1;
        bVar4 = true;
        if ((fVar31 != NAN) && (bVar4 = false, !NAN(fVar31))) {
          bVar4 = fVar31 == 0.0;
        }
        fVar32 = 0.0001;
        if (!bVar4) {
          fVar32 = fVar31;
        }
        fVar44 = 1.0 - fVar32;
        fVar35 = fVar32 * fVar44;
        fVar36 = fVar44 * fVar44;
        fVar31 = fVar32 * fVar32;
        fVar45 = fVar44 * fVar35 * 3.0;
        fVar39 = fVar32 * fVar35 * 3.0;
                    /* try { // try from 00d70ba8 to 00e70baf has its CatchHandler @ 00d70e4c */
                    /* try { // try from 00d70bb0 to 00e70bb7 has its CatchHandler @ 00d70e44 */
                    /* try { // try from 00d70bb8 to 00e70bbf has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70bc0 to 00e70bc7 has its CatchHandler @ 00d70e40 */
        pfVar11 = (float *)((long)__ptr + lVar9 * 4);
        fVar43 = (float)uVar51 * fVar32 * fVar31 +
                 (float)uVar53 * fVar39 + (float)uVar50 * fVar44 * fVar36 + (float)uVar52 * fVar45;
                    /* try { // try from 00d70bc8 to 00e70bcf has its CatchHandler @ 00d70e3c */
        fVar32 = local_128 * fVar32 * fVar31 +
                 fVar42 * fVar39 + fVar40 * fVar44 * fVar36 + fVar41 * fVar45;
        *pfVar11 = fVar43;
        pfVar11[1] = fVar32;
                    /* try { // try from 00d70bd0 to 00e70bd7 has its CatchHandler @ 00d70e50 */
        if (param_4 != 0 || uVar23 != 0 && fVar29 == 0.0) {
                    /* try { // try from 00d70bd8 to 00e70bdf has its CatchHandler @ 00d70e38 */
          fVar29 = (float)uVar52 * fVar35;
                    /* try { // try from 00d70be0 to 00e70be7 has its CatchHandler @ 00d70e34 */
                    /* try { // try from 00d70be8 to 00e70beb has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70bec to 00e70bf3 has its CatchHandler @ 00d70e30 */
                    /* try { // try from 00d70bf4 to 00e70bfb has its CatchHandler @ 00d70e2c */
                    /* try { // try from 00d70bfc to 00e70c03 has its CatchHandler @ 00d70e50 */
                    /* try { // try from 00d70c04 to 00e70c0b has its CatchHandler @ 00d70e28 */
                    /* try { // try from 00d70c0c to 00e70c13 has its CatchHandler @ 00d70e24 */
                    /* try { // try from 00d70c14 to 00e70c1b has its CatchHandler @ 00d70e20 */
          fVar31 = atan2f(fVar32 - (fVar42 * fVar31 +
                                   fVar40 * fVar36 + fVar41 * fVar35 + fVar41 * fVar35),
                          fVar43 - ((float)uVar53 * fVar31 +
                                   (float)uVar50 * fVar36 + fVar29 + fVar29));
                    /* try { // try from 00d70c1c to 00e70c23 has its CatchHandler @ 00d70e1c */
                    /* try { // try from 00d70c24 to 00e70c33 has its CatchHandler @ 00d70e50 */
          goto LAB_00d7070c;
        }
      }
      uVar23 = uVar23 + 1;
      lVar9 = lVar9 + 3;
    } while (uVar23 != param_3);
  }
                    /* try { // try from 00d71048 to 00e7105b has its CatchHandler @ 00d714e0 */
                    /* try { // try from 00d71060 to 00e71073 has its CatchHandler @ 00d714dc */
  return __ptr;
}

