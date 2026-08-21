
/* cocos2d::utils::parseIntegerList(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::utils::parseIntegerList(utils *this,basic_string *param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  vector<int,std::__ndk1::allocator<int>> *in_x8;
  utils *__nptr;
  utils *__nptr_00;
  utils *local_58;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  __nptr = *(utils **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    __nptr = this + 1;
  }
  lVar4 = strtol((char *)__nptr,(char **)&local_58,10);
  __nptr_00 = local_58;
  if (local_58 != __nptr) {
    piVar5 = (int *)__errno();
    do {
      if (*piVar5 == 0x22) {
        *piVar5 = 0;
      }
      piVar1 = *(int **)(in_x8 + 8);
      local_4c = (int)lVar4;
      if (piVar1 < *(int **)(in_x8 + 0x10)) {
        *piVar1 = local_4c;
        *(int **)(in_x8 + 8) = piVar1 + 1;
      }
      else {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                  (in_x8,&local_4c);
      }
      lVar4 = strtol((char *)__nptr_00,(char **)&local_58,10);
      bVar3 = local_58 != __nptr_00;
      __nptr_00 = local_58;
    } while (bVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

