
/* v8::internal::Handle<v8::internal::String> v8::internal::JsonParser<unsigned
   short>::DecodeString<v8::internal::SeqTwoByteString>(v8::internal::JsonString const&,
   v8::internal::Handle<v8::internal::SeqTwoByteString>, v8::internal::Handle<v8::internal::String>)
    */

long * __thiscall
v8::internal::JsonParser<unsigned_short>::DecodeString<v8::internal::SeqTwoByteString>
          (JsonParser<unsigned_short> *this,int *param_1,long *param_3,long *param_4)

{
  ushort *puVar1;
  long *plVar2;
  ulong uVar3;
  ushort *local_50;
  ulong uStack_48;
  
  puVar1 = (ushort *)(*param_3 + 0xb);
  if ((*(byte *)(param_1 + 2) >> 2 & 1) == 0) {
    CopyChars<unsigned_short,unsigned_short>
              (puVar1,(ushort *)(*(long *)(this + 0x40) + (long)*param_1 * 2),(long)param_1[1]);
  }
  else {
    DecodeString<unsigned_short>(this,puVar1,*param_1,param_1[1]);
    if ((*(byte *)(param_1 + 2) >> 1 & 1) != 0) {
      uVar3 = (ulong)param_1[1];
      local_50 = puVar1;
      uStack_48 = uVar3;
      if (param_4 != (long *)0x0) {
        uVar3 = FUN_01047cbc(&local_50,param_4);
        if ((uVar3 & 1) != 0) {
          return param_4;
        }
        uVar3 = (ulong)(uint)param_1[1];
      }
      plVar2 = (long *)Factory::InternalizeString<v8::internal::SeqTwoByteString>
                                 (*(Factory **)this,param_3,0,uVar3,0);
      return plVar2;
    }
  }
  return param_3;
}

