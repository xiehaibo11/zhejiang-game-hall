
undefined8 FUN_00a1118c(long param_1)

{
  undefined8 uVar1;
  ssize_t sVar2;
  undefined1 auStack_14 [4];
  
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(int *)(param_1 + 0x260) == -1) {
      return 0;
    }
    sVar2 = recv(*(int *)(param_1 + 0x260),auStack_14,1,2);
    if (sVar2 == 0) {
      return 0;
    }
  }
  else {
    uVar1 = thunk_FUN_00a461d0();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  return 1;
}

