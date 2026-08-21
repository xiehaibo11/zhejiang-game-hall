
/* void v8::internal::JsonParser<unsigned char>::DecodeString<unsigned short>(unsigned short*, int,
   int) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::DecodeString<unsigned_short>
          (JsonParser<unsigned_char> *this,ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ushort *local_18;
  
  pbVar8 = (byte *)(*(long *)(this + 0x40) + (long)param_2);
  local_18 = param_1;
  while( true ) {
    lVar7 = (long)local_18 - (long)param_1 >> 1;
    pbVar10 = pbVar8 + (param_3 - lVar7);
    if (pbVar8 != pbVar10) {
      lVar7 = param_3 - lVar7;
      while (bVar2 = *pbVar8, bVar2 != 0x5c) {
        lVar7 = lVar7 + -1;
        pbVar8 = pbVar8 + 1;
        *local_18 = (ushort)bVar2;
        local_18 = local_18 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    if (pbVar8 == pbVar10) break;
    pbVar10 = pbVar8 + 1;
    switch((&DAT_019cc074)[*pbVar10] & 7) {
    case 0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 1:
      *local_18 = (ushort)*pbVar10;
      local_18 = local_18 + 1;
      break;
    case 2:
      *local_18 = 8;
      local_18 = local_18 + 1;
      break;
    case 3:
      *local_18 = 9;
      local_18 = local_18 + 1;
      break;
    case 4:
      *local_18 = 10;
      local_18 = local_18 + 1;
      break;
    case 5:
      *local_18 = 0xc;
      local_18 = local_18 + 1;
      break;
    case 6:
      *local_18 = 0xd;
      local_18 = local_18 + 1;
      break;
    case 7:
      uVar9 = pbVar8[2] - 0x30;
      if ((9 < uVar9) && (uVar4 = uVar9 | 0x20, uVar9 = uVar4 - 0x27, 5 < uVar4 - 0x31)) {
        uVar9 = 0xffffffff;
      }
      uVar4 = pbVar8[3] - 0x30;
      if ((9 < uVar4) && (uVar5 = uVar4 | 0x20, uVar4 = uVar5 - 0x27, 5 < uVar5 - 0x31)) {
        uVar4 = 0xffffffff;
      }
      uVar5 = pbVar8[4] - 0x30;
      if ((9 < uVar5) && (uVar6 = uVar5 | 0x20, uVar5 = uVar6 - 0x27, 5 < uVar6 - 0x31)) {
        uVar5 = 0xffffffff;
      }
      uVar6 = pbVar8[5] - 0x30;
      if ((9 < uVar6) && (uVar3 = uVar6 | 0x20, uVar6 = uVar3 - 0x27, 5 < uVar3 - 0x31)) {
        uVar6 = 0xffffffff;
      }
      iVar1 = uVar6 + (uVar5 + (uVar4 + uVar9 * 0x10) * 0x10) * 0x10;
      pbVar10 = pbVar8 + 5;
      if (iVar1 < 0x10000) {
        *local_18 = (ushort)iVar1;
        local_18 = local_18 + 1;
      }
      else {
        *local_18 = (ushort)(iVar1 + 0xf0000U >> 10) & 0x3ff | 0xd800;
        local_18[1] = (ushort)iVar1 & 0x3ff | 0xdc00;
        local_18 = local_18 + 2;
      }
    }
    pbVar8 = pbVar10 + 1;
  }
  return;
}

