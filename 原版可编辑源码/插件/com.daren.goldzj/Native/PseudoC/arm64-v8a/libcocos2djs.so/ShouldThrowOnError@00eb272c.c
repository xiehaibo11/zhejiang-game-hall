
/* v8::internal::ShouldThrowOnError(v8::internal::Isolate*) */

bool v8::internal::ShouldThrowOnError(Isolate *param_1)

{
  int iVar1;
  
  iVar1 = GetShouldThrow(param_1,0);
  return iVar1 == 0;
}

