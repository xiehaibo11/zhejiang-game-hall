
void * FUN_008cda50(long param_1,ulong param_2,long param_3,uint *param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint *__s;
  undefined8 *__ptr;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  uint uVar14;
  
  uVar14 = (uint)(param_2 >> 2) & 0x3fffffff;
  bVar6 = (param_2 & 3) != 0;
  uVar8 = uVar14;
  if (bVar6) {
    uVar8 = uVar14 + 1;
  }
  uVar5 = uVar8 * 4;
  __s = malloc((ulong)uVar5);
  memset(__s,0,(ulong)uVar5);
  if ((int)param_2 != 0) {
    uVar7 = 0;
    uVar9 = 0;
    do {
      uVar11 = uVar9 >> 2 & 0x3fffffff;
      pbVar1 = (byte *)(param_1 + uVar9);
      uVar3 = uVar7 & 0x18;
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 + 8;
      __s[uVar11] = (uint)*pbVar1 << (ulong)uVar3 | __s[uVar11];
    } while ((param_2 & 0xffffffff) != uVar9);
  }
  __ptr = malloc(0x10);
  uVar7 = 0;
  uVar9 = 0;
  *__ptr = 0;
  __ptr[1] = 0;
  do {
    pbVar1 = (byte *)(param_3 + uVar9);
    lVar10 = (uVar9 >> 2 & 0x3fffffff) * 4;
    uVar3 = uVar7 & 0x18;
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 8;
    *(uint *)((long)__ptr + lVar10) =
         (uint)*pbVar1 << (ulong)uVar3 | *(uint *)((long)__ptr + lVar10);
  } while (uVar9 != 0x10);
  uVar9 = (ulong)(uVar8 - 1);
  if (uVar8 - 1 != 0) {
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = 0x34 / uVar8;
    }
    uVar8 = uVar7 * -0x61c88647 + 0xb54cda56;
    if (uVar8 != 0) {
      uVar7 = *__s;
      do {
        uVar3 = uVar8 >> 2 & 3;
        lVar10 = (ulong)((uVar14 + bVar6) - 2) << 2;
        uVar11 = uVar9;
        do {
          uVar4 = *(uint *)((long)__s + lVar10);
          uVar12 = uVar11 - 1;
          uVar7 = __s[uVar11] -
                  ((uVar4 >> 5 ^ uVar7 << 2) + (uVar4 << 4 ^ uVar7 >> 3) ^
                  (*(uint *)((long)__ptr + (ulong)((uint)uVar11 & 3 ^ uVar3) * 4) ^ uVar4) +
                  (uVar7 ^ uVar8));
          lVar10 = lVar10 + -4;
          __s[uVar11] = uVar7;
          uVar11 = uVar12;
        } while ((int)uVar12 != 0);
        uVar4 = __s[uVar9];
        uVar7 = *__s - ((uVar4 >> 5 ^ uVar7 * 4) + (uVar4 << 4 ^ uVar7 >> 3) ^
                       (*(uint *)((long)__ptr + (ulong)uVar3 * 4) ^ uVar4) + (uVar7 ^ uVar8));
        uVar8 = uVar8 + 0x61c88647;
        *__s = uVar7;
      } while (uVar8 != 0);
    }
  }
  uVar8 = __s[uVar9];
  uVar9 = (ulong)uVar8;
  pvVar13 = (void *)0x0;
  if ((uVar8 < uVar5 - 7) || (uVar5 - 4 < uVar8)) goto LAB_008cdcd0;
  pvVar13 = malloc((ulong)(uVar8 + 1));
  if (uVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (uVar8 == 1) {
      uVar12 = 0;
    }
    else {
      uVar14 = 0;
      uVar11 = 0;
      uVar12 = uVar9 & 0xfffffffe;
      do {
        uVar7 = __s[uVar11 >> 2 & 0x3fffffff];
        uVar5 = uVar14 & 0x10;
        puVar2 = (undefined1 *)((long)pvVar13 + uVar11);
        uVar11 = uVar11 + 2;
        uVar14 = uVar14 + 0x10;
        *puVar2 = (char)(uVar7 >> (ulong)uVar5);
        puVar2[1] = (char)(uVar7 >> (ulong)(uVar5 | 8));
      } while (uVar12 != uVar11);
      if (uVar12 == uVar9) goto LAB_008cdcc8;
    }
    uVar14 = (int)uVar12 << 3;
    do {
      uVar5 = uVar14 & 0x18;
      uVar14 = uVar14 + 8;
      *(char *)((long)pvVar13 + uVar12) = (char)(__s[uVar12 >> 2 & 0x3fffffff] >> (ulong)uVar5);
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
  }
LAB_008cdcc8:
  *(undefined1 *)((long)pvVar13 + uVar9) = 0;
  *param_4 = uVar8;
LAB_008cdcd0:
  free(__s);
  free(__ptr);
  return pvVar13;
}

