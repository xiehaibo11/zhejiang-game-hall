
/* void v8::internal::JsonParser<unsigned short>::DecodeString<unsigned char>(unsigned char*, int,
   int) */

void __thiscall
v8::internal::JsonParser<unsigned_short>::DecodeString<unsigned_char>
          (JsonParser<unsigned_short> *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  uchar *local_18;
  
  puVar10 = (ushort *)(*(long *)(this + 0x40) + (long)param_2 * 2);
  local_18 = param_1;
  while( true ) {
    puVar5 = puVar10 + (long)(param_1 + ((long)param_3 - (long)local_18));
    if (puVar10 != puVar5) {
      lVar9 = (long)(param_1 + param_3) * 2 + (long)local_18 * -2;
      while (uVar2 = *puVar10, uVar2 != 0x5c) {
        lVar9 = lVar9 + -2;
        puVar10 = puVar10 + 1;
        *local_18 = (uchar)uVar2;
        local_18 = local_18 + 1;
        if (lVar9 == 0) {
          return;
        }
      }
    }
    if (puVar10 == puVar5) break;
    puVar5 = puVar10 + 1;
    switch((&DAT_019cc074)[*puVar5] & 7) {
    case 0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 1:
      *local_18 = (uchar)*puVar5;
      local_18 = local_18 + 1;
      break;
    case 2:
      *local_18 = '\b';
      local_18 = local_18 + 1;
      break;
    case 3:
      *local_18 = '\t';
      local_18 = local_18 + 1;
      break;
    case 4:
      *local_18 = '\n';
      local_18 = local_18 + 1;
      break;
    case 5:
      *local_18 = '\f';
      local_18 = local_18 + 1;
      break;
    case 6:
      *local_18 = '\r';
      local_18 = local_18 + 1;
      break;
    case 7:
      uVar4 = puVar10[2] - 0x30;
      if ((9 < uVar4) && (uVar6 = uVar4 | 0x20, uVar4 = uVar6 - 0x27, 5 < uVar6 - 0x31)) {
        uVar4 = 0xffffffff;
      }
      uVar6 = puVar10[3] - 0x30;
      if ((9 < uVar6) && (uVar7 = uVar6 | 0x20, uVar6 = uVar7 - 0x27, 5 < uVar7 - 0x31)) {
        uVar6 = 0xffffffff;
      }
      uVar7 = puVar10[4] - 0x30;
      if ((9 < uVar7) && (uVar8 = uVar7 | 0x20, uVar7 = uVar8 - 0x27, 5 < uVar8 - 0x31)) {
        uVar7 = 0xffffffff;
      }
      uVar8 = puVar10[5] - 0x30;
      if ((9 < uVar8) && (uVar3 = uVar8 | 0x20, uVar8 = uVar3 - 0x27, 5 < uVar3 - 0x31)) {
        uVar8 = 0xffffffff;
      }
      iVar1 = uVar8 + (uVar7 + (uVar6 + uVar4 * 0x10) * 0x10) * 0x10;
      puVar5 = puVar10 + 5;
      if (0xffff < iVar1) {
        *local_18 = (uchar)(iVar1 + 0x30000U >> 10);
        local_18 = local_18 + 1;
      }
      *local_18 = (uchar)iVar1;
      local_18 = local_18 + 1;
    }
    puVar10 = puVar5 + 1;
  }
  return;
}

