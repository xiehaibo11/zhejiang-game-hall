
/* cocos2d::GLProgram::parseUniforms() */

void __thiscall cocos2d::GLProgram::parseUniforms(GLProgram *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *__s2;
  int iVar6;
  char acStack_4b0 [8];
  long local_4a8;
  char *local_4a0;
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
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  glGetProgramiv(*(undefined4 *)(this + 0x24),0x8b86,local_47c);
                    /* catch() { ... } // from try @ 00fcf2f4 with catch @ 00fcf364 */
  if (local_47c[0] < 1) {
    glGetProgramInfoLog(*(undefined4 *)(this + 0x24),0x400,0,&local_470);
  }
  else {
    glGetProgramiv(*(undefined4 *)(this + 0x24),0x8b87,&local_480);
    if (0 < local_480) {
      __s2 = acStack_4b0 + -((long)local_480 + 0x10U & 0xfffffffffffffff0);
      uStack_458 = 0;
      local_450 = (char *)0x0;
      local_460 = (piecewise_construct_t *)0x0;
      if (0 < local_47c[0]) {
        iVar6 = 1;
        local_4a0 = (char *)((long)&local_460 + 1);
        local_4a8 = lVar5;
        while( true ) {
          glGetActiveUniform(*(undefined4 *)(this + 0x24),iVar6 + -1,local_480,0,
                             (ulong)&local_470 | 4,local_468,__s2);
          iVar2 = local_480;
          __s2[local_480] = '\0';
          iVar3 = strncmp("CC_",__s2,3);
          if (iVar3 != 0) {
                    /* catch() { ... } // from try @ 00fcf45c with catch @ 00fcf42c */
            if ((3 < iVar2) && (pcVar4 = strrchr(__s2,0x5b), pcVar4 != (char *)0x0)) {
              *pcVar4 = '\0';
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_498,__s2);
            if (((ulong)local_460 & 1) != 0) {
                    /* try { // try from 00fcf454 to 010cf45b has its CatchHandler @ 00fcf4c4 */
              *local_450 = '\0';
                    /* try { // try from 00fcf45c to 010cf4df has its CatchHandler @ 00fcf42c */
              uStack_458 = 0;
              if (((ulong)local_460 & 1) != 0) {
                operator_delete(local_450);
              }
            }
            local_450 = local_488;
            uStack_458 = uStack_490;
            local_460 = local_498;
            local_470._0_4_ = glGetUniformLocation(*(undefined4 *)(this + 0x24),__s2);
            glGetError();
            local_498 = (piecewise_construct_t *)&local_460;
            lVar5 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Uniform>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Uniform>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Uniform>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Uniform>>>
                    ::
                    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                              ((basic_string *)(this + 0x70),(piecewise_construct_t *)&local_460,
                               (tuple *)&DAT_0144cc7f,(tuple *)&local_498);
                    /* catch() { ... } // from try @ 00fcf454 with catch @ 00fcf4c4 */
            *(undefined8 *)(lVar5 + 0x28) = CONCAT44(local_470._4_4_,(undefined4)local_470);
            *(undefined4 *)(lVar5 + 0x30) = local_468[0];
            if ((undefined8 *)(lVar5 + 0x28) != &local_470) {
              pcVar4 = local_4a0;
              uVar1 = (ulong)local_460 >> 1 & 0x7f;
              if (((ulong)local_460 & 1) != 0) {
                pcVar4 = local_450;
                uVar1 = uStack_458;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(lVar5 + 0x38),pcVar4,uVar1);
            }
          }
          lVar5 = local_4a8;
          if (local_47c[0] <= iVar6) break;
          iVar6 = iVar6 + 1;
        }
        if (((ulong)local_460 & 1) != 0) {
          operator_delete(local_450);
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

