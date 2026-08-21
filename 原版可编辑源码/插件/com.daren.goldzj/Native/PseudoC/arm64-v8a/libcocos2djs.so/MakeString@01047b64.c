
/* v8::internal::JsonParser<unsigned short>::MakeString(v8::internal::JsonString const&,
   v8::internal::Handle<v8::internal::String>) */

long __thiscall
v8::internal::JsonParser<unsigned_short>::MakeString
          (JsonParser<unsigned_short> *this,int *param_1,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_40;
  long lStack_38;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    lVar3 = *(long *)this + 200;
  }
  else {
    if ((*(byte *)(param_1 + 2) & 6) != 2) {
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        lVar3 = Factory::NewRawTwoByteString();
        if (lVar3 != 0) {
          lVar3 = DecodeString<v8::internal::SeqTwoByteString>(this,param_1,lVar3,param_3);
          return lVar3;
        }
      }
      else {
        lVar3 = Factory::NewRawOneByteString(*(Factory **)this,(long)iVar1,0);
        if (lVar3 != 0) {
          lVar3 = DecodeString<v8::internal::SeqOneByteString>(this,param_1,lVar3,param_3);
          return lVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (param_3 != 0) {
      local_40 = *(long *)(this + 0x40) + (long)*param_1 * 2;
      lStack_38 = (long)iVar1;
      uVar2 = FUN_01047cbc(&local_40,param_3);
      if ((uVar2 & 1) != 0) {
        return param_3;
      }
    }
    if (this[0x11] != (JsonParser<unsigned_short>)0x0) {
      lVar3 = Factory::InternalizeString<v8::internal::SeqTwoByteString>
                        (*(Factory **)this,*(undefined8 *)(this + 0x28),*param_1,param_1[1],
                         *(byte *)(param_1 + 2) & 1);
      return lVar3;
    }
    lStack_38 = (long)param_1[1];
    local_40 = *(long *)(this + 0x40) + (long)*param_1 * 2;
    lVar3 = Factory::InternalizeString<unsigned_short>
                      (*(Factory **)this,(Vector *)&local_40,(bool)(*(byte *)(param_1 + 2) & 1));
  }
  return lVar3;
}

