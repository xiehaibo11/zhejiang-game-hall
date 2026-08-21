
/* cocos2d::renderer::TiledMapAssembler::updateNodes(unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */

void __thiscall
cocos2d::renderer::TiledMapAssembler::updateNodes
          (TiledMapAssembler *this,ulong param_1,vector *param_2)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  TiledMapAssembler *pTVar3;
  TiledMapAssembler *pTVar4;
  TiledMapAssembler *pTVar5;
  
  pTVar3 = this + 0x98;
  pTVar4 = *(TiledMapAssembler **)pTVar3;
  pTVar5 = pTVar3;
  if (pTVar4 != (TiledMapAssembler *)0x0) {
    pTVar3 = this + 0x98;
    do {
      while (pTVar5 = pTVar4, param_1 < *(ulong *)(pTVar5 + 0x20)) {
        pTVar3 = pTVar5;
        pTVar4 = *(TiledMapAssembler **)pTVar5;
        if (*(TiledMapAssembler **)pTVar5 == (TiledMapAssembler *)0x0) {
          p_Var2 = *(__tree_node_base **)pTVar5;
          goto joined_r0x009cf85c;
        }
      }
      if (param_1 <= *(ulong *)(pTVar5 + 0x20)) break;
      pTVar3 = pTVar5 + 8;
      pTVar4 = *(TiledMapAssembler **)pTVar3;
    } while (*(TiledMapAssembler **)pTVar3 != (TiledMapAssembler *)0x0);
  }
  p_Var2 = *(__tree_node_base **)pTVar3;
joined_r0x009cf85c:
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = operator_new(0x40);
    *(undefined8 *)(p_Var2 + 0x30) = 0;
    *(undefined8 *)(p_Var2 + 0x38) = 0;
    *(ulong *)(p_Var2 + 0x20) = param_1;
    *(undefined8 *)(p_Var2 + 0x28) = 0;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(TiledMapAssembler **)(p_Var2 + 0x10) = pTVar5;
    *(__tree_node_base **)pTVar3 = p_Var2;
    p_Var1 = p_Var2;
    if (**(long **)(this + 0x90) != 0) {
      *(long *)(this + 0x90) = **(long **)(this + 0x90);
                    /* try { // try from 009cf84c to 00acf87b has its CatchHandler @ 009cfbec */
      p_Var1 = *(__tree_node_base **)pTVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x98),p_Var1);
    *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 1;
  }
  if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(p_Var2 + 0x28) !=
      (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)param_2) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(p_Var2 + 0x28),*(basic_string **)param_2,*(basic_string **)(param_2 + 8));
    return;
  }
  return;
}

