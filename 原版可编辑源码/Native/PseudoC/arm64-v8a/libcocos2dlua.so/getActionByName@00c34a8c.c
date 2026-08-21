
/* cocostudio::ActionManagerEx::getActionByName(char const*, char const*) */

ActionObject * __thiscall
cocostudio::ActionManagerEx::getActionByName(ActionManagerEx *this,char *param_1,char *param_2)

{
  void *pvVar1;
  ulong __n;
  long lVar2;
  int iVar3;
  long lVar4;
  char *__s2;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ActionObject *this_00;
  void *__dest;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong local_80;
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,param_1);
  pvVar1 = (void *)((ulong)local_70 | 1);
  uVar9 = (ulong)((byte)local_70[0] >> 1);
  if (((byte)local_70[0] & 1) != 0) {
    pvVar1 = local_60;
    uVar9 = local_68;
  }
  uVar5 = uVar9;
  if (uVar9 == 0) {
LAB_00c34b08:
    uVar5 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar5 == 0) goto LAB_00c34b08;
      lVar4 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while (*(char *)((long)pvVar1 + lVar4) != '/');
  }
  uVar5 = uVar5 + 1;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar9 - uVar5;
  if (uVar9 <= uVar9 - uVar5) {
    __n = uVar9;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00c34b80;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    local_88 = uVar9 | 1;
    local_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,(void *)((long)pvVar1 + uVar5),__n);
LAB_00c34b80:
  *(undefined1 *)((long)__dest + __n) = 0;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>>>
                      *)(this + 0x28),(basic_string *)&local_88);
  if (lVar4 == 0) {
    this_00 = (ActionObject *)0x0;
  }
  else {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_a0 = (undefined8 *)0x0;
    if (&local_a0 == (undefined8 **)(lVar4 + 0x28)) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      std::__ndk1::
      vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>::
      assign<cocostudio::ActionObject**>
                ((vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
                  *)&local_a0,*(ActionObject ***)(lVar4 + 0x28),*(ActionObject ***)(lVar4 + 0x30));
      puVar7 = local_98;
      puVar6 = local_a0;
      for (puVar8 = local_a0; puVar8 != puVar7; puVar8 = puVar8 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar8);
        puVar6 = local_98;
      }
    }
    if (0 < (long)local_98 - (long)local_a0) {
      lVar4 = 0;
      do {
        this_00 = (ActionObject *)local_a0[lVar4];
        __s2 = (char *)ActionObject::getName(this_00);
        iVar3 = strcmp(param_2,__s2);
        puVar6 = local_98;
        if (iVar3 == 0) {
          puVar7 = local_98;
          puVar8 = local_a0;
          if (local_a0 == local_98) goto LAB_00c34c8c;
          goto LAB_00c34c70;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (long)local_98 - (long)local_a0 >> 3);
    }
    this_00 = (ActionObject *)0x0;
    puVar7 = puVar6;
    puVar8 = local_a0;
    if (local_a0 != puVar6) {
LAB_00c34c70:
      do {
        cocos2d::Ref::release((Ref *)*puVar8);
        puVar8 = puVar8 + 1;
        puVar6 = local_a0;
      } while (puVar7 != puVar8);
    }
LAB_00c34c8c:
    local_98 = local_a0;
    if (puVar6 != (undefined8 *)0x0) {
      local_98 = puVar6;
      operator_delete(puVar6);
    }
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

