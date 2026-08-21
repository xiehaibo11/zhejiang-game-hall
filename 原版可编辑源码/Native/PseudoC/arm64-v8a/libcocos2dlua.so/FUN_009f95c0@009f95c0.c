
undefined8 FUN_009f95c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009f95d0 to 00af9647 has its CatchHandler @ 009f95d0
                       catch() { ... } // from try @ 009f95d0 with catch @ 009f95d0
                       catch() { ... } // from try @ 009f96c0 with catch @ 009f95d0 */
  uVar2 = FUN_009f9a54();
  uVar3 = luaL_checklstring(param_1,1,0);
  uVar3 = FUN_009fc1e8(uVar2,uVar3);
  iVar1 = lua_toboolean(param_1,2);
  FUN_00a00bb4(param_1,uVar2,uVar3);
  if (iVar1 != 0) {
    FUN_009fca90(param_1,uVar2,uVar3);
  }
  return 1;
}

