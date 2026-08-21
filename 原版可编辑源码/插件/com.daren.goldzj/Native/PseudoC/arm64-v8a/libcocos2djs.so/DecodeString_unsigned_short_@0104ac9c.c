
/* void v8::internal::JsonParser<unsigned short>::DecodeString<unsigned short>(unsigned short*, int,
   int) */

void __thiscall
v8::internal::JsonParser<unsigned_short>::DecodeString<unsigned_short>
          (JsonParser<unsigned_short> *this,ushort *param_1,int param_2,int param_3)

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
  ushort *local_18;
  
  puVar10 = (ushort *)(*(long *)(this + 0x40) + (long)param_2 * 2);
  local_18 = param_1;
  while( true ) {
    puVar5 = (ushort *)((long)puVar10 + ((long)param_3 * 2 - ((long)local_18 - (long)param_1)));
    if (puVar10 != puVar5) {
      lVar9 = (-(ulong)((uint)param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_3 << 1) +
              ((long)local_18 - (long)param_1 >> 1) * -2;
      while (uVar2 = *puVar10, uVar2 != 0x5c) {
        lVar9 = lVar9 + -2;
        puVar10 = puVar10 + 1;
        *local_18 = uVar2;
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
      *local_18 = *puVar5;
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
    puVar10 = puVar5 + 1;
  }
  return;
}

