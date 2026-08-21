
void FUN_010423f8(long param_1)

{
  int iVar1;
  
  if ((-1 < *(int *)(param_1 + 0x2d0)) && (iVar1 = lws_ssl_close(param_1), iVar1 == 0)) {
    close(*(int *)(param_1 + 0x2d0));
    *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
  }
  (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
            (param_1,0x1e,*(undefined8 *)(param_1 + 0x270),0,0);
  FUN_01041408(param_1);
  return;
}

