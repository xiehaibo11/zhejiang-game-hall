
void * FUN_009110e4(long param_1,ulong param_2,long param_3,uint *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *__s;
  undefined8 *__ptr;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong __size;
  ulong uVar18;
  
  uVar9 = (uint)(param_2 >> 2) & 0x3fffffff;
  if ((param_2 & 3) != 0) {
    uVar9 = uVar9 + 1;
  }
  uVar18 = (ulong)uVar9;
  uVar11 = uVar9 + 1;
  uVar7 = uVar11 * 4;
  __size = (ulong)uVar7;
  __s = malloc(__size);
  __s[uVar18] = (uint)param_2;
  memset(__s,0,(ulong)(uVar9 << 2));
  if ((uint)param_2 != 0) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      uVar14 = uVar13 >> 2 & 0x3fffffff;
      pbVar1 = (byte *)(param_1 + uVar13);
      uVar10 = (uint)lVar12;
      lVar12 = lVar12 + 8;
      uVar13 = uVar13 + 1;
      __s[uVar14] = (uint)*pbVar1 << (ulong)(uVar10 & 0x18) | __s[uVar14];
    } while ((param_2 & 0xffffffff) * 8 - lVar12 != 0);
  }
  __ptr = malloc(0x10);
  uVar10 = 0;
  uVar13 = 0;
  *__ptr = 0;
  __ptr[1] = 0;
  do {
    pbVar1 = (byte *)(param_3 + uVar13);
    lVar12 = (uVar13 >> 2 & 0x3fffffff) * 4;
    uVar4 = uVar10 & 0x18;
    uVar13 = uVar13 + 1;
    uVar10 = uVar10 + 8;
    *(uint *)((long)__ptr + lVar12) =
         (uint)*pbVar1 << (ulong)uVar4 | *(uint *)((long)__ptr + lVar12);
  } while (uVar13 != 0x10);
  if (uVar9 != 0) {
    uVar10 = __s[uVar18];
    uVar4 = 0;
    if (uVar11 != 0) {
      uVar4 = 0x34 / uVar11;
    }
    uVar11 = 0;
    iVar15 = uVar4 + 5;
    do {
      uVar11 = uVar11 + 0x9e3779b9;
      uVar13 = 0;
      uVar4 = uVar11 >> 2 & 3;
      uVar16 = *__s;
      do {
        puVar2 = __s + uVar13;
        uVar17 = (uint)uVar13;
        uVar6 = puVar2[1];
        uVar13 = uVar13 + 1;
        uVar10 = ((uVar6 << 2 ^ uVar10 >> 5) + (uVar6 >> 3 ^ uVar10 << 4) ^
                 (*(uint *)((long)__ptr + (ulong)(uVar17 & 3 ^ uVar4) * 4) ^ uVar10) +
                 (uVar6 ^ uVar11)) + uVar16;
        *puVar2 = uVar10;
        uVar16 = uVar6;
      } while (uVar18 != uVar13);
      uVar16 = *__s;
      uVar10 = ((uVar16 << 2 ^ uVar10 >> 5) + (uVar16 >> 3 ^ uVar10 * 0x10) ^
               (*(uint *)((long)__ptr + (ulong)(uVar4 ^ uVar9 & 3) * 4) ^ uVar10) +
               (uVar16 ^ uVar11)) + __s[uVar18];
      __s[uVar18] = uVar10;
      bVar5 = iVar15 != 0;
      iVar15 = iVar15 + -1;
    } while (bVar5);
  }
  pvVar8 = malloc((ulong)(uVar7 | 1));
  if (uVar7 != 0) {
    uVar9 = 0;
    uVar18 = 0;
    do {
      uVar10 = __s[uVar18 >> 2 & 0x3fffffff];
      uVar11 = uVar9 & 0x10;
      puVar3 = (undefined1 *)((long)pvVar8 + uVar18);
      uVar18 = uVar18 + 2;
      uVar9 = uVar9 + 0x10;
      *puVar3 = (char)(uVar10 >> (ulong)uVar11);
      puVar3[1] = (char)(uVar10 >> (ulong)(uVar11 | 8));
    } while (__size != uVar18);
  }
  *(undefined1 *)((long)pvVar8 + __size) = 0;
  *param_4 = uVar7;
  free(__s);
  free(__ptr);
  return pvVar8;
}

