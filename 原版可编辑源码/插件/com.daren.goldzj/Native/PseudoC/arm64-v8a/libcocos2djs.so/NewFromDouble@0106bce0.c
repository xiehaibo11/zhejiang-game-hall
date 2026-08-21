
/* v8::internal::MutableBigInt::NewFromDouble(v8::internal::Isolate*, double) */

long * v8::internal::MutableBigInt::NewFromDouble(Isolate *param_1,double param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  
  if (param_2 == 0.0) {
    plVar5 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
    *(undefined4 *)(*plVar5 + 3) = 0;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    uVar6 = (uint)((ulong)param_2 >> 0x34) & 0x7ff;
    uVar2 = uVar6 - 0x3ff;
    uVar6 = uVar6 - 0x3c0;
    if (-1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    iVar11 = (int)uVar6 >> 6;
    plVar5 = (long *)Factory::NewBigInt((Factory *)param_1,iVar11 + 1,0);
    iVar3 = uVar2 - (uVar6 & 0xffffffc0);
    uVar12 = (ulong)param_2 & 0xfffffffffffff | 0x10000000000000;
    *(uint *)(*plVar5 + 3) = (uint)(param_2 < 0.0) | (iVar11 + 1) * 2;
    if (iVar3 < 0x34) {
      uVar7 = (ulong)(0x34 - iVar3);
      uVar9 = uVar12 >> (uVar7 & 0x3f);
      lVar8 = uVar12 << ((ulong)(iVar3 + 0xc) & 0x3f);
    }
    else {
      lVar8 = 0;
      uVar7 = 0;
      uVar9 = uVar12 << ((ulong)(iVar3 - 0x34) & 0x3f);
    }
    *(ulong *)(*plVar5 + ((long)(iVar11 * 8) | 7U)) = uVar9;
    if (0x3f < (int)uVar2) {
      lVar10 = (long)iVar11;
      iVar11 = iVar11 * 8 + -1;
      do {
        uVar6 = (uint)uVar7;
        lVar10 = lVar10 + -1;
        lVar1 = lVar8;
        if ((int)uVar6 < 1) {
          lVar1 = 0;
        }
        uVar2 = uVar6 - 0x40;
        lVar4 = 0;
        if ((int)uVar6 < 1) {
          uVar2 = uVar6;
          lVar4 = lVar8;
        }
        lVar8 = lVar4;
        uVar7 = (ulong)uVar2;
        *(long *)(*plVar5 + (long)iVar11) = lVar1;
        iVar11 = iVar11 + -8;
      } while (0 < lVar10);
    }
  }
  Canonicalize(*plVar5);
  return plVar5;
}

