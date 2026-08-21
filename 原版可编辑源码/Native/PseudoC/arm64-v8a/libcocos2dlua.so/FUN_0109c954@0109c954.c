
int FUN_0109c954(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_24;
  
  local_24 = 0;
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x30) < param_2) {
    *(undefined8 *)(param_1 + 0x40) = param_3;
    uVar2 = ft_mem_realloc(param_3,4,*(uint *)(param_1 + 0x30),param_2,
                           *(undefined8 *)(param_1 + 0x38),&local_24);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 0x30) = param_2;
    }
  }
  return iVar1;
}

