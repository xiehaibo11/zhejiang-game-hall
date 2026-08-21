
/* v8::internal::Serializer::PutRoot(v8::internal::RootIndex, v8::internal::HeapObject) */

void __thiscall v8::internal::Serializer::PutRoot(Serializer *this,ushort param_2,ulong param_3)

{
  ulong local_38;
  uchar local_18 [4];
  uchar local_14 [4];
  
  local_38 = param_3;
  if (FLAG_trace_serializer != '\0') {
    PrintF(" Encoding root %d:",(ulong)param_2);
    Object::ShortPrint((Object *)&local_38,(__sFILE *)waitpid);
    PrintF("\n");
  }
  if ((param_2 < 0x20) && ((*(byte *)((local_38 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    local_14[0] = (char)param_2 + '@';
    if (*(uchar **)(this + 0x58) == *(uchar **)(this + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),
                 local_14);
    }
    else {
      **(uchar **)(this + 0x58) = local_14[0];
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    }
  }
  else {
    local_18[0] = '\x11';
    if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),
                 local_18);
    }
    else {
      **(undefined1 **)(this + 0x58) = 0x11;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    }
    SnapshotByteSink::PutInt((ulong)(this + 0x50),(char *)(ulong)param_2);
    *(ulong *)(this + (long)*(int *)(this + 0x48) * 8 + 8) = local_38;
    *(uint *)(this + 0x48) = *(int *)(this + 0x48) + 1U & 7;
  }
  return;
}

