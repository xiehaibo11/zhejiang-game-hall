
void FUN_010c2108(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *extraout_x1;
  ulong uVar1;
  
  FUN_010c377c();
  uVar1 = *extraout_x1;
  v8::internal::BigInt::FromInt64
            ((Isolate *)(uVar1 & 0xffffffff00000000),
             *(long *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_3 * 8));
  return;
}

