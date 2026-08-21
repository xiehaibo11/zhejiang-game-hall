
/* cocos2d::EventDispatcher::EventDispatcher() */

void __thiscall cocos2d::EventDispatcher::EventDispatcher(EventDispatcher *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  __tree_end_node *p_Stack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__EventDispatcher_01722e20;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f800000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(EventDispatcher **)(this + 0x120) = this + 0x128;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  this[0x13c] = (EventDispatcher)0x0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  this_00 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x148);
  *(EventDispatcher **)this_00 = this + 0x150;
  *(undefined8 *)(this + 0x158) = 0;
  pvVar4 = operator_new(400);
  *(void **)(this + 0xf8) = pvVar4;
  *(void **)(this + 0xf0) = pvVar4;
  *(long *)(this + 0x100) = (long)pvVar4 + 400;
  pvVar4 = operator_new(400);
  *(void **)(this + 0x110) = pvVar4;
  *(void **)(this + 0x108) = pvVar4;
  *(long *)(this + 0x118) = (long)pvVar4 + 400;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"event_come_to_foreground");
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&p_Stack_70,(basic_string *)&local_88);
  if (*pp_Var5 == (__tree_node_base *)0x0) {
                    /* catch() { ... } // from try @ 00f9cf94 with catch @ 00f9cff8 */
    p_Var6 = operator_new(0x38);
    pvVar4 = local_78;
    uVar3 = uStack_80;
    uVar2 = local_88;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(void **)(p_Var6 + 0x30) = pvVar4;
    *(undefined8 *)(p_Var6 + 0x28) = uVar3;
    *(ulong *)(p_Var6 + 0x20) = uVar2;
    *(__tree_end_node **)(p_Var6 + 0x10) = p_Stack_70;
    *pp_Var5 = p_Var6;
                    /* catch() { ... } // from try @ 00f9d070 with catch @ 00f9d028 */
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var6 = *pp_Var5;
    }
                    /* try { // try from 00f9d03c to 0109d03f has its CatchHandler @ 00f9d0a8 */
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x150),p_Var6);
    *(long *)(this + 0x158) = *(long *)(this + 0x158) + 1;
                    /* try { // try from 00f9d04c to 0109d06f has its CatchHandler @ 00f9d0b4 */
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"event_come_to_background");
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&p_Stack_70,(basic_string *)&local_88);
                    /* catch() { ... } // from try @ 00f9cfb4 with catch @ 00f9cf70 */
  if (*pp_Var5 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x38);
    pvVar4 = local_78;
    uVar3 = uStack_80;
    uVar2 = local_88;
    uStack_80 = 0;
    local_78 = (void *)0x0;
                    /* try { // try from 00f9d070 to 0109d0e3 has its CatchHandler @ 00f9d028 */
    local_88 = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(void **)(p_Var6 + 0x30) = pvVar4;
    *(undefined8 *)(p_Var6 + 0x28) = uVar3;
    *(ulong *)(p_Var6 + 0x20) = uVar2;
    *(__tree_end_node **)(p_Var6 + 0x10) = p_Stack_70;
    *pp_Var5 = p_Var6;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var6 = *pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x150),p_Var6);
                    /* catch() { ... } // from try @ 00f9d03c with catch @ 00f9d0a8 */
    *(long *)(this + 0x158) = *(long *)(this + 0x158) + 1;
  }
                    /* catch() { ... } // from try @ 00f9d04c with catch @ 00f9d0b4 */
  if ((local_88 & 1) != 0) {
                    /* try { // try from 00f9cf84 to 0109cf87 has its CatchHandler @ 00f9cfec */
    operator_delete(local_78);
  }
                    /* try { // try from 00f9cf94 to 0109cfb3 has its CatchHandler @ 00f9cff8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"event_renderer_recreated");
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&p_Stack_70,(basic_string *)&local_88);
  if (*pp_Var5 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x38);
    pvVar4 = local_78;
    uVar3 = uStack_80;
    uVar2 = local_88;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(void **)(p_Var6 + 0x30) = pvVar4;
    *(undefined8 *)(p_Var6 + 0x28) = uVar3;
    *(ulong *)(p_Var6 + 0x20) = uVar2;
    *(__tree_end_node **)(p_Var6 + 0x10) = p_Stack_70;
    *pp_Var5 = p_Var6;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var6 = *pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x150),p_Var6);
    *(long *)(this + 0x158) = *(long *)(this + 0x158) + 1;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00f9cf84 with catch @ 00f9cfec */
  return;
}

