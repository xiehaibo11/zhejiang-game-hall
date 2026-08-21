
/* cocostudio::ActionManagerEx::initWithBinary(char const*, cocos2d::Ref*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::ActionManagerEx::initWithBinary
          (ActionManagerEx *this,char *param_1,Ref *param_2,CocoLoader *param_3,
          stExpCocoNode *param_4)

{
  vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *this_00;
  ulong __n;
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  ActionObject **ppAVar4;
  ActionObject **ppAVar5;
  Ref *pRVar6;
  ActionObject **ppAVar7;
  int iVar8;
  uint uVar9;
  stExpCocoNode *this_01;
  char *pcVar10;
  ActionObject *this_02;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  stExpCocoNode *this_03;
  void *__dest;
  bool bVar14;
  long lVar15;
  ulong uVar16;
  Ref *local_d0;
  ulong local_c8;
  void *local_c0;
  ActionObject **local_b8;
  ActionObject **local_b0;
  ActionObject **ppAStack_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  void *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,param_1);
  pvVar1 = (void *)((ulong)local_88 | 1);
  uVar16 = (ulong)((byte)local_88[0] >> 1);
  if (((byte)local_88[0] & 1) != 0) {
    pvVar1 = local_78;
    uVar16 = local_80;
  }
  uVar12 = uVar16;
  if (uVar16 == 0) {
LAB_00c346a4:
    uVar12 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar12 == 0) goto LAB_00c346a4;
      lVar15 = uVar12 - 1;
      uVar12 = uVar12 - 1;
    } while (*(char *)((long)pvVar1 + lVar15) != '/');
  }
  uVar12 = uVar12 + 1;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar16 - uVar12;
  if (uVar16 <= uVar16 - uVar12) {
    __n = uVar16;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_a0 | 1);
    local_a0 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00c3471c;
  }
  else {
    uVar16 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar16);
    local_a0 = uVar16 | 1;
    local_98 = __n;
    local_90 = __dest;
  }
  memcpy(__dest,(void *)((long)pvVar1 + uVar12),__n);
LAB_00c3471c:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_b0 = (ActionObject **)0x0;
  ppAStack_a8 = (ActionObject **)0x0;
  local_b8 = (ActionObject **)0x0;
  this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_4,param_3);
  this_03 = (stExpCocoNode *)0x0;
  lVar15 = -1;
  do {
    iVar8 = stExpCocoNode::GetChildNum(param_4);
    lVar15 = lVar15 + 1;
    if (iVar8 <= lVar15) break;
    pcVar10 = (char *)stExpCocoNode::GetName(this_01,param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d0,pcVar10);
    pRVar6 = local_d0;
    uVar16 = (ulong)local_d0 >> 1 & 0x7f;
    if (((ulong)local_d0 & 1) != 0) {
      uVar16 = local_c8;
    }
    if (uVar16 == 10) {
      pvVar1 = (void *)((ulong)&local_d0 | 1);
      if (((ulong)local_d0 & 1) != 0) {
        pvVar1 = local_c0;
      }
      iVar8 = memcmp(pvVar1,"actionlist",10);
      if (iVar8 != 0) goto LAB_00c347c4;
      bVar14 = false;
      this_03 = this_01;
    }
    else {
LAB_00c347c4:
      bVar14 = true;
    }
    if (((ulong)pRVar6 & 1) != 0) {
      operator_delete(local_c0);
    }
    this_01 = this_01 + 0x10;
  } while (bVar14);
  if ((this_03 != (stExpCocoNode *)0x0) &&
     (uVar9 = stExpCocoNode::GetChildNum(this_03), 0 < (int)uVar9)) {
    lVar15 = 0;
    uVar16 = (ulong)uVar9;
    do {
      this_02 = operator_new(0x80,(nothrow_t *)&std::nothrow);
      if (this_02 != (ActionObject *)0x0) {
        ActionObject::ActionObject(this_02);
      }
      cocos2d::Ref::autorelease((Ref *)this_02);
      lVar11 = stExpCocoNode::GetChildArray(this_03,param_3);
      ActionObject::initWithBinary(this_02,param_3,(stExpCocoNode *)(lVar11 + lVar15),param_2);
      local_d0 = (Ref *)this_02;
      if (local_b0 == ppAStack_a8) {
        std::__ndk1::
        vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>::
        __push_back_slow_path<cocostudio::ActionObject*const&>
                  ((vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
                    *)&local_b8,(ActionObject **)&local_d0);
      }
      else {
        *local_b0 = this_02;
        local_b0 = local_b0 + 1;
      }
      cocos2d::Ref::retain(local_d0);
      uVar16 = uVar16 - 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar16 != 0);
  }
  local_d0 = (Ref *)&local_a0;
  lVar15 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                     ((basic_string *)(this + 0x28),(piecewise_construct_t *)&local_a0,
                      (tuple *)&DAT_0141274d,(tuple *)&local_d0);
  this_00 = (vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *)
            (lVar15 + 0x28);
  ppAVar4 = local_b8;
  ppAVar5 = local_b0;
  if (this_00 !=
      (vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *)
      &local_b8) {
    puVar13 = *(undefined8 **)(lVar15 + 0x28);
    puVar2 = *(undefined8 **)(lVar15 + 0x30);
    if (puVar13 != puVar2) {
      do {
        cocos2d::Ref::release((Ref *)*puVar13);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar13 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(lVar15 + 0x30) = puVar13;
    std::__ndk1::vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
    ::assign<cocostudio::ActionObject**>(this_00,local_b8,local_b0);
    puVar2 = *(undefined8 **)(lVar15 + 0x30);
    for (puVar13 = *(undefined8 **)(lVar15 + 0x28); ppAVar4 = local_b8, ppAVar5 = local_b0,
        puVar13 != puVar2; puVar13 = puVar13 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar13);
    }
  }
  for (; ppAVar7 = local_b0, ppAVar4 != local_b0; ppAVar4 = ppAVar4 + 1) {
    local_b0 = ppAVar5;
    cocos2d::Ref::release((Ref *)*ppAVar4);
    ppAVar5 = local_b0;
    local_b0 = ppAVar7;
  }
  local_b0 = local_b8;
  if (local_b8 != (ActionObject **)0x0) {
    operator_delete(local_b8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

