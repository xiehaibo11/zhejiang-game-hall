
void FUN_00151a68(long param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar6 + 8);
  puVar3 = pvVar6;
  if (0xfef < lVar4 + 0x20U) {
    puVar3 = malloc(0x1000);
    if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar3 = pvVar6;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  uVar5 = *param_2;
  uVar1 = *param_3;
  uVar2 = *param_4;
  *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_00167d50;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x1010139;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = uVar5;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x28) = uVar1;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x29) = uVar2;
  return;
}

