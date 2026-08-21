
/* v8::internal::Relocatable::Iterate(v8::internal::RootVisitor*, char*) */

char * v8::internal::Relocatable::Iterate(RootVisitor *param_1,char *param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)param_2; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  return param_2 + 8;
}

