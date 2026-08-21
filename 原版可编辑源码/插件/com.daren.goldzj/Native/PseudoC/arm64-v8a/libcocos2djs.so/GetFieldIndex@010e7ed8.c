
/* v8::internal::LookupIterator::GetFieldIndex() const */

ulong __thiscall v8::internal::LookupIterator::GetFieldIndex(LookupIterator *this)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  Representation local_18 [8];
  
  uVar1 = *(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1);
  uVar2 = *(int *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x17)) +
                  (*(long *)(this + 0x50) * 0xc00000000 + 0x1000000000 >> 0x20 | 3U)) >> 1;
  uVar4 = uVar2 >> 0x13 & 0x3ff;
  iVar3 = (uint)*(byte *)(uVar1 + 3) - (uint)*(byte *)(uVar1 + 4);
  if ((int)uVar4 < iVar3) {
    uVar6 = (ulong)*(byte *)(uVar1 + 4) << 0x1c;
    iVar7 = (uVar4 + *(byte *)(uVar1 + 4)) * 4;
  }
  else {
    iVar7 = (uVar4 - iVar3) * 4 + 8;
    uVar6 = 0x20000000;
  }
  uVar2 = uVar2 >> 6 & 7;
  local_18[0] = SUB41(uVar2,0);
  if (uVar2 < 5) {
    return (ulong)((int)uVar4 < iVar3) << 0xd | (long)iVar3 << 0x10 | (long)iVar7 | uVar6 |
           *(ulong *)(&DAT_019d78d8 + (ulong)uVar2 * 8);
  }
  uVar5 = Representation::Mnemonic(local_18);
  PrintF("%s\n",uVar5);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

