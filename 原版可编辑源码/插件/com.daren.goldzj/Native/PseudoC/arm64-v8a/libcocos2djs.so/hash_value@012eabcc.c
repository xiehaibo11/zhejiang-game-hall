
/* v8::internal::compiler::hash_value(v8::internal::compiler::ElementAccess const&) */

void v8::internal::compiler::hash_value(ElementAccess *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = base::hash_combine(0,((ulong)(*(ushort *)(param_1 + 0x10) >> 4) & 0xff0) +
                               (ulong)(byte)*(ushort *)(param_1 + 0x10));
  uVar2 = base::hash_value(*(uint *)(param_1 + 4));
  uVar1 = base::hash_combine(uVar1,uVar2);
  base::hash_combine(uVar1,(ulong)(byte)*param_1);
  return;
}

