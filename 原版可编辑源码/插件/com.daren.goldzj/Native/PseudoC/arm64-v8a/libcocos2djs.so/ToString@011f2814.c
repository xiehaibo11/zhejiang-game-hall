
/* v8::internal::ReplacementStringBuilder::ToString() */

long * __thiscall v8::internal::ReplacementStringBuilder::ToString(ReplacementStringBuilder *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if (*(int *)(this + 0x10) == 0) {
    plVar5 = (long *)(*(long *)this + -0x8788);
  }
  else if (this[0x24] == (ReplacementStringBuilder)0x0) {
    plVar5 = (long *)Factory::NewRawTwoByteString
                               ((Factory *)(*(long *)this + -0x8850),*(undefined4 *)(this + 0x20),0)
    ;
    if ((plVar5 != (long *)0x0) && (iVar3 = *(int *)(this + 0x10), 0 < iVar3)) {
      lVar9 = *plVar5;
      iVar12 = 0;
      uVar8 = **(ulong **)(this + 8);
      uVar10 = **(ulong **)(this + 0x18);
      iVar13 = 0;
      lVar2 = uVar8 + 7;
      do {
        uVar11 = *(uint *)(lVar2 + (iVar13 << 2));
        if ((uVar11 & 1) == 0) {
          if ((int)uVar11 < 2) {
            iVar13 = iVar13 + 1;
            uVar11 = -((int)uVar11 >> 1);
            uVar7 = *(int *)(lVar2 + iVar13 * 4) >> 1;
          }
          else {
            uVar7 = (uint)((int)uVar11 >> 1) >> 0xb;
            uVar11 = uVar11 >> 1 & 0x7ff;
          }
          lVar1 = (long)iVar12 << 1;
          uVar6 = uVar10;
          uVar4 = uVar7 + uVar11;
        }
        else {
          uVar6 = uVar8 & 0xffffffff00000000 | (ulong)uVar11;
          uVar11 = *(uint *)(uVar6 + 7);
          lVar1 = (long)iVar12 * 2;
          uVar7 = 0;
          uVar4 = uVar11;
        }
        String::WriteToFlat<unsigned_short>(uVar6,lVar9 + 0xb + lVar1,uVar7,uVar4);
        iVar13 = iVar13 + 1;
        iVar12 = uVar11 + iVar12;
      } while (iVar13 < iVar3);
    }
  }
  else {
    plVar5 = (long *)Factory::NewRawOneByteString();
    if ((plVar5 != (long *)0x0) && (iVar3 = *(int *)(this + 0x10), 0 < iVar3)) {
      lVar9 = *plVar5;
      iVar12 = 0;
      uVar8 = **(ulong **)(this + 8);
      uVar10 = **(ulong **)(this + 0x18);
      iVar13 = 0;
      lVar2 = uVar8 + 7;
      do {
        uVar11 = *(uint *)(lVar2 + (iVar13 << 2));
        if ((uVar11 & 1) == 0) {
          if ((int)uVar11 < 2) {
            iVar13 = iVar13 + 1;
            uVar11 = -((int)uVar11 >> 1);
            uVar7 = *(int *)(lVar2 + iVar13 * 4) >> 1;
          }
          else {
            uVar7 = (uint)((int)uVar11 >> 1) >> 0xb;
            uVar11 = uVar11 >> 1 & 0x7ff;
          }
          uVar6 = uVar10;
          uVar4 = uVar7 + uVar11;
        }
        else {
          uVar6 = uVar8 & 0xffffffff00000000 | (ulong)uVar11;
          uVar11 = *(uint *)(uVar6 + 7);
          uVar7 = 0;
          uVar4 = uVar11;
        }
        String::WriteToFlat<unsigned_char>(uVar6,lVar9 + 0xb + (long)iVar12,uVar7,uVar4);
        iVar13 = iVar13 + 1;
        iVar12 = uVar11 + iVar12;
      } while (iVar13 < iVar3);
    }
  }
  return plVar5;
}

