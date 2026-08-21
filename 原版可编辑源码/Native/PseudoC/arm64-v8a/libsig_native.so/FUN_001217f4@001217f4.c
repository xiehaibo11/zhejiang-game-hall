
undefined8 * FUN_001217f4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
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
  lVar2 = __strlen_chk("sizeof... (",0xc);
  uVar7 = *param_2;
  lVar3 = __strlen_chk(")",2);
  puVar5 = (undefined8 *)((long)puVar1 + lVar4 + 0x10);
  *puVar5 = &PTR_FUN_00137cd8;
  *(undefined4 *)((long)puVar1 + lVar4 + 0x18) = 0x101012f;
  *(char **)((long)puVar1 + lVar4 + 0x20) = "sizeof... (";
  *(char **)((long)puVar1 + lVar4 + 0x28) = "sizeof... (" + lVar2;
  *(undefined8 *)((long)puVar1 + lVar4 + 0x30) = uVar7;
  *(char **)((long)puVar1 + lVar4 + 0x38) = ")";
  *(char **)((long)puVar1 + lVar4 + 0x40) = "operator()" + lVar3 + 9;
  return puVar5;
}

