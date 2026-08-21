
/* fairygui::ByteBuffer::readString() */

void fairygui::ByteBuffer::readString(void)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  long in_x0;
  char *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  int iVar6;
  long lVar7;
  
  iVar3 = *(int *)(in_x0 + 0x1c);
  lVar7 = *(long *)(in_x0 + 8);
  lVar1 = (long)iVar3 + 2;
  iVar6 = (int)lVar1;
  *(int *)(in_x0 + 0x1c) = iVar6;
  puVar2 = (undefined1 *)(lVar7 + (long)iVar3 + (long)*(int *)(in_x0 + 0x10));
  if (*(char *)(in_x0 + 0x18) == '\0') {
    uVar5 = CONCAT11(*puVar2,puVar2[1]);
  }
  else {
    uVar5 = CONCAT11(puVar2[1],*puVar2);
  }
  uVar4 = (uint)uVar5;
  __dest = operator_new__((ulong)(uVar4 + 1));
  __dest[uVar4] = '\0';
  memcpy(__dest,(void *)(lVar7 + lVar1),(ulong)uVar4);
  *(uint *)(in_x0 + 0x1c) = iVar6 + uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,__dest);
  operator_delete__(__dest);
  return;
}

