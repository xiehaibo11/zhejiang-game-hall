
void FUN_010865f0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  FUN_01086b14(param_2 & 0xffffffff00000000,
               param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7),param_3,*param_5,param_4
              );
  return;
}

