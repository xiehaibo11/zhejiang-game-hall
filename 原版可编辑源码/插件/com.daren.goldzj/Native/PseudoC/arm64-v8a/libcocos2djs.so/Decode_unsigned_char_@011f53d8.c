
/* void v8::internal::Utf8Decoder::Decode<unsigned char>(unsigned char*,
   v8::internal::Vector<unsigned char const> const&) */

void __thiscall
v8::internal::Utf8Decoder::Decode<unsigned_char>(Utf8Decoder *this,uchar *param_1,Vector *param_2)

{
  byte bVar1;
  State SVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar10;
  State SVar11;
  uchar *puVar12;
  State local_14 [4];
  byte *pbVar9;
  
  CopyChars<unsigned_char,unsigned_char>(param_1,*(uchar **)param_2,(long)*(int *)(this + 4));
  lVar4 = (long)*(int *)(this + 4);
  local_14[0] = (State)0xc;
  iVar3 = *(int *)(param_2 + 8);
  puVar12 = param_1 + lVar4;
  if (lVar4 < iVar3) {
    lVar7 = *(long *)param_2;
    uVar5 = 0;
    SVar11 = (State)0xc;
    pbVar9 = (byte *)(lVar7 + lVar4);
    do {
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar10 = (uint)bVar1;
      if ((SVar11 == (State)0xc) && (-1 < (char)bVar1)) {
LAB_011f5468:
        *puVar12 = (uchar)uVar10;
        puVar12 = puVar12 + 1;
        uVar6 = uVar5;
LAB_011f546c:
        uVar5 = uVar6;
        SVar2 = (State)0xc;
      }
      else {
        local_14[0] = *(State *)(&DAT_019e26d6 +
                                (ulong)(byte)(&DAT_019e25d6)[bVar1] + (ulong)(byte)SVar11);
        uVar10 = 0x7fU >> (ulong)((byte)(&DAT_019e25d6)[bVar1] >> 1 & 0x1f) & uVar10 | uVar5 << 6;
        if (local_14[0] == (State)0xc) {
          uVar6 = 0;
          uVar5 = 0;
          if (uVar10 != 0xfffffffc) goto LAB_011f5468;
          goto LAB_011f546c;
        }
        uVar5 = uVar10;
        SVar2 = local_14[0];
        if (local_14[0] == (State)0x0) {
          uVar5 = 0;
          if (SVar11 != (State)0xc) {
            pbVar8 = pbVar9;
          }
          uVar10 = 0xfffd;
          local_14[0] = (State)0xc;
          goto LAB_011f5468;
        }
      }
      SVar11 = SVar2;
      pbVar9 = pbVar8;
    } while (pbVar8 < (byte *)(lVar7 + iVar3));
  }
  iVar3 = unibrow::Utf8::ValueOfIncrementalFinish(local_14);
  if (iVar3 != 0) {
    *puVar12 = (uchar)iVar3;
  }
  return;
}

