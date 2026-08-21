
/* v8::internal::JsonParser<unsigned short>::UpdatePointersCallback(v8::Isolate*, v8::GCType,
   v8::GCCallbackFlags, void*) */

void v8::internal::JsonParser<unsigned_short>::UpdatePointersCallback(void)

{
  long lVar1;
  long in_x3;
  long lVar2;
  
  lVar2 = *(long *)(in_x3 + 0x40);
  lVar1 = **(long **)(in_x3 + 0x28) + 0xb;
  if (lVar2 != lVar1) {
    *(long *)(in_x3 + 0x40) = lVar1;
    *(long *)(in_x3 + 0x30) = lVar1 + (*(long *)(in_x3 + 0x30) - lVar2);
    *(long *)(in_x3 + 0x38) = lVar1 + (*(long *)(in_x3 + 0x38) - lVar2);
  }
  return;
}

