
/* cocos2d::FileUtils::addSearchResolutionsOrder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::FileUtils::addSearchResolutionsOrder(FileUtils *this,basic_string *param_1,bool param_2)

{
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  void *pvVar1;
  ulong *puVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_70,param_1);
  uVar4 = (ulong)((byte)local_70 >> 1);
  if (((byte)local_70 & 1) != 0) {
    uVar4 = uStack_68;
  }
  if (uVar4 != 0) {
    pvVar1 = (void *)((ulong)&local_70 | 1);
    if (((byte)local_70 & 1) != 0) {
      pvVar1 = local_60;
    }
    if (*(char *)((long)pvVar1 + (uVar4 - 1)) != '/') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(&local_70,"/",1);
    }
  }
  pvVar1 = local_60;
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x58);
  if (param_2) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert(this_00,*(undefined8 *)this_00,&local_70);
    goto joined_r0x00f6b7dc;
  }
  puVar2 = *(ulong **)(this + 0x60);
  if (puVar2 == *(ulong **)(this + 0x68)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this_00,(basic_string *)&local_70);
    goto joined_r0x00f6b7dc;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (((byte)local_70 & 1) == 0) {
    puVar2[2] = (ulong)local_60;
    puVar2[1] = uStack_68;
    *puVar2 = CONCAT71(uStack_6f,local_70);
  }
  else {
    if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_68 < 0x17) {
      __dest = (void *)((long)puVar2 + 1);
      *(char *)puVar2 = (char)((int)uStack_68 << 1);
      if (uStack_68 != 0) goto LAB_00f6b7bc;
    }
    else {
      uVar4 = uStack_68 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      puVar2[1] = uStack_68;
      puVar2[2] = (ulong)__dest;
      *puVar2 = uVar4 | 1;
LAB_00f6b7bc:
      memcpy(__dest,pvVar1,uStack_68);
    }
    *(undefined1 *)((long)__dest + uStack_68) = 0;
  }
  *(ulong **)(this + 0x60) = puVar2 + 3;
joined_r0x00f6b7dc:
  if (((byte)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

