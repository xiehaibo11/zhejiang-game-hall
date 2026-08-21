
void FUN_010c08c4(undefined8 param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  v8::internal::BigInt::FromUint64
            ((Isolate *)(uVar1 & 0xffffffff00000000),
             *(ulong *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_3 * 8));
  return;
}

