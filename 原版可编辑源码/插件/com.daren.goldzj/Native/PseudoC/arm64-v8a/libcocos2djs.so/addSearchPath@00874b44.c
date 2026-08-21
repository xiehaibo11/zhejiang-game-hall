
/* cocos2d::FileUtils::addSearchPath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::FileUtils::addSearchPath(FileUtils *this,basic_string *param_1,bool param_2)

{
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  ulong *puVar1;
  FileUtils *pFVar2;
  long lVar3;
  ulong uVar4;
  basic_string *pbVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  pbVar5 = (basic_string *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  uVar4 = (**(code **)(*(long *)this + 0x108))();
  if (((uVar4 & 1) == 0) && ((FileUtils *)&local_60 != this + 0x78)) {
    pbVar5 = *(basic_string **)(this + 0x80);
    pFVar2 = *(FileUtils **)(this + 0x88);
    if (((byte)this[0x78] & 1) == 0) {
      pFVar2 = this + 0x79;
      pbVar5 = (basic_string *)(ulong)((byte)this[0x78] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_60,(char *)pFVar2,(ulong)pbVar5);
  }
  std::__ndk1::operator+((__ndk1 *)&local_60,param_1,pbVar5);
  uVar4 = (ulong)((byte)local_78 >> 1);
  if (((byte)local_78 & 1) != 0) {
    uVar4 = uStack_70;
  }
  if (uVar4 != 0) {
    pvVar6 = (void *)((ulong)&local_78 | 1);
    if (((byte)local_78 & 1) != 0) {
      pvVar6 = local_68;
    }
    if (*(char *)((long)pvVar6 + (uVar4 - 1)) != '/') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(&local_78,"/",1);
    }
  }
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x60);
  if (param_2) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert(this_00,*(undefined8 *)this_00,param_1);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)(this + 0x48),*(undefined8 *)(this + 0x48),&local_78);
    goto joined_r0x00874dd8;
  }
  puVar1 = *(ulong **)(this + 0x68);
  if (puVar1 == *(ulong **)(this + 0x70)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this_00,param_1);
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if (((byte)*param_1 & 1) == 0) {
      uVar8 = *(ulong *)(param_1 + 8);
      uVar4 = *(ulong *)param_1;
      puVar1[2] = *(ulong *)(param_1 + 0x10);
      puVar1[1] = uVar8;
      *puVar1 = uVar4;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar6 = *(void **)(param_1 + 0x10);
      if (uVar4 < 0x17) {
        pvVar7 = (void *)((long)puVar1 + 1);
        *(char *)puVar1 = (char)((int)uVar4 << 1);
        if (uVar4 != 0) goto LAB_00874cc8;
      }
      else {
        uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
        pvVar7 = operator_new(uVar8);
        puVar1[1] = uVar4;
        puVar1[2] = (ulong)pvVar7;
        *puVar1 = uVar8 | 1;
LAB_00874cc8:
        memcpy(pvVar7,pvVar6,uVar4);
      }
      *(undefined1 *)((long)pvVar7 + uVar4) = 0;
    }
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + 0x18;
  }
  pvVar6 = local_68;
  puVar1 = *(ulong **)(this + 0x50);
  if (puVar1 == *(ulong **)(this + 0x58)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x48),(basic_string *)&local_78);
    goto joined_r0x00874dd8;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (((byte)local_78 & 1) == 0) {
    puVar1[2] = (ulong)local_68;
    puVar1[1] = uStack_70;
    *puVar1 = CONCAT71(uStack_77,local_78);
  }
  else {
    if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_70 < 0x17) {
      pvVar7 = (void *)((long)puVar1 + 1);
      *(char *)puVar1 = (char)((int)uStack_70 << 1);
      if (uStack_70 != 0) goto LAB_00874db4;
    }
    else {
      uVar4 = uStack_70 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar4);
      puVar1[1] = uStack_70;
      puVar1[2] = (ulong)pvVar7;
      *puVar1 = uVar4 | 1;
LAB_00874db4:
      memcpy(pvVar7,pvVar6,uStack_70);
    }
    *(undefined1 *)((long)pvVar7 + uStack_70) = 0;
  }
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x18;
joined_r0x00874dd8:
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

