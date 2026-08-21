
/* v8::internal::IncrementalMarking::RetainMaps() */

void __thiscall v8::internal::IncrementalMarking::RetainMaps(IncrementalMarking *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar14 = *(long *)this;
  uVar16 = *(ulong *)(lVar14 + -0x78d8);
  uVar3 = *(uint *)(uVar16 + 7);
  bVar9 = FLAG_retain_maps_for_n_gc != 0;
  if (1 < (int)uVar3) {
    bVar5 = *(byte *)(lVar14 + 0xad4);
    iVar6 = *(int *)(lVar14 + 0xe4);
    uVar22 = uVar16 & 0xffffffff00000000;
    uVar21 = 0;
    lVar14 = uVar16 + 0xb;
    do {
      uVar11 = *(uint *)(lVar14 + (-(uVar21 >> 0x1d & 1) & 0xffffffff00000000 |
                                  (uVar21 & 0x3fffffff) << 2));
      uVar16 = (ulong)uVar11;
      if ((uVar11 == 3) || ((uVar16 & 3) != 3)) goto LAB_00fa6cc8;
      uVar23 = (long)((int)uVar21 << 2) | 4;
      iVar12 = *(int *)(lVar14 + uVar23);
      iVar2 = iVar12 >> 1;
      if (((bVar5 & 1) == 0 && bVar9) && (long)iVar6 <= (long)uVar21) {
        uVar24 = uVar16 & 0xfffffffffffffffd | uVar22;
        uVar16 = uVar16 & 0xfffffffffffc0000 | uVar22;
        uVar17 = uVar24 - uVar16 >> 7 & 0x1ffffff;
        uVar11 = (uint)(1L << (uVar24 - uVar16 >> 2 & 0x1f));
        if ((*(uint *)(*(long *)(uVar16 + 0x10) + uVar17 * 4) & uVar11) != 0) goto LAB_00fa6d44;
        if (iVar2 != 0) {
          uVar4 = *(uint *)(uVar24 + 0x13);
          while( true ) {
            uVar19 = uVar22 | uVar4;
            if (((uVar4 & 1) == 0) ||
               (*(short *)((uVar22 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0xa2)) break;
            uVar4 = *(uint *)(uVar19 + 0x13);
          }
          if (((uVar4 & 1) != 0) &&
             (uVar20 = uVar22 | (ulong)uVar4 & 0xfffffffffffc0000, uVar19 = uVar19 - uVar20,
             (*(uint *)(*(long *)(uVar20 + 0x10) + (uVar19 >> 7 & 0x1ffffff) * 4) >>
              (ulong)((uint)(uVar19 >> 2) & 0x1f) & 1) != 0)) {
            puVar1 = (uint *)(*(long *)(uVar16 + 0x10) + uVar17 * 4);
            while (uVar4 = *puVar1, (uVar11 & (uVar4 ^ 0xffffffff)) != 0) {
              while (*puVar1 == uVar4) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar8) {
                  *puVar1 = uVar4 | uVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') {
                  puVar15 = *(undefined8 **)(this + 0x10);
                  puVar18 = (undefined8 *)*puVar15;
                  lVar13 = puVar18[1];
                  if (lVar13 != 0x40) {
                    puVar18[1] = lVar13 + 1;
                    puVar18[lVar13 + 2] = uVar24;
                    if (iVar12 < 2) goto LAB_00fa6cc8;
                    goto LAB_00fa6ecc;
                  }
                  base::Mutex::Lock((Mutex *)(puVar15 + 0x50));
                  *puVar18 = puVar15[0x55];
                  puVar15[0x55] = puVar18;
                  base::Mutex::Unlock((Mutex *)(puVar15 + 0x50));
                  pvVar10 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar10 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar10 + 200) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar10 + 0xf8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar10 + 400) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar10 + 0x208) = 0;
                  *puVar15 = pvVar10;
                  *(undefined8 *)((long)pvVar10 + 8) = 1;
                  *(ulong *)((long)pvVar10 + 0x10) = uVar24;
                  goto LAB_00fa6ec4;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fa6ec4:
        if (1 < iVar12) {
LAB_00fa6ecc:
          uVar11 = *(uint *)(uVar24 + 0xf);
          if (((uVar11 & 1) == 0) ||
             (uVar17 = uVar22 | (ulong)uVar11 & 0xfffffffffffc0000, uVar16 = uVar11 - uVar17,
             iVar12 = iVar2 - (uint)((*(uint *)(*(long *)(uVar17 + 0x10) +
                                               (uVar16 >> 7 & 0x1ffffff) * 4) >>
                                      (ulong)((uint)(uVar16 >> 2) & 0x1f) & 1) == 0),
             iVar12 == iVar2)) goto LAB_00fa6cc8;
          goto LAB_00fa6d50;
        }
      }
      else {
LAB_00fa6d44:
        iVar12 = FLAG_retain_maps_for_n_gc;
        if (FLAG_retain_maps_for_n_gc != iVar2) {
LAB_00fa6d50:
          *(int *)(uVar23 + lVar14) = iVar12 << 1;
        }
      }
LAB_00fa6cc8:
      uVar21 = uVar21 + 2;
    } while (uVar21 < uVar3 >> 1);
  }
  return;
}

