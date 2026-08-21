
basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_011f9614(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1
            ,byte *param_2)

{
  long lVar1;
  ulong __n;
  byte *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  __n = *(ulong *)(param_2 + 8);
  __src = *(byte **)(param_2 + 0x10);
  bVar2 = *param_1;
  if ((*param_2 & 1) == 0) {
    __src = param_2 + 1;
    __n = (ulong)(*param_2 >> 1);
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 0x16;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    uVar3 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar4 < __n) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(param_1,uVar3,(uVar4 + __n) - uVar3,uVar4,uVar4,0,__n,(char *)__src);
  }
  else if (__n != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_1 + 0x10);
    }
    memcpy(pbVar5 + uVar4,__src,__n);
    lVar1 = uVar4 + __n;
    if (((byte)*param_1 & 1) == 0) {
      *param_1 = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(param_1 + 8) = lVar1;
    }
    pbVar5[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return param_1;
}

