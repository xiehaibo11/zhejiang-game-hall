
/* cocos2d::XmlSaxHander::VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*) */

undefined8 __thiscall
cocos2d::XmlSaxHander::VisitEnter(XmlSaxHander *this,XMLElement *param_1,XMLAttribute *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  if (param_2 != (XMLAttribute *)0x0) {
    do {
      local_68 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_2 + 8));
      if (local_58 < local_50) {
        *local_58 = local_68;
        local_58 = local_58 + 1;
      }
      else {
        std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
        __push_back_slow_path<char_const*>
                  ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)&local_60,&local_68);
      }
      local_68 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_2 + 0x20));
      if (local_58 < local_50) {
        *local_58 = local_68;
        local_58 = local_58 + 1;
      }
      else {
        std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
        __push_back_slow_path<char_const*>
                  ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)&local_60,&local_68);
      }
      param_2 = *(XMLAttribute **)(param_2 + 0x38);
    } while (param_2 != (XMLAttribute *)0x0);
    local_68 = (char *)0x0;
    if (local_58 < local_50) {
      *local_58 = 0;
      local_58 = local_58 + 1;
      goto LAB_0087ea9c;
    }
  }
  local_68 = (char *)0x0;
  std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
  __push_back_slow_path<char_const*>
            ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)&local_60,&local_68);
LAB_0087ea9c:
  puVar4 = *(undefined8 **)(this + 8);
  uVar2 = tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 0x18));
  plVar3 = (long *)*puVar4;
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar4,uVar2,local_60);
  if (local_60 != (undefined8 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

