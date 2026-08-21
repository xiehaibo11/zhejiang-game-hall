
undefined8 deflateSetDictionary(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  void *__s;
  size_t __n;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == 0) {
      return 0xfffffffe;
    }
    lVar14 = param_1[7];
    if (lVar14 == 0) {
      return 0xfffffffe;
    }
    iVar7 = *(int *)(lVar14 + 0x2c);
    if ((iVar7 != 2) &&
       (((iVar7 != 1 || (*(int *)(lVar14 + 8) == 0x2a)) && (*(int *)(lVar14 + 0xa4) == 0)))) {
      if (iVar7 == 1) {
        lVar10 = adler32(param_1[0xc],param_2,param_3);
        param_1[0xc] = lVar10;
      }
      *(undefined4 *)(lVar14 + 0x2c) = 0;
      uVar15 = param_3;
      if (*(uint *)(lVar14 + 0x44) <= param_3) {
        uVar15 = *(uint *)(lVar14 + 0x44);
        if (iVar7 == 0) {
          __s = *(void **)(lVar14 + 0x68);
          __n = (ulong)(*(int *)(lVar14 + 0x74) - 1) * 2;
          *(undefined2 *)((long)__s + __n) = 0;
          memset(__s,0,__n);
          uVar15 = *(uint *)(lVar14 + 0x44);
          *(undefined4 *)(lVar14 + 0x9c) = 0;
          *(undefined8 *)(lVar14 + 0x88) = 0;
          *(undefined4 *)(lVar14 + 0x171c) = 0;
        }
        param_2 = param_2 + (ulong)(param_3 - uVar15);
      }
      lVar10 = param_1[1];
      lVar16 = *param_1;
      *(uint *)(param_1 + 1) = uVar15;
      *param_1 = param_2;
      FUN_01176140(lVar14);
      uVar8 = *(uint *)(lVar14 + 0x9c);
      uVar15 = *(uint *)(lVar14 + 0xa4);
      while (2 < uVar15) {
        uVar12 = (ulong)*(uint *)(lVar14 + 0x70);
        uVar3 = *(uint *)(lVar14 + 0x7c);
        uVar4 = *(uint *)(lVar14 + 0x80);
        lVar13 = *(long *)(lVar14 + 0x50);
        lVar5 = *(long *)(lVar14 + 0x60);
        lVar6 = *(long *)(lVar14 + 0x68);
        uVar9 = *(uint *)(lVar14 + 0x4c);
        iVar11 = 2 - uVar15;
        uVar1 = uVar8;
        do {
          iVar11 = iVar11 + 1;
          uVar2 = ((int)uVar12 << (ulong)(uVar4 & 0x1f) ^
                  (uint)*(byte *)(lVar13 + (ulong)(uVar1 + 2))) & uVar3;
          uVar12 = (ulong)uVar2;
          *(uint *)(lVar14 + 0x70) = uVar2;
          *(undefined2 *)(lVar5 + (ulong)(uVar9 & uVar1) * 2) = *(undefined2 *)(lVar6 + uVar12 * 2);
          *(short *)(lVar6 + uVar12 * 2) = (short)uVar1;
          uVar1 = uVar1 + 1;
        } while (iVar11 != 0);
        *(uint *)(lVar14 + 0x9c) = (uVar15 - 2) + uVar8;
        *(undefined4 *)(lVar14 + 0xa4) = 2;
        FUN_01176140(lVar14);
        uVar8 = *(uint *)(lVar14 + 0x9c);
        uVar15 = *(uint *)(lVar14 + 0xa4);
      }
      *(uint *)(lVar14 + 0x171c) = uVar15;
      *(undefined4 *)(lVar14 + 0x98) = 0;
      *(uint *)(lVar14 + 0x9c) = uVar8 + uVar15;
      *(ulong *)(lVar14 + 0x88) = (ulong)(uVar8 + uVar15);
      *(undefined4 *)(lVar14 + 0xa4) = 0;
      *(undefined4 *)(lVar14 + 0xa8) = 2;
      *(undefined4 *)(lVar14 + 0x90) = 2;
      *param_1 = lVar16;
      *(int *)(param_1 + 1) = (int)lVar10;
      *(int *)(lVar14 + 0x2c) = iVar7;
      return 0;
    }
  }
  return 0xfffffffe;
}

