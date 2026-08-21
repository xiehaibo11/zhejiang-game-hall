
/* cocos2d::FileUtils::getFullPathForDirectoryAndFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

void cocos2d::FileUtils::getFullPathForDirectoryAndFilename
               (basic_string *param_1,basic_string *param_2)

{
  byte *pbVar1;
  basic_string bVar2;
  long lVar3;
  ulong uVar4;
  byte *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar5;
  basic_string *pbVar6;
  void *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  bVar2 = *param_2;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(in_x8 + 8) = uVar9;
    *(undefined8 *)in_x8 = uVar8;
    goto LAB_008752a8;
  }
  uVar4 = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 0x10);
  if (uVar4 < 0x17) {
    __dest = in_x8 + 1;
    *in_x8 = SUB41((int)uVar4 << 1,0);
    if (uVar4 != 0) goto LAB_00875294;
  }
  else {
    uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    *(ulong *)(in_x8 + 8) = uVar4;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = __dest;
    *(ulong *)in_x8 = uVar7 | 1;
LAB_00875294:
    memcpy(__dest,__src,uVar4);
  }
  __dest[uVar4] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
LAB_008752a8:
  uVar7 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    if (pbVar6[uVar7 - 1] != (basic_string)0x2f) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(in_x8,'/');
    }
  }
  uVar4 = *(ulong *)(in_x2 + 8);
  pbVar1 = *(byte **)(in_x2 + 0x10);
  if ((*in_x2 & 1) == 0) {
    pbVar1 = in_x2 + 1;
    uVar4 = (ulong)(*in_x2 >> 1);
  }
  pbVar6 = (basic_string *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (in_x8,(char *)pbVar1,uVar4);
  normalizePath(pbVar6);
  if (((byte)*in_x8 & 1) == 0) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    **(undefined1 **)(in_x8 + 0x10) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    if (((byte)*in_x8 & 1) != 0) {
      operator_delete(*(void **)(in_x8 + 0x10));
      *(undefined8 *)in_x8 = 0;
    }
  }
  *(undefined8 *)(in_x8 + 0x10) = local_70;
  *(undefined8 *)(in_x8 + 8) = uStack_78;
  *(undefined8 *)in_x8 = local_80;
  uVar4 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
  if ((uVar4 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"",0);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

