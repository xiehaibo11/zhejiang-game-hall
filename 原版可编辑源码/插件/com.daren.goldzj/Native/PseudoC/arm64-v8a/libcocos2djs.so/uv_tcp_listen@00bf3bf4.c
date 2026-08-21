
int uv_tcp_listen(long param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *__nptr;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    return *(int *)(param_1 + 0xe8);
  }
  if (DAT_01d289c4 == 0xffffffff) {
    __nptr = getenv("UV_TCP_SINGLE_ACCEPT");
    if (__nptr == (char *)0x0) {
      DAT_01d289c4 = 0;
      bVar1 = false;
    }
    else {
      iVar2 = atoi(__nptr);
      bVar1 = iVar2 != 0;
      DAT_01d289c4 = (uint)bVar1;
    }
    if (!bVar1) goto LAB_00bf3c38;
  }
  else if (DAT_01d289c4 == 0) goto LAB_00bf3c38;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x1000;
LAB_00bf3c38:
  iVar2 = FUN_00bf364c(param_1,2,0x20);
  if (iVar2 == 0) {
    iVar2 = listen(*(int *)(param_1 + 0xb8),param_2);
    if (iVar2 != 0) {
      piVar3 = (int *)__errno();
      return -*piVar3;
    }
    *(undefined8 *)(param_1 + 0xe0) = param_3;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x40000;
    *(code **)(param_1 + 0x88) = uv__server_io;
    uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    iVar2 = 0;
  }
  return iVar2;
}

