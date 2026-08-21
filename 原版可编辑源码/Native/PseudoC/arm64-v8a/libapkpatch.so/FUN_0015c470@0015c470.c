
void FUN_0015c470(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = pvVar5;
  if (0xfef < lVar3 + 0x20U) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  lVar4 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar1 = *(undefined1 *)(lVar4 + 9);
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_00169090;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xb;
  *(undefined2 *)((long)puVar2 + lVar3 + 0x1a) = 0x101;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x19) = uVar1;
  *(long *)((long)puVar2 + lVar3 + 0x20) = lVar4;
  return;
}

