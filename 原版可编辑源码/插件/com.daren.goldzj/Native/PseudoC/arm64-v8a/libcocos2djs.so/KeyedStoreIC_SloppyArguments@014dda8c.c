
/* v8::internal::CodeFactory::KeyedStoreIC_SloppyArguments(v8::internal::Isolate*,
   v8::internal::KeyedAccessStoreMode) */

void v8::internal::CodeFactory::KeyedStoreIC_SloppyArguments(Builtins *param_1,uint param_2)

{
  if (param_2 < 4) {
    Builtins::CallableFor(param_1,param_2 + 0x7e);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

