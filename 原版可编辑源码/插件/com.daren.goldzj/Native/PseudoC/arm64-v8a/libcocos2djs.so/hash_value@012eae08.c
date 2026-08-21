
/* v8::internal::compiler::hash_value(v8::internal::compiler::ObjectAccess const&) */

void v8::internal::compiler::hash_value(ObjectAccess *param_1)

{
  ulong uVar1;
  
  uVar1 = base::hash_combine(0,(ulong)(byte)param_1[2]);
  base::hash_combine(uVar1,((ulong)(*(ushort *)param_1 >> 4) & 0xff0) +
                           (ulong)(byte)*(ushort *)param_1);
  return;
}

