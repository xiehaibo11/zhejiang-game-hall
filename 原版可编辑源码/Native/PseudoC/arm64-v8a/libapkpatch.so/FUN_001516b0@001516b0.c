
void FUN_001516b0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = pvVar5;
  if (0xfef < lVar2 + 0x30U) {
    puVar1 = malloc(0x1000);
    if (puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00167c00;
  *(undefined4 *)((long)puVar1 + lVar2 + 0x18) = 0x1010135;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "const_cast";
  *(char **)((long)puVar1 + lVar2 + 0x28) = "";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x38) = uVar4;
  return;
}

