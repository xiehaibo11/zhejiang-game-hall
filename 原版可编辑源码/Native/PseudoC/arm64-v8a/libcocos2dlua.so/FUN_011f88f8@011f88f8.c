
void FUN_011f88f8(undefined8 *param_1,undefined8 *param_2,__shared_count *param_3,ulong param_4)

{
  bool bVar1;
  undefined8 *__s;
  __shared_count *p_Var2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_0172e3a0;
  param_1[1] = 0xffffffffffffffff;
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  lVar3 = lVar4 - lVar3 >> 3;
  uVar5 = 0x1c;
  if (0x1c < lVar3 + 1U) {
    uVar5 = lVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x1d) {
    __s = param_1 + 6;
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  else {
    __s = operator_new(uVar5 * 8);
  }
  param_1[2] = __s;
  param_1[4] = __s + uVar5;
  memset(__s,0,uVar5 * 8);
  param_1[3] = __s + uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x24),"*");
  std::__ndk1::__shared_count::__add_shared(param_3);
  if (param_1 != param_2) {
    FUN_01207e60(plVar6,param_2[2],param_2[3]);
  }
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  if (lVar4 != lVar3) {
    uVar5 = 0;
    uVar7 = 1;
    do {
      p_Var2 = *(__shared_count **)(*plVar6 + uVar5 * 8);
      if (p_Var2 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var2);
        lVar3 = param_2[2];
        lVar4 = param_2[3];
      }
      bVar1 = uVar7 < (ulong)(lVar4 - lVar3 >> 3);
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
  }
  std::__ndk1::__shared_count::__add_shared(param_3);
  lVar3 = param_1[2];
  uVar5 = param_1[3] - lVar3 >> 3;
  if (uVar5 <= param_4) {
    uVar7 = param_4 + 1;
    if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
      FUN_01207fec(plVar6,uVar7 - uVar5);
      lVar3 = *plVar6;
      p_Var2 = *(__shared_count **)(lVar3 + param_4 * 8);
      goto joined_r0x011f8a84;
    }
    if (uVar5 > uVar7) {
      param_1[3] = lVar3 + uVar7 * 8;
      p_Var2 = *(__shared_count **)(lVar3 + param_4 * 8);
      goto joined_r0x011f8a84;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + param_4 * 8);
joined_r0x011f8a84:
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *plVar6;
  }
  *(__shared_count **)(lVar3 + param_4 * 8) = param_3;
  if (param_3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(param_3);
    return;
  }
  return;
}

