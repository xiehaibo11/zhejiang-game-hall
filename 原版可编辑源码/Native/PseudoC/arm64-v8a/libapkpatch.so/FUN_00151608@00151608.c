
void FUN_00151608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  
  lVar1 = FUN_0014e504();
  if (lVar1 != 0) {
    pvVar4 = *(void **)(param_1 + 0x1330);
    lVar3 = *(long *)((long)pvVar4 + 8);
    puVar2 = pvVar4;
    if (0xfef < lVar3 + 0x30U) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = 0;
      *puVar2 = pvVar4;
      puVar2[1] = 0;
      *(undefined8 **)(param_1 + 0x1330) = puVar2;
    }
    *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_00167b90;
    *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
    *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x101013a;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = param_2;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = param_3;
    *(long *)((long)puVar2 + lVar3 + 0x30) = lVar1;
  }
  return;
}

