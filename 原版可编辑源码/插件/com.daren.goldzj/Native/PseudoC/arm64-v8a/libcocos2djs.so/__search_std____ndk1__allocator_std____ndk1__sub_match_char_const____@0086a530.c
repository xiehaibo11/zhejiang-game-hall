
/* bool std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__search<std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >(char const*, char
   const*, std::__ndk1::match_results<char const*,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >&,
   std::__ndk1::regex_constants::match_flag_type) const */

bool __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,long param_1,long param_2,
          vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          *param_3,uint param_5)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  sub_match *psVar4;
  
  iVar1 = *(int *)(this + 0x1c);
  psVar4 = (sub_match *)(param_3 + 0x18);
  *(long *)psVar4 = param_2;
  *(long *)(param_3 + 0x20) = param_2;
  param_3[0x28] =
       (vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        )0x0;
  vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
  ::assign(param_3,(ulong)(iVar1 + 1),psVar4);
  *(long *)(param_3 + 0x30) = param_1;
  *(long *)(param_3 + 0x38) = param_1;
  param_3[0x40] =
       (vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        )0x0;
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)psVar4;
  param_3[0x58] = param_3[0x28];
  if ((param_5 >> 0xb & 1) == 0) {
    *(long *)(param_3 + 0x68) = param_1;
  }
  param_3[0x60] =
       (vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        )0x1;
  if ((*(ushort *)(this + 0x18) & 0x1f0) == 0) {
    bVar2 = __match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                      (this,param_1,param_2,param_3,param_5,(param_5 & 0x800) == 0);
  }
  else if (*(int *)(this + 0x1c) == 0) {
    bVar2 = __match_at_start_posix_nosubs<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                      (this,param_1,param_2,param_3,param_5,(param_5 & 0x800) == 0);
  }
  else {
    bVar2 = __match_at_start_posix_subs<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                      (this,param_1,param_2,param_3,param_5,(param_5 & 0x800) == 0);
  }
  if (bVar2) {
LAB_0086a720:
    bVar2 = true;
    if (*(sub_match **)(param_3 + 8) != *(sub_match **)param_3) {
      psVar4 = *(sub_match **)param_3;
    }
    lVar3 = *(long *)psVar4;
    *(long *)(param_3 + 0x38) = lVar3;
    param_3[0x40] =
         (vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          )(*(long *)(param_3 + 0x30) != lVar3);
    lVar3 = *(long *)(psVar4 + 8);
    *(long *)(param_3 + 0x48) = lVar3;
    param_3[0x58] =
         (vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          )(lVar3 != *(long *)(param_3 + 0x50));
  }
  else {
    if (((param_1 != param_2) && ((param_5 >> 6 & 1) == 0)) &&
       (param_1 = param_1 + 1, param_1 != param_2)) {
      param_5 = param_5 | 0x80;
      do {
        vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        ::assign(param_3,(*(long *)(param_3 + 8) - *(long *)param_3 >> 3) * -0x5555555555555555,
                 psVar4);
        if ((*(ushort *)(this + 0x18) & 0x1f0) == 0) {
          bVar2 = __match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                            (this,param_1,param_2,param_3,param_5,0);
          if (bVar2) goto LAB_0086a720;
        }
        else if (*(int *)(this + 0x1c) == 0) {
          bVar2 = __match_at_start_posix_nosubs<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                            (this,param_1,param_2,param_3,param_5,0);
          if (bVar2) goto LAB_0086a720;
        }
        else {
          bVar2 = __match_at_start_posix_subs<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                            (this,param_1,param_2,param_3,param_5,0);
          if (bVar2) goto LAB_0086a720;
        }
        vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        ::assign(param_3,(*(long *)(param_3 + 8) - *(long *)param_3 >> 3) * -0x5555555555555555,
                 psVar4);
        param_1 = param_1 + 1;
      } while (param_2 != param_1);
    }
    bVar2 = false;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)param_3;
  }
  return bVar2;
}

