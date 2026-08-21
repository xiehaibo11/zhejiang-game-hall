
/* v8::internal::SeqSubStringKey<v8::internal::SeqTwoByteString>::AsHandle(v8::internal::Isolate*)
    */

long * __thiscall
v8::internal::SeqSubStringKey<v8::internal::SeqTwoByteString>::AsHandle
          (SeqSubStringKey<v8::internal::SeqTwoByteString> *this,Isolate *param_1)

{
  long *plVar1;
  
  if (this[0x1c] == (SeqSubStringKey<v8::internal::SeqTwoByteString>)0x0) {
    plVar1 = (long *)Factory::AllocateRawTwoByteInternalizedString
                               ((Factory *)param_1,*(int *)(this + 0xc),*(uint *)(this + 8));
    CopyChars<unsigned_short,unsigned_short>
              ((ushort *)(*plVar1 + 0xb),
               (ushort *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) * 2 + 0xb),
               (long)*(int *)(this + 0xc));
  }
  else {
    plVar1 = (long *)Factory::AllocateRawOneByteInternalizedString
                               ((Factory *)param_1,*(int *)(this + 0xc),*(uint *)(this + 8));
    CopyChars<unsigned_short,unsigned_char>
              ((uchar *)(*plVar1 + 0xb),
               (ushort *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) * 2 + 0xb),
               (long)*(int *)(this + 0xc));
  }
  return plVar1;
}

