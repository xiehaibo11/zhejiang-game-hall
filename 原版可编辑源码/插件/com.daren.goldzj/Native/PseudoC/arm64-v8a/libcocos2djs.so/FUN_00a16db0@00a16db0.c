
undefined8 FUN_00a16db0(long param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x3bf) == '\0') {
      if (*(char *)(param_1 + 0x3be) == '\0') {
        if (*(char *)(param_1 + 0x3bb) == '\0') {
          puVar3 = (undefined8 *)(param_1 + 0xc0);
        }
        else {
          puVar3 = (undefined8 *)(param_1 + 0xe8);
        }
      }
      else {
        puVar3 = (undefined8 *)(param_1 + 0x168);
      }
    }
    else {
      puVar3 = (undefined8 *)(param_1 + 0x128);
    }
    __s = (char *)FUN_00a0e870("%s:%d",*puVar3,*(undefined8 *)(param_1 + 0x198));
    if (__s == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      sVar1 = strlen(__s);
      uVar2 = FUN_00a34664(param_2,__s,sVar1);
      (*(code *)PTR_free_01d1b748)(__s);
    }
  }
  return uVar2;
}

