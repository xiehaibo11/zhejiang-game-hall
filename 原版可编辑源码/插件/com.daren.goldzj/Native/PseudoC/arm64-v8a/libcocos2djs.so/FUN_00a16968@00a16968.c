
long FUN_00a16968(char *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  size_t sVar3;
  
  lVar1 = (*(code *)PTR_calloc_01d1b760)(1,0x30);
  if (lVar1 != 0) {
    puVar2 = (undefined2 *)(*(code *)PTR_calloc_01d1b760)(1,0x6e);
    *(undefined2 **)(lVar1 + 0x20) = puVar2;
    if (puVar2 == (undefined2 *)0x0) {
      (*(code *)PTR_free_01d1b748)(lVar1);
      lVar1 = 0;
      *param_2 = 0;
    }
    else {
      sVar3 = strlen(param_1);
      if (sVar3 < 0x6c) {
        *(undefined8 *)(lVar1 + 4) = 0x100000001;
        *(undefined4 *)(lVar1 + 0x10) = 0x6e;
        *puVar2 = 1;
        memcpy(puVar2 + 1,param_1,sVar3 + 1);
      }
      else {
        (*(code *)PTR_free_01d1b748)(puVar2);
        (*(code *)PTR_free_01d1b748)(lVar1);
        lVar1 = 0;
        *param_2 = 1;
      }
    }
  }
  return lVar1;
}

