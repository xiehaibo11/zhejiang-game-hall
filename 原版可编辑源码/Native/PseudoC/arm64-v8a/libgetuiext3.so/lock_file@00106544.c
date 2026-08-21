
bool lock_file(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_EXT_FUN_00002bb0(param_1,0);
  if ((int)uVar2 == -1) {
    uVar2 = thunk_EXT_FUN_00002bb0(param_1,0x40,0x100);
  }
  iVar1 = thunk_EXT_FUN_00002bb0(uVar2,2);
  return iVar1 != -1;
}

