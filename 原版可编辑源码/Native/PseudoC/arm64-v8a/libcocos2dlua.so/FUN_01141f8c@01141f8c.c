
undefined8 FUN_01141f8c(long param_1,long param_2)

{
  size_t __n;
  ulong uVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  void *__ptr;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(int *)(param_1 + 200) < 1) {
    uVar13 = 1;
    *(undefined4 *)(param_1 + 0xd0) = 1;
  }
  else {
    lVar7 = WebPGetWorkerInterface();
    iVar6 = (**(code **)(lVar7 + 8))(param_1 + 0x98);
    if (iVar6 == 0) {
      uVar8 = FUN_01143c94(param_1,1,"thread initialization failed.");
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar13 = (ulong)*(uint *)(param_1 + 0xd0);
    }
    else {
      *(long *)(param_1 + 0xb8) = param_1 + 0xf8;
      uVar9 = 2;
      if (0 < *(int *)(param_1 + 0xb68)) {
        uVar9 = 3;
      }
      uVar13 = (ulong)uVar9;
      *(code **)(param_1 + 0xa8) = FUN_011415d8;
      *(long *)(param_1 + 0xb0) = param_1;
      *(uint *)(param_1 + 0xd0) = uVar9;
    }
  }
  iVar12 = *(int *)(param_1 + 0x198);
  lVar7 = (long)iVar12;
  iVar6 = *(int *)(param_1 + 200);
  if (*(int *)(param_1 + 0xb68) < 1) {
    uVar15 = 0;
  }
  else {
    iVar11 = 1;
    if (0 < iVar6) {
      iVar11 = 2;
    }
    uVar15 = -(ulong)((uint)(iVar11 * iVar12) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar11 * iVar12) << 2;
  }
  __n = lVar7 * 2 + 2;
  iVar11 = 1;
  if (iVar6 == 2) {
    iVar11 = 2;
  }
  uVar9 = ((int)(uVar13 << 4) + (uint)(byte)(&DAT_014985e4)[*(int *)(param_1 + 0xb68)]) * 3;
  lVar17 = (long)(iVar11 * iVar12) * 800;
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 1;
  }
  lVar14 = lVar7 * 0x20 * ((long)((ulong)uVar9 << 0x20) >> 0x21);
  if (*(long *)(param_1 + 0xb98) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (ulong)*(ushort *)(param_1 + 0x4a) * (ulong)*(ushort *)(param_1 + 0x48);
  }
  __ptr = *(void **)(param_1 + 0xb48);
  uVar1 = lVar7 * 0x24 + __n + lVar17 + uVar15 + lVar14 + lVar16 + 0x35f;
  if (*(ulong *)(param_1 + 0xb50) < uVar1) {
    WebPSafeFree(__ptr);
    *(undefined8 *)(param_1 + 0xb50) = 0;
    __ptr = (void *)WebPSafeMalloc(uVar1,1);
    *(void **)(param_1 + 0xb48) = __ptr;
    if (__ptr == (void *)0x0) {
      uVar8 = FUN_01143c94(param_1,1,"no memory during frame initialization.");
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      goto code_r0x01142224;
    }
    *(ulong *)(param_1 + 0xb50) = uVar1;
    iVar6 = *(int *)(param_1 + 200);
  }
  pvVar2 = (void *)((long)__ptr + lVar7 * 4);
  __s = (void *)((long)pvVar2 + lVar7 * 0x20);
  *(void **)(param_1 + 0xb08) = pvVar2;
  lVar10 = (long)__s + __n;
  if (uVar15 == 0) {
    lVar10 = 0;
  }
  uVar15 = (long)__s + __n + uVar15 + 0x1f & 0xffffffffffffffe0;
  *(long *)(param_1 + 0xb18) = lVar10;
  lVar3 = lVar10 + lVar7 * 4;
  if (iVar6 < 1) {
    lVar3 = lVar10;
  }
  lVar10 = uVar15 + 0x340;
  *(void **)(param_1 + 0xaf8) = __ptr;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 0xb10) = (long)__s + 2;
  *(ulong *)(param_1 + 0xb20) = uVar15;
  *(long *)(param_1 + 0xb60) = lVar10;
  *(long *)(param_1 + 0xe8) = lVar3;
  *(long *)(param_1 + 0xf0) = lVar10;
  if (iVar6 == 2) {
    *(long *)(param_1 + 0xf0) = lVar10 + lVar7 * 800;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  iVar6 = (int)(lVar7 * 0x10);
  *(int *)(param_1 + 0xb40) = iVar6;
  iVar12 = (int)(lVar7 * 8);
  *(int *)(param_1 + 0xb44) = iVar12;
  bVar5 = (&DAT_014985e4)[*(int *)(param_1 + 0xb68)];
  lVar10 = lVar10 + lVar17;
  lVar14 = lVar10 + lVar14;
  if (lVar16 == 0) {
    lVar14 = 0;
  }
  *(long *)(param_1 + 0xbb0) = lVar14;
  lVar10 = lVar10 + (long)iVar6 * (ulong)bVar5;
  lVar14 = (long)iVar12 * (ulong)(bVar5 >> 1);
  *(long *)(param_1 + 0xb28) = lVar10;
  lVar17 = lVar10 + lVar7 * 0x10 * (-(uVar13 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4) + lVar14;
  *(long *)(param_1 + 0xb30) = lVar17;
  *(long *)(param_1 + 0xb38) = lVar17 + (long)((int)uVar13 << 3) * lVar7 * 8 + lVar14;
  memset(__s,0,__n);
  FUN_01144c84(param_1);
  memset(*(void **)(param_1 + 0xaf8),0,lVar7 * 4);
code_r0x01142224:
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xb28);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb30);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0xb38);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0xb40);
  uVar4 = *(undefined4 *)(param_1 + 0xb44);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x34) = uVar4;
  FUN_011491c0();
  return 1;
}

