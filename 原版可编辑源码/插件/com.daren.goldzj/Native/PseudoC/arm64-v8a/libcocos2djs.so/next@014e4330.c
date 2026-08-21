
/* v8::internal::RelocIterator::next() */

void __thiscall v8::internal::RelocIterator::next(RelocIterator *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  RelocIterator RVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar6 = *(byte **)this;
joined_r0x014e4338:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (pbVar6 <= *(byte **)(this + 8)) {
              this[0x38] = (RelocIterator)0x1;
              return;
            }
            pbVar5 = pbVar6 + -1;
            *(byte **)this = pbVar5;
            bVar1 = pbVar6[-1];
            if ((bVar1 & 3) != 2) break;
            *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)(bVar1 >> 2);
            pbVar6 = pbVar5;
            if (((byte)this[0x3c] >> 5 & 1) != 0) {
              this[0x18] = (RelocIterator)0x5;
              return;
            }
          }
          if ((bVar1 & 3) != 1) break;
          *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)(bVar1 >> 2);
          pbVar6 = pbVar5;
          if (((byte)this[0x3c] & 1) != 0) {
            this[0x18] = (RelocIterator)0x0;
            return;
          }
        }
        if ((bVar1 & 3) != 0) break;
        *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)(bVar1 >> 2);
        pbVar6 = pbVar5;
        if (((byte)this[0x3c] >> 3 & 1) != 0) {
          this[0x18] = (RelocIterator)0x3;
          return;
        }
      }
      RVar4 = (RelocIterator)(bVar1 >> 2);
      uVar7 = (uint)(byte)RVar4;
      if (uVar7 != 0x11) break;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      pbVar5 = pbVar6 + -2;
      do {
        pbVar6 = pbVar5;
        *(byte **)this = pbVar6;
        uVar8 = (uint)(*pbVar6 >> 1) << (ulong)(uVar9 & 0x1f) | uVar8;
        if (3 < uVar7) break;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 7;
        pbVar5 = pbVar6 + -1;
      } while ((*pbVar6 & 1) == 0);
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)(uVar8 << 6);
    }
    *(byte **)this = pbVar6 + -2;
    bVar1 = bVar1 >> 2;
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)pbVar6[-2];
    if ((1 < bVar1 - 0xb) && (bVar1 != 0x10)) {
      if (bVar1 == 0xf) {
        pbVar6 = pbVar6 + -3;
        *(byte **)this = pbVar6;
        if ((*(uint *)(this + 0x3c) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
          this[0x18] = RVar4;
          *(ulong *)(this + 0x20) = (ulong)*pbVar6;
          return;
        }
        goto joined_r0x014e4338;
      }
      if (1 < (uVar7 - 0xd & 0xff)) {
        pbVar6 = pbVar6 + -2;
        if ((*(uint *)(this + 0x3c) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
          this[0x18] = RVar4;
          return;
        }
        goto joined_r0x014e4338;
      }
    }
    if ((*(uint *)(this + 0x3c) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
      this[0x18] = RVar4;
      *(byte **)this = pbVar6 + -3;
      bVar1 = pbVar6[-3];
      *(byte **)this = pbVar6 + -4;
      bVar2 = pbVar6[-4];
      *(byte **)this = pbVar6 + -5;
      bVar3 = pbVar6[-5];
      *(byte **)this = pbVar6 + -6;
      *(long *)(this + 0x20) = (long)CONCAT13(pbVar6[-6],CONCAT12(bVar3,CONCAT11(bVar2,bVar1)));
      return;
    }
    *(byte **)this = pbVar6 + -6;
    pbVar6 = pbVar6 + -6;
  } while( true );
}

