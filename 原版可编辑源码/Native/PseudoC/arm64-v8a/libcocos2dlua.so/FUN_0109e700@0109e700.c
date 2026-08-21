
void FUN_0109e700(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x248);
  if (lVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x23c);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10);
    if (iVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x18);
      do {
        ft_mem_free(uVar2,*puVar4);
        *puVar4 = 0;
        *(undefined2 *)(puVar4 + -2) = 0;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + 4;
      } while (iVar3 != 0);
      lVar1 = *(long *)(param_1 + 0x248);
    }
    ft_mem_free(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  return;
}

