
void FUN_010916b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x220));
    *(undefined8 *)(param_1 + 0x220) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x210));
    puVar3 = *(undefined8 **)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x210) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      if (0 < *(int *)(param_1 + 0x1f8)) {
        lVar4 = 0;
        lVar5 = 1;
        puVar1 = puVar3;
        while( true ) {
          if (puVar1 != (undefined8 *)0x0) {
            ft_mem_free(uVar2,*puVar1);
            *puVar1 = 0;
            if (*(char *)(puVar1 + 1) != '\0') {
              ft_mem_free(uVar2,*(undefined8 *)((long)puVar3 + lVar4 + 0x10));
              *(undefined8 *)((long)puVar3 + lVar4 + 0x10) = 0;
            }
          }
          if (*(int *)(param_1 + 0x1f8) <= lVar5) break;
          puVar3 = *(undefined8 **)(param_1 + 0x200);
          lVar4 = lVar4 + 0x18;
          lVar5 = lVar5 + 1;
          puVar1 = (undefined8 *)((long)puVar3 + lVar4);
        }
        puVar3 = *(undefined8 **)(param_1 + 0x200);
      }
      ft_mem_free(uVar2,puVar3);
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x170) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (*(long *)(param_1 + 0xc0) == param_1 + 0xf8) {
      FT_Stream_Close();
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x148);
    }
  }
  return;
}

