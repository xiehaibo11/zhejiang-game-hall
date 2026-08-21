
void searchSymbolInElfFile(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)getElfInfoWithSymbolTable(param_1,1);
  pvVar3 = (void *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
    if ((puVar2 == (undefined8 *)0x0) || (local_30 = param_2, param_2 == 0)) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = bsearch(&local_30,(void *)*puVar2,(long)*(int *)(puVar2 + 1),0x18,FUN_0010eef0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar3);
}

