
/* v8::internal::FatalProcessOutOfMemory(v8::internal::Isolate*, char const*) */

void v8::internal::FatalProcessOutOfMemory(Isolate *param_1,char *param_2)

{
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory(param_1,param_2,false);
}

