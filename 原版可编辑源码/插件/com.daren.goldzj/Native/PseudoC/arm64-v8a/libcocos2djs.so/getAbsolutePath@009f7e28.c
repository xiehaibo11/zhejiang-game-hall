
/* universe::CustomFileManager::getAbsolutePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void universe::CustomFileManager::getAbsolutePath(basic_string *param_1)

{
  ulong uVar1;
  basic_string *in_x1;
  basic_string *in_x2;
  ulong *in_x8;
  void *__dest;
  void *__src;
  ulong uVar2;
  
                    /* try { // try from 009f7e2c to 00af7e33 has its CatchHandler @ 009f7ec4 */
                    /* try { // try from 009f7e34 to 00af7e53 has its CatchHandler @ 009f7d64 */
  uVar1 = (**(code **)(*(long *)param_1 + 0x40))();
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 009f7e7c to 00af7e87 has its CatchHandler @ 009f7ec4 */
                    /* try { // try from 009f7e88 to 00af7ecb has its CatchHandler @ 009f7d64 */
    std::__ndk1::operator+((__ndk1 *)(param_1 + 8),in_x1,in_x2);
    return;
  }
                    /* try { // try from 009f7e54 to 00af7e5b has its CatchHandler @ 009f7ec4 */
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
                    /* try { // try from 009f7e5c to 00af7e7b has its CatchHandler @ 009f7d64 */
  if (((byte)*in_x1 & 1) == 0) {
    uVar2 = *(ulong *)(in_x1 + 8);
    uVar1 = *(ulong *)in_x1;
    in_x8[2] = *(ulong *)(in_x1 + 0x10);
    in_x8[1] = uVar2;
    *in_x8 = uVar1;
    return;
  }
  uVar1 = *(ulong *)(in_x1 + 8);
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(in_x1 + 0x10);
  if (uVar1 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar1 << 1);
    if (uVar1 == 0) goto LAB_009f7eec;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7e2c with catch @ 009f7ec4
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7e54 with catch @ 009f7ec4
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7e7c with catch @ 009f7ec4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7dcc with catch @ 009f7ec8
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7df8 with catch @ 009f7ec8
                        */
    __dest = operator_new(uVar2);
    in_x8[1] = uVar1;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,uVar1);
LAB_009f7eec:
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return;
}

