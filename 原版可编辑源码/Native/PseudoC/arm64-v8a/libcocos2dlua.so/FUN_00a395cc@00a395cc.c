
undefined8 FUN_00a395cc(long param_1,long param_2)

{
  void *__s;
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  memcpy((void *)(param_1 + 0x220),(void *)(param_2 + 0x220),0x6e8);
  __s = (void *)(param_1 + 0x670);
  memset(__s,0,0x1e8);
  uVar3 = 0;
  do {
    lVar4 = uVar3 * 8;
    lVar2 = *(long *)(param_2 + 0x670 + lVar4);
    (*(code *)PTR_free_01769a00)(*(undefined8 *)((long)__s + lVar4));
    *(undefined8 *)((long)__s + lVar4) = 0;
    if (lVar2 != 0) {
      lVar2 = (*(code *)PTR_strdup_01769a10)(lVar2);
      if (lVar2 == 0) goto LAB_00a396a0;
      *(long *)((long)__s + uVar3 * 8) = lVar2;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x3b);
  uVar1 = 0;
  if (*(long *)(param_2 + 0x2a0) != 0) {
    lVar2 = *(long *)(param_2 + 0x850);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00a2c6fc();
      lVar2 = FUN_00a4e340(lVar2,uVar1);
      *(long *)(param_1 + 0x850) = lVar2;
      if (lVar2 == 0) {
LAB_00a396a0:
        uVar1 = 0x1b;
      }
      else {
        uVar1 = 0;
        *(long *)(param_1 + 0x290) = lVar2;
      }
    }
  }
  return uVar1;
}

