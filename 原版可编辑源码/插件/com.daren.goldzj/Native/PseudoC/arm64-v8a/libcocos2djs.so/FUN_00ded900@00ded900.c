
void FUN_00ded900(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)((int)param_2 << 2);
  FUN_00defa14(param_1 + lVar2,param_2,1,0x10,param_3,param_4,param_5);
  lVar1 = param_1 + lVar2 + lVar2;
  FUN_00defa14(lVar1,param_2 & 0xffffffff,1,0x10,param_3,param_4,param_5);
  FUN_00defa14(lVar1 + lVar2,param_2 & 0xffffffff,1,0x10,param_3,param_4,param_5);
  return;
}

