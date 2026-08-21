
undefined8 * FUN_00152724(long param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar1 = pvVar6;
  if (0xfef < lVar3 + 0x30U) {
    puVar1 = malloc(0x1000);
    if (puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar6;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  uVar5 = *param_2;
  *(long *)((long)puVar1 + 8) = lVar3 + 0x30;
  sVar2 = strlen(param_3);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_00168220;
  *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x1010131;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x20) = uVar5;
  *(char **)((long)puVar1 + lVar3 + 0x28) = param_3;
  *(char **)((long)puVar1 + lVar3 + 0x30) = param_3 + sVar2;
  return puVar4;
}

