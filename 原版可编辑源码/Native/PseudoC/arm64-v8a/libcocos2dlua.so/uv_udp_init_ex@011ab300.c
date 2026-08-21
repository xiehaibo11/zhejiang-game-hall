
int uv_udp_init_ex(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  uVar1 = param_3 & 0xff;
  if ((uVar1 < 0xb) && ((1 << (ulong)(param_3 & 0x1f) & 0x405U) != 0)) {
    if (0xff < param_3) {
      return -0x16;
    }
    if (uVar1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = FUN_011a2b64(uVar1,2,0);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    plVar4 = (long *)(param_2 + 0x20);
    *plVar4 = param_1 + 0x10;
    *(undefined4 *)(param_2 + 0x10) = 0xf;
    *(long *)(param_2 + 8) = param_1;
    *(undefined4 *)(param_2 + 0x58) = 8;
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_2 + 0x28) = puVar3;
    *puVar3 = plVar4;
    *(long **)(param_1 + 0x18) = plVar4;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    FUN_011a366c(param_2 + 0x80,FUN_011ab3f0,iVar2);
    *(long *)(param_2 + 0xb8) = param_2 + 0xb8;
    *(long *)(param_2 + 0xc0) = param_2 + 0xb8;
    *(long *)(param_2 + 200) = param_2 + 200;
    *(long *)(param_2 + 0xd0) = param_2 + 200;
    return 0;
  }
  return -0x16;
}

