
int FUN_00e5ab84(long param_1,uint param_2,long param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  void *__src;
  void *__dest;
  int local_64;
  
  if (*(long *)(param_3 + 0xa8) == 0) {
    *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_4 + 0xc0);
    iVar17 = *(int *)(param_4 + 0x9c);
    *(int *)(param_3 + 0x9c) = iVar17;
    iVar2 = *(int *)(param_4 + 0x98);
    iVar17 = iVar17 * 4;
    *(undefined1 *)(param_3 + 0xb2) = 7;
    *(int *)(param_3 + 0xa0) = iVar17;
    uVar21 = (ulong)(uint)(iVar2 * iVar17);
    *(undefined2 *)(param_3 + 0xb0) = 0x100;
    *(int *)(param_3 + 0x98) = iVar2;
    local_64 = FUN_00e15340(param_3,uVar21);
    if (local_64 != 0) {
      return local_64;
    }
    memset(*(void **)(param_3 + 0xa8),0,uVar21);
  }
  else {
    iVar7 = *(int *)(param_3 + 0xc0);
    iVar9 = *(int *)(param_3 + 0xc4);
    iVar8 = *(int *)(param_4 + 0xc0);
    iVar10 = *(int *)(param_4 + 0xc4);
    iVar17 = *(int *)(param_3 + 0x9c) + iVar7;
    iVar2 = *(int *)(param_4 + 0x9c) + iVar8;
    iVar11 = iVar9 - *(int *)(param_3 + 0x98);
    iVar12 = iVar10 - *(int *)(param_4 + 0x98);
    iVar3 = iVar17;
    if (iVar17 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar4 = iVar11;
    if (iVar12 <= iVar11) {
      iVar4 = iVar12;
    }
    iVar5 = iVar9;
    if (iVar9 <= iVar10) {
      iVar5 = iVar10;
    }
    iVar6 = iVar7;
    if (iVar8 <= iVar7) {
      iVar6 = iVar8;
    }
    if ((((iVar8 < iVar7) || (iVar17 < iVar2)) || (iVar9 < iVar10)) || (iVar12 < iVar11)) {
      uVar28 = (iVar3 - iVar6) * 4;
      lVar18 = FUN_00e1388c(*(undefined8 *)(param_1 + 0xb8),(iVar5 - iVar4) * uVar28,&local_64);
      if (local_64 != 0) {
        return local_64;
      }
      if (*(int *)(param_3 + 0x98) != 0) {
        __src = *(void **)(param_3 + 0xa8);
        uVar25 = 0;
        __dest = (void *)(lVar18 + (int)((iVar5 - *(int *)(param_3 + 0xc4)) * uVar28) +
                         (long)((*(int *)(param_3 + 0xc0) - iVar6) * 4));
        do {
          memcpy(__dest,__src,(ulong)(uint)(*(int *)(param_3 + 0x9c) << 2));
          uVar25 = uVar25 + 1;
          __dest = (void *)((long)__dest + (ulong)uVar28);
          __src = (void *)((long)__src + (long)*(int *)(param_3 + 0xa0));
        } while (uVar25 < *(uint *)(param_3 + 0x98));
      }
      FUN_00e152c8(param_3,lVar18);
      *(int *)(param_3 + 0xc0) = iVar6;
      *(int *)(param_3 + 0xc4) = iVar5;
      *(int *)(param_3 + 0x98) = iVar5 - iVar4;
      *(int *)(param_3 + 0x9c) = iVar3 - iVar6;
      *(uint *)(param_3 + 0xa0) = uVar28;
      *(uint *)(*(long *)(param_3 + 0x128) + 8) = *(uint *)(*(long *)(param_3 + 0x128) + 8) | 1;
      *(undefined4 *)(param_3 + 0x90) = 0x62697473;
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x450) == '\0') {
      if ((*(long *)(param_1 + 0x428) == 0) ||
         ((*(ushort *)(*(long *)(param_1 + 0x428) + (ulong)*(ushort *)(param_1 + 0x440) * 2) >> 1 &
          1) == 0)) {
        uVar24 = 0;
        uVar23 = 0;
        uVar22 = 0;
        uVar25 = 0xff;
        uVar28 = *(uint *)(param_4 + 0x98);
      }
      else {
        uVar25 = 0xff;
        uVar24 = 0xff;
        uVar23 = 0xff;
        uVar22 = 0xff;
        uVar28 = *(uint *)(param_4 + 0x98);
      }
    }
    else {
      uVar22 = (uint)*(byte *)(param_1 + 0x451);
      uVar23 = (uint)*(byte *)(param_1 + 0x452);
      uVar24 = (uint)*(byte *)(param_1 + 0x453);
      uVar25 = (uint)*(byte *)(param_1 + 0x454);
      uVar28 = *(uint *)(param_4 + 0x98);
    }
  }
  else {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x448) + (ulong)param_2 * 4);
    uVar22 = (uint)*pbVar1;
    uVar23 = (uint)pbVar1[1];
    uVar24 = (uint)pbVar1[2];
    uVar25 = (uint)pbVar1[3];
    uVar28 = *(uint *)(param_4 + 0x98);
  }
  if (uVar28 != 0) {
    iVar17 = *(int *)(param_3 + 0xa0);
    uVar21 = (ulong)*(uint *)(param_4 + 0x9c);
    lVar27 = *(long *)(param_4 + 0xa8);
    uVar26 = 0;
    lVar18 = *(long *)(param_3 + 0xa8) +
             (long)((*(int *)(param_3 + 0xc4) - *(int *)(param_4 + 0xc4)) * iVar17) +
             (long)((*(int *)(param_4 + 0xc0) - *(int *)(param_3 + 0xc0)) * 4);
    do {
      if ((int)uVar21 != 0) {
        uVar29 = 0;
        uVar28 = 3;
        do {
          uVar20 = *(byte *)(lVar27 + uVar29) * uVar25;
          uVar19 = uVar20 / 0xff;
          iVar17 = 0xff - uVar19;
          lVar13 = (long)(int)(iVar17 * (uint)*(byte *)(lVar18 + (ulong)(uVar28 - 3))) * 0x80808081;
          lVar14 = (long)(int)(iVar17 * (uint)*(byte *)(lVar18 + (ulong)(uVar28 - 2))) * 0x80808081;
          uVar20 = uVar20 / 0xff;
          lVar15 = (long)(int)(iVar17 * (uint)*(byte *)(lVar18 + (ulong)(uVar28 - 1))) * 0x80808081;
          lVar16 = (long)(int)(iVar17 * (uint)*(byte *)(lVar18 + (ulong)uVar28)) * 0x80808081;
          *(char *)(lVar18 + (ulong)(uVar28 - 3)) =
               ((char)(uint)((ulong)lVar13 >> 0x27) - (char)(lVar13 >> 0x3f)) +
               (char)((uVar19 * uVar22) / 0xff);
          *(char *)(lVar18 + (ulong)(uVar28 - 2)) =
               ((char)(uint)((ulong)lVar14 >> 0x27) - (char)(lVar14 >> 0x3f)) +
               (char)((uVar20 * uVar23) / 0xff);
          *(char *)(lVar18 + (ulong)(uVar28 - 1)) =
               ((char)(uint)((ulong)lVar15 >> 0x27) - (char)(lVar15 >> 0x3f)) +
               (char)((uVar20 * uVar24) / 0xff);
          *(char *)(lVar18 + (ulong)uVar28) =
               ((char)(uint)((ulong)lVar16 >> 0x27) - (char)(lVar16 >> 0x3f)) + (char)uVar20;
          uVar21 = (ulong)*(uint *)(param_4 + 0x9c);
          uVar29 = uVar29 + 1;
          uVar28 = uVar28 + 4;
        } while (uVar29 < uVar21);
        iVar17 = *(int *)(param_3 + 0xa0);
        uVar28 = *(uint *)(param_4 + 0x98);
      }
      uVar26 = uVar26 + 1;
      lVar18 = lVar18 + iVar17;
      lVar27 = lVar27 + *(int *)(param_4 + 0xa0);
    } while (uVar26 < uVar28);
  }
  return 0;
}

