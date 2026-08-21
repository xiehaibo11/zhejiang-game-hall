
/* cocos2d::PUScriptCompiler::compile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool&) */

long __thiscall
cocos2d::PUScriptCompiler::compile(PUScriptCompiler *this,basic_string *param_1,bool *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  PUConcreteNode *this_00;
  byte *pbVar10;
  undefined1 *local_c0;
  long *local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  PUScriptParser aPStack_90 [8];
  PUScriptLexer aPStack_88 [8];
  basic_string local_80 [16];
  void *local_70;
  basic_string *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>>>
                      *)(this + 0x30),param_1);
  if (lVar5 == 0) {
    plVar6 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar6 + 0x18))(local_80,plVar6,param_1);
    PUScriptLexer::PUScriptLexer(aPStack_88);
    PUScriptParser::PUScriptParser(aPStack_90);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (undefined8 *)0x0;
    local_c0 = (undefined1 *)&local_c0;
    local_b8 = (long *)&local_c0;
                    /* try { // try from 00e42428 to 00f4242f has its CatchHandler @ 00e425a4 */
    PUScriptLexer::openLexer(aPStack_88,local_80,param_1,(vector *)&local_a8);
                    /* try { // try from 00e42430 to 00f425a7 has its CatchHandler @ 00e423dc */
    PUScriptParser::parse(aPStack_90,(list *)&local_c0,(vector *)&local_a8);
    uVar7 = compile(this,(list *)&local_c0,param_1);
    puVar2 = local_a8;
    puVar3 = local_a0;
    if (&local_c0 != (undefined1 **)local_b8) {
      this_00 = (PUConcreteNode *)local_b8[2];
      plVar6 = local_b8;
      while( true ) {
        if (this_00 != (PUConcreteNode *)0x0) {
          PUConcreteNode::~PUConcreteNode(this_00);
          operator_delete(this_00);
        }
        plVar6 = (long *)plVar6[1];
        puVar2 = local_a8;
        puVar3 = local_a0;
        if (&local_c0 == (undefined1 **)plVar6) break;
        this_00 = (PUConcreteNode *)plVar6[2];
      }
    }
    for (; puVar4 = local_a0, puVar2 != local_a0; puVar2 = puVar2 + 1) {
      pbVar10 = (byte *)*puVar2;
      local_a0 = puVar3;
      if (pbVar10 != (byte *)0x0) {
        if ((pbVar10[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar10 + 0x28));
        }
        if ((*pbVar10 & 1) != 0) {
          operator_delete(*(void **)(pbVar10 + 0x10));
        }
        operator_delete(pbVar10);
      }
      puVar3 = local_a0;
      local_a0 = puVar4;
    }
    *param_2 = true;
    if ((uVar7 & 1) == 0) {
      lVar5 = 0;
      local_a0 = puVar3;
    }
    else {
      local_a0 = puVar3;
      local_60 = param_1;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x30),(piecewise_construct_t *)param_1,
                         (tuple *)&DAT_014241b3,(tuple *)&local_60);
      lVar5 = lVar5 + 0x28;
    }
    if (local_b0 != 0) {
      lVar8 = *local_b8;
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(local_c0 + 8);
      **(long **)(local_c0 + 8) = lVar8;
      local_b0 = 0;
      plVar6 = local_b8;
      if ((undefined1 **)local_b8 != &local_c0) {
        do {
          plVar9 = (long *)plVar6[1];
          operator_delete(plVar6);
          plVar6 = plVar9;
        } while ((undefined1 **)plVar9 != &local_c0);
      }
    }
    if (local_a8 != (undefined8 *)0x0) {
      local_a0 = local_a8;
      operator_delete(local_a8);
    }
    PUScriptParser::~PUScriptParser(aPStack_90);
    PUScriptLexer::~PUScriptLexer(aPStack_88);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else {
    lVar5 = lVar5 + 0x28;
    *param_2 = false;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e42430 with catch @ 00e423dc
                        */
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e42428 with catch @ 00e425a4
                        */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e425fc with catch @ 00e425a8
                        */
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

