
/* v8::Isolate::GetCodeRange(void**, unsigned long*) */

void __thiscall v8::Isolate::GetCodeRange(Isolate *this,void **param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x9070);
  *param_1 = *(void **)(lVar1 + 0x30);
  *param_2 = *(ulong *)(lVar1 + 0x38);
  return;
}

