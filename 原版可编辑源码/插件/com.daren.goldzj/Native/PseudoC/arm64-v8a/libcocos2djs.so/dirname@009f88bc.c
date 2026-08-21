
/* universe::CustomFileManager::dirname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall universe::CustomFileManager::dirname(CustomFileManager *this,basic_string *param_1)

{
  CustomFileManager CVar1;
  void *pvVar2;
  ulong *in_x8;
  CustomFileManager *__src;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  CVar1 = *this;
  uVar3 = *(ulong *)(this + 8);
  uVar4 = (ulong)((byte)CVar1 >> 1);
  if (((byte)CVar1 & 1) != 0) {
    uVar4 = uVar3;
  }
  if (uVar4 == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (((byte)CVar1 & 1) == 0) {
      uVar3 = *(ulong *)(this + 8);
      uVar4 = *(ulong *)this;
      in_x8[2] = *(ulong *)(this + 0x10);
      in_x8[1] = uVar3;
      *in_x8 = uVar4;
      return;
    }
    if (0xffffffffffffffef < uVar3) goto LAB_009f8a30;
    pvVar2 = *(void **)(this + 0x10);
    if (uVar3 < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar3 << 1);
      if (uVar3 == 0) goto LAB_009f8a18;
    }
    else {
      uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      in_x8[1] = uVar3;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar4 | 1;
    }
    memcpy(__dest,pvVar2,uVar3);
LAB_009f8a18:
    *(undefined1 *)((long)__dest + uVar3) = 0;
    return;
  }
  __src = *(CustomFileManager **)(this + 0x10);
  uVar3 = uVar4;
  if (((byte)CVar1 & 1) == 0) {
    __src = this + 1;
  }
  do {
    uVar5 = uVar3;
    if (uVar5 == 0) goto LAB_009f8960;
    pvVar2 = memchr(&DAT_01889e24,(uint)(byte)__src[uVar5 - 1],2);
    uVar3 = uVar5 - 1;
  } while (pvVar2 == (void *)0x0);
  if (uVar5 - 1 == 0xffffffffffffffff) {
LAB_009f8960:
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    return;
  }
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0xffffffffffffffef < uVar4) {
LAB_009f8a30:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    pvVar2 = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar4 << 1);
    if (uVar4 == 0) goto LAB_009f89e0;
  }
  else {
    uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar3);
    in_x8[1] = uVar4;
    in_x8[2] = (ulong)pvVar2;
    *in_x8 = uVar3 | 1;
  }
  memcpy(pvVar2,__src,uVar4);
LAB_009f89e0:
  *(undefined1 *)((long)pvVar2 + uVar4) = 0;
  return;
}

