
/* v8::internal::Factory::NewStringFromOneByte(v8::internal::Vector<unsigned char const> const&,
   v8::internal::AllocationType) */

Factory * v8::internal::Factory::NewStringFromOneByte(Factory *param_1,undefined8 *param_2)

{
  Factory *pFVar1;
  int iVar2;
  
  iVar2 = (int)param_2[1];
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      param_1 = param_1 + 200;
    }
    else {
      param_1 = (Factory *)NewRawOneByteString(param_1,param_2[1] & 0xffffffff);
      if (param_1 != (Factory *)0x0) {
        CopyChars<unsigned_char,unsigned_char>
                  ((uchar *)(*(long *)param_1 + 0xb),(uchar *)*param_2,(long)iVar2);
      }
    }
    return param_1;
  }
  pFVar1 = (Factory *)LookupSingleCharacterStringFromCode(param_1,(ushort)*(byte *)*param_2);
  return pFVar1;
}

