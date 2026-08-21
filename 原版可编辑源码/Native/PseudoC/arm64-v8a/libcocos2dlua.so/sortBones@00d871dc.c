
/* dragonBones::ArmatureData::sortBones() */

void __thiscall dragonBones::ArmatureData::sortBones(ArmatureData *this)

{
  long *plVar1;
  uint uVar2;
  void *__dest;
  void *__dest_00;
  ulong uVar3;
  long *plVar4;
  ArmatureData *pAVar5;
  ArmatureData *pAVar6;
  long lVar7;
  ArmatureData *pAVar8;
  long *__src;
  long *plVar9;
  size_t __n;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  __src = *(long **)(this + 0x60);
  uVar13 = *(long *)(this + 0x68) - (long)__src;
  if (uVar13 == 0) {
    return;
  }
  uVar11 = (long)uVar13 >> 3;
  if (uVar11 >> 0x3d == 0) {
                    /* try { // try from 00d87218 to 00e8721f has its CatchHandler @ 00d87f74 */
    __dest = operator_new(uVar13);
                    /* try { // try from 00d87220 to 00e8724b has its CatchHandler @ 00d86504 */
    if (0 < (long)uVar13) {
      memcpy(__dest,__src,uVar13);
    }
    uVar10 = 0;
                    /* try { // try from 00d8724c to 00e87257 has its CatchHandler @ 00d87f78 */
    *(long **)(this + 0x68) = __src;
    plVar9 = __src;
    uVar12 = 0;
    do {
      lVar14 = *(long *)((long)__dest + (ulong)uVar12 * 8);
      uVar2 = 0;
      if (uVar12 + 1 < uVar11) {
        uVar2 = uVar12 + 1;
      }
      plVar4 = __src;
      if ((__src != plVar9) && (*__src != lVar14)) {
        do {
          if (plVar9 + -1 == plVar4) goto LAB_00d872ac;
          plVar1 = plVar4 + 1;
                    /* try { // try from 00d87288 to 00e872ff has its CatchHandler @ 00d87fe0 */
          plVar4 = plVar4 + 1;
        } while (*plVar1 != lVar14);
      }
      if (plVar4 == plVar9) {
LAB_00d872ac:
        if (*(ArmatureData **)(this + 0xf0) != this + 0xf8) {
          pAVar5 = *(ArmatureData **)(this + 0xf0);
          do {
            if (*(long *)(*(long *)(pAVar5 + 0x38) + 0x38) == lVar14) {
              plVar4 = __src;
              if (__src != plVar9) {
                lVar7 = *__src;
                while (lVar7 != *(long *)(*(long *)(pAVar5 + 0x38) + 0x30)) {
                  if (plVar9 + -1 == plVar4) goto LAB_00d8747c;
                  plVar1 = plVar4 + 1;
                    /* try { // try from 00d87304 to 00e8730f has its CatchHandler @ 00d87f6c */
                  plVar4 = plVar4 + 1;
                  lVar7 = *plVar1;
                }
              }
                    /* try { // try from 00d87368 to 00e8738b has its CatchHandler @ 00d87fac */
              if (plVar4 == plVar9) goto LAB_00d8747c;
            }
                    /* try { // try from 00d8731c to 00e87323 has its CatchHandler @ 00d87f64 */
            pAVar6 = *(ArmatureData **)(pAVar5 + 8);
            if (*(ArmatureData **)(pAVar5 + 8) == (ArmatureData *)0x0) {
              pAVar6 = pAVar5 + 0x10;
              pAVar8 = *(ArmatureData **)pAVar6;
                    /* try { // try from 00d87340 to 00e87347 has its CatchHandler @ 00d87f88 */
              if (*(ArmatureData **)pAVar8 != pAVar5) {
                do {
                  lVar7 = *(long *)pAVar6;
                    /* try { // try from 00d87350 to 00e87367 has its CatchHandler @ 00d87fdc */
                  pAVar6 = (ArmatureData *)(lVar7 + 0x10);
                  pAVar8 = *(ArmatureData **)pAVar6;
                } while (*(long *)pAVar8 != lVar7);
              }
            }
            else {
              do {
                    /* try { // try from 00d87324 to 00e8732b has its CatchHandler @ 00d87f60 */
                pAVar8 = pAVar6;
                pAVar6 = *(ArmatureData **)pAVar8;
              } while (*(ArmatureData **)pAVar8 != (ArmatureData *)0x0);
            }
            pAVar5 = pAVar8;
          } while (pAVar8 != this + 0xf8);
        }
        lVar7 = *(long *)(lVar14 + 0x50);
        if (lVar7 != 0) {
          plVar4 = __src;
          if ((__src != plVar9) && (*__src != lVar7)) {
            do {
              if (plVar9 + -1 == plVar4) goto LAB_00d8747c;
              plVar1 = plVar4 + 1;
              plVar4 = plVar4 + 1;
            } while (*plVar1 != lVar7);
          }
          if (plVar4 == plVar9) goto LAB_00d8747c;
        }
        if (plVar9 == *(long **)(this + 0x70)) {
          __n = (long)plVar9 - (long)__src;
          uVar13 = ((long)__n >> 3) + 1;
          if (uVar13 >> 0x3d != 0) break;
          lVar7 = (long)*(long **)(this + 0x70) - (long)__src;
          if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
            uVar3 = lVar7 >> 2;
            if (uVar13 <= uVar3) {
              uVar13 = uVar3;
            }
            if (uVar13 != 0) {
              if (uVar13 >> 0x3d == 0) goto LAB_00d8742c;
              break;
            }
            __dest_00 = (void *)0x0;
          }
          else {
            uVar13 = 0x1fffffffffffffff;
LAB_00d8742c:
            __dest_00 = operator_new(uVar13 << 3);
          }
          plVar9 = (long *)((long)__dest_00 + ((long)__n >> 3) * 8);
          *plVar9 = lVar14;
          if (0 < (long)__n) {
            memcpy(__dest_00,__src,__n);
          }
          *(void **)(this + 0x60) = __dest_00;
          *(long **)(this + 0x68) = plVar9 + 1;
          *(void **)(this + 0x70) = (void *)((long)__dest_00 + uVar13 * 8);
          if (__src != (long *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *plVar9 = lVar14;
          *(long **)(this + 0x68) = plVar9 + 1;
        }
        uVar10 = uVar10 + 1;
      }
LAB_00d8747c:
      if (uVar11 <= uVar10) {
        operator_delete(__dest);
        return;
      }
      __src = *(long **)(this + 0x60);
      plVar9 = *(long **)(this + 0x68);
      uVar12 = uVar2;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

