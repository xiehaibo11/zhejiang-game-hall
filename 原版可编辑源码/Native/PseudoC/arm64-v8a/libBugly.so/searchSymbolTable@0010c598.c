
void * searchSymbolTable(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  long local_8;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    local_8 = param_2;
    pvVar1 = bsearch(&local_8,(void *)*param_1,(long)*(int *)(param_1 + 1),0x18,FUN_0010af58);
    return pvVar1;
  }
  return (void *)0x0;
}

