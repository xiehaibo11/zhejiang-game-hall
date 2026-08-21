
undefined8 * FUN_0125b784(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  pvVar6 = *(void **)(param_1 + 0x12e0);
  lVar4 = *(long *)((long)pvVar6 + 8);
  puVar1 = pvVar6;
  if (0xfef < lVar4 + 0x40U) {
    puVar1 = malloc(0x1000);
    if (puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar1 = pvVar6;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x12e0) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar4 + 0x40;
  sVar2 = strlen(param_2);
  uVar7 = *param_3;
  lVar3 = __strlen_chk(&DAT_013d1656,2);
  puVar5 = (undefined8 *)((long)puVar1 + lVar4 + 0x10);
  *puVar5 = &PTR_FUN_01736678;
  *(undefined4 *)((long)puVar1 + lVar4 + 0x18) = 0x101012f;
  *(char **)((long)puVar1 + lVar4 + 0x20) = param_2;
  *(char **)((long)puVar1 + lVar4 + 0x28) = param_2 + sVar2;
  *(undefined8 *)((long)puVar1 + lVar4 + 0x30) = uVar7;
  *(undefined **)((long)puVar1 + lVar4 + 0x38) = &DAT_013d1656;
  *(undefined **)((long)puVar1 + lVar4 + 0x40) = &DAT_013d1656 + lVar3;
  return puVar5;
}

