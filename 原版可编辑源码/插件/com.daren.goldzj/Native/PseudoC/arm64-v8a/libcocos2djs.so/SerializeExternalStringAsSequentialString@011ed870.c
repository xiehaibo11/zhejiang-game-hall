
/* v8::internal::Serializer::ObjectSerializer::SerializeExternalStringAsSequentialString() */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeExternalStringAsSequentialString
          (ObjectSerializer *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  uchar local_4c [4];
  uchar local_48 [4];
  uchar local_44 [4];
  
  uVar3 = *(ulong *)(this + 0x10);
  uVar11 = *(uint *)(uVar3 + 7);
  uVar9 = uVar3 & 0xffffffff00000000 | 7;
  uVar4 = *(ushort *)(uVar9 + *(uint *)(uVar3 - 1));
  if (((*(ushort *)(uVar9 + *(uint *)(uVar3 - 1)) < 0x40) &&
      ((*(ushort *)(uVar9 + *(uint *)(uVar3 - 1)) & 7) == 2)) &&
     ((*(byte *)(uVar9 + *(uint *)(uVar3 - 1)) >> 3 & 1) != 0)) {
    lVar10 = **(long **)(uVar3 + 0xb);
    lVar2 = 0x108;
    if (0x1f < uVar4) {
      lVar2 = 0x100;
    }
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x68) + lVar2);
  }
  else {
    lVar10 = **(long **)(uVar3 + 0xb);
    lVar2 = 0x328;
    if (0x1f < uVar4) {
      lVar2 = 0x2e0;
    }
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x68) + lVar2);
    uVar11 = uVar11 << 1;
  }
  iVar6 = (**(code **)(lVar10 + 0x30))();
  uVar1 = uVar11 + 0xf & 0xfffffffc;
  uVar8 = 5;
  if ((int)uVar1 < 0x20001) {
    uVar8 = 2;
  }
  SerializePrologue(this,uVar8,uVar1,uVar12);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  local_44[0] = '\x1f';
  if (*(undefined1 **)(pvVar7 + 8) == *(undefined1 **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_44);
  }
  else {
    **(undefined1 **)(pvVar7 + 8) = 0x1f;
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)(long)(int)(uVar1 - 4));
  local_48[0] = *(uchar *)(uVar3 + 3);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 4);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 5);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 6);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 7);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 8);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 9);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  local_48[0] = *(uchar *)(uVar3 + 10);
  pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if (*(uchar **)(pvVar7 + 8) == *(uchar **)(pvVar7 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar7,local_48);
  }
  else {
    **(uchar **)(pvVar7 + 8) = local_48[0];
    *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
  }
  SnapshotByteSink::PutRaw(*(uchar **)(this + 0x18),iVar6,(char *)(ulong)uVar11);
  if (0 < (int)((uVar1 - uVar11) + -0xc)) {
    iVar6 = (uVar11 - uVar1) + 0xc;
    do {
      while( true ) {
        pvVar7 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
        local_4c[0] = '\0';
        if (*(undefined1 **)(pvVar7 + 8) == *(undefined1 **)(pvVar7 + 0x10)) break;
        **(undefined1 **)(pvVar7 + 8) = 0;
        *(long *)(pvVar7 + 8) = *(long *)(pvVar7 + 8) + 1;
        bVar5 = iVar6 == -1;
        iVar6 = iVar6 + 1;
        if (bVar5) {
          return;
        }
      }
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(pvVar7,local_4c);
      bVar5 = iVar6 != -1;
      iVar6 = iVar6 + 1;
    } while (bVar5);
  }
  return;
}

