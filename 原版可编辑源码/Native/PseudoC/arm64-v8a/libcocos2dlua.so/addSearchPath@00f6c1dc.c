
/* cocos2d::FileUtils::addSearchPath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::FileUtils::addSearchPath(FileUtils *this,basic_string *param_1,bool param_2)

{
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  void *pvVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  ulong *puVar2;
  FileUtils *pFVar3;
  long lVar4;
  ulong uVar5;
  basic_string *pbVar6;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88;
  undefined7 uStack_87;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  pbVar6 = (basic_string *)(ulong)param_2;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  uVar5 = (**(code **)(*(long *)this + 0x140))(this,param_1);
  if (((uVar5 & 1) == 0) && ((FileUtils *)&local_70 != this + 0xa0)) {
    pbVar6 = *(basic_string **)(this + 0xa8);
    pFVar3 = *(FileUtils **)(this + 0xb0);
    if (((byte)this[0xa0] & 1) == 0) {
      pFVar3 = this + 0xa1;
      pbVar6 = (basic_string *)(ulong)((byte)this[0xa0] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70,(char *)pFVar3,(ulong)pbVar6);
  }
  std::__ndk1::operator+((__ndk1 *)&local_70,param_1,pbVar6);
  uVar5 = (ulong)((byte)local_88 >> 1);
  if (((byte)local_88 & 1) != 0) {
    uVar5 = uStack_80;
  }
  if (uVar5 != 0) {
    pvVar1 = (void *)((ulong)&local_88 | 1);
    if (((byte)local_88 & 1) != 0) {
      pvVar1 = local_78;
    }
    if (*(char *)((long)pvVar1 + (uVar5 - 1)) != '/') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(&local_88,"/",1);
    }
  }
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x88);
  if (param_2) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert(this_00,*(undefined8 *)this_00,param_1);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)(this + 0x70),*(undefined8 *)(this + 0x70),&local_88);
    goto joined_r0x00f6c41c;
  }
  this_01 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x90);
  if (this_01 ==
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x98)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this_00,param_1);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(this_01,param_1);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x90) = this_01 + 0x18;
  }
  pvVar1 = local_78;
  puVar2 = *(ulong **)(this + 0x78);
  if (puVar2 == *(ulong **)(this + 0x80)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x70),(basic_string *)&local_88);
    goto joined_r0x00f6c41c;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (((byte)local_88 & 1) == 0) {
    puVar2[2] = (ulong)local_78;
    puVar2[1] = uStack_80;
    *puVar2 = CONCAT71(uStack_87,local_88);
  }
  else {
    if (0xffffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_80 < 0x17) {
      __dest = (void *)((long)puVar2 + 1);
      *(char *)puVar2 = (char)((int)uStack_80 << 1);
      if (uStack_80 != 0) goto LAB_00f6c3fc;
    }
    else {
      uVar5 = uStack_80 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      puVar2[1] = uStack_80;
      puVar2[2] = (ulong)__dest;
      *puVar2 = uVar5 | 1;
LAB_00f6c3fc:
      memcpy(__dest,pvVar1,uStack_80);
    }
    *(undefined1 *)((long)__dest + uStack_80) = 0;
  }
  *(ulong **)(this + 0x78) = puVar2 + 3;
joined_r0x00f6c41c:
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

