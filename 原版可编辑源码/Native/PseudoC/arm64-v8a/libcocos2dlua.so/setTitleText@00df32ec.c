
/* cocos2d::ui::TabHeader::setTitleText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::TabHeader::setTitleText(TabHeader *this,basic_string *param_1)

{
  basic_string *__s2;
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *pbVar4;
  bool bVar5;
  int iVar6;
  basic_string *pbVar7;
  size_t sVar8;
  long *plVar9;
  ulong local_60;
  size_t local_58;
  basic_string *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long **)(this + 0x5c0) == (long *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,"");
  }
  else {
    pbVar7 = (basic_string *)(**(code **)(**(long **)(this + 0x5c0) + 0x590))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,pbVar7);
  }
  bVar2 = *param_1;
  sVar8 = (size_t)((byte)bVar2 >> 1);
  __n = sVar8;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    sVar1 = local_58;
  }
  if (__n == sVar1) {
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    __s2 = (basic_string *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      __s2 = local_50;
    }
    pbVar4 = param_1;
    if (((byte)bVar2 & 1) == 0) {
      while (__n != 0) {
        if (pbVar4[1] != *__s2) goto LAB_00df33cc;
        __s2 = __s2 + 1;
        sVar8 = sVar8 - 1;
        pbVar4 = pbVar4 + 1;
        __n = sVar8;
      }
    }
    else if (__n != 0) {
      iVar6 = memcmp(pbVar7,__s2,__n);
      bVar5 = iVar6 == 0;
      goto joined_r0x00df33d0;
    }
    bVar5 = true;
  }
  else {
LAB_00df33cc:
    bVar5 = false;
  }
joined_r0x00df33d0:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (!bVar5) {
    (**(code **)(**(long **)(this + 0x5c0) + 0x588))(*(long **)(this + 0x5c0),param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df32b8 with catch @ 00df33f4
                        */
    Node::setContentSize((Node *)this,(Size *)(this + 0x39c));
    (**(code **)(*(long *)this + 0x628))(this);
    plVar9 = *(long **)(this + 0x5c0);
    Size::operator*((Size *)(this + 0x80),0.5);
    (**(code **)(*plVar9 + 0x98))(plVar9,&local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

