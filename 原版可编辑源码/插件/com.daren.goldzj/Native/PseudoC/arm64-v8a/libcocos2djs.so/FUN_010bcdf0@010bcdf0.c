
void FUN_010bcdf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *extraout_x1;
  ulong uVar1;
  
  FUN_010be698();
  uVar1 = *extraout_x1;
  v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
            ((Factory *)(uVar1 & 0xffffffff00000000),
             *(double *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_3 * 8));
  return;
}

