
void FUN_0015d86c(long param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = pvVar6;
  if (0xfef < lVar3 + 0x20U) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  lVar5 = *param_3;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar4 = *param_2;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_00168fb0;
  uVar1 = *(undefined1 *)(lVar5 + 9);
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xd;
  *(undefined2 *)((long)puVar2 + lVar3 + 0x1a) = 0x101;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x19) = uVar1;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar5;
  return;
}

