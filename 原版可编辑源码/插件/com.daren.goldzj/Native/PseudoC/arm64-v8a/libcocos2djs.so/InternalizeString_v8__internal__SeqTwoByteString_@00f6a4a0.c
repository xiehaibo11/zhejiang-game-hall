
/* v8::internal::Handle<v8::internal::String>
   v8::internal::Factory::InternalizeString<v8::internal::SeqTwoByteString>(v8::internal::Handle<v8::internal::SeqTwoByteString>,
   int, int, bool) */

void __thiscall
v8::internal::Factory::InternalizeString<v8::internal::SeqTwoByteString>
          (Factory *this,long *param_2,int param_3,int param_4,byte param_5)

{
  undefined **local_40;
  uint local_38;
  int iStack_34;
  long *local_30;
  int local_28;
  byte local_24;
  
  local_38 = 0;
  local_24 = param_5 & 1;
  local_40 = &PTR__StringTableKey_01ca7110;
  iStack_34 = param_4;
  local_30 = param_2;
  local_28 = param_3;
  local_38 = StringHasher::HashSequentialString<unsigned_short>
                       ((ushort *)(*param_2 + (long)param_3 * 2 + 0xb),param_4,
                        *(ulong *)(*(long *)(this + 0x490) + 7));
  StringTable::LookupKey<v8::internal::SeqSubStringKey<v8::internal::SeqTwoByteString>>
            ((Isolate *)this,(SeqSubStringKey *)&local_40);
  return;
}

