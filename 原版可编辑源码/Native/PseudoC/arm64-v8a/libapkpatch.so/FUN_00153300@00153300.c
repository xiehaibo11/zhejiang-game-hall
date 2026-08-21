
void FUN_00153300(long param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = pvVar4;
  if (0xfef < lVar3 + 0x10U) {
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
  iVar1 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x10;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_001673b0;
  *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1010141;
  *(bool *)((long)puVar2 + lVar3 + 0x1c) = iVar1 != 0;
  return;
}

