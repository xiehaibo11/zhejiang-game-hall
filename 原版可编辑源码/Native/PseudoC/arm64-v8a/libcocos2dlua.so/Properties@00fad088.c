
/* cocos2d::Properties::Properties(cocos2d::Properties const&) */

void __thiscall cocos2d::Properties::Properties(Properties *this,Properties *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Properties *this_00;
  Properties *pPVar5;
  undefined8 uVar6;
  Properties *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar6;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x10),(basic_string *)(param_1 + 0x10));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x28),(basic_string *)(param_1 + 0x28));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x40),(basic_string *)(param_1 + 0x40));
  std::__ndk1::
  vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
  vector((vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
          *)(this + 0x58),(vector *)(param_1 + 0x58));
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  setDirectoryPath(this,*(basic_string **)(param_1 + 0xa0));
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  for (puVar1 = *(undefined8 **)(param_1 + 0x78); puVar1 != puVar3; puVar1 = puVar1 + 1) {
    pPVar5 = (Properties *)*puVar1;
    this_00 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
    if (this_00 != (Properties *)0x0) {
      Properties(this_00,pPVar5);
    }
    puVar2 = *(undefined8 **)(this + 0x80);
    local_70 = this_00;
    if (puVar2 < *(undefined8 **)(this + 0x88)) {
      *puVar2 = this_00;
      *(undefined8 **)(this + 0x80) = puVar2 + 1;
    }
    else {
      std::__ndk1::vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
      __push_back_slow_path<cocos2d::Properties*>
                ((vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *)
                 (this + 0x78),&local_70);
    }
  }
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x80);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

