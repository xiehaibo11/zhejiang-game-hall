
int FUN_00c2ca54(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((param_2 == 0) || (iVar2 != 0)) {
    luaL_checkstack(*(undefined8 *)(param_1 + 0x10),iVar2,"too many captures");
    if (iVar2 < 1) {
      return iVar2;
    }
  }
  else {
    iVar2 = 1;
    luaL_checkstack(*(undefined8 *)(param_1 + 0x10),1,"too many captures");
  }
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    FUN_00c2c9c4(param_1,iVar3,param_2,param_3);
    iVar3 = iVar1;
  } while (iVar1 < iVar2);
  return iVar2;
}

