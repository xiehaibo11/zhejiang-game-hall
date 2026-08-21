
/* v8::internal::Relocatable::Iterate(v8::internal::RootVisitor*, v8::internal::Relocatable*) */

void v8::internal::Relocatable::Iterate(RootVisitor *param_1,Relocatable *param_2)

{
  for (; param_2 != (Relocatable *)0x0; param_2 = *(Relocatable **)(param_2 + 0x10)) {
    (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1);
  }
  return;
}

