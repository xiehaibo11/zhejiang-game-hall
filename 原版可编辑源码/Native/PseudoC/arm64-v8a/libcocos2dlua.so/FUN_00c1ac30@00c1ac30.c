
void FUN_00c1ac30(ulong param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 ulong param_6,int param_7,long param_8)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long *unaff_x20;
  
  iVar2 = param_7 + 0x20;
  if (0x19 < param_7 - 0x41U) {
    iVar2 = param_7;
  }
  *(char *)(param_2 + 10) = (char)iVar2;
  if (param_6 < param_1) {
    bVar3 = *(byte *)(param_4 + 0xb);
    bVar1 = bVar3 + 0x20;
    if (0x19 < bVar3 - 0x41) {
      bVar1 = bVar3;
    }
    *(byte *)(param_2 + 0xb) = bVar1;
    if (param_2 + 0xcU < param_1) {
      bVar3 = *(byte *)(param_4 + 0xc);
      bVar1 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        bVar1 = bVar3;
      }
      *(byte *)(param_2 + 0xc) = bVar1;
      if (param_2 + 0xdU < param_1) {
        bVar3 = *(byte *)(param_4 + 0xd);
        bVar1 = bVar3 + 0x20;
        if (0x19 < bVar3 - 0x41) {
          bVar1 = bVar3;
        }
        *(byte *)(param_2 + 0xd) = bVar1;
        if (param_2 + 0xeU < param_1) {
          bVar3 = *(byte *)(param_4 + 0xe);
          bVar1 = bVar3 + 0x20;
          if (0x19 < bVar3 - 0x41) {
            bVar1 = bVar3;
          }
          *(byte *)(param_2 + 0xe) = bVar1;
        }
      }
    }
  }
  *unaff_x20 = param_3 + ((param_1 + 1) - param_8);
  return;
}

