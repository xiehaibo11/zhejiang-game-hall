
/* v8::internal::V8NameConverter::NameInCode(unsigned char*) const */

uchar * __thiscall v8::internal::V8NameConverter::NameInCode(V8NameConverter *this,uchar *param_1)

{
  uchar *puVar1;
  
  puVar1 = "";
  if (*(int *)(this + 0xa0) != 0) {
    puVar1 = param_1;
  }
  return puVar1;
}

