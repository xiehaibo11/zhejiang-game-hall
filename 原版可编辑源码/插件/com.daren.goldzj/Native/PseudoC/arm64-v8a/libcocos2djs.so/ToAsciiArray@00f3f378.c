
/* v8::internal::String::ToAsciiArray() */

void __thiscall v8::internal::String::ToAsciiArray(String *this)

{
  long lVar1;
  
  if (DAT_01d3ec88 != (void *)0x0) {
    operator_delete__(DAT_01d3ec88);
  }
  lVar1 = *(long *)this;
  DAT_01d3ec88 = operator_new__((long)*(int *)(lVar1 + 7) + 1);
  WriteToFlat<unsigned_char>(lVar1,DAT_01d3ec88,0,*(undefined4 *)(lVar1 + 7));
  *(undefined1 *)((long)DAT_01d3ec88 + (long)*(int *)(*(long *)this + 7)) = 0;
  return;
}

