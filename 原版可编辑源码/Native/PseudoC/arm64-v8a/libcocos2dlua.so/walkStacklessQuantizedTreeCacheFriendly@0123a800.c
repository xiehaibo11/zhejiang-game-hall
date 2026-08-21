
/* btQuantizedBvh::walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback*, unsigned short*,
   unsigned short*) const */

void __thiscall
btQuantizedBvh::walkStacklessQuantizedTreeCacheFriendly
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  
  if (0 < *(int *)(this + 0xd4)) {
    lVar17 = 0;
    do {
      uVar5 = *param_2;
      puVar20 = (ushort *)(*(long *)(this + 0xe0) + lVar17 * 0x20);
      if (((((uVar5 <= puVar20[3]) && (uVar6 = *param_3, *puVar20 <= uVar6)) &&
           (uVar7 = param_2[2], uVar7 <= puVar20[5])) &&
          ((uVar8 = param_3[2], puVar20[2] <= uVar8 && (uVar9 = param_2[1], uVar9 <= puVar20[4]))))
         && (uVar10 = param_3[1], puVar20[1] <= uVar10)) {
        lVar2 = *(long *)(this + 0xe0) + lVar17 * 0x20;
        iVar3 = *(int *)(lVar2 + 0x10);
        if (iVar3 < 1) {
          iVar18 = 0;
        }
        else {
          iVar19 = *(int *)(lVar2 + 0xc);
          iVar18 = 1;
          iVar3 = iVar3 + iVar19;
          puVar20 = (ushort *)(*(long *)(this + 0xb8) + (long)iVar19 * 0x10);
          while( true ) {
            uVar11 = puVar20[3];
            uVar12 = *puVar20;
            uVar13 = puVar20[5];
            uVar14 = puVar20[2];
            uVar15 = puVar20[4];
            uVar16 = puVar20[1];
            uVar4 = *(uint *)(puVar20 + 6);
            if ((-1 < (int)uVar4) &&
               (((((uVar11 >= uVar5 && uVar6 >= uVar12) && uVar13 >= uVar7) && uVar8 >= uVar14) &&
                uVar15 >= uVar9) && uVar10 >= uVar16)) {
              (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar4 >> 0x15,uVar4 & 0x1fffff);
            }
            if ((((((uVar11 < uVar5 || uVar6 < uVar12) || uVar13 < uVar7) || uVar8 < uVar14) ||
                 uVar15 < uVar9) || uVar10 < uVar16) && (int)uVar4 < 0) {
              puVar1 = puVar20 + 6;
              puVar20 = puVar20 + (long)-*(int *)puVar1 * 8;
              iVar19 = iVar19 - *(int *)puVar1;
            }
            else {
              puVar20 = puVar20 + 8;
              iVar19 = iVar19 + 1;
            }
            if (iVar3 <= iVar19) break;
            uVar5 = *param_2;
            uVar6 = *param_3;
            uVar7 = param_2[2];
            uVar8 = param_3[2];
            uVar9 = param_2[1];
            uVar10 = param_3[1];
            iVar18 = iVar18 + 1;
          }
        }
        if (maxIterations < iVar18) {
          maxIterations = iVar18;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(this + 0xd4));
  }
  return;
}

