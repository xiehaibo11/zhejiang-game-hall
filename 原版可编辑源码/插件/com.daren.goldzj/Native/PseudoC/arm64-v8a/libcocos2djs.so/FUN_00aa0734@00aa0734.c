
undefined8 FUN_00aa0734(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  for (lVar3 = *(long *)(param_1 + 0x238); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x240)) {
    if ((*(byte *)(lVar3 + 0x2f5) & 1) != 0) {
      FUN_00aa0734(lVar3);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2f4);
  if ((uVar1 >> 8 & 1) != 0) {
    if (*(long *)(param_1 + 0x280) == 0) {
      *(uint *)(param_1 + 0x2f4) = uVar1 & 0xfffffeff;
      if ((uVar1 >> 7 & 1) == 0) {
        iVar2 = FUN_00aa3be0(param_1,1,0);
      }
      else {
        iVar2 = FUN_00aa3be0(param_1,0,1);
      }
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    else {
      lws_callback_on_writable(param_1);
    }
  }
  return 0;
}

