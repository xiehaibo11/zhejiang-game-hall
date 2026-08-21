
/* v8::internal::Serializer::ObjectSerializer::OutputRawData(unsigned long) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::OutputRawData(ObjectSerializer *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  uchar *puVar9;
  int iVar10;
  undefined2 local_50 [2];
  undefined1 local_4c [4];
  uchar local_48 [4];
  uchar local_44 [4];
  
  iVar1 = *(int *)(this + 0x20);
  iVar4 = (int)*(undefined8 *)(this + 0x10);
  iVar2 = iVar4 + -1;
  iVar10 = (int)param_1 - iVar2;
  pcVar8 = (char *)((long)iVar10 - (long)iVar1);
  *(int *)(this + 0x20) = iVar10;
  uVar7 = (uint)pcVar8;
  if (uVar7 == 0) {
    return;
  }
  if (((int)uVar7 < 0x81) && (((ulong)pcVar8 & 3) == 0)) {
    pvVar3 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
    local_48[0] = (char)(uVar7 >> 2) + '_';
    if (*(uchar **)(pvVar3 + 8) == *(uchar **)(pvVar3 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(pvVar3,local_48);
    }
    else {
      **(uchar **)(pvVar3 + 8) = local_48[0];
      *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 1;
    }
  }
  else {
    pvVar3 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
    local_44[0] = '\x1f';
    if (*(undefined1 **)(pvVar3 + 8) == *(undefined1 **)(pvVar3 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(pvVar3,local_44);
    }
    else {
      **(undefined1 **)(pvVar3 + 8) = 0x1f;
      *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 1;
    }
    SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),pcVar8);
  }
  uVar5 = *(ulong *)(this + 0x10);
  uVar6 = uVar5 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x86) {
    local_4c[0] = 0;
    puVar9 = *(uchar **)(this + 0x18);
    if ((iVar1 < 0x22) && (0x21 < iVar10)) {
      SnapshotByteSink::PutRaw(puVar9,iVar2 + iVar1,(char *)(ulong)(0x21 - iVar1));
      SnapshotByteSink::PutRaw(puVar9,(int)local_4c,(char *)0x1);
      iVar4 = iVar4 + 0x21;
      pcVar8 = (char *)(ulong)(iVar10 - 0x22);
      goto LAB_011ee334;
    }
  }
  else if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x9c) {
    local_50[0] = 0;
    puVar9 = *(uchar **)(this + 0x18);
    if ((iVar1 < 9) && (8 < iVar10)) {
      SnapshotByteSink::PutRaw(puVar9,iVar2 + iVar1,(char *)(ulong)(8 - iVar1));
      SnapshotByteSink::PutRaw(puVar9,(int)local_50,(char *)0x2);
      pcVar8 = (char *)(ulong)(iVar10 - 10);
      iVar4 = iVar4 + 9;
      goto LAB_011ee334;
    }
  }
  else {
    puVar9 = *(uchar **)(this + 0x18);
  }
  iVar4 = iVar2 + iVar1;
  pcVar8 = (char *)((ulong)pcVar8 & 0xffffffff);
LAB_011ee334:
  SnapshotByteSink::PutRaw(puVar9,iVar4,pcVar8);
  return;
}

