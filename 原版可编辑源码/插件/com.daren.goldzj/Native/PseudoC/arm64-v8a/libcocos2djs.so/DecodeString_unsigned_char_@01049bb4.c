
/* void v8::internal::JsonParser<unsigned char>::DecodeString<unsigned char>(unsigned char*, int,
   int) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::DecodeString<unsigned_char>
          (JsonParser<unsigned_char> *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  byte *pbVar10;
  byte *local_18;
  
  pbVar10 = (byte *)(*(long *)(this + 0x40) + (long)param_2);
  local_18 = param_1;
  while( true ) {
    pbVar5 = pbVar10 + (long)(param_1 + ((long)param_3 - (long)local_18));
    if (pbVar10 != pbVar5) {
      puVar9 = param_1 + ((long)param_3 - (long)local_18);
      while (bVar2 = *pbVar10, bVar2 != 0x5c) {
        puVar9 = puVar9 + -1;
        pbVar10 = pbVar10 + 1;
        *local_18 = bVar2;
        local_18 = local_18 + 1;
        if (puVar9 == (uchar *)0x0) {
          return;
        }
      }
    }
    if (pbVar10 == pbVar5) break;
    pbVar5 = pbVar10 + 1;
    switch((&DAT_019cc074)[*pbVar5] & 7) {
    case 0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 1:
      *local_18 = *pbVar5;
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
      uVar4 = pbVar10[2] - 0x30;
      if ((9 < uVar4) && (uVar6 = uVar4 | 0x20, uVar4 = uVar6 - 0x27, 5 < uVar6 - 0x31)) {
        uVar4 = 0xffffffff;
      }
      uVar6 = pbVar10[3] - 0x30;
      if ((9 < uVar6) && (uVar7 = uVar6 | 0x20, uVar6 = uVar7 - 0x27, 5 < uVar7 - 0x31)) {
        uVar6 = 0xffffffff;
      }
      uVar7 = pbVar10[4] - 0x30;
      if ((9 < uVar7) && (uVar8 = uVar7 | 0x20, uVar7 = uVar8 - 0x27, 5 < uVar8 - 0x31)) {
        uVar7 = 0xffffffff;
      }
      uVar8 = pbVar10[5] - 0x30;
      if ((9 < uVar8) && (uVar3 = uVar8 | 0x20, uVar8 = uVar3 - 0x27, 5 < uVar3 - 0x31)) {
        uVar8 = 0xffffffff;
      }
      iVar1 = uVar8 + (uVar7 + (uVar6 + uVar4 * 0x10) * 0x10) * 0x10;
      pbVar5 = pbVar10 + 5;
      if (0xffff < iVar1) {
        *local_18 = (byte)(iVar1 + 0x30000U >> 10);
        local_18 = local_18 + 1;
      }
      *local_18 = (byte)iVar1;
      local_18 = local_18 + 1;
    }
    pbVar10 = pbVar5 + 1;
  }
  return;
}

