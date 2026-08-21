
undefined8 * FUN_0014f500(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar1 = pvVar6;
  if (0xfef < lVar3 + 0x40U) {
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
  *(long *)((long)puVar1 + 8) = lVar3 + 0x40;
  sVar2 = strlen(param_2);
  uVar4 = *param_3;
  puVar5 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar5 = &PTR_FUN_00168300;
  *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x1010134;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(char **)((long)puVar1 + lVar3 + 0x28) = param_2 + sVar2;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x30) = uVar4;
  *(undefined **)((long)puVar1 + lVar3 + 0x38) = &DAT_0011aa2a;
  *(undefined **)((long)puVar1 + lVar3 + 0x40) = &DAT_0011aa2b;
  return puVar5;
}

