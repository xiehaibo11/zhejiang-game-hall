
void FUN_010b8f74(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *extraout_x1;
  ulong uVar1;
  
  FUN_010bab70();
  uVar1 = *extraout_x1;
  v8::internal::Factory::NewNumberFromInt
            ((Factory *)(uVar1 & 0xffffffff00000000),
             *(int *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_3 * 4));
  return;
}

