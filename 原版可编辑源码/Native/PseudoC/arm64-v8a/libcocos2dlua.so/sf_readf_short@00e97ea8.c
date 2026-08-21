
ulong sf_readf_short(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  size_t __size;
  
  uVar4 = 0;
  if ((((param_1 == 0) || (param_2 == (void *)0x0)) || (uVar4 = 0, param_3 < 1)) ||
     (uVar3 = *(ulong *)(param_1 + 0x18), uVar3 == 0)) goto switchD_00e97f8c_caseD_2;
  iVar2 = (int)uVar3;
  if ((ulong)(long)param_3 <= uVar3) {
    iVar2 = param_3;
  }
  uVar1 = *(uint *)(param_1 + 0x2c) & 0xe;
  __size = *(long *)(param_1 + 0x10) * (long)iVar2;
  if ((uVar1 < 0xb) && ((1 << (ulong)uVar1 & 0x540U) != 0)) {
    __ptr = malloc(__size);
    uVar3 = (**(code **)(param_1 + 0x38))(__ptr,1,__size,*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar3 = (**(code **)(param_1 + 0x38))(param_2,1,__size,*(undefined8 *)(param_1 + 8));
    __ptr = (void *)0x0;
  }
  uVar4 = 0;
  if (*(ulong *)(param_1 + 0x10) != 0) {
    uVar4 = uVar3 / *(ulong *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) - uVar4;
  switch(uVar1) {
  case 2:
    goto switchD_00e97f8c_caseD_2;
  case 4:
    memcpy_to_i16_from_u8(param_2,param_2,uVar4 * (long)*(int *)(param_1 + 0x28));
    goto switchD_00e97f8c_caseD_2;
  case 6:
    memcpy_to_i16_from_float(param_2,__ptr,uVar4 * (long)*(int *)(param_1 + 0x28));
    break;
  case 8:
    memcpy_to_i16_from_i32(param_2,__ptr,uVar4 * (long)*(int *)(param_1 + 0x28));
    break;
  case 10:
    memcpy_to_i16_from_p24(param_2,__ptr,uVar4 * (long)*(int *)(param_1 + 0x28));
    break;
  default:
    memset(param_2,0,uVar4 * (long)*(int *)(param_1 + 0x28) * 2);
    goto switchD_00e97f8c_caseD_2;
  }
  free(__ptr);
switchD_00e97f8c_caseD_2:
  return uVar4 & 0xffffffff;
}

