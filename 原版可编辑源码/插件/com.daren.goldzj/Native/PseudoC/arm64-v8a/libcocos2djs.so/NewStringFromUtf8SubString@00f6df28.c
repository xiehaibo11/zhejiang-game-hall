
/* v8::internal::Factory::NewStringFromUtf8SubString(v8::internal::Handle<v8::internal::SeqOneByteString>,
   int, int, v8::internal::AllocationType) */

long * __thiscall
v8::internal::Factory::NewStringFromUtf8SubString
          (Factory *this,long *param_2,int param_3,int param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Utf8Decoder local_70 [8];
  undefined4 local_68;
  long local_60;
  long lStack_58;
  ushort local_34 [2];
  
  lVar2 = (long)param_3;
  lVar3 = (long)param_4;
  local_60 = *param_2 + lVar2 + 0xb;
  lStack_58 = lVar3;
  Utf8Decoder::Utf8Decoder(local_70,(Vector *)&local_60);
  if (param_4 == 1) {
    Utf8Decoder::Decode<unsigned_short>(local_70,local_34,(Vector *)&local_60);
    param_2 = (long *)LookupSingleCharacterStringFromCode(this,local_34[0]);
  }
  else if (local_70[0] == (Utf8Decoder)0x0) {
    if ((param_3 != 0) || (*(int *)(*param_2 + 7) != param_4 + param_3)) {
      param_2 = (long *)NewProperSubString(this,param_2,param_3);
    }
  }
  else {
    if (local_70[0] == (Utf8Decoder)0x1) {
      plVar1 = (long *)NewRawOneByteString();
      if (plVar1 != (long *)0x0) {
        local_60 = *param_2 + lVar2 + 0xb;
        lStack_58 = lVar3;
        Utf8Decoder::Decode<unsigned_char>(local_70,(uchar *)(*plVar1 + 0xb),(Vector *)&local_60);
        return plVar1;
      }
    }
    else {
      plVar1 = (long *)NewRawTwoByteString(this,local_68,param_5);
      if (plVar1 != (long *)0x0) {
        local_60 = *param_2 + lVar2 + 0xb;
        lStack_58 = lVar3;
        Utf8Decoder::Decode<unsigned_short>(local_70,(ushort *)(*plVar1 + 0xb),(Vector *)&local_60);
        return plVar1;
      }
    }
    param_2 = (long *)0x0;
  }
  return param_2;
}

