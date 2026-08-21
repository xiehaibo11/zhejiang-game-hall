
/* WARNING: Removing unreachable block (ram,0x0118bbc8) */
/* dtNavMeshQuery::raycast(unsigned int, float const*, float const*, dtQueryFilter const*, unsigned
   int, dtRaycastHit*, unsigned int) const */

uint dtNavMeshQuery::raycast
               (uint param_1,float *param_2,float *param_3,dtQueryFilter *param_4,uint param_5,
               dtRaycastHit *param_6,uint param_7)

{
  long lVar1;
  dtQueryFilter dVar2;
  dtQueryFilter dVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  dtMeshTile **ppdVar11;
  dtPoly **ppdVar12;
  dtQueryFilter *pdVar13;
  dtMeshTile **ppdVar14;
  uint in_w7;
  dtMeshTile *pdVar15;
  dtQueryFilter *pdVar16;
  long lVar17;
  dtQueryFilter *pdVar18;
  int iVar19;
  dtQueryFilter *pdVar20;
  undefined4 *puVar21;
  dtQueryFilter *pdVar22;
  undefined4 *puVar23;
  dtPoly *pdVar24;
  dtQueryFilter *pdVar25;
  int iVar26;
  dtQueryFilter *pdVar27;
  dtQueryFilter *pdVar28;
  dtQueryFilter *pdVar29;
  int iVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float in_s2;
  float fVar34;
  float in_s3;
  float in_s4;
  float fVar35;
  float in_s5;
  float in_s6;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_180 [8];
  long local_178;
  undefined8 local_170;
  undefined8 local_168;
  dtQueryFilter *local_160;
  undefined4 *local_158;
  uint local_150;
  uint local_14c;
  uint local_148;
  int iStack_144;
  undefined8 local_140;
  dtPoly *local_138;
  dtPoly *local_130;
  dtQueryFilter *local_128;
  dtMeshTile *local_120;
  dtMeshTile *local_118;
  dtQueryFilter *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_b0;
  
  ppdVar14 = (dtMeshTile **)(ulong)param_7;
  pdVar13 = (dtQueryFilter *)(ulong)param_5;
  pdVar16 = (dtQueryFilter *)(ulong)param_1;
  lVar17 = tpidr_el0;
  local_b0 = *(long *)(lVar17 + 0x28);
  uVar6 = 0x80000008;
  *(int *)ppdVar14 = 0;
  *(int *)(ppdVar14 + 3) = 0;
  *(int *)(ppdVar14 + 4) = 0;
  uVar8 = (uint)param_2;
  if (uVar8 != 0) {
    pdVar28 = (dtQueryFilter *)((ulong)param_6 & 0xffffffff);
    uVar31 = (ulong)param_2 & 0xffffffff;
    uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)pdVar16,uVar8);
    if (((uVar7 & 1) != 0) &&
       ((in_w7 == 0 ||
        (uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)pdVar16,in_w7), (uVar7 & 1) != 0)))) {
      fVar37 = *param_3;
      fVar36 = param_3[1];
      fVar38 = param_3[2];
      fVar39 = *(float *)param_4;
      fVar40 = *(float *)(param_4 + 8);
      *(int *)((long)ppdVar14 + 4) = 0;
      ppdVar14[1] = (dtMeshTile *)0x0;
      local_118 = (dtMeshTile *)0x0;
      local_130 = (dtPoly *)0x0;
      local_178 = lVar17;
      dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)pdVar16,uVar8,&local_118,&local_130);
      local_110 = (dtQueryFilter *)local_118;
      local_128 = (dtQueryFilter *)local_130;
      local_120 = local_118;
      local_138 = local_130;
      if (in_w7 != 0) {
        dtNavMesh::getTileAndPolyByRefUnsafe
                  (*(dtNavMesh **)pdVar16,in_w7,(dtMeshTile **)&local_110,(dtPoly **)&local_128);
      }
      pdVar27 = (dtQueryFilter *)0x0;
      fVar39 = fVar39 - fVar37;
      fVar40 = fVar40 - fVar38;
      local_158 = (undefined4 *)((long)&local_100 + 4);
      local_14c = 0x40000000;
      local_170 = (dtQueryFilter *)CONCAT44(local_170._4_4_,(int)param_6);
      local_168 = (dtQueryFilter *)param_3;
      local_160 = param_4;
      if (uVar8 != 0) {
LAB_0118b7b8:
        dVar2 = *(dtQueryFilter *)(local_130 + 0x1e);
        if ((ulong)(byte)dVar2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          lVar17 = *(long *)(local_118 + 0x18);
          puVar21 = local_158;
          do {
            lVar1 = uVar7 * 2;
            uVar7 = uVar7 + 1;
            puVar23 = (undefined4 *)(lVar17 + (ulong)*(ushort *)(local_130 + lVar1 + 4) * 0xc);
            puVar21[-2] = *puVar23;
            puVar21[-1] = puVar23[1];
            *puVar21 = puVar23[2];
            puVar21 = puVar21 + 3;
          } while (uVar7 < (byte)dVar2);
        }
        iVar30 = (int)uVar7;
        uVar7 = dtIntersectSegmentPoly2D
                          (param_3,(float *)param_4,(float *)((long)&uStack_108 + 4),iVar30,
                           (float *)((long)&local_140 + 4),(float *)&local_140,&iStack_144,
                           (int *)&local_148);
        iVar26 = (int)pdVar27;
        if ((uVar7 & 1) == 0) {
          pdVar15 = (dtMeshTile *)0x0;
          *(int *)(ppdVar14 + 3) = iVar26;
          goto LAB_0118b7a8;
        }
        fVar33 = *(float *)ppdVar14;
        if (fVar33 < (float)local_140) {
          *(float *)ppdVar14 = (float)local_140;
        }
        if (iVar26 < *(int *)((long)ppdVar14 + 0x1c)) {
          *(int *)(ppdVar14[2] + (long)iVar26 * 4) = (int)uVar31;
          pdVar27 = (dtQueryFilter *)(ulong)(iVar26 + 1);
        }
        else {
          local_14c = local_14c | 0x10;
        }
        pdVar18 = (dtQueryFilter *)(ulong)local_148;
        if (local_148 == 0xffffffff) {
          *(int *)ppdVar14 = 0x7f7fffff;
          pdVar15 = (dtMeshTile *)0x0;
          *(int *)(ppdVar14 + 3) = (int)pdVar27;
          if (((ulong)pdVar28 & 1) != 0) {
            in_s3 = *(float *)(ppdVar14 + 4);
            in_s2 = *(float *)(pdVar13 +
                              ((ulong)(byte)*(dtQueryFilter *)(local_130 + 0x1f) & 0x3f) * 4);
            *(float *)(ppdVar14 + 4) =
                 in_s3 + in_s2 * SQRT((*(float *)param_4 - fVar37) * (*(float *)param_4 - fVar37) +
                                      (*(float *)(param_4 + 4) - fVar36) *
                                      (*(float *)(param_4 + 4) - fVar36) +
                                      (*(float *)(param_4 + 8) - fVar38) *
                                      (*(float *)(param_4 + 8) - fVar38));
          }
          goto LAB_0118b7a8;
        }
        pdVar15 = (dtMeshTile *)(ulong)(uint)*(float *)local_130;
        if (*(float *)local_130 != -NAN) {
          local_170 = (dtQueryFilter *)CONCAT44((int)uVar31,(undefined4)local_170);
          pdVar28 = *(dtQueryFilter **)(local_118 + 0x20);
          do {
            param_3 = (float *)(pdVar28 + ((ulong)pdVar15 & 0xffffffff) * 0xc + 8);
            uVar31 = (ulong)pdVar15 & 0xffffffff;
            if ((uint)pdVar18 == (uint)(byte)*(dtQueryFilter *)param_3) {
              local_120 = (dtMeshTile *)0x0;
              local_138 = (dtPoly *)0x0;
              param_4 = pdVar28 + uVar31 * 0xc;
              ppdVar11 = &local_120;
              ppdVar12 = &local_138;
              auVar42 = dtNavMesh::getTileAndPolyByRefUnsafe
                                  (*(dtNavMesh **)pdVar16,(uint)*(float *)param_4,ppdVar11,ppdVar12)
              ;
              pfVar9 = auVar42._8_8_;
              lVar17 = auVar42._0_8_;
              if (((((byte)*(dtQueryFilter *)(local_138 + 0x1f) & 0xc0) != 0x40) &&
                  ((*(ushort *)(pdVar13 + 0x100) & *(ushort *)(local_138 + 0x1c)) != 0)) &&
                 ((*(ushort *)(pdVar13 + 0x102) & *(ushort *)(local_138 + 0x1c)) == 0)) {
switchD_0118b9ac_caseD_118b92c:
                pdVar15 = (dtMeshTile *)(pdVar28 + uVar31 * 0xc);
switchD_0118b9ac_caseD_118b930:
                pdVar15 = (dtMeshTile *)(ulong)(byte)*(dtQueryFilter *)(pdVar15 + 9);
switchD_0118b9ac_caseD_118b934:
                bVar5 = (int)pdVar15 == 0xff;
switchD_0118b9ac_caseD_118b938:
                if (bVar5) {
LAB_0118ba58:
                  pdVar18 = (dtQueryFilter *)(ulong)(uint)*(float *)param_4;
                  goto LAB_0118bac8;
                }
switchD_0118b9ac_caseD_118b93c:
                pdVar18 = pdVar28 + uVar31 * 0xc;
switchD_0118b9ac_caseD_118b940:
                dVar2 = pdVar18[10];
                pdVar18 = (dtQueryFilter *)(ulong)(byte)dVar2;
switchD_0118b9ac_caseD_118b944:
                if (dVar2 != (dtQueryFilter)0x0) goto switchD_0118b9ac_caseD_118b958;
switchD_0118b9ac_caseD_118b948:
                pdVar20 = pdVar28 + uVar31 * 0xc;
switchD_0118b9ac_caseD_118b94c:
                pdVar20 = (dtQueryFilter *)(ulong)(byte)pdVar20[0xb];
switchD_0118b9ac_caseD_118b950:
                if ((int)pdVar20 == 0xff) goto LAB_0118ba58;
switchD_0118b9ac_caseD_118b958:
                bVar5 = (uint)pdVar15 == 6;
                if (6 < (uint)pdVar15) goto switchD_0118b9ac_caseD_118b908;
switchD_0118b9ac_caseD_118b960:
                fVar32 = (float)(byte)dVar2;
                pdVar25 = (dtQueryFilter *)(local_130 + 4);
                dVar3 = *(dtQueryFilter *)(local_130 + 0x1e);
                pdVar20 = (dtQueryFilter *)(ulong)(byte)dVar3;
                uVar6 = (byte)*(dtQueryFilter *)param_3 + 1;
                uVar7 = (ulong)uVar6;
                pdVar24 = *(dtPoly **)(local_118 + 0x18);
                pdVar22 = (dtQueryFilter *)
                          (ulong)*(ushort *)
                                  (pdVar25 + (ulong)(uint)(byte)*(dtQueryFilter *)param_3 * 2);
                uVar8 = 0;
                if ((byte)dVar3 != 0) {
                  uVar8 = uVar6 / (byte)dVar3;
                }
switchD_0118b9ac_caseD_118b988:
                pdVar25 = (dtQueryFilter *)
                          (ulong)*(ushort *)
                                  (pdVar25 + (ulong)((int)uVar7 - uVar8 * (int)pdVar20) * 2);
                uVar8 = 0x149fd98;
                pdVar20 = (dtQueryFilter *)(pdVar24 + (long)pdVar22 * 0xc);
                uVar7 = (ulong)(byte)*(dtQueryFilter *)(pdVar15 + 0x149fd98);
                pdVar22 = (dtQueryFilter *)(uVar7 * 4 + 0x118b908);
                pdVar15 = (dtMeshTile *)(pdVar24 + (long)pdVar25 * 0xc);
                pdVar29 = pdVar16;
                switch(pdVar22) {
                case (dtQueryFilter *)0x118b908:
                  goto switchD_0118b9ac_caseD_118b908;
                case (dtQueryFilter *)0x118b90c:
                  goto switchD_0118b9ac_caseD_118b90c;
                case (dtQueryFilter *)0x118b914:
                  goto switchD_0118b9ac_caseD_118b914;
                case (dtQueryFilter *)0x118b918:
                  goto switchD_0118b9ac_caseD_118b918;
                case (dtQueryFilter *)0x118b91c:
                  goto switchD_0118b9ac_caseD_118b91c;
                case (dtQueryFilter *)0x118b920:
                  goto switchD_0118b9ac_caseD_118b920;
                case (dtQueryFilter *)0x118b924:
                  goto switchD_0118b9ac_caseD_118b924;
                case (dtQueryFilter *)0x118b928:
                  goto switchD_0118b9ac_caseD_118b928;
                case (dtQueryFilter *)0x118b92c:
                  goto switchD_0118b9ac_caseD_118b92c;
                case (dtQueryFilter *)0x118b930:
                  goto switchD_0118b9ac_caseD_118b930;
                case (dtQueryFilter *)0x118b934:
                  goto switchD_0118b9ac_caseD_118b934;
                case (dtQueryFilter *)0x118b938:
                  goto switchD_0118b9ac_caseD_118b938;
                case (dtQueryFilter *)0x118b93c:
                  goto switchD_0118b9ac_caseD_118b93c;
                case (dtQueryFilter *)0x118b940:
                  goto switchD_0118b9ac_caseD_118b940;
                case (dtQueryFilter *)0x118b944:
                  goto switchD_0118b9ac_caseD_118b944;
                case (dtQueryFilter *)0x118b948:
                  goto switchD_0118b9ac_caseD_118b948;
                case (dtQueryFilter *)0x118b94c:
                  goto switchD_0118b9ac_caseD_118b94c;
                case (dtQueryFilter *)0x118b950:
                  goto switchD_0118b9ac_caseD_118b950;
                case (dtQueryFilter *)0x118b958:
                  goto switchD_0118b9ac_caseD_118b958;
                case (dtQueryFilter *)0x118b960:
                  goto switchD_0118b9ac_caseD_118b960;
                case (dtQueryFilter *)0x118b988:
                  goto switchD_0118b9ac_caseD_118b988;
                case (dtQueryFilter *)0x118b9b0:
                  in_s2 = *(float *)(pdVar15 + 8);
                  fVar33 = *(float *)(pdVar20 + 8);
                  in_s3 = *(float *)(local_168 + 8);
                  in_s4 = *(float *)(local_160 + 8);
LAB_0118b9e4:
                  in_s6 = (float)(uint)(byte)pdVar28[uVar31 * 0xc + 0xb];
                  in_s4 = in_s4 - in_s3;
                  pdVar15 = (dtMeshTile *)0x3b808081;
                  in_s5 = (float)local_140;
switchD_0118b9ac_caseD_118ba00:
                  in_s4 = in_s4 * in_s5;
switchD_0118b9ac_caseD_118ba04:
                  in_s5 = SUB84(pdVar15,0);
switchD_0118b9ac_caseD_118ba08:
                  fVar32 = fVar32 * in_s5;
                  fVar34 = (float)NEON_ucvtf(in_s6);
                  in_s5 = fVar34 * in_s5;
                  fVar35 = in_s2 - fVar33;
                  fVar34 = in_s3 + in_s4;
                  in_s2 = fVar35 * in_s5;
                  in_s3 = fVar33 + fVar32 * fVar35;
                  fVar33 = fVar33 + in_s2;
                  fVar32 = in_s3;
                  if (in_s3 <= fVar33) {
                    fVar32 = fVar33;
                    fVar33 = in_s3;
                  }
                  if ((fVar34 < fVar33) || (fVar33 = fVar32, fVar32 < fVar34))
                  goto switchD_0118b9ac_caseD_118b908;
                  goto LAB_0118ba58;
                case (dtQueryFilter *)0x118b9cc:
                  in_s2 = *(float *)pdVar15;
                  fVar33 = *(float *)pdVar20;
                  in_s3 = *(float *)local_168;
                  in_s4 = *(float *)local_160;
                  goto LAB_0118b9e4;
                case (dtQueryFilter *)0x118ba00:
                  goto switchD_0118b9ac_caseD_118ba00;
                case (dtQueryFilter *)0x118ba04:
                  goto switchD_0118b9ac_caseD_118ba04;
                case (dtQueryFilter *)0x118ba08:
                  goto switchD_0118b9ac_caseD_118ba08;
                case (dtQueryFilter *)0x118bb68:
                  goto switchD_0118b9ac_caseD_118bb68;
                case (dtQueryFilter *)0x118bb6c:
                  goto switchD_0118b9ac_caseD_118bb6c;
                case (dtQueryFilter *)0x118bb70:
                  goto switchD_0118b9ac_caseD_118bb70;
                case (dtQueryFilter *)0x118bbb8:
                  goto switchD_0118b9ac_caseD_118bbb8;
                case (dtQueryFilter *)0x118bbe8:
                  goto switchD_0118b9ac_caseD_118bbe8;
                case (dtQueryFilter *)0x118bbec:
                  goto switchD_0118b9ac_caseD_118bbec;
                case (dtQueryFilter *)0x118bc04:
                  goto switchD_0118b9ac_caseD_118bc04;
                case (dtQueryFilter *)0x118bc08:
                  goto switchD_0118b9ac_caseD_118bc08;
                case (dtQueryFilter *)0x118bc38:
                  goto switchD_0118b9ac_caseD_118bc38;
                case (dtQueryFilter *)0x118bc3c:
                  goto switchD_0118b9ac_caseD_118bc3c;
                case (dtQueryFilter *)0x118bc44:
                  goto switchD_0118b9ac_caseD_118bc44;
                case (dtQueryFilter *)0x118bcb0:
                  uStack_f8 = 0x118b8d8;
                  pdVar29 = (dtQueryFilter *)tpidr_el0;
                  local_158 = *(undefined4 **)(pdVar29 + 0x28);
                  local_140 = uVar31;
                  local_138 = (dtPoly *)param_3;
                  local_130 = (dtPoly *)pdVar16;
                  local_128 = param_4;
                  local_120 = (dtMeshTile *)pdVar28;
                  local_118 = (dtMeshTile *)pdVar13;
                  local_110 = pdVar27;
                  uStack_108 = ppdVar14;
                  local_100 = &stack0xfffffffffffffff0;
                  *(int *)ppdVar11 = 0;
                  param_3 = (float *)(lVar17 + 8);
                  if ((int)*param_3 < 0) {
                    *(undefined8 *)(lVar17 + 0x48) = 0;
                    *(undefined8 *)(lVar17 + 0x30) = 0;
                    *(undefined8 *)(lVar17 + 0x28) = 0;
                    *(undefined8 *)(lVar17 + 0x40) = 0;
                    *(undefined8 *)(lVar17 + 0x38) = 0;
                    *(undefined8 *)(lVar17 + 0x10) = 0;
                    *(undefined8 *)param_3 = 0;
                    *(undefined8 *)(lVar17 + 0x20) = 0;
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    uVar6 = 0x80000000;
                    goto LAB_0118beb4;
                  }
                  if (*(float *)(lVar17 + 0x1c) == *(float *)(lVar17 + 0x20)) {
                    *pfVar9 = *(float *)(lVar17 + 0x1c);
                    uVar31 = 1;
                    ppdVar14 = ppdVar11;
switchD_0118b9ac_caseD_118bd04:
                    ppdVar11 = ppdVar14;
                    iVar30 = (int)uVar31;
                    goto LAB_0118be90;
                  }
                  if (*(float *)(*(dtQueryFilter **)(lVar17 + 0x10) + 0x18) !=
                      *(float *)(lVar17 + 0x20)) {
                    *param_3 = (float)((uint)*param_3 | 0x40);
                  }
                  uVar6 = 0;
                  pdVar16 = *(dtQueryFilter **)(lVar17 + 0x10);
                  pdVar13 = (dtQueryFilter *)0x0;
                  do {
                    pdVar28 = pdVar16;
                    fVar36 = *(float *)(pdVar28 + 0x14);
                    if (((uint)fVar36 & 0xffffff) == 0) {
                      pdVar16 = (dtQueryFilter *)0x0;
                    }
                    else {
                      pdVar16 = (dtQueryFilter *)
                                (**(long **)(lVar17 + 0x58) +
                                (ulong)(((uint)fVar36 & 0xffffff) - 1) * 0x1c);
                    }
                    uVar8 = 0;
                    if (pdVar13 != (dtQueryFilter *)0x0) {
                      uVar8 = (int)((ulong)((long)pdVar13 - **(long **)(lVar17 + 0x58)) >> 2) *
                              -0x49249249 + 1;
                    }
                    uVar4 = (uint)fVar36 >> 0x1a & 3 | uVar6;
                    uVar6 = (uint)fVar36 >> 0x1a & 4;
                    fVar36 = (float)((uint)fVar36 & 0xe3000000 | uVar4 << 0x1a | uVar8 & 0xffffff);
                    *(float *)(pdVar28 + 0x14) = fVar36;
                    pdVar13 = pdVar28;
                  } while (pdVar16 != (dtQueryFilter *)0x0);
                  iVar30 = 0;
                  uVar6 = uVar8 & 0xffffff;
                  if ((uVar8 & 0xffffff) == 0) goto LAB_0118be28;
                  break;
                case (dtQueryFilter *)0x118bd04:
                  goto switchD_0118b9ac_caseD_118bd04;
                }
LAB_0118bddc:
                pdVar16 = (dtQueryFilter *)(**(long **)(lVar17 + 0x58) + (ulong)(uVar6 - 1) * 0x1c);
                pfVar10 = (float *)(ulong)(uint)*(float *)(pdVar28 + 0x18);
                if (((uint)fVar36 >> 0x1c & 1) != 0) goto LAB_0118be34;
LAB_0118bdf8:
                pfVar9[iVar30] = SUB84(pfVar10,0);
                iVar30 = iVar30 + 1;
                uVar8 = (uint)((int)ppdVar12 <= iVar30);
                uVar6 = uVar8 << 4;
                pdVar28 = pdVar16;
                do {
                  if (uVar8 != 0) {
                    *param_3 = (float)((uint)*param_3 | uVar6);
LAB_0118be90:
                    *(undefined8 *)((long)param_3 + 0x40) = 0;
                    uVar6 = (uint)*param_3 & 0xffffff | 0x40000000;
                    *(undefined8 *)((long)param_3 + 0x18) = 0;
                    *(undefined8 *)((long)param_3 + 0x10) = 0;
                    *(undefined8 *)((long)param_3 + 0x28) = 0;
                    *(undefined8 *)((long)param_3 + 0x20) = 0;
                    *(undefined8 *)((long)param_3 + 0x38) = 0;
                    *(undefined8 *)((long)param_3 + 0x30) = 0;
                    *(undefined8 *)((long)param_3 + 8) = 0;
                    *(undefined8 *)param_3 = 0;
                    *(int *)ppdVar11 = iVar30;
LAB_0118beb4:
                    if (*(undefined4 **)(pdVar29 + 0x28) != local_158) {
                    /* WARNING: Subroutine does not return */
                      __stack_chk_fail(uVar6);
                    }
                    return uVar6;
                  }
                  if (pdVar28 == (dtQueryFilter *)0x0) goto LAB_0118be90;
                  fVar36 = *(float *)(pdVar28 + 0x14);
                  uVar6 = (uint)fVar36 & 0xffffff;
                  if (uVar6 != 0) goto LAB_0118bddc;
LAB_0118be28:
                  pdVar16 = (dtQueryFilter *)0x0;
                  pfVar10 = (float *)(ulong)(uint)*(float *)(pdVar28 + 0x18);
                  if (((uint)fVar36 >> 0x1c & 1) == 0) goto LAB_0118bdf8;
LAB_0118be34:
                  local_170 = (dtQueryFilter *)(pfVar9 + iVar30);
                  local_168 = (dtQueryFilter *)CONCAT44((int)ppdVar12 - iVar30,(int)local_168);
                  uVar6 = raycast(auVar42._0_4_,pfVar10,(float *)pdVar28,pdVar16,
                                  (uint)*(undefined8 *)(lVar17 + 0x40),(dtRaycastHit *)0x0,
                                  (uint)auStack_180);
                  iVar26 = (int)local_168 + iVar30;
                  iVar30 = iVar26 + -1;
                  if (pfVar9[iVar30] != *(float *)(pdVar16 + 0x18)) {
                    iVar30 = iVar26;
                  }
                  uVar8 = uVar6 & 0xffffff;
                  uVar6 = uVar6 & 0xffffff;
                  pdVar28 = pdVar16;
                } while( true );
              }
            }
switchD_0118b9ac_caseD_118b908:
            pdVar15 = local_118;
switchD_0118b9ac_caseD_118b90c:
            pdVar28 = *(dtQueryFilter **)(pdVar15 + 0x20);
switchD_0118b9ac_caseD_118b914:
            pdVar15 = (dtMeshTile *)(pdVar28 + uVar31 * 0xc);
switchD_0118b9ac_caseD_118b918:
            pdVar15 = (dtMeshTile *)(ulong)(uint)*(float *)(pdVar15 + 4);
switchD_0118b9ac_caseD_118b91c:
            bVar5 = (int)pdVar15 == -1;
switchD_0118b9ac_caseD_118b920:
            if (bVar5) {
              pdVar18 = (dtQueryFilter *)0x0;
LAB_0118bac8:
              uVar6 = (uint)pdVar18;
              pdVar28 = (dtQueryFilter *)((ulong)local_170 & 0xffffffff);
              uVar31 = (ulong)local_170 >> 0x20;
              param_4 = local_160;
              param_3 = (float *)local_168;
              pdVar20 = local_170;
              goto joined_r0x0118bbd0;
            }
switchD_0118b9ac_caseD_118b924:
            pdVar18 = (dtQueryFilter *)(ulong)local_148;
switchD_0118b9ac_caseD_118b928:
          } while( true );
        }
        pdVar18 = (dtQueryFilter *)0x0;
        uVar6 = 0;
        pdVar20 = pdVar28;
joined_r0x0118bbd0:
        fVar33 = fVar37;
        if (((ulong)pdVar20 & 1) != 0) {
          iVar26 = 0;
          if (iVar30 != 0) {
            iVar26 = (int)(local_148 + 1) / iVar30;
          }
          lVar17 = (long)(int)(local_148 * 3) * 4;
          fVar33 = *param_3 + fVar39 * *(float *)ppdVar14;
          fVar32 = fVar40 * *(float *)ppdVar14 + *(float *)((long)param_3 + 8);
          fVar34 = *(float *)((long)&uStack_108 + lVar17 + 4);
          fVar35 = *(float *)((long)&local_100 + lVar17 + 4);
          lVar1 = (long)(int)((local_148 + 1) - iVar26 * iVar30) * 0xc;
          in_s5 = fVar33 - fVar37;
          fVar37 = *(float *)((long)&uStack_108 + lVar1 + 4) - fVar34;
          fVar41 = *(float *)((long)&local_100 + lVar1 + 4) - fVar35;
          fVar34 = fVar33 - fVar34;
          if (fVar37 * fVar37 <= fVar41 * fVar41) {
            fVar34 = fVar32 - fVar35;
            fVar37 = fVar41;
          }
          in_s2 = *(float *)((long)&local_100 + lVar17) +
                  (*(float *)((long)&local_100 + lVar1) - *(float *)((long)&local_100 + lVar17)) *
                  (fVar34 / fVar37);
          pdVar15 = (dtMeshTile *)((ulong)(byte)*(dtQueryFilter *)(local_130 + 0x1f) & 0x3f);
switchD_0118b9ac_caseD_118bb68:
          in_s3 = in_s2 - fVar36;
switchD_0118b9ac_caseD_118bb6c:
          in_s6 = fVar32 - fVar38;
switchD_0118b9ac_caseD_118bb70:
          fVar38 = fVar32;
          uVar6 = (uint)pdVar18;
          in_s5 = in_s5 * in_s5;
          in_s6 = in_s6 * in_s6;
          in_s4 = *(float *)(ppdVar14 + 4);
          in_s3 = in_s4 + *(float *)(pdVar13 + (long)pdVar15 * 4) *
                          SQRT(in_s6 + in_s5 + in_s3 * in_s3);
          *(float *)(ppdVar14 + 4) = in_s3;
          fVar36 = in_s2;
        }
        fVar37 = fVar33;
        if (uVar6 == 0) {
          pdVar18 = (dtQueryFilter *)(ulong)local_148;
          pdVar22 = (dtQueryFilter *)((long)&uStack_108 + 4);
          pdVar15 = (dtMeshTile *)0x0;
          pdVar20 = (dtQueryFilter *)(ulong)(local_148 + 1);
switchD_0118b9ac_caseD_118bbe8:
          pdVar18 = (dtQueryFilter *)(ulong)(uint)((int)pdVar18 * 3);
switchD_0118b9ac_caseD_118bbec:
          iVar19 = (int)pdVar20;
          pdVar20 = pdVar22 + (long)(int)pdVar18 * 4;
          iVar26 = (int)pdVar18 + 3;
          if (iVar30 <= iVar19) {
            iVar26 = 0;
          }
          pdVar18 = pdVar22 + (long)iVar26 * 4;
          fVar33 = *(float *)(pdVar20 + 8);
switchD_0118b9ac_caseD_118bc04:
          in_s3 = *(float *)(pdVar18 + 8);
switchD_0118b9ac_caseD_118bc08:
          fVar34 = *(float *)pdVar20;
          fVar32 = *(float *)pdVar18;
          *(int *)(ppdVar14 + 3) = (int)pdVar27;
          in_s3 = in_s3 - fVar33;
          fVar32 = fVar32 - fVar34;
          in_s2 = 1.0 / SQRT(fVar32 * fVar32 + in_s3 * in_s3 + 0.0);
          fVar33 = in_s3 * in_s2;
switchD_0118b9ac_caseD_118bc38:
          in_s3 = in_s2 * 0.0;
switchD_0118b9ac_caseD_118bc3c:
          fVar32 = -(fVar32 * in_s2);
          *(float *)((long)ppdVar14 + 4) = fVar33;
          *(float *)(ppdVar14 + 1) = in_s3;
          goto switchD_0118b9ac_caseD_118bc44;
        }
        uVar31 = (ulong)uVar6;
        pdVar15 = local_118;
        pdVar20 = (dtQueryFilter *)local_120;
        pdVar22 = (dtQueryFilter *)local_130;
        pdVar24 = local_138;
switchD_0118b9ac_caseD_118bbb8:
        local_130 = pdVar24;
        local_128 = pdVar22;
        local_118 = (dtMeshTile *)pdVar20;
        local_110 = (dtQueryFilter *)pdVar15;
        goto LAB_0118b7b4;
      }
LAB_0118bc4c:
      *(int *)(ppdVar14 + 3) = (int)pdVar27;
      lVar17 = local_178;
      uVar6 = local_14c;
      local_150 = local_14c;
    }
  }
LAB_0118bc60:
  if (*(long *)(lVar17 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
switchD_0118b9ac_caseD_118bc44:
  *(float *)((long)ppdVar14 + 0xc) = fVar32;
LAB_0118b7a8:
  local_150 = local_14c;
  lVar17 = local_178;
  uVar6 = local_14c;
  if (((ulong)pdVar15 & 1) == 0) goto LAB_0118bc60;
LAB_0118b7b4:
  if ((int)uVar31 == 0) goto LAB_0118bc4c;
  goto LAB_0118b7b8;
}

