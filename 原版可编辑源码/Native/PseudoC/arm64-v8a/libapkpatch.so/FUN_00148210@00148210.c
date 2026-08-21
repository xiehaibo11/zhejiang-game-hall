
void FUN_00148210(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  byte bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  bool bVar5;
  size_t __n_00;
  byte *__src;
  size_t sVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong uVar8;
  
  bVar2 = *param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  __n_00 = strlen(param_3);
  __src = *(byte **)(param_2 + 0x10);
  bVar5 = (bVar2 & 1) != 0;
  __n = (ulong)(bVar2 >> 1);
  if (bVar5) {
    __n = sVar6;
  }
  uVar8 = __n + __n_00;
  if (!bVar5) {
    __src = param_2 + 1;
  }
  if (uVar8 < 0xfffffffffffffff0) {
    if (uVar8 < 0x17) {
      pbVar7 = param_1 + 1;
      *param_1 = SUB41((int)__n << 1,0);
    }
    else {
      uVar8 = uVar8 + 0x10 & 0xfffffffffffffff0;
      pbVar7 = operator_new(uVar8);
      *(size_t *)(param_1 + 8) = __n;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (param_1 + 0x10) = pbVar7;
      *(ulong *)param_1 = uVar8 | 1;
    }
    if (__n != 0) {
      memcpy(pbVar7,__src,__n);
    }
    pbVar7[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
    bVar3 = *param_1;
    uVar8 = (ulong)((byte)bVar3 >> 1);
    uVar4 = 0x16;
    if (((byte)bVar3 & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 8);
      uVar4 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar8 < __n_00) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace(param_1,uVar4,(uVar8 + __n_00) - uVar4,uVar8,uVar8,0,__n_00,param_3);
    }
    else if (__n_00 != 0) {
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      memcpy(pbVar7 + uVar8,param_3,__n_00);
      lVar1 = uVar8 + __n_00;
      if (((byte)*param_1 & 1) == 0) {
        *param_1 = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(param_1 + 8) = lVar1;
      }
      pbVar7[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}

