
/* v8::debug::GetContextId(v8::Local<v8::Context>) */

int v8::debug::GetContextId(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)*(uint *)(*param_1 + 0xab) >> 1;
  if ((*(uint *)(*param_1 + 0xab) & 1) != 0) {
    iVar1 = 0;
  }
  return iVar1;
}

