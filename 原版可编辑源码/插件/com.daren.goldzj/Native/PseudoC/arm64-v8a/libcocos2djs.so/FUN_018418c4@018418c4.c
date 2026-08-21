
void FUN_018418c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  lVar1 = FUN_0183e610();
  if ((lVar1 != 0) && (lVar2 = FUN_0183e610(param_1), lVar2 != 0)) {
    pvVar6 = *(void **)(param_1 + 0x12e0);
    plVar4 = (long *)((long)pvVar6 + 8);
    lVar5 = *plVar4;
    puVar3 = pvVar6;
    if (0xfef < lVar5 + 0x30U) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar3 = pvVar6;
      plVar4 = puVar3 + 1;
      *plVar4 = 0;
      *(undefined8 **)(param_1 + 0x12e0) = puVar3;
    }
    *plVar4 = lVar5 + 0x30;
    *(undefined ***)((long)puVar3 + lVar5 + 0x10) = &PTR_FUN_01ce0070;
    *(undefined4 *)((long)puVar3 + lVar5 + 0x18) = 0x101012a;
    *(long *)((long)puVar3 + lVar5 + 0x20) = lVar1;
    *(undefined8 *)((long)puVar3 + lVar5 + 0x28) = param_2;
    *(undefined8 *)((long)puVar3 + lVar5 + 0x30) = param_3;
    *(long *)((long)puVar3 + lVar5 + 0x38) = lVar2;
  }
  return;
}

