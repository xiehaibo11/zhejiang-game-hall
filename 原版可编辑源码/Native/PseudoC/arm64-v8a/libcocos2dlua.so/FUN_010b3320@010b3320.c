
void FUN_010b3320(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[3] == 0xdeadbeef) {
    uVar1 = param_1[7];
    ft_mem_free(uVar1,*param_1);
    *param_1 = 0;
    ft_mem_free(uVar1,param_1[5]);
    param_1[5] = 0;
    ft_mem_free(uVar1,param_1[6]);
    param_1[6] = 0;
    param_1[3] = 0;
  }
  return;
}

