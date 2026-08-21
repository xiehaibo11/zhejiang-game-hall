
undefined8 * FUN_00153428(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = pvVar5;
  if (0xfef < lVar3 + 0x20U) {
    puVar1 = malloc(0x1000);
    if (puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_001671f0;
  *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x1010107;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(char **)((long)puVar1 + lVar3 + 0x28) = param_2 + sVar2;
  return puVar4;
}

