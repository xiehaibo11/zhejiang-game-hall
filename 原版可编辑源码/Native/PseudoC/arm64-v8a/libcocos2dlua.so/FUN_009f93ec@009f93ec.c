
void FUN_009f93ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009f9a54();
  uVar2 = luaL_checklstring(param_1,1,0);
  uVar1 = FUN_009fc1e8(uVar1,uVar2);
  uVar2 = FUN_009fc884(param_1,uVar1);
  FUN_00a017b0(param_1,uVar1,uVar2);
  return;
}

