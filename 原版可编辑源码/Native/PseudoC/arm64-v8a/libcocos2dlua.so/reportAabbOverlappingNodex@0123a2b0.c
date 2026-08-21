
/* btQuantizedBvh::reportAabbOverlappingNodex(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&) const */

void __thiscall
btQuantizedBvh::reportAabbOverlappingNodex
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3
          )

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  float *pfVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ushort local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  ushort local_68;
  undefined2 local_66;
  undefined2 local_64;
  
  if (this[0x40] == (btQuantizedBvh)0x0) {
    iVar18 = *(int *)(this + 0x3c);
    if (iVar18 < 1) {
      iVar21 = 0;
    }
    else {
      pfVar20 = *(float **)(this + 0x78);
      iVar17 = 0;
      iVar21 = 0;
LAB_0123a52c:
      do {
        if ((pfVar20[4] < *(float *)param_2) || (*(float *)param_3 < *pfVar20)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if ((pfVar20[6] < *(float *)(param_2 + 8)) || (*(float *)(param_3 + 8) < pfVar20[2])) {
          bVar15 = false;
        }
        iVar21 = iVar21 + 1;
        if ((pfVar20[5] < *(float *)(param_2 + 4)) || (*(float *)(param_3 + 4) < pfVar20[1])) {
          fVar29 = pfVar20[8];
          bVar15 = false;
          bVar16 = fVar29 == -NAN;
LAB_0123a5b0:
          if ((!bVar16) && (!bVar15)) {
            pfVar20 = pfVar20 + (long)(int)fVar29 * 0x10;
            iVar17 = (int)fVar29 + iVar17;
            if (iVar18 <= iVar17) break;
            goto LAB_0123a52c;
          }
        }
        else {
          fVar29 = pfVar20[8];
          bVar16 = fVar29 == -NAN;
          if (!(bool)(bVar15 & bVar16)) goto LAB_0123a5b0;
          (**(code **)(*(long *)param_1 + 0x10))(param_1,pfVar20[9],pfVar20[10]);
          iVar18 = *(int *)(this + 0x3c);
        }
        pfVar20 = pfVar20 + 0x10;
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar18);
    }
    if (maxIterations < iVar21) {
      maxIterations = iVar21;
    }
  }
  else {
    fVar26 = *(float *)(this + 8);
    fVar27 = *(float *)(this + 0xc);
    fVar28 = *(float *)(this + 0x10);
    fVar29 = *(float *)(this + 0x18);
    fVar30 = *(float *)(this + 0x1c);
    fVar31 = *(float *)(this + 0x20);
    fVar23 = fVar26;
    if (fVar26 <= *(float *)param_2) {
      fVar23 = *(float *)param_2;
    }
    fVar24 = fVar27;
    if (fVar27 <= *(float *)(param_2 + 4)) {
      fVar24 = *(float *)(param_2 + 4);
    }
    fVar25 = fVar28;
    if (fVar28 <= *(float *)(param_2 + 8)) {
      fVar25 = *(float *)(param_2 + 8);
    }
    fVar22 = fVar29;
    if (fVar23 <= fVar29) {
      fVar22 = fVar23;
    }
    fVar23 = fVar30;
    if (fVar24 <= fVar30) {
      fVar23 = fVar24;
    }
    fVar24 = fVar31;
    if (fVar25 <= fVar31) {
      fVar24 = fVar25;
    }
    uVar2 = (int)((fVar22 - fVar26) * *(float *)(this + 0x28)) & 0xfffe;
    uVar3 = (int)((fVar23 - fVar27) * *(float *)(this + 0x2c)) & 0xfffe;
    uVar4 = (int)((fVar24 - fVar28) * *(float *)(this + 0x30)) & 0xfffe;
    local_68 = (ushort)uVar2;
    local_66 = (undefined2)uVar3;
    local_64 = (undefined2)uVar4;
    fVar23 = fVar26;
    if (fVar26 <= *(float *)param_3) {
      fVar23 = *(float *)param_3;
    }
    fVar24 = fVar27;
    if (fVar27 <= *(float *)(param_3 + 4)) {
      fVar24 = *(float *)(param_3 + 4);
    }
    fVar25 = fVar28;
    if (fVar28 <= *(float *)(param_3 + 8)) {
      fVar25 = *(float *)(param_3 + 8);
    }
    if (fVar23 <= fVar29) {
      fVar29 = fVar23;
    }
    if (fVar24 <= fVar30) {
      fVar30 = fVar24;
    }
    if (fVar25 <= fVar31) {
      fVar31 = fVar25;
    }
    uVar12 = (int)((fVar29 - fVar26) * *(float *)(this + 0x28) + 1.0) | 1;
    uVar13 = (int)((fVar30 - fVar27) * *(float *)(this + 0x2c) + 1.0) | 1;
    uVar14 = (int)((fVar31 - fVar28) * *(float *)(this + 0x30) + 1.0) | 1;
    local_70 = (ushort)uVar12;
    local_6e = (undefined2)uVar13;
    local_6c = (undefined2)uVar14;
    iVar18 = *(int *)(this + 200);
    if (iVar18 == 2) {
      walkRecursiveQuantizedTreeAgainstQueryAabb
                (this,*(btQuantizedBvhNode **)(this + 0xb8),param_1,&local_68,&local_70);
    }
    else if (iVar18 == 1) {
      walkStacklessQuantizedTreeCacheFriendly(this,param_1,&local_68,&local_70);
    }
    else if (iVar18 == 0) {
      iVar18 = *(int *)(this + 0x3c);
      if (iVar18 < 1) {
        iVar21 = 0;
      }
      else {
        puVar19 = *(ushort **)(this + 0xb8);
        iVar17 = 0;
        iVar21 = 0;
        do {
          while( true ) {
            uVar6 = puVar19[3];
            uVar7 = *puVar19;
            uVar8 = puVar19[5];
            uVar9 = puVar19[2];
            uVar10 = puVar19[4];
            uVar11 = puVar19[1];
            uVar5 = *(uint *)(puVar19 + 6);
            if ((-1 < (int)uVar5) &&
               (((((uVar6 >= uVar2 && uVar12 >= uVar7) && uVar8 >= uVar4) && uVar14 >= uVar9) &&
                uVar10 >= uVar3) && uVar13 >= uVar11)) {
              (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar5 >> 0x15,uVar5 & 0x1fffff);
            }
            iVar21 = iVar21 + 1;
            if ((((((uVar6 < uVar2 || uVar12 < uVar7) || uVar8 < uVar4) || uVar14 < uVar9) ||
                 uVar10 < uVar3) || uVar13 < uVar11) && (int)uVar5 < 0) break;
            puVar19 = puVar19 + 8;
            iVar17 = iVar17 + 1;
            if (iVar18 <= iVar17) goto LAB_0123a66c;
          }
          puVar1 = puVar19 + 6;
          puVar19 = puVar19 + (long)-*(int *)puVar1 * 8;
          iVar17 = iVar17 - *(int *)puVar1;
        } while (iVar17 < iVar18);
      }
LAB_0123a66c:
      if (maxIterations < iVar21) {
        maxIterations = iVar21;
      }
    }
  }
  return;
}

