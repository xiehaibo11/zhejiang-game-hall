
int uv_tcp_init_ex(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_3 & 0xff;
  if ((((param_3 & 0xfd) == 0) || (uVar1 == 10)) && ((param_3 & 0xffffff00) == 0)) {
    uv__stream_init(param_1,param_2,0xc);
    if ((uVar1 != 0) && (iVar2 = FUN_00bf364c(param_2,uVar1,0), iVar2 != 0)) {
      **(undefined8 **)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 8) = *(undefined8 *)(param_2 + 0x28);
      return iVar2;
    }
    return 0;
  }
  return -0x16;
}

