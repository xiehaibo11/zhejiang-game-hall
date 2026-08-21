
/* cocos2d::extension::Manifest::versionGreater(cocos2d::extension::Manifest const*,
   std::__ndk1::function<int (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&) const */

uint __thiscall
cocos2d::extension::Manifest::versionGreater(Manifest *this,Manifest *param_1,function *param_2)

{
  char *pcVar1;
  char *__s2;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  char *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_90,(basic_string *)(this + 0x90));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_a8,(basic_string *)(param_1 + 0x90));
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,local_90,local_a8);
    goto joined_r0x00dfbf28;
  }
  pcVar1 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    pcVar1 = local_80;
  }
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar4 = sscanf(pcVar1,"%d.%d.%d.%d",&local_68,(ulong)&local_68 | 4,&local_60,(long)&local_60 + 4);
  pcVar1 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    pcVar1 = local_98;
  }
  iVar5 = sscanf(pcVar1,"%d.%d.%d.%d",&local_78,(ulong)&local_78 | 4,&local_70,(long)&local_70 + 4);
  if ((iVar4 == 0) || (iVar5 == 0)) {
                    /* try { // try from 00dfbea8 to 00efc023 has its CatchHandler @ 00dfbea8
                       catch() { ... } // from try @ 00dfbea8 with catch @ 00dfbea8
                       catch() { ... } // from try @ 00dfc02c with catch @ 00dfbea8 */
    pcVar1 = (char *)((ulong)local_90 | 1);
    if (((byte)local_90[0] & 1) != 0) {
      pcVar1 = local_80;
    }
    __s2 = (char *)((ulong)local_a8 | 1);
    if (((byte)local_a8[0] & 1) != 0) {
      __s2 = local_98;
    }
    uVar3 = strcmp(pcVar1,__s2);
    goto joined_r0x00dfbf28;
  }
  if ((int)local_68 <= (int)local_78) {
    if ((int)local_68 < (int)local_78) {
LAB_00dfbf20:
      uVar3 = 0xffffffff;
      goto joined_r0x00dfbf28;
    }
    if (local_68._4_4_ <= local_78._4_4_) {
      if (local_68._4_4_ < local_78._4_4_) goto LAB_00dfbf20;
      if ((int)local_60 <= (int)local_70) {
        if ((int)local_60 < (int)local_70) goto LAB_00dfbf20;
        if (local_60._4_4_ <= local_70._4_4_) {
          uVar3 = -(uint)(local_60._4_4_ < local_70._4_4_);
          goto joined_r0x00dfbf28;
        }
      }
    }
  }
  uVar3 = 0;
joined_r0x00dfbf28:
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return ~uVar3 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

