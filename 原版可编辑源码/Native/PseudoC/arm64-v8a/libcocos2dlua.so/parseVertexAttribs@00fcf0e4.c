
/* cocos2d::GLProgram::parseVertexAttribs() */

void __thiscall cocos2d::GLProgram::parseVertexAttribs(GLProgram *this)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long local_4a0;
  piecewise_construct_t *local_498;
  ulong uStack_490;
  char *local_488;
  int local_480;
  int local_47c [3];
  undefined8 local_470;
  undefined4 local_468 [2];
  undefined8 local_460;
  ulong uStack_458;
  char *local_450;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  glGetProgramiv(*(undefined4 *)(this + 0x24),0x8b89,local_47c);
  if (local_47c[0] < 1) {
    glGetProgramInfoLog(*(undefined4 *)(this + 0x24),0x400,0,&local_470);
  }
  else {
    uStack_458 = 0;
    local_450 = (char *)0x0;
    local_460 = (piecewise_construct_t *)0x0;
    glGetProgramiv(*(undefined4 *)(this + 0x24),0x8b8a,&local_480);
                    /* catch() { ... } // from try @ 00fcf19c with catch @ 00fcf16c */
    if ((0 < local_480) &&
       (pcVar4 = (char *)((long)&local_4a0 - ((long)local_480 + 0x10U & 0xfffffffffffffff0)),
       0 < local_47c[0])) {
                    /* try { // try from 00fcf194 to 010cf19b has its CatchHandler @ 00fcf204 */
      iVar5 = 1;
                    /* try { // try from 00fcf19c to 010cf21f has its CatchHandler @ 00fcf16c */
      local_4a0 = lVar3;
      while( true ) {
        glGetActiveAttrib(*(undefined4 *)(this + 0x24),iVar5 + -1,local_480,0,(ulong)&local_470 | 4,
                          local_468,pcVar4);
        pcVar4[local_480] = '\0';
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_498,pcVar4);
        if (((ulong)local_460 & 1) != 0) {
          *local_450 = '\0';
          uStack_458 = 0;
          if (((ulong)local_460 & 1) != 0) {
            operator_delete(local_450);
                    /* catch() { ... } // from try @ 00fcf194 with catch @ 00fcf204 */
          }
        }
        local_450 = local_488;
        uStack_458 = uStack_490;
        local_460 = local_498;
        local_470._0_4_ = glGetAttribLocation(*(undefined4 *)(this + 0x24),pcVar4);
        local_498 = (piecewise_construct_t *)&local_460;
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 0x98),(piecewise_construct_t *)&local_460,
                           (tuple *)&DAT_0144cc7f,(tuple *)&local_498);
        *(undefined8 *)(lVar3 + 0x28) = CONCAT44(local_470._4_4_,(undefined4)local_470);
        *(undefined4 *)(lVar3 + 0x30) = local_468[0];
        if ((undefined8 *)(lVar3 + 0x28) != &local_470) {
          uVar1 = (ulong)local_460 >> 1 & 0x7f;
          pcVar2 = (char *)((long)&local_460 + 1);
          if (((ulong)local_460 & 1) != 0) {
            uVar1 = uStack_458;
            pcVar2 = local_450;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(lVar3 + 0x38),pcVar2,uVar1);
        }
        lVar3 = local_4a0;
        if (local_47c[0] <= iVar5) break;
        iVar5 = iVar5 + 1;
      }
      if (((ulong)local_460 & 1) != 0) {
        operator_delete(local_450);
      }
    }
  }
                    /* catch() { ... } // from try @ 00fcf2fc with catch @ 00fcf2cc */
  if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 00fcf2f4 to 010cf2fb has its CatchHandler @ 00fcf364 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

