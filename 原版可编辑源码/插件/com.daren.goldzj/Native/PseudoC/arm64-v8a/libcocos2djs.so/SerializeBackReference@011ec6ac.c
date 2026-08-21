
/* v8::internal::Serializer::SerializeBackReference(v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::Serializer::SerializeBackReference(Serializer *this,long param_2)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  long local_48;
  uchar local_28 [4];
  uchar local_24 [4];
  
  lVar2 = *(long *)(this + 0x70);
  uVar3 = (ulong)(*(int *)(this + 0x78) - 1U & (uint)param_2);
  lVar4 = lVar2 + uVar3 * 0x18;
  if ((*(char *)(lVar4 + 0x14) != '\0') && (*(long *)(lVar2 + uVar3 * 0x18) != param_2)) {
    do {
      uVar3 = (ulong)((int)uVar3 + 1U & *(int *)(this + 0x78) - 1U);
      if (*(char *)(lVar2 + uVar3 * 0x18 + 0x14) == '\0') break;
    } while (*(long *)(lVar2 + uVar3 * 0x18) != param_2);
    lVar4 = lVar2 + uVar3 * 0x18;
  }
  uVar1 = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x14) != '\0')) {
    uVar3 = *(ulong *)(lVar4 + 8);
    uVar6 = (uint)uVar3;
    if (uVar6 == 6) {
      uVar1 = 0;
    }
    else {
      pcVar5 = (char *)(uVar3 >> 0x20);
      local_48 = param_2;
      if (uVar6 == 0x16) {
        if (FLAG_trace_serializer != '\0') {
          PrintF(" Encoding attached reference %d\n",pcVar5);
        }
        local_24[0] = '\x12';
        if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
          std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
          __push_back_slow_path<unsigned_char_const&>
                    ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),
                     local_24);
        }
        else {
          **(undefined1 **)(this + 0x58) = 0x12;
          *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
        }
        SnapshotByteSink::PutInt((ulong)(this + 0x50),pcVar5);
      }
      else {
        if (FLAG_trace_serializer != '\0') {
          PrintF(" Encoding back reference to: ");
          Object::ShortPrint((Object *)&local_48,(__sFILE *)waitpid);
          PrintF("\n");
        }
        local_28[0] = ((byte)uVar3 & 0xf) + 8;
        this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50);
        if (*(uchar **)(this + 0x58) == *(uchar **)(this + 0x60)) {
          std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
          __push_back_slow_path<unsigned_char_const&>(this_00,local_28);
        }
        else {
          **(uchar **)(this + 0x58) = local_28[0];
          *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
        }
        lVar2 = local_48;
        if (((uVar6 & 0xf) != 4) && ((uVar6 & 0xf) != 5)) {
          SnapshotByteSink::PutInt((ulong)this_00,(char *)(uVar3 >> 4 & 0xfffffff));
        }
        SnapshotByteSink::PutInt((ulong)this_00,pcVar5);
        *(long *)(this + (long)*(int *)(this + 0x48) * 8 + 8) = lVar2;
        *(uint *)(this + 0x48) = *(int *)(this + 0x48) + 1U & 7;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

