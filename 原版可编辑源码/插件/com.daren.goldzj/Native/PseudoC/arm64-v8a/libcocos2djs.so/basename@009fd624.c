
/* universe::FileInterface::basename(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall universe::FileInterface::basename(FileInterface *this,basic_string *param_1)

{
  FileInterface *pFVar1;
  FileInterface FVar2;
  ulong uVar3;
  void *pvVar4;
  FileInterface *__src;
  ulong *in_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
                    /* try { // try from 009fd638 to 00afd6a7 has its CatchHandler @ 009fd738 */
  FVar2 = *this;
  uVar7 = *(ulong *)(this + 8);
  pFVar1 = *(FileInterface **)(this + 0x10);
  uVar3 = uVar7;
  uVar5 = uVar7;
  __src = pFVar1;
  if (((byte)FVar2 & 1) == 0) {
    uVar3 = (ulong)((byte)FVar2 >> 1);
    uVar5 = (ulong)((byte)FVar2 >> 1);
    __src = this + 1;
  }
  do {
    uVar6 = uVar3;
    if (uVar6 == 0) goto LAB_009fd6c8;
    pvVar4 = memchr(&DAT_01889e24,(uint)(byte)__src[uVar6 - 1],2);
    uVar3 = uVar6 - 1;
  } while (pvVar4 == (void *)0x0);
  if (uVar6 - 1 == 0xffffffffffffffff) {
LAB_009fd6c8:
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
                    /* try { // try from 009fd6d0 to 00afd6df has its CatchHandler @ 009fd738 */
    if (((byte)FVar2 & 1) == 0) {
      uVar5 = *(ulong *)(this + 8);
      uVar7 = *(ulong *)this;
      in_x8[2] = *(ulong *)(this + 0x10);
                    /* try { // try from 009fd6e0 to 00afd753 has its CatchHandler @ 009fd4f8 */
      in_x8[1] = uVar5;
      *in_x8 = uVar7;
      return;
    }
    if (0xffffffffffffffef < uVar7) goto LAB_009fd784;
    if (uVar7 < 0x17) {
      *(char *)in_x8 = (char)((int)uVar7 << 1);
      __src = pFVar1;
      goto joined_r0x009fd700;
    }
    uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = operator_new(uVar5);
                    /* catch() { ... } // from try @ 009fd620 with catch @ 009fd718
                       catch() { ... } // from try @ 009fd6bc with catch @ 009fd718 */
                    /* catch() { ... } // from try @ 009fd5ac with catch @ 009fd71c
                       catch() { ... } // from try @ 009fd6ac with catch @ 009fd71c */
    in_x8[1] = uVar7;
    in_x8[2] = (ulong)pvVar4;
    *in_x8 = uVar5 | 1;
    __src = pFVar1;
  }
  else {
    uVar7 = uVar5;
    if (uVar6 <= uVar5) {
      uVar7 = uVar6;
    }
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
                    /* try { // try from 009fd6ac to 00afd6b7 has its CatchHandler @ 009fd71c */
    if (0xffffffffffffffef < uVar7) {
LAB_009fd784:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar7 < 0x17) {
                    /* try { // try from 009fd6bc to 00afd6c7 has its CatchHandler @ 009fd718 */
      *(char *)in_x8 = (char)((int)uVar7 << 1);
joined_r0x009fd700:
      pvVar4 = (void *)((long)in_x8 + 1);
      if (uVar7 == 0) goto LAB_009fd764;
    }
    else {
                    /* catch() { ... } // from try @ 009fd560 with catch @ 009fd738
                       catch() { ... } // from try @ 009fd5c4 with catch @ 009fd738
                       catch() { ... } // from try @ 009fd638 with catch @ 009fd738
                       catch() { ... } // from try @ 009fd6d0 with catch @ 009fd738 */
      uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = operator_new(uVar5);
      in_x8[1] = uVar7;
      in_x8[2] = (ulong)pvVar4;
      *in_x8 = uVar5 | 1;
    }
  }
  memcpy(pvVar4,__src,uVar7);
LAB_009fd764:
  *(undefined1 *)((long)pvVar4 + uVar7) = 0;
  return;
}

