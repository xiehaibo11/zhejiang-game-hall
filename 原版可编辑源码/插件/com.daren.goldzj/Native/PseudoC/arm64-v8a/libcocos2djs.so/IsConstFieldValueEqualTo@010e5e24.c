
/* v8::internal::LookupIterator::IsConstFieldValueEqualTo(v8::internal::Object) const */

uint __thiscall
v8::internal::LookupIterator::IsConstFieldValueEqualTo(LookupIterator *this,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  double dVar12;
  Representation local_18 [8];
  
  lVar7 = **(long **)(this + 0x38);
  uVar4 = *(ulong *)(this + 0x18);
  uVar8 = *(uint *)(lVar7 + -1) + uVar4;
  uVar6 = *(int *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x17)) +
                  (*(long *)(this + 0x50) * 0xc00000000 + 0x1000000000 >> 0x20 | 3U)) >> 1;
  uVar2 = uVar6 >> 0x13 & 0x3ff;
  iVar1 = (uint)*(byte *)(uVar8 + 3) - (uint)*(byte *)(uVar8 + 4);
  if ((int)uVar2 < iVar1) {
    uVar9 = (ulong)*(byte *)(uVar8 + 4) << 0x1c;
    iVar10 = (uVar2 + *(byte *)(uVar8 + 4)) * 4;
  }
  else {
    iVar10 = (uVar2 - iVar1) * 4 + 8;
    uVar9 = 0x20000000;
  }
  uVar6 = uVar6 >> 6 & 7;
  local_18[0] = SUB41(uVar6,0);
  if (4 < uVar6) {
    uVar3 = Representation::Mnemonic(local_18);
    PrintF("%s\n",uVar3);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar8 = (ulong)iVar10;
  uVar11 = (ulong)((int)uVar2 < iVar1) << 0xd | (long)iVar1 << 0x10 | uVar8;
  uVar9 = uVar11 | uVar9;
  uVar6 = (uint)uVar11;
  iVar1 = (int)param_2 >> 1;
  if ((*(uint *)(this + 0x10) & 0x1c0) == 0x80) {
    if (((param_2 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x42)) {
      return 0;
    }
    if ((uVar6 >> 0xd & 1) == 0) {
      uVar11 = *(uint *)(lVar7 + 3) + uVar4;
      if (((uVar11 & 1) == 0) || ((int)uVar11 == *(int *)(uVar4 + 0x168))) {
        uVar11 = *(ulong *)(uVar4 + 0x3b8);
      }
      uVar6 = *(uint *)(((uVar8 & 0x1ffc) - (uVar9 >> 0x1a & 0x7c)) + uVar11 + 7);
    }
    else {
      uVar6 = *(uint *)(lVar7 + -1 + (uVar8 & 0x1fff));
    }
    dVar5 = *(double *)((uVar4 | 3) + (ulong)uVar6);
    if (dVar5 == -NAN) {
      return 1;
    }
    if ((param_2 & 1) == 0) {
      dVar12 = (double)iVar1;
    }
    else {
      dVar12 = *(double *)(param_2 + 3);
    }
    if (dVar12 != dVar5) {
      if (!NAN(dVar5)) {
        return 0;
      }
      goto LAB_010e60a4;
    }
    uVar6 = (uint)((ulong)dVar5 >> 0x20) ^ (uint)((ulong)dVar12 >> 0x20);
    goto LAB_010e6054;
  }
  if ((uVar6 >> 0xd & 1) == 0) {
    uVar11 = *(uint *)(lVar7 + 3) + uVar4;
    if (((uVar11 & 1) == 0) || ((int)uVar11 == *(int *)(uVar4 + 0x168))) {
      uVar11 = *(ulong *)(uVar4 + 0x3b8);
    }
    uVar6 = *(uint *)(((uVar8 & 0x1ffc) - (uVar9 >> 0x1a & 0x7c)) + uVar11 + 7);
  }
  else {
    uVar6 = *(uint *)(lVar7 + -1 + (uVar8 & 0x1fff));
  }
  uVar8 = uVar4 + uVar6;
  iVar10 = (int)uVar8;
  if ((((uVar8 & 1) != 0) && (iVar10 == *(int *)(uVar4 + 0x98))) || (iVar10 == (int)param_2)) {
    return 1;
  }
  if (((uVar8 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42)) {
    return 0;
  }
  if (((param_2 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x42)) {
    return 0;
  }
  if ((uVar8 & 1) == 0) {
    dVar5 = (double)(iVar10 >> 1);
    if ((param_2 & 1) != 0) goto LAB_010e5ff4;
LAB_010e608c:
    dVar12 = (double)iVar1;
    if (dVar5 != dVar12) goto LAB_010e609c;
  }
  else {
    dVar5 = *(double *)(uVar8 + 3);
    if ((param_2 & 1) == 0) goto LAB_010e608c;
LAB_010e5ff4:
    dVar12 = *(double *)(param_2 + 3);
    if (dVar5 != dVar12) {
LAB_010e609c:
      if (!NAN(dVar5)) {
        return 0;
      }
LAB_010e60a4:
      return (uint)NAN(dVar12);
    }
  }
  uVar6 = (uint)((ulong)dVar12 >> 0x20) ^ (uint)((ulong)dVar5 >> 0x20);
LAB_010e6054:
  return uVar6 >> 0x1f ^ 1;
}

