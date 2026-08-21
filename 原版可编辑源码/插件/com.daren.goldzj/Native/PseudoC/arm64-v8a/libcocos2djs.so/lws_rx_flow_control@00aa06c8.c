
undefined8 lws_rx_flow_control(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if ((param_2 >> 0xe & 1) == 0) {
    uVar4 = (param_2 & 1) << 0xd | 1;
  }
  if ((uVar4 >> 0xd & 1) == 0) {
    uVar4 = uVar4 & 0xff | (uint)*(byte *)(param_1 + 0x307);
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x307) & (uVar4 & 0xff ^ 0xffffffff);
  }
  uVar1 = *(uint *)(param_1 + 0x2f4);
  uVar2 = uVar4 == 0 | 2;
  *(char *)(param_1 + 0x307) = (char)uVar4;
  if (uVar2 != (uVar1 >> 7 & 3)) {
    *(uint *)(param_1 + 0x2f4) = uVar1 & 0xfffffe7f | uVar2 << 7;
    if (((param_2 >> 0xc & 1) != 0) || ((uVar1 >> 0x18 & 1) == 0)) {
      uVar3 = FUN_00aa0734();
      return uVar3;
    }
  }
  return 0;
}

