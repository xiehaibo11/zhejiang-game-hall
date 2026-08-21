
/* v8::internal::Factory::NewStringFromUtf8(v8::internal::Vector<char const> const&,
   v8::internal::AllocationType) */

Factory * __thiscall
v8::internal::Factory::NewStringFromUtf8(Factory *this,undefined8 *param_1,undefined4 param_3)

{
  Utf8Decoder local_40 [8];
  int local_38;
  undefined8 local_30;
  long lStack_28;
  
  lStack_28 = (long)*(int *)(param_1 + 1);
  local_30 = *param_1;
  Utf8Decoder::Utf8Decoder(local_40,(Vector *)&local_30);
  if (local_38 == 0) {
    this = this + 200;
  }
  else if ((byte)local_40[0] < 2) {
    this = (Factory *)NewRawOneByteString();
    if (this != (Factory *)0x0) {
      Utf8Decoder::Decode<unsigned_char>
                (local_40,(uchar *)(*(long *)this + 0xb),(Vector *)&local_30);
    }
  }
  else {
    this = (Factory *)NewRawTwoByteString(this,local_38,param_3);
    if (this != (Factory *)0x0) {
      Utf8Decoder::Decode<unsigned_short>
                (local_40,(ushort *)(*(long *)this + 0xb),(Vector *)&local_30);
    }
  }
  return this;
}

