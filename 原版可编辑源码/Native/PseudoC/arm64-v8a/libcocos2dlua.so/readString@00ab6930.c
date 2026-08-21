
/* fairygui::ByteBuffer::readString(int) */

void fairygui::ByteBuffer::readString(int param_1)

{
  int iVar1;
  ulong uVar2;
  char *__dest;
  int in_w1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar3;
  
                    /* try { // try from 00ab6930 to 00bb6947 has its CatchHandler @ 00ab6a8c */
  uVar2 = (ulong)(uint)param_1;
                    /* try { // try from 00ab694c to 00bb697b has its CatchHandler @ 00ab6a88 */
  uVar3 = (ulong)(in_w1 + 1);
  if ((long)uVar3 < 0) {
    uVar3 = 0xffffffffffffffff;
  }
  __dest = operator_new__(uVar3);
  __dest[in_w1] = '\0';
  iVar1 = *(int *)(uVar2 + 0x1c);
                    /* try { // try from 00ab697c to 00bb6a6b has its CatchHandler @ 00ab679c */
  memcpy(__dest,(void *)(*(long *)(uVar2 + 8) + (long)iVar1),(long)in_w1);
  *(int *)(uVar2 + 0x1c) = iVar1 + in_w1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,__dest);
  operator_delete__(__dest);
  return;
}

