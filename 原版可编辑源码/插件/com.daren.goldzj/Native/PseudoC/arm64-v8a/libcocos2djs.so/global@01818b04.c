
/* std::__ndk1::locale::global(std::__ndk1::locale const&) */

void __thiscall std::__ndk1::locale::global(locale *this,locale *param_1)

{
  ulong uVar1;
  char *__locale;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *in_x8;
  long lVar6;
  __shared_count *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)__global();
  this_00 = (__shared_count *)*plVar5;
  *in_x8 = this_00;
  __shared_count::__add_shared(this_00);
  __shared_count::__add_shared(*(__shared_count **)this);
  __shared_count::__release_shared((__shared_count *)*plVar5);
  lVar6 = *(long *)this;
  *plVar5 = lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (local_60,(basic_string *)(lVar6 + 0x120));
  uVar1 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 1) {
    iVar4 = basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      (local_60,0,0xffffffffffffffff,"*",1);
    bVar3 = iVar4 != 0;
  }
  else {
    bVar3 = true;
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (bVar3) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
              (local_60,(basic_string *)(*plVar5 + 0x120));
    __locale = (char *)((ulong)local_60 | 1);
    if (((byte)local_60[0] & 1) != 0) {
      __locale = local_50;
    }
    setlocale(6,__locale);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

