
/* v8::internal::MaterializedObjectStore::Remove(unsigned long) */

undefined8 __thiscall
v8::internal::MaterializedObjectStore::Remove(MaterializedObjectStore *this,ulong param_1)

{
  ulong *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  size_t __n;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *__dest;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  
  puVar4 = *(ulong **)(this + 8);
  puVar5 = *(ulong **)(this + 0x10);
  __dest = puVar4;
  if ((puVar4 != puVar5) && (*puVar4 != param_1)) {
    do {
      if (puVar5 + -1 == __dest) goto LAB_00f1d3d4;
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while (*puVar1 != param_1);
  }
  if (__dest == puVar5) {
LAB_00f1d3d4:
    uVar7 = 0;
  }
  else {
    __n = (long)puVar5 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    lVar8 = *(long *)this;
    *(ulong **)(this + 0x10) = __dest + ((long)__n >> 3);
    uVar13 = *(ulong *)(lVar8 + 0xf60);
    iVar14 = (int)((ulong)((long)__dest - (long)puVar4) >> 3);
    if (*(int *)(uVar13 + 3) >> 1 <= iVar14) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","index < array.length()");
    }
    uVar12 = (long)(__dest + ((long)__n >> 3)) - *(long *)(this + 8);
    iVar10 = (int)(uVar12 >> 3);
    if (iVar14 < iVar10) {
      iVar10 = iVar10 - iVar14;
      iVar14 = iVar14 << 2;
      do {
        uVar6 = *(uint *)(uVar13 + 7 + (long)(iVar14 + 4));
        puVar2 = (uint *)(uVar13 + 7 + (long)iVar14);
        *puVar2 = uVar6;
        if ((uVar6 & 1) != 0) {
          uVar15 = uVar13 & 0xffffffff00000000 | (ulong)uVar6;
          uVar11 = uVar13 & 0xffffffff00000000 | (ulong)uVar6 & 0xfffffffffffc0000;
          uVar9 = *(ulong *)(uVar11 + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,puVar2,uVar15);
            uVar9 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)(uVar13 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar13,puVar2,uVar15);
          }
        }
        iVar10 = iVar10 + -1;
        iVar14 = iVar14 + 4;
      } while (iVar10 != 0);
      lVar8 = *(long *)this;
    }
    uVar9 = *(ulong *)(lVar8 + 0xa0);
    puVar3 = (undefined4 *)(uVar13 + 7 + (long)(int)(uVar12 >> 1));
    *puVar3 = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar12 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,puVar3,uVar9);
        uVar12 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,puVar3,uVar9);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}

