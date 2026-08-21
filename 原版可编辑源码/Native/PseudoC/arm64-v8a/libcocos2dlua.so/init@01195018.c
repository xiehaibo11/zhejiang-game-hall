
/* dtTileCache::init(dtTileCacheParams const*, dtTileCacheAlloc*, dtTileCacheCompressor*,
   dtTileCacheMeshProcess*) */

undefined4 __thiscall
dtTileCache::init(dtTileCache *this,dtTileCacheParams *param_1,dtTileCacheAlloc *param_2,
                 dtTileCacheCompressor *param_3,dtTileCacheMeshProcess *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  void *__s;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *(dtTileCacheAlloc **)(this + 0x60) = param_2;
  *(dtTileCacheCompressor **)(this + 0x68) = param_3;
  *(dtTileCacheMeshProcess **)(this + 0x70) = param_4;
  *(undefined4 *)(this + 0x288) = 0;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar15 = *(undefined8 *)param_1;
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x48) = uVar14;
  *(undefined8 *)(this + 0x40) = uVar18;
  *(undefined8 *)(this + 0x38) = uVar17;
  *(undefined8 *)(this + 0x30) = uVar16;
  *(undefined8 *)(this + 0x28) = uVar15;
  *(int *)(this + 0x58) = iVar1;
  uVar13 = 0x80000004;
  __s = (void *)dtAlloc(iVar1 * 0x68,0);
  *(void **)(this + 0x78) = __s;
  if (__s != (void *)0x0) {
    memset(__s,0,(long)*(int *)(this + 0x58) * 0x68);
    lVar7 = (long)*(int *)(this + 0x58);
    *(undefined8 *)(this + 0x80) = 0;
    if (0 < *(int *)(this + 0x58)) {
      lVar8 = *(long *)(this + 0x78) + lVar7 * 0x68;
      lVar10 = 0;
      do {
        lVar7 = lVar7 + -1;
        *(undefined2 *)(lVar8 + -0x14) = 1;
        *(long *)(lVar8 + -8) = lVar10;
        lVar8 = lVar8 + -0x68;
        lVar10 = lVar8;
      } while (0 < lVar7);
      *(long *)(this + 0x80) = lVar8;
    }
    iVar2 = *(int *)(this + 0x54);
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    uVar5 = (iVar1 >> 2) - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    iVar1 = uVar5 + 1;
    if (uVar5 == 0xffffffff) {
      iVar1 = 1;
    }
    *(int *)this = iVar1;
    *(int *)(this + 4) = iVar1 + -1;
    lVar7 = dtAlloc(iVar2 * 0x38,0);
    *(long *)(this + 0x18) = lVar7;
    if (lVar7 != 0) {
      lVar7 = dtAlloc(*(int *)this << 3,0);
      *(long *)(this + 8) = lVar7;
      if (lVar7 != 0) {
        memset(*(void **)(this + 0x18),0,(long)*(int *)(this + 0x54) * 0x38);
        memset(*(void **)(this + 8),0,(long)*(int *)this << 3);
        iVar1 = *(int *)(this + 0x54);
        lVar7 = (long)iVar1;
        *(undefined8 *)(this + 0x10) = 0;
        if (0 < iVar1) {
          puVar9 = (undefined4 *)0x0;
          puVar12 = (undefined4 *)(*(long *)(this + 0x18) + lVar7 * 0x38);
          do {
            puVar11 = puVar12 + -0xe;
            lVar7 = lVar7 + -1;
            *puVar11 = 1;
            *(undefined4 **)(puVar12 + -2) = puVar9;
            puVar9 = puVar11;
            puVar12 = puVar11;
          } while (0 < lVar7);
          *(undefined4 **)(this + 0x10) = puVar11;
        }
        uVar5 = iVar1 - 1U | iVar1 - 1U >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        bVar6 = uVar5 >> 0x10 != 0;
        uVar5 = uVar5 >> ((ulong)bVar6 << 4);
        uVar3 = uVar5 >> ((ulong)(0xff < uVar5) << 3);
        uVar4 = uVar3 >> ((ulong)(0xf < uVar3) << 2);
        uVar3 = (uint)bVar6 << 4 | (uint)(0xff < uVar5) << 3 | (uint)(0xf < uVar3) << 2 |
                (uint)(3 < uVar4) << 1 | (uVar4 >> ((ulong)(3 < uVar4) << 1)) >> 1;
        uVar5 = 0x20 - uVar3;
        if (0x1e < uVar5) {
          uVar5 = 0x1f;
        }
        uVar13 = 0x80000008;
        *(uint *)(this + 0x20) = uVar5;
        *(uint *)(this + 0x24) = uVar3;
        if (9 < uVar5) {
          uVar13 = 0x40000000;
        }
      }
    }
  }
  return uVar13;
}

