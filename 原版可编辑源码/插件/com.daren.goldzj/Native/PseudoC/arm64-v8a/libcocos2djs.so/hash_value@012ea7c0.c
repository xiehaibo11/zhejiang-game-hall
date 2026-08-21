
/* v8::internal::compiler::hash_value(v8::internal::compiler::FieldAccess const&) */

void v8::internal::compiler::hash_value(FieldAccess *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = base::hash_combine(0,(ulong)(byte)param_1[0x30]);
  uVar1 = base::hash_combine(uVar1,*(ulong *)(param_1 + 0x28));
  uVar1 = base::hash_combine(uVar1,((ulong)(*(ushort *)(param_1 + 0x20) >> 4) & 0xff0) +
                                   (ulong)(byte)*(ushort *)(param_1 + 0x20));
  uVar2 = base::hash_value(*(uint *)(param_1 + 4));
  uVar1 = base::hash_combine(uVar1,uVar2);
  base::hash_combine(uVar1,(ulong)(byte)*param_1);
  return;
}

