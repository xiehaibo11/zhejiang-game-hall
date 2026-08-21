
/* v8::internal::Utf8ExternalStreamingStream::FillBufferFromCurrentChunk() */

void __thiscall
v8::internal::Utf8ExternalStreamingStream::FillBufferFromCurrentChunk
          (Utf8ExternalStreamingStream *this)

{
  ulong *puVar1;
  Utf8ExternalStreamingStream UVar2;
  byte bVar3;
  Utf8ExternalStreamingStream *pUVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  Utf8ExternalStreamingStream UVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  Utf8ExternalStreamingStream *pUVar17;
  Utf8ExternalStreamingStream *pUVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  State local_64 [4];
  
  local_64[0] = *(State *)(this + 0x46c);
  plVar19 = (long *)(*(long *)(this + 0x438) + *(long *)(this + 0x450) * 0x28);
  lVar12 = plVar19[1];
  lVar14 = *(long *)(this + 0x18) - *(long *)(this + 8);
  pUVar18 = this + lVar14 + 0x32;
  if (lVar12 == 0) {
    iVar6 = unibrow::Utf8::ValueOfIncrementalFinish(local_64);
    if (iVar6 != 0) {
      *(ushort *)pUVar18 = (ushort)iVar6;
      *(undefined4 *)(this + 0x468) = 0;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 2;
      *(long *)(this + 0x460) = *(long *)(this + 0x460) + 1;
      this[0x46c] = (Utf8ExternalStreamingStream)local_64[0];
    }
  }
  else {
    uVar21 = *(uint *)(this + 0x468);
    plVar20 = (long *)(*(long *)(this + 0x438) + *(long *)(this + 0x450) * 0x28 + 0x10);
    lVar13 = *(ulong *)(this + 0x458) - *plVar20;
    puVar9 = (ulong *)(*plVar19 + lVar13);
    puVar1 = (ulong *)(*plVar19 + lVar12);
    UVar10 = (Utf8ExternalStreamingStream)local_64[0];
    if (((*(ulong *)(this + 0x458) < 3) && (*(long *)(this + 0x460) == 0)) &&
       (puVar15 = puVar9, lVar13 < lVar12)) {
      do {
        puVar9 = puVar15;
        bVar3 = (byte)*puVar9;
        uVar22 = (uint)bVar3;
        if ((local_64[0] == (State)0xc) && (-1 < (char)bVar3)) {
LAB_011868f0:
          puVar9 = (ulong *)((long)puVar9 + 1);
          lVar14 = lVar14 + 0x34;
          *(ushort *)pUVar18 = (ushort)uVar22;
joined_r0x01186900:
          pUVar18 = this + lVar14;
          UVar10 = (Utf8ExternalStreamingStream)0xc;
          goto joined_r0x01186900;
        }
        UVar2 = *(Utf8ExternalStreamingStream *)
                 (&DAT_019db8e6 + (ulong)(byte)(&DAT_019db7e6)[bVar3] + (ulong)(byte)local_64[0]);
        uVar22 = 0x7fU >> (ulong)((byte)(&DAT_019db7e6)[bVar3] >> 1 & 0x1f) & uVar22 | uVar21 << 6;
        if (UVar2 == (Utf8ExternalStreamingStream)0xc) {
          if (uVar22 < 0xfeff) {
            uVar21 = 0;
            local_64[0] = (State)UVar2;
            goto LAB_011868f0;
          }
          if (uVar22 != 0xfffffffc) {
            if (uVar22 != 0xfeff) {
              puVar9 = (ulong *)((long)puVar9 + 1);
              local_64[0] = (State)UVar2;
              if ((uVar21 & 0x3ffffff) >> 10 == 0) goto LAB_01186920;
              *(ushort *)pUVar18 = (ushort)(uVar22 + 0xf0000 >> 10) & 0x3ff | 0xd800;
              *(ushort *)(this + lVar14 + 0x34) = (ushort)uVar22 & 0x3ff | 0xdc00;
              lVar14 = lVar14 + 0x36;
              goto LAB_01186924;
            }
            uVar21 = 0;
            UVar10 = (Utf8ExternalStreamingStream)0xc;
            break;
          }
          uVar21 = 0;
        }
        else {
          uVar21 = uVar22;
          if (UVar2 == (Utf8ExternalStreamingStream)0x0) {
            bVar5 = local_64[0] == (State)0xc;
            local_64[0] = (State)0xc;
            if (bVar5) {
              puVar9 = (ulong *)((long)puVar9 + 1);
            }
            uVar22 = 0xfffd;
LAB_01186920:
            lVar14 = lVar14 + 0x34;
            *(ushort *)pUVar18 = (ushort)uVar22;
LAB_01186924:
            uVar21 = 0;
            goto joined_r0x01186900;
          }
        }
        puVar15 = (ulong *)((long)puVar9 + 1);
        local_64[0] = (State)UVar2;
        UVar10 = UVar2;
      } while ((ulong *)((long)puVar9 + 1) < puVar1);
      puVar9 = (ulong *)((long)puVar9 + 1);
      local_64[0] = (State)UVar2;
    }
joined_r0x01186900:
    if (puVar9 < puVar1) {
      lVar14 = *(long *)(this + 8);
      do {
        pUVar4 = pUVar18 + 2;
        if ((Utf8ExternalStreamingStream *)(lVar14 + 0x400U) <= pUVar4) break;
        puVar15 = (ulong *)((long)puVar9 + 1);
        bVar3 = (byte)*puVar9;
        uVar22 = (uint)bVar3;
        if ((UVar10 == (Utf8ExternalStreamingStream)0xc) && (-1 < (char)bVar3)) {
LAB_01186614:
          *(ushort *)pUVar18 = (ushort)uVar22;
          pUVar17 = pUVar4;
LAB_01186618:
          uVar11 = (long)(lVar14 + 0x400U) - (long)pUVar17 >> 1;
          uVar16 = (long)puVar1 - (long)puVar15;
          if (uVar11 <= (ulong)((long)puVar1 - (long)puVar15)) {
            uVar16 = uVar11;
          }
          puVar9 = (ulong *)((long)puVar15 + (long)(int)(uint)uVar16);
          puVar8 = puVar15;
          if ((uint)uVar16 < 8) {
LAB_01186694:
            puVar7 = puVar8;
            if (puVar8 < puVar9) {
              do {
                puVar7 = puVar8;
                if ((char)(byte)*puVar8 < '\0') break;
                puVar8 = (ulong *)((long)puVar8 + 1);
                puVar7 = puVar9;
              } while (puVar9 != puVar8);
            }
          }
          else if (((ulong)puVar15 & 7) == 0) {
LAB_01186670:
            do {
              puVar7 = puVar8;
              puVar8 = puVar7;
              if (puVar9 < puVar7 + 1) goto LAB_01186694;
              puVar8 = puVar7 + 1;
            } while ((*puVar7 & 0x8080808080808080) == 0);
          }
          else {
            bVar3 = (byte)*puVar15;
            puVar7 = puVar15;
            while (-1 < (char)bVar3) {
              puVar7 = (ulong *)((long)puVar7 + 1);
              puVar8 = puVar7;
              if (((ulong)puVar7 & 7) == 0) goto LAB_01186670;
              bVar3 = *(byte *)puVar7;
            }
          }
          uVar16 = (ulong)(int)((long)puVar7 - (long)puVar15);
          CopyChars<unsigned_char,unsigned_short>((ushort *)pUVar17,(uchar *)puVar15,uVar16);
          pUVar18 = pUVar17 + (((long)puVar7 - (long)puVar15 << 0x20) >> 0x1f);
          puVar15 = (ulong *)((long)puVar15 + uVar16);
        }
        else {
          local_64[0] = *(State *)(&DAT_019db8e6 +
                                  (ulong)(byte)(&DAT_019db7e6)[bVar3] + (ulong)(byte)UVar10);
          uVar22 = 0x7fU >> (ulong)((byte)(&DAT_019db7e6)[bVar3] >> 1 & 0x1f) & uVar22 | uVar21 << 6
          ;
          if (local_64[0] == (State)0xc) {
            if ((uVar21 & 0x3ffffff) >> 10 == 0) {
              uVar21 = 0;
              goto LAB_01186614;
            }
            if (uVar22 == 0xfffffffc) {
              uVar21 = 0;
              goto joined_r0x01186774;
            }
            pUVar17 = pUVar18 + 4;
            *(ushort *)pUVar18 = (ushort)(uVar22 + 0xf0000 >> 10) & 0x3ff | 0xd800;
            uVar21 = 0;
            *(ushort *)pUVar4 = (ushort)uVar22 & 0x3ff | 0xdc00;
            goto LAB_01186618;
          }
          uVar21 = uVar22;
          if (local_64[0] == (State)0x0) {
            local_64[0] = (State)0xc;
            uVar22 = 0xfffd;
            uVar21 = 0;
            if (UVar10 != (Utf8ExternalStreamingStream)0xc) {
              puVar15 = puVar9;
            }
            goto LAB_01186614;
          }
        }
joined_r0x01186774:
        UVar10 = (Utf8ExternalStreamingStream)local_64[0];
        puVar9 = puVar15;
        local_64[0] = (State)UVar10;
      } while (puVar9 < puVar1);
    }
    lVar12 = *plVar20;
    lVar13 = *plVar19;
    this[0x46c] = UVar10;
    lVar14 = *(long *)(this + 0x450);
    if (puVar1 == puVar9) {
      lVar14 = lVar14 + 1;
    }
    *(uint *)(this + 0x468) = uVar21;
    *(long *)(this + 0x450) = lVar14;
    *(byte **)(this + 0x458) = (byte *)((long)puVar9 + (lVar12 - lVar13));
    *(long *)(this + 0x460) =
         *(long *)(this + 0x460) + ((long)pUVar18 - *(long *)(this + 0x18) >> 1);
    *(Utf8ExternalStreamingStream **)(this + 0x18) = pUVar18;
  }
  return;
}

