
/* cocos2d::VideoPlayer::onPlayEvent(int) */

void __thiscall cocos2d::VideoPlayer::onPlayEvent(VideoPlayer *this,int param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
  *p_Var1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  __tree_node_base **pp_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  basic_string local_68;
  undefined4 uStack_67;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined6 uStack_5f;
  undefined1 uStack_59;
  void *local_58;
  __tree_end_node *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009d8464 with catch @ 009d85e0 */
                    /* catch() { ... } // from try @ 009d845c with catch @ 009d85e8 */
                    /* catch() { ... } // from try @ 009d8454 with catch @ 009d85f0 */
                    /* catch() { ... } // from try @ 009d846c with catch @ 009d85f8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009d8624 to 00ad8693 has its CatchHandler @ 009d8624
                       catch() { ... } // from try @ 009d8624 with catch @ 009d8624
                       catch() { ... } // from try @ 009d8704 with catch @ 009d8624 */
  switch(param_1) {
  case 0:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
    uStack_62 = 0;
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_59 = 0;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0x8;
    uStack_67 = 0x79616c70;
    uStack_63 = 0;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
                    /* try { // try from 009d8694 to 00ad86a3 has its CatchHandler @ 009d87a0 */
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
        p_Var7 = *pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  case 1:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_59 = 0;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0xa;
    uStack_67 = 0x73756170;
    uStack_63 = 0x65;
    uStack_62 = 0;
                    /* try { // try from 009d88b8 to 00ad88e3 has its CatchHandler @ 009d9034 */
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
        p_Var7 = *pp_Var6;
                    /* try { // try from 009d891c to 00ad892b has its CatchHandler @ 009d9044 */
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  case 2:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_59 = 0;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0xc;
    uStack_63 = 0x65;
    uStack_62 = 100;
    uStack_67 = 0x706f7473;
    uStack_61 = 0;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
                    /* catch() { ... } // from try @ 009d8694 with catch @ 009d87a0 */
                    /* catch() { ... } // from try @ 009d86bc with catch @ 009d87a4 */
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
                    /* try { // try from 009d87c0 to 00ad8807 has its CatchHandler @ 009d87c0
                       catch() { ... } // from try @ 009d87c0 with catch @ 009d87c0
                       catch() { ... } // from try @ 009d8990 with catch @ 009d87c0
                       catch() { ... } // from try @ 009d9008 with catch @ 009d87c0 */
      *(void **)(p_Var8 + 0x30) = pvVar5;
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
        p_Var7 = *pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  case 3:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
                    /* try { // try from 009d8808 to 00ad8837 has its CatchHandler @ 009d903c */
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_59 = 0;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0xa;
    uStack_67 = 0x65646e65;
    uStack_63 = 100;
    uStack_62 = 0;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
    if (p_Var8 == (__tree_node_base *)0x0) {
                    /* try { // try from 009d8840 to 00ad8853 has its CatchHandler @ 009d9030 */
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      *(void **)(p_Var8 + 0x30) = pvVar5;
                    /* try { // try from 009d8858 to 00ad885f has its CatchHandler @ 009d9028 */
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
                    /* try { // try from 009d8884 to 00ad88af has its CatchHandler @ 009d9044 */
        p_Var7 = *pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  case 4:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
    local_58 = (void *)0x0;
    local_68 = (basic_string)0x1c;
    uStack_5f = 0x617461646174;
    uStack_67 = 0x64616f6c;
    uStack_63 = 0x65;
    uStack_62 = 100;
    uStack_61 = 0x6d;
    uStack_60 = 0x65;
    uStack_59 = 0;
                    /* try { // try from 009d8704 to 00ad87b7 has its CatchHandler @ 009d8624 */
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
        p_Var7 = *pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  case 5:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
                    /* try { // try from 009d8930 to 00ad893b has its CatchHandler @ 009d902c */
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_59 = 0;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0xa;
    uStack_67 = 0x63696c63;
    uStack_63 = 0x6b;
    uStack_62 = 0;
                    /* try { // try from 009d8954 to 00ad895b has its CatchHandler @ 009d9038 */
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
                    /* try { // try from 009d895c to 00ad898f has its CatchHandler @ 009d9048 */
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
                    /* try { // try from 009d8990 to 00ad89e3 has its CatchHandler @ 009d87c0 */
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
        p_Var7 = *pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  case 6:
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              *)(this + 0x30);
    uStack_5f = 0;
    uStack_59 = 0;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0xe;
    uStack_67 = 0x70737573;
    uStack_63 = 0x65;
    uStack_62 = 0x6e;
    uStack_61 = 100;
    uStack_60 = 0;
                    /* try { // try from 009d89e4 to 00ad9007 has its CatchHandler @ 009d9048 */
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var1,&local_50,&local_68);
    p_Var8 = *pp_Var6;
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x70);
      pvVar5 = local_58;
      uVar4 = CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60));
      uVar3 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,local_68))));
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_59 = 0;
      local_58 = (void *)0x0;
      local_68 = (basic_string)0x0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      *(undefined8 *)(p_Var8 + 0x60) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = uVar4;
      *(undefined8 *)(p_Var8 + 0x20) = uVar3;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_50;
      *pp_Var6 = p_Var8;
      p_Var7 = p_Var8;
      if (**(long **)p_Var1 != 0) {
        *(long *)p_Var1 = **(long **)p_Var1;
        p_Var7 = *pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),p_Var7);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    if (*(long **)(p_Var8 + 0x60) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(**(long **)(p_Var8 + 0x60) + 0x30))();
    break;
  default:
                    /* try { // try from 009d86bc to 00ad8703 has its CatchHandler @ 009d87a4 */
    if (param_1 == 1000) {
      this[0xe] = (VideoPlayer)0x0;
    }
    goto LAB_009d8ba4;
  }
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
LAB_009d8ba4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

