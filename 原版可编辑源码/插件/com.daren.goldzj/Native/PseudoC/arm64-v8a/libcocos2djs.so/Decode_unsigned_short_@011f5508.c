
/* void v8::internal::Utf8Decoder::Decode<unsigned short>(unsigned short*,
   v8::internal::Vector<unsigned char const> const&) */

void __thiscall
v8::internal::Utf8Decoder::Decode<unsigned_short>(Utf8Decoder *this,ushort *param_1,Vector *param_2)

{
  byte bVar1;
  uint uVar2;
  State SVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar9;
  uint uVar10;
  State SVar11;
  ushort *puVar12;
  State local_14 [4];
  byte *pbVar8;
  
  CopyChars<unsigned_char,unsigned_short>(param_1,*(uchar **)param_2,(long)*(int *)(this + 4));
  lVar5 = (long)*(int *)(this + 4);
  local_14[0] = (State)0xc;
  iVar4 = *(int *)(param_2 + 8);
  puVar12 = param_1 + lVar5;
  if (lVar5 < iVar4) {
    lVar6 = *(long *)param_2;
    uVar10 = 0;
    SVar11 = (State)0xc;
    pbVar8 = (byte *)(lVar6 + lVar5);
    do {
      pbVar7 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar9 = (uint)bVar1;
      if ((SVar11 == (State)0xc) && (-1 < (char)bVar1)) {
LAB_011f5598:
        *puVar12 = (ushort)uVar9;
        puVar12 = puVar12 + 1;
        SVar3 = (State)0xc;
      }
      else {
        local_14[0] = *(State *)(&DAT_019e26d6 +
                                (ulong)(byte)(&DAT_019e25d6)[bVar1] + (ulong)(byte)SVar11);
        uVar9 = 0x7fU >> (ulong)((byte)(&DAT_019e25d6)[bVar1] >> 1 & 0x1f) & uVar9 | uVar10 << 6;
        if (local_14[0] == (State)0xc) {
          if (uVar9 == 0xfffffffc) {
            uVar10 = 0;
            SVar3 = (State)0xc;
          }
          else {
            uVar2 = uVar10 & 0x3ffffff;
            uVar10 = 0;
            if (uVar2 >> 10 == 0) goto LAB_011f5598;
            *puVar12 = (ushort)(uVar9 + 0xf0000 >> 10) & 0x3ff | 0xd800;
            puVar12[1] = (ushort)uVar9 & 0x3ff | 0xdc00;
            puVar12 = puVar12 + 2;
            uVar10 = 0;
            SVar3 = (State)0xc;
          }
        }
        else {
          uVar10 = uVar9;
          SVar3 = local_14[0];
          if (local_14[0] == (State)0x0) {
            uVar10 = 0;
            local_14[0] = (State)0xc;
            if (SVar11 != (State)0xc) {
              pbVar7 = pbVar8;
            }
            uVar9 = 0xfffd;
            goto LAB_011f5598;
          }
        }
      }
      SVar11 = SVar3;
      pbVar8 = pbVar7;
    } while (pbVar7 < (byte *)(lVar6 + iVar4));
  }
  iVar4 = unibrow::Utf8::ValueOfIncrementalFinish(local_14);
  if (iVar4 != 0) {
    *puVar12 = (ushort)iVar4;
  }
  return;
}

