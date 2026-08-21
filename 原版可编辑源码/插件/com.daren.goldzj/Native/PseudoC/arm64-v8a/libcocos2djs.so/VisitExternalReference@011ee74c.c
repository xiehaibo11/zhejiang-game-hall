
/* v8::internal::Serializer::ObjectSerializer::VisitExternalReference(v8::internal::Foreign,
   unsigned long*) */

void v8::internal::Serializer::ObjectSerializer::VisitExternalReference(long param_1,long param_2)

{
  ulong uVar1;
  uchar *puVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this;
  undefined1 uVar3;
  undefined1 *puVar4;
  uchar local_28 [4];
  uchar local_24 [4];
  
  uVar1 = ExternalReferenceEncoder::Encode
                    ((ExternalReferenceEncoder *)(*(long *)(param_1 + 8) + 0x88),
                     *(ulong *)(param_2 + 3));
  this = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(param_1 + 0x18);
  if ((int)uVar1 < 0) {
    uVar3 = 0x20;
    local_24[0] = ' ';
    puVar4 = *(undefined1 **)(this + 8);
    if (puVar4 != *(undefined1 **)(this + 0x10)) goto LAB_011ee7ac;
    puVar2 = local_24;
  }
  else {
    uVar3 = 0x21;
    local_28[0] = '!';
    puVar4 = *(undefined1 **)(this + 8);
    if (puVar4 != *(undefined1 **)(this + 0x10)) {
LAB_011ee7ac:
      *puVar4 = uVar3;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      goto LAB_011ee7cc;
    }
    puVar2 = local_28;
  }
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
  __push_back_slow_path<unsigned_char_const&>(this,puVar2);
LAB_011ee7cc:
  SnapshotByteSink::PutInt(*(ulong *)(param_1 + 0x18),(char *)(uVar1 & 0x7fffffff));
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
  return;
}

