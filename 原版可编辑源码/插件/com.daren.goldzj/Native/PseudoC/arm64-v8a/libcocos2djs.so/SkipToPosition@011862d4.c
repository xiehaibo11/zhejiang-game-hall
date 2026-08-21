
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Utf8ExternalStreamingStream::SkipToPosition(unsigned long) */

bool __thiscall
v8::internal::Utf8ExternalStreamingStream::SkipToPosition
          (Utf8ExternalStreamingStream *this,ulong param_1)

{
  byte *pbVar1;
  long lVar2;
  Utf8ExternalStreamingStream UVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  Utf8ExternalStreamingStream UVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  uVar13 = *(ulong *)(this + 0x460);
  if (uVar13 == param_1) {
    return true;
  }
  lVar7 = *(long *)(this + 0x450);
  plVar9 = (long *)(*(long *)(this + 0x438) + lVar7 * 0x28);
  lVar2 = plVar9[2];
  lVar8 = *plVar9;
  UVar12 = *(Utf8ExternalStreamingStream *)((long)plVar9 + 0x24);
  uVar11 = *(uint *)(plVar9 + 4);
  lVar6 = *(ulong *)(this + 0x458) - lVar2;
  pbVar15 = (byte *)(lVar8 + lVar6);
  pbVar1 = (byte *)(lVar8 + plVar9[1]);
  if ((uVar13 == 0) && (*(ulong *)(this + 0x458) < 3)) {
    if (lVar6 < plVar9[1]) {
      do {
        pbVar14 = pbVar15;
        bVar4 = *pbVar14;
        uVar10 = (uint)bVar4;
        if ((UVar12 == (Utf8ExternalStreamingStream)0xc) && (-1 < (char)bVar4)) {
LAB_01186430:
          UVar12 = (Utf8ExternalStreamingStream)0xc;
          UVar3 = UVar12;
          if (uVar10 != 0xfffffffc) {
            if (uVar10 != 0xfeff) {
              uVar13 = 1;
              if (uVar10 >> 0x10 != 0) {
                uVar13 = 2;
              }
              pbVar15 = pbVar14 + 1;
              UVar12 = (Utf8ExternalStreamingStream)0xc;
              goto joined_r0x011864e4;
            }
            break;
          }
        }
        else {
          UVar3 = *(Utf8ExternalStreamingStream *)
                   (&DAT_019db8e6 + (ulong)(byte)(&DAT_019db7e6)[bVar4] + (ulong)(byte)UVar12);
          uVar10 = 0x7fU >> (ulong)((byte)(&DAT_019db7e6)[bVar4] >> 1 & 0x1f) & uVar10 | uVar11 << 6
          ;
          if (UVar3 == (Utf8ExternalStreamingStream)0xc) {
            uVar11 = 0;
            goto LAB_01186430;
          }
          uVar11 = uVar10;
          if (UVar3 == (Utf8ExternalStreamingStream)0x0) {
            if (UVar12 == (Utf8ExternalStreamingStream)0xc) {
              pbVar14 = pbVar14 + 1;
            }
            uVar13 = 1;
            pbVar15 = pbVar14;
            uVar11 = 0;
            UVar12 = (Utf8ExternalStreamingStream)0xc;
            goto joined_r0x011864e4;
          }
        }
        UVar12 = UVar3;
        pbVar15 = pbVar14 + 1;
      } while (pbVar14 + 1 < pbVar1);
      uVar13 = 0;
      pbVar15 = pbVar14 + 1;
    }
    else {
      uVar13 = 0;
    }
  }
joined_r0x011864e4:
  do {
    UVar3 = UVar12;
    uVar10 = uVar11;
    pbVar14 = pbVar15;
    if ((pbVar1 <= pbVar14) || (param_1 <= uVar13)) {
      if (pbVar14 == pbVar1) {
        lVar7 = lVar7 + 1;
      }
      *(ulong *)(this + 0x460) = uVar13;
      *(uint *)(this + 0x468) = uVar10;
      *(byte **)(this + 0x458) = pbVar14 + (lVar2 - lVar8);
      this[0x46c] = UVar3;
      *(long *)(this + 0x450) = lVar7;
      return uVar13 == param_1;
    }
    pbVar15 = pbVar14 + 1;
    bVar4 = *pbVar14;
    if ((UVar3 == (Utf8ExternalStreamingStream)0xc) && (-1 < (char)bVar4)) {
LAB_01186368:
      uVar13 = uVar13 + 1;
      goto LAB_0118636c;
    }
    UVar12 = *(Utf8ExternalStreamingStream *)
              (&DAT_019db8e6 + (ulong)(byte)(&DAT_019db7e6)[bVar4] + (ulong)(byte)UVar3);
    uVar5 = 0x7fU >> (ulong)((byte)(&DAT_019db7e6)[bVar4] >> 1 & 0x1f) & (uint)bVar4 | uVar10 << 6;
    if (UVar12 == (Utf8ExternalStreamingStream)0xc) break;
    uVar11 = uVar5;
    if (UVar12 == (Utf8ExternalStreamingStream)0x0) {
      uVar10 = 0;
      if (UVar3 != (Utf8ExternalStreamingStream)0xc) {
        pbVar15 = pbVar14;
      }
      goto LAB_01186368;
    }
  } while( true );
  lVar6 = 1;
  if ((uVar10 & 0x3ffffff) >> 10 != 0) {
    lVar6 = 2;
  }
  uVar10 = 0;
  uVar11 = 0;
  if (uVar5 != 0xfffffffc) {
    uVar13 = lVar6 + uVar13;
LAB_0118636c:
    uVar11 = uVar10;
    UVar12 = (Utf8ExternalStreamingStream)0xc;
  }
  goto joined_r0x011864e4;
}

