
void FUN_01813c20(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_01cdb9e0;
  param_1[1] = 0xffffffffffffffff;
  uVar3 = (long)(param_2[3] - param_2[2]) >> 3;
  param_1[2] = 0;
  if (uVar3 < 0x1d) {
    uVar3 = 0x1c;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar3 != 0) {
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 < 0x1d) {
      puVar2 = param_1 + 6;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    else {
      puVar2 = operator_new(uVar3 << 3);
    }
    param_1[4] = puVar2 + uVar3;
    lVar4 = -uVar3;
    param_1[2] = puVar2;
    param_1[3] = puVar2;
    do {
      *puVar2 = 0;
      lVar4 = lVar4 + 1;
      puVar2 = (undefined8 *)(param_1[3] + 8);
      param_1[3] = puVar2;
    } while (lVar4 != 0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x24),(basic_string *)(param_2 + 0x24));
  if (param_1 != param_2) {
    FUN_01828350(param_1 + 2,param_2[2],param_2[3]);
  }
  lVar4 = param_1[2];
  lVar5 = param_1[3];
  if (lVar5 != lVar4) {
    uVar3 = 0;
    uVar6 = 1;
    do {
      this = *(__shared_count **)(lVar4 + uVar3 * 8);
      if (this != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this);
        lVar4 = param_1[2];
        lVar5 = param_1[3];
      }
      bVar1 = uVar6 < (ulong)(lVar5 - lVar4 >> 3);
      uVar3 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  return;
}

