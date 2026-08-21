
bool notify_and_waitfor(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = thunk_EXT_FUN_00002bb0(param_1,0);
  if (iVar1 == -1) {
    thunk_EXT_FUN_00002bb0(param_1,0x40,0x180);
  }
  iVar1 = thunk_EXT_FUN_00002bb0(param_2,0);
  if (iVar1 == -1) {
    iVar1 = -1;
    do {
      iVar1 = iVar1 + 1;
      thunk_EXT_FUN_00002bb0(10000);
      iVar2 = thunk_EXT_FUN_00002bb0(param_2,0);
      if (0x12a < iVar1) break;
    } while (iVar2 == -1);
    bVar3 = iVar1 < 299;
  }
  else {
    bVar3 = true;
  }
  thunk_EXT_FUN_00002bb0(param_2);
  return bVar3;
}

