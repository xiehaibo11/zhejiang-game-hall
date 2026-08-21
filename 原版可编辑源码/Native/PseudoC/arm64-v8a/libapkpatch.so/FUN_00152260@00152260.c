
undefined8 * FUN_00152260(long param_1,undefined8 *param_2,char *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  
  pvVar7 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar7 + 8);
  puVar1 = pvVar7;
  if (0xfef < lVar3 + 0x30U) {
    puVar1 = malloc(0x1000);
    if (puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar7;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  uVar6 = *param_2;
  *(long *)((long)puVar1 + 8) = lVar3 + 0x30;
  sVar2 = strlen(param_3);
  uVar4 = *param_4;
  puVar5 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar5 = &PTR_FUN_00167ff0;
  *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x1010133;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x20) = uVar6;
  *(char **)((long)puVar1 + lVar3 + 0x28) = param_3;
  *(char **)((long)puVar1 + lVar3 + 0x30) = param_3 + sVar2;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x38) = uVar4;
  return puVar5;
}

