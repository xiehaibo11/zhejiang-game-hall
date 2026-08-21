
/* v8::internal::compiler::hash_value(v8::internal::compiler::SelectParameters const&) */

void v8::internal::compiler::hash_value(SelectParameters *param_1)

{
  SelectParameters SVar1;
  ulong uVar2;
  
  SVar1 = *param_1;
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[1]);
  base::hash_combine(uVar2,(ulong)(byte)SVar1);
  return;
}

