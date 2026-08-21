
/* universe::CustomFileManager::basename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall universe::CustomFileManager::basename(CustomFileManager *this,basic_string *param_1)

{
  CustomFileManager *pCVar1;
  CustomFileManager CVar2;
  ulong uVar3;
  void *pvVar4;
  ulong *in_x8;
  ulong uVar5;
  CustomFileManager *__src;
  ulong uVar6;
  ulong uVar7;
  
                    /* try { // try from 009f8b78 to 00af8b7f has its CatchHandler @ 009f8ea0 */
                    /* try { // try from 009f8b80 to 00af8bfb has its CatchHandler @ 009f8b20 */
  CVar2 = *this;
  uVar5 = *(ulong *)(this + 8);
  uVar6 = (ulong)((byte)CVar2 >> 1);
  if (((byte)CVar2 & 1) != 0) {
    uVar6 = uVar5;
  }
  if (uVar6 == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (((byte)CVar2 & 1) == 0) {
LAB_009f8c4c:
      uVar5 = *(ulong *)(this + 8);
      uVar6 = *(ulong *)this;
      in_x8[2] = *(ulong *)(this + 0x10);
      in_x8[1] = uVar5;
      *in_x8 = uVar6;
      return;
    }
    if (0xffffffffffffffef < uVar5) goto LAB_009f8cf0;
    __src = *(CustomFileManager **)(this + 0x10);
    if (uVar5 < 0x17) goto LAB_009f8c30;
LAB_009f8c74:
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = operator_new(uVar6);
    in_x8[1] = uVar5;
    in_x8[2] = (ulong)pvVar4;
    *in_x8 = uVar6 | 1;
  }
  else {
    __src = *(CustomFileManager **)(this + 0x10);
    uVar3 = uVar6;
    pCVar1 = __src;
    if (((byte)CVar2 & 1) == 0) {
      pCVar1 = this + 1;
    }
    do {
      uVar7 = uVar3;
      if (uVar7 == 0) goto LAB_009f8c14;
      pvVar4 = memchr(&DAT_01889e24,(uint)(byte)pCVar1[uVar7 - 1],2);
      uVar3 = uVar7 - 1;
    } while (pvVar4 == (void *)0x0);
    if (uVar7 - 1 == 0xffffffffffffffff) {
LAB_009f8c14:
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      if (((byte)CVar2 & 1) == 0) goto LAB_009f8c4c;
      if (0xffffffffffffffef < uVar5) goto LAB_009f8cf0;
      if (0x16 < uVar5) goto LAB_009f8c74;
LAB_009f8c30:
      pvVar4 = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar5 << 1);
      if (uVar5 == 0) goto LAB_009f8cd0;
    }
    else {
      uVar5 = uVar6 - uVar7;
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      if (uVar6 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      if (0xffffffffffffffef < uVar5) {
LAB_009f8cf0:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
                    /* try { // try from 009f8bfc to 00af8bff has its CatchHandler @ 009f8e98 */
                    /* try { // try from 009f8c00 to 00af8f6f has its CatchHandler @ 009f8b20 */
      if (uVar5 < 0x17) {
        pvVar4 = (void *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar5 << 1);
        if (uVar5 == 0) goto LAB_009f8cd0;
      }
      else {
        uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar4 = operator_new(uVar6);
        in_x8[1] = uVar5;
        in_x8[2] = (ulong)pvVar4;
        *in_x8 = uVar6 | 1;
      }
      __src = pCVar1 + uVar7;
    }
  }
  memcpy(pvVar4,__src,uVar5);
LAB_009f8cd0:
  *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  return;
}

