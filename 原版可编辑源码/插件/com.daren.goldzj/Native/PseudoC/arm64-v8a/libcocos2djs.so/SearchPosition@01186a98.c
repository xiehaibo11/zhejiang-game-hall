
/* v8::internal::Utf8ExternalStreamingStream::SearchPosition(unsigned long) */

void __thiscall
v8::internal::Utf8ExternalStreamingStream::SearchPosition
          (Utf8ExternalStreamingStream *this,ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(ulong *)(this + 0x460) != param_1) {
    lVar4 = *(long *)(this + 0x438);
    lVar5 = *(long *)(this + 0x440);
    if (lVar4 == lVar5) {
      FetchChunk(this);
      lVar5 = *(long *)(this + 0x440);
      lVar4 = *(long *)(this + 0x438);
    }
    uVar6 = (lVar5 - lVar4 >> 3) * -0x3333333333333333;
    puVar1 = (ulong *)(lVar4 + (lVar5 - lVar4) + 0x18);
    uVar8 = uVar6;
    do {
      uVar9 = uVar8;
      puVar7 = puVar1;
      uVar8 = uVar9 - 1;
      if (uVar8 == 0) break;
      puVar1 = puVar7 + -5;
    } while (param_1 < puVar7[-5]);
    if (puVar7[-7] == 0) {
      uVar6 = puVar7[-4];
      uVar10 = puVar7[-5];
      uVar9 = puVar7[-6];
      *(ulong *)(this + 0x450) = uVar8;
      *(ulong *)(this + 0x468) = uVar6;
      *(ulong *)(this + 0x460) = uVar10;
      *(ulong *)(this + 0x458) = uVar9;
    }
    else {
      if (uVar9 < uVar6) {
        if ((int)puVar7[-4] == 0) {
          uVar6 = puVar7[-6];
          uVar9 = puVar7[-5];
          if (puVar7[-1] - uVar6 == *puVar7 - uVar9) {
            *(ulong *)(this + 0x450) = uVar8;
            *(ulong *)(this + 0x460) = param_1;
            *(undefined4 *)(this + 0x468) = 0;
            *(ulong *)(this + 0x458) = (uVar6 + param_1) - uVar9;
            this[0x46c] = (Utf8ExternalStreamingStream)0xc;
            return;
          }
        }
        uVar6 = puVar7[-4];
        uVar10 = puVar7[-5];
        uVar9 = puVar7[-6];
        *(ulong *)(this + 0x450) = uVar8;
        *(ulong *)(this + 0x468) = uVar6;
        *(ulong *)(this + 0x460) = uVar10;
        *(ulong *)(this + 0x458) = uVar9;
        SkipToPosition(this,param_1);
        return;
      }
      uVar6 = puVar7[-4];
      uVar10 = puVar7[-5];
      uVar9 = puVar7[-6];
      *(ulong *)(this + 0x450) = uVar8;
      *(ulong *)(this + 0x468) = uVar6;
      *(ulong *)(this + 0x460) = uVar10;
      *(ulong *)(this + 0x458) = uVar9;
      uVar8 = SkipToPosition(this,param_1);
      if ((uVar8 & 1) == 0) {
        do {
          uVar2 = FetchChunk(this);
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar3 = SkipToPosition(this,param_1);
        } while ((uVar2 & (uVar3 ^ 0xffffffff) & 1) != 0);
      }
    }
  }
  return;
}

