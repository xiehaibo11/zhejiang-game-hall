
void FUN_010b8f80(undefined8 param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  v8::internal::Factory::NewNumberFromInt
            ((Factory *)(uVar1 & 0xffffffff00000000),
             *(int *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_3 * 4));
  return;
}

