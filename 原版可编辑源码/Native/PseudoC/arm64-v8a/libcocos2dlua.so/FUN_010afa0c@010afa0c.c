
int FUN_010afa0c(undefined8 param_1,long *param_2)

{
  long lVar1;
  int local_24;
  
  *param_2 = 0;
  lVar1 = ft_mem_alloc(param_1,0x28,&local_24);
  if (local_24 == 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    *param_2 = lVar1;
  }
  return local_24;
}

