
int uv_udp_init_ex(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  uVar1 = param_3 & 0xff;
  if ((((param_3 & 0xfd) == 0) || (uVar1 == 10)) && ((param_3 & 0xffffff00) == 0)) {
    if (uVar1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = uv__socket(uVar1,2,0);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    *(long *)(param_2 + 0x20) = param_1 + 0x10;
    *(long *)(param_2 + 8) = param_1;
    plVar3 = *(long **)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x10) = 0xf;
    *(long **)(param_2 + 0x28) = plVar3;
    *(undefined4 *)(param_2 + 0x58) = 0x2000;
    *plVar3 = param_2 + 0x20;
    *(long *)(param_1 + 0x18) = param_2 + 0x20;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    uv__io_init(param_2 + 0x80,FUN_00bf4de8,iVar2);
    *(long *)(param_2 + 0xb8) = param_2 + 0xb8;
    *(long *)(param_2 + 0xc0) = param_2 + 0xb8;
    iVar2 = 0;
    *(long *)(param_2 + 200) = param_2 + 200;
    *(long *)(param_2 + 0xd0) = param_2 + 200;
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}

