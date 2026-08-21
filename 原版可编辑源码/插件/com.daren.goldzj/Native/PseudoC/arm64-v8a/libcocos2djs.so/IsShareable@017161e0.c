
/* v8::internal::compiler::IsShareable(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Isolate*) */

bool v8::internal::compiler::IsShareable(byte *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_24 [4];
  
  if (((*param_1 & 1) == 0) ||
     (uVar2 = Builtins::IsBuiltinHandle((Builtins *)(param_2 + 0x9e00),param_1,auStack_24),
     (uVar2 & 1) == 0)) {
    bVar1 = (byte *)(param_2 + 0x80U) <= param_1 && param_1 < (byte *)(param_2 + 0x1010U);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

