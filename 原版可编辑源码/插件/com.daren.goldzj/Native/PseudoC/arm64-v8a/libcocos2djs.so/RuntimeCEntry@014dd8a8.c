
/* v8::internal::CodeFactory::RuntimeCEntry(v8::internal::Isolate*, int) */

void v8::internal::CodeFactory::RuntimeCEntry(Isolate *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = 0x275;
  }
  else {
    if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar1 = 0x27a;
  }
  Builtins::builtin_handle((Builtins *)(param_1 + 0x9e00),iVar1);
  return;
}

