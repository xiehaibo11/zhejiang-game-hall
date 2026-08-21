
undefined8 uv_fileno(long param_1,int *param_2)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 7:
  case 0xc:
  case 0xe:
    iVar1 = *(int *)(param_1 + 0xb8);
    break;
  case 8:
    iVar1 = *(int *)(param_1 + 0x98);
    break;
  default:
    return 0xffffffea;
  case 0xf:
    iVar1 = *(int *)(param_1 + 0xb0);
  }
  if ((iVar1 != -1) && ((*(uint *)(param_1 + 0x58) & 3) == 0)) {
    *param_2 = iVar1;
    return 0;
  }
  return 0xfffffff7;
}

