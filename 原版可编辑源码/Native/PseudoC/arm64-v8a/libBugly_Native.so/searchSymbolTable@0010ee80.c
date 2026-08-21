
void searchSymbolTable(undefined8 *param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)0x0;
  local_30 = param_2;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    pvVar2 = bsearch(&local_30,(void *)*param_1,(long)*(int *)(param_1 + 1),0x18,FUN_0010eef0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar2);
}

