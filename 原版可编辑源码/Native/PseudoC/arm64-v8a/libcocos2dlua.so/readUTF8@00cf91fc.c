
/* cocosbuilder::CCBReader::readUTF8() */

void cocosbuilder::CCBReader::readUTF8(void)

{
  ulong __n;
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  long in_x0;
  char *__s;
  size_t sVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  lVar5 = (long)*(int *)(in_x0 + 0x40);
  lVar6 = *(long *)(in_x0 + 0x38);
  uVar1 = *(undefined1 *)(lVar6 + lVar5);
  *(int *)(in_x0 + 0x40) = (int)(lVar5 + 1);
  uVar2 = *(undefined1 *)(lVar6 + lVar5 + 1);
  *(int *)(in_x0 + 0x40) = (int)(lVar5 + 2);
  uVar3 = CONCAT11(uVar1,uVar2);
  __n = (ulong)uVar3;
  __s = malloc(__n + 1);
  memcpy(__s,(void *)(lVar6 + lVar5 + 2),__n);
  __s[__n] = '\0';
  sVar4 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(in_x8,__s,sVar4);
  free(__s);
  *(uint *)(in_x0 + 0x40) = *(int *)(in_x0 + 0x40) + (uint)uVar3;
  return;
}

