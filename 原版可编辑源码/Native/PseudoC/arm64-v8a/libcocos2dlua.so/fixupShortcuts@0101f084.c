
/* cocos2d::fixupShortcuts(unsigned int*, int, dtNavMeshQuery*) */

int cocos2d::fixupShortcuts(uint *param_1,int param_2,dtNavMeshQuery *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  dtPoly *local_88;
  dtMeshTile *local_80;
  uint local_78 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0101f0ac to 0111f0cb has its CatchHandler @ 0101f13c */
  iVar15 = param_2;
  if (2 < param_2) {
    local_88 = (dtPoly *)0x0;
    local_80 = (dtMeshTile *)0x0;
    iVar4 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)param_3,*param_1,&local_80,&local_88);
                    /* try { // try from 0101f0cc to 0111f173 has its CatchHandler @ 0101f024 */
    if (-1 < iVar4) {
      uVar11 = *(uint *)local_88;
      if (uVar11 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        lVar6 = *(long *)(local_80 + 0x20);
        do {
          if (((int)uVar5 < 0x10) && (uVar1 = *(uint *)(lVar6 + (ulong)uVar11 * 0xc), uVar1 != 0)) {
                    /* catch() { ... } // from try @ 0101f080 with catch @ 0101f124 */
            local_78[(int)uVar5] = uVar1;
            uVar5 = uVar5 + 1;
          }
          uVar11 = *(uint *)(lVar6 + (ulong)uVar11 * 0xc + 4);
        } while (uVar11 != 0xffffffff);
      }
                    /* catch() { ... } // from try @ 0101f0ac with catch @ 0101f13c */
      iVar4 = param_2;
      if (5 < param_2) {
        iVar4 = 6;
      }
      if (1 < iVar4 + -1) {
        lVar6 = (long)(iVar4 + -1);
        do {
          if (0 < (int)uVar5) {
            puVar8 = local_78;
            uVar7 = (ulong)uVar5;
            do {
              if (param_1[lVar6] == *puVar8) {
                iVar4 = (int)lVar6;
                if (iVar4 == 0) goto LAB_0101f164;
                goto LAB_0101f1a8;
              }
              uVar7 = uVar7 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar7 != 0);
          }
          iVar4 = 0;
LAB_0101f164:
          lVar6 = lVar6 + -1;
        } while (1 < lVar6);
LAB_0101f1a8:
                    /* try { // try from 0101f1a8 to 0111f1af has its CatchHandler @ 0101f208 */
        iVar2 = iVar4 + -1;
                    /* try { // try from 0101f1b0 to 0111f223 has its CatchHandler @ 0101f174 */
        if ((iVar2 != 0 && 0 < iVar4) && (iVar15 = param_2 - iVar2, 1 < iVar15)) {
          uVar7 = (ulong)((param_2 - iVar4) + 1);
          uVar9 = uVar7 - 1;
          if ((uVar9 < 8) ||
             ((param_1 + 1 < param_1 + (long)iVar2 + uVar7 &&
              (param_1 + (long)iVar2 + 1 < param_1 + uVar7)))) {
            uVar12 = 1;
          }
          else {
            uVar13 = uVar9 & 0xfffffffffffffff8;
            uVar12 = uVar13 | 1;
            uVar14 = uVar13;
            puVar8 = param_1;
            do {
              uVar16 = *(undefined8 *)(puVar8 + (long)iVar2 + 1);
              uVar18 = *(undefined8 *)(puVar8 + (long)iVar2 + 7);
              uVar17 = *(undefined8 *)(puVar8 + (long)iVar2 + 5);
              uVar14 = uVar14 - 8;
              *(undefined8 *)(puVar8 + 3) = *(undefined8 *)(puVar8 + (long)iVar2 + 3);
              *(undefined8 *)(puVar8 + 1) = uVar16;
              *(undefined8 *)(puVar8 + 7) = uVar18;
              *(undefined8 *)(puVar8 + 5) = uVar17;
              puVar8 = puVar8 + 8;
                    /* try { // try from 0101f27c to 0111f283 has its CatchHandler @ 0101f340 */
            } while (uVar14 != 0);
            if (uVar9 == uVar13) goto LAB_0101f224;
          }
                    /* catch() { ... } // from try @ 0101f1a8 with catch @ 0101f208 */
          lVar6 = uVar7 - uVar12;
          puVar8 = param_1 + uVar12 + (long)iVar2;
          puVar10 = param_1 + uVar12;
          do {
            lVar6 = lVar6 + -1;
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
LAB_0101f224:
                    /* catch() { ... } // from try @ 0101f2dc with catch @ 0101f224 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}

