
void FUN_00151550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  
  lVar1 = FUN_0014e504();
  if ((lVar1 != 0) && (lVar2 = FUN_0014e504(param_1), lVar2 != 0)) {
    pvVar5 = *(void **)(param_1 + 0x1330);
    lVar4 = *(long *)((long)pvVar5 + 8);
    puVar3 = pvVar5;
    if (0xfef < lVar4 + 0x30U) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar3 = pvVar5;
      puVar3[1] = 0;
      *(undefined8 **)(param_1 + 0x1330) = puVar3;
    }
    *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_00167b20;
    *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x101012f;
    *(long *)((long)puVar3 + lVar4 + 0x20) = lVar1;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_2;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = param_3;
    *(long *)((long)puVar3 + lVar4 + 0x38) = lVar2;
  }
  return;
}

