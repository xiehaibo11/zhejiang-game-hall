
/* cocosbuilder::CCBReader::deletePathExtension(char const*) */

void __thiscall cocosbuilder::CCBReader::deletePathExtension(CCBReader *this,char *param_1)

{
  void *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong *in_x8;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,(char *)this);
  pvVar5 = local_50;
  uVar6 = uStack_58;
  uVar3 = local_60;
  __src = (void *)((ulong)&local_60 | 1);
  __n = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    __src = local_50;
    __n = uStack_58;
  }
  uVar4 = __n;
  if (__n != 0) {
    do {
      if (uVar4 == 0) goto LAB_00cfabdc;
      lVar2 = uVar4 - 1;
      uVar4 = uVar4 - 1;
    } while (*(char *)((long)__src + lVar2) != '.');
    if (uVar4 != 0xffffffffffffffff) {
      if (uVar4 <= __n) {
        __n = uVar4;
      }
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        pvVar5 = (void *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)__n << 1);
        if (__n != 0) goto LAB_00cfac3c;
      }
      else {
        uVar6 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar5 = operator_new(uVar6);
        in_x8[1] = __n;
        in_x8[2] = (ulong)pvVar5;
        *in_x8 = uVar6 | 1;
LAB_00cfac3c:
        memcpy(pvVar5,__src,__n);
      }
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      if ((uVar3 & 1) != 0) {
        operator_delete(local_50);
      }
      goto LAB_00cfabf4;
    }
  }
LAB_00cfabdc:
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  in_x8[2] = (ulong)pvVar5;
  in_x8[1] = uVar6;
  *in_x8 = uVar3;
LAB_00cfabf4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

