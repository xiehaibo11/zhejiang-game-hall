
/* cocos2d::GLProgramState::init(cocos2d::GLProgram*) */

undefined8 __thiscall cocos2d::GLProgramState::init(GLProgramState *this,GLProgram *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  piecewise_construct_t *local_c8;
  piecewise_construct_t *local_c0;
  ulong uStack_b8;
  long *local_b0;
  long *plStack_a8;
  Ref *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(GLProgram **)(this + 0xd0) = param_1;
  Ref::retain((Ref *)param_1);
  uVar6 = *(ulong *)(this + 0xd0);
  plVar8 = *(long **)(uVar6 + 0xa8);
  if (plVar8 != (long *)0x0) {
    do {
      local_c8 = (piecewise_construct_t *)(plVar8 + 2);
      local_c0 = (piecewise_construct_t *)(plVar8 + 5);
      uStack_b8 = uStack_b8 & 0xffffffffffff0000;
      local_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      local_a0 = (Ref *)0x0;
      lVar3 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x78),local_c8,(tuple *)&DAT_0144cee0,
                         (tuple *)&local_c8);
      plVar2 = local_b0;
                    /* catch() { ... } // from try @ 00fd72f8 with catch @ 00fd7290 */
      *(undefined2 *)(lVar3 + 0x30) = (undefined2)uStack_b8;
      *(piecewise_construct_t **)(lVar3 + 0x28) = local_c0;
      *(Ref **)(lVar3 + 0x48) = local_a0;
      *(long **)(lVar3 + 0x40) = plStack_a8;
      *(long **)(lVar3 + 0x38) = local_b0;
      if (((char)uStack_b8 != '\0') && (local_b0 != (long *)0x0)) {
        plVar4 = (long *)local_b0[4];
        if (local_b0 == plVar4) {
          pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_00fd7250:
          (*pcVar7)();
        }
        else {
                    /* try { // try from 00fd72cc to 010d72d3 has its CatchHandler @ 00fd7370 */
          if (plVar4 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar4 + 0x28);
            goto LAB_00fd7250;
          }
        }
        operator_delete(plVar2);
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    uVar6 = *(ulong *)(this + 0xd0);
  }
  plVar8 = *(long **)(uVar6 + 0x80);
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 00fd72f4 to 010d72f7 has its CatchHandler @ 00fd7360 */
                    /* try { // try from 00fd72f8 to 010d738b has its CatchHandler @ 00fd7290 */
    do {
      local_c8 = (piecewise_construct_t *)(plVar8 + 5);
      local_b0 = (long *)((ulong)local_b0 & 0xffffffff00000000);
      uStack_80 = 0;
      local_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      local_a0 = (Ref *)0x0;
      plStack_a8 = (long *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      local_c0 = local_c8;
      uStack_b8 = uVar6;
      lVar3 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
              ::
              __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                        ((int *)(this + 0x50),local_c8,(tuple *)&DAT_0144cee0,(tuple *)&local_c8);
      if ((piecewise_construct_t **)(lVar3 + 0x18) != &local_c0) {
        *(ulong *)(lVar3 + 0x20) = uStack_b8;
        *(piecewise_construct_t **)(lVar3 + 0x18) = local_c0;
        *(int *)(lVar3 + 0x28) = (int)local_b0;
        *(undefined8 *)(lVar3 + 0x58) = uStack_80;
        *(undefined8 *)(lVar3 + 0x50) = local_88;
        *(undefined8 *)(lVar3 + 0x68) = uStack_70;
        *(undefined8 *)(lVar3 + 0x60) = uStack_78;
                    /* catch() { ... } // from try @ 00fd72f4 with catch @ 00fd7360 */
        *(Ref **)(lVar3 + 0x38) = local_a0;
        *(long **)(lVar3 + 0x30) = plStack_a8;
        *(undefined8 *)(lVar3 + 0x48) = uStack_90;
        *(undefined8 *)(lVar3 + 0x40) = uStack_98;
                    /* catch() { ... } // from try @ 00fd72cc with catch @ 00fd7370 */
        if ((*(int *)(local_c0 + 8) == 0x8b5e) && (*(Ref **)(lVar3 + 0x38) != (Ref *)0x0)) {
          Ref::retain(*(Ref **)(lVar3 + 0x38));
        }
      }
      lVar3 = plVar8[5];
      local_c8 = (piecewise_construct_t *)(plVar8 + 2);
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x28),local_c8,(tuple *)&DAT_0144cee0,
                         (tuple *)&local_c8);
      plVar2 = plStack_a8;
      *(int *)(lVar5 + 0x28) = (int)lVar3;
      if (((int)local_b0 == 2) && (plStack_a8 != (long *)0x0)) {
        plVar4 = (long *)plStack_a8[4];
        if (plStack_a8 == plVar4) {
          pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_00fd73d8:
                    /* catch() { ... } // from try @ 00fd7430 with catch @ 00fd73d8 */
          (*pcVar7)();
        }
        else if (plVar4 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar4 + 0x28);
          goto LAB_00fd73d8;
        }
        operator_delete(plVar2);
      }
      if ((*(int *)(local_c0 + 8) == 0x8b5e) && (local_a0 != (Ref *)0x0)) {
        Ref::release(local_a0);
      }
      plVar8 = (long *)*plVar8;
                    /* try { // try from 00fd7404 to 010d740b has its CatchHandler @ 00fd7498 */
      if (plVar8 == (long *)0x0) break;
      uVar6 = *(ulong *)(this + 0xd0);
    } while( true );
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00fd742c to 010d742f has its CatchHandler @ 00fd7488 */
                    /* try { // try from 00fd7430 to 010d74b3 has its CatchHandler @ 00fd73d8 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

