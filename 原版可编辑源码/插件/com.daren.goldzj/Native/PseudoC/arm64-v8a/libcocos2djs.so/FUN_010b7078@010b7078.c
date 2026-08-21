
void FUN_010b7078(undefined8 param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  v8::internal::Factory::NewNumberFromUint
            ((Factory *)(uVar1 & 0xffffffff00000000),
             *(uint *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_3 * 4));
  return;
}

