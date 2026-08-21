
/* v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>::AsHandle(v8::internal::Isolate*)
    */

long * __thiscall
v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>::AsHandle
          (SeqSubStringKey<v8::internal::SeqOneByteString> *this,Isolate *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Factory::AllocateRawOneByteInternalizedString
                             ((Factory *)param_1,*(int *)(this + 0xc),*(uint *)(this + 8));
  CopyChars<unsigned_char,unsigned_char>
            ((uchar *)(*plVar1 + 0xb),
             (uchar *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) + 0xb),
             (long)*(int *)(this + 0xc));
  return plVar1;
}

