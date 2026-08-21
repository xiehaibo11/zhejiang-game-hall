
void FUN_0014c49c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = pvVar4;
  if (0xfef < lVar2 + 0x30U) {
    puVar1 = malloc(0x1000);
    if (puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  uVar3 = *param_2;
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00167100;
  *(undefined4 *)((long)puVar1 + lVar2 + 0x18) = 0x1010114;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "vtable for ";
  *(char **)((long)puVar1 + lVar2 + 0x28) = "";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}

