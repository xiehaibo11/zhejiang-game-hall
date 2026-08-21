
/* cocos2d::FileUtils::addSearchResolutionsOrder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::FileUtils::addSearchResolutionsOrder(FileUtils *this,basic_string *param_1,bool param_2)

{
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_60 = *(void **)(param_1 + 0x10);
    uStack_68 = *(ulong *)(param_1 + 8);
    local_70 = *(ulong *)param_1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = *(void **)(param_1 + 0x10);
    if (uVar4 < 0x17) {
      pvVar3 = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00873d9c;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar6);
      local_70 = uVar6 | 1;
      uStack_68 = uVar4;
      local_60 = pvVar3;
LAB_00873d9c:
      memcpy(pvVar3,pvVar5,uVar4);
    }
    *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  }
  uVar4 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar4 = uStack_68;
  }
  if (uVar4 != 0) {
    pvVar5 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar5 = local_60;
    }
    if (*(char *)((long)pvVar5 + (uVar4 - 1)) != '/') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"/",1);
    }
  }
  pvVar5 = local_60;
  uVar4 = uStack_68;
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x30);
  if (param_2) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert(this_00,*(undefined8 *)this_00,&local_70);
    goto joined_r0x00873ef8;
  }
  puVar1 = *(ulong **)(this + 0x38);
  if (puVar1 == *(ulong **)(this + 0x40)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this_00,(basic_string *)&local_70);
    goto joined_r0x00873ef8;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((local_70 & 1) == 0) {
    puVar1[2] = (ulong)local_60;
    puVar1[1] = uStack_68;
    *puVar1 = local_70;
  }
  else {
    if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_68 < 0x17) {
      pvVar3 = (void *)((long)puVar1 + 1);
      *(char *)puVar1 = (char)((int)uStack_68 << 1);
      if (uStack_68 != 0) goto LAB_00873ed4;
    }
    else {
      uVar6 = uStack_68 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar6);
      puVar1[1] = uVar4;
      puVar1[2] = (ulong)pvVar3;
      *puVar1 = uVar6 | 1;
LAB_00873ed4:
      memcpy(pvVar3,pvVar5,uVar4);
    }
    *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  }
  *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
joined_r0x00873ef8:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

