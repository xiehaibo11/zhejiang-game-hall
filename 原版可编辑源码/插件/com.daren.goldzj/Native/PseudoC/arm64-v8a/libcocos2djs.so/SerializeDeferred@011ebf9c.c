
/* v8::internal::Serializer::ObjectSerializer::SerializeDeferred() */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeDeferred(ObjectSerializer *this)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  byte local_54 [4];
  
  if (FLAG_trace_serializer != '\0') {
    PrintF(" Encoding deferred heap object: ");
    Object::ShortPrint((Object *)(this + 0x10),(__sFILE *)waitpid);
    PrintF("\n");
  }
  uVar5 = *(ulong *)(this + 0x10);
  uVar4 = HeapObject::SizeFromMap
                    ((HeapObject *)(this + 0x10),
                     uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1));
  uVar5 = *(ulong *)(this + 0x10);
  uVar2 = *(uint *)(uVar5 - 1);
  lVar6 = *(long *)(*(long *)(this + 8) + 0x70);
  uVar3 = *(int *)(*(long *)(this + 8) + 0x78) - 1;
  uVar7 = (ulong)(uVar3 & (uint)uVar5);
  lVar8 = lVar6 + uVar7 * 0x18;
  if ((*(char *)(lVar8 + 0x14) != '\0') && (*(ulong *)(lVar6 + uVar7 * 0x18) != uVar5)) {
    do {
      uVar7 = (ulong)((int)uVar7 + 1U & uVar3);
      if (*(char *)(lVar6 + uVar7 * 0x18 + 0x14) == '\0') break;
    } while (*(ulong *)(lVar6 + uVar7 * 0x18) != uVar5);
    lVar8 = lVar6 + uVar7 * 0x18;
  }
  pcVar9 = (char *)0x0;
  uVar7 = 6;
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x14) != '\0')) {
    uVar7 = *(ulong *)(lVar8 + 8);
    pcVar9 = (char *)(uVar7 >> 0x20);
  }
  if (*(int *)(this + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == bytes_processed_so_far_");
  }
  *(undefined4 *)(this + 0x20) = 4;
  this_00 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  local_54[0] = (byte)uVar7 & 0xf;
  if (*(byte **)(this_00 + 8) == *(byte **)(this_00 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_54);
  }
  else {
    **(byte **)(this_00 + 8) = local_54[0];
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
  }
  lVar6 = *(long *)(this + 8);
  uVar1 = *(undefined8 *)(this + 0x10);
  uVar3 = (uint)uVar7 & 0xf;
  if ((uVar3 != 5) && (uVar3 != 4)) {
    SnapshotByteSink::PutInt(lVar6 + 0x50,(char *)(uVar7 >> 4 & 0xfffffff));
  }
  SnapshotByteSink::PutInt(lVar6 + 0x50,pcVar9);
  *(undefined8 *)(lVar6 + (long)*(int *)(lVar6 + 0x48) * 8 + 8) = uVar1;
  *(uint *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1U & 7;
  SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)((long)((ulong)uVar4 << 0x20) >> 0x22));
  SerializeContent(this,uVar5 & 0xffffffff00000000 | (ulong)uVar2,uVar4);
  return;
}

