
int FUN_00e4bc28(long param_1,long *param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  undefined1 *puVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  long lVar19;
  int local_34;
  undefined1 *puVar15;
  
  lVar12 = *param_2;
  local_34 = 0;
  if (lVar12 == 0) {
    iVar10 = 0x23;
  }
  else {
    lVar19 = *(long *)(lVar12 + 0xf8);
    if ((lVar19 == 0) || (*(uint *)(lVar12 + 0x20) <= param_3)) {
      iVar10 = 6;
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)*(byte *)(lVar19 + 0x76);
      }
      else {
        param_3 = param_3 - 1;
      }
      sVar3 = *(short *)(lVar19 + 8);
      iVar10 = 6;
      bVar7 = sVar3 != 0x300;
      if (bVar7) {
        iVar10 = 4;
      }
      iVar11 = 0x94;
      if (bVar7) {
        iVar11 = 0x76;
      }
      uVar13 = *(ulong *)(lVar19 + 0x10);
      uVar16 = (ulong)(iVar11 + iVar10 * param_3);
      lVar12 = -4;
      if (bVar7) {
        lVar12 = -2;
      }
      if (uVar16 < (uVar13 + lVar12) - 2) {
        puVar1 = (ushort *)(*(long *)(lVar19 + 0xd8) + uVar16);
        uVar6 = *puVar1;
        *(uint *)(param_1 + 0x9c) = (uint)uVar6;
        if (sVar3 == 0x300) {
          uVar16 = (ulong)*(byte *)((long)puVar1 + 5) << 0x18 | (ulong)(byte)puVar1[2] << 0x10 |
                   (ulong)*(byte *)((long)puVar1 + 3) << 8 | (ulong)(byte)puVar1[1];
        }
        else {
          uVar16 = (ulong)puVar1[1];
        }
        if (uVar16 < uVar13) {
          uVar4 = *(ushort *)(lVar19 + 0x6c);
          *(undefined4 *)(param_1 + 0xc0) = 0;
          *(undefined1 *)(param_1 + 0xb2) = 1;
          *(uint *)(param_1 + 0x98) = (uint)uVar4;
          uVar5 = *(ushort *)(lVar19 + 0x5c);
          lVar12 = (ulong)uVar6 << 6;
          *(long *)(param_1 + 0x30) = lVar12;
          *(undefined4 *)(param_1 + 0x90) = 0x62697473;
          *(uint *)(param_1 + 0xc4) = (uint)uVar5;
          *(ulong *)(param_1 + 0x48) = (ulong)uVar5 << 6;
          *(long *)(param_1 + 0x50) = lVar12;
          *(ulong *)(param_1 + 0x38) = (ulong)uVar4 << 6;
          *(undefined8 *)(param_1 + 0x40) = 0;
          FUN_00e16d8c();
          if ((param_4 >> 0x16 & 1) != 0) {
            return 0;
          }
          lVar12 = *(long *)(lVar19 + 0xd8);
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xb8);
          uVar18 = *(int *)(param_1 + 0x9c) + 7U >> 3;
          *(uint *)(param_1 + 0xa0) = uVar18;
          if ((uVar18 != 0) &&
             (uVar16 + *(int *)(param_1 + 0x98) * uVar18 <= *(ulong *)(lVar19 + 0x10))) {
            puVar9 = (undefined1 *)FUN_00e13bcc(uVar8,uVar18,0,*(int *)(param_1 + 0x98),0,&local_34)
            ;
            *(undefined1 **)(param_1 + 0xa8) = puVar9;
            if (local_34 != 0) {
              return local_34;
            }
            puVar14 = (undefined1 *)(lVar12 + uVar16);
            do {
              if (*(uint *)(param_1 + 0x98) != 0) {
                puVar2 = puVar14 + *(uint *)(param_1 + 0x98);
                puVar15 = puVar14;
                puVar17 = puVar9;
                do {
                  puVar14 = puVar15 + 1;
                  *puVar17 = *puVar15;
                  puVar17 = puVar17 + *(int *)(param_1 + 0xa0);
                  puVar15 = puVar14;
                } while (puVar14 < puVar2);
              }
              uVar18 = uVar18 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar18 != 0);
            *(undefined4 *)(*(long *)(param_1 + 0x128) + 8) = 1;
            return 0;
          }
        }
      }
      iVar10 = 3;
    }
  }
  return iVar10;
}

