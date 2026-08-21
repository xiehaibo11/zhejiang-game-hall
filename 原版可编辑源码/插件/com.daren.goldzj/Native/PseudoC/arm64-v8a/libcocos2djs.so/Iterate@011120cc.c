
/* v8::internal::Relocatable::Iterate(v8::internal::Isolate*, v8::internal::RootVisitor*) */

void v8::internal::Relocatable::Iterate(Isolate *param_1,RootVisitor *param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0xb790); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return;
}

