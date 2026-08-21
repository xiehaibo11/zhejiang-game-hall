
/* cocos2d::GLProgram::getProgramLog() const */

void cocos2d::GLProgram::getProgramLog(void)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  char *__ptr;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(in_x0 + 0x24);
  local_4c = 0;
  glGetProgramiv(uVar1,0x8b84,&local_4c);
  iVar3 = local_4c;
  if (local_4c < 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
  }
  else {
    __ptr = malloc((long)local_4c);
                    /* catch() { ... } // from try @ 00fcf9dc with catch @ 00fcf9ac */
    glGetProgramInfoLog(uVar1,iVar3,0,__ptr);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_68,__ptr);
    free(__ptr);
                    /* try { // try from 00fcf9d4 to 010cf9db has its CatchHandler @ 00fcfa44 */
                    /* try { // try from 00fcf9dc to 010cfa5f has its CatchHandler @ 00fcf9ac */
    *(undefined8 *)(in_x8 + 0x10) = local_58;
    *(undefined8 *)(in_x8 + 8) = uStack_60;
    *(undefined8 *)in_x8 = local_68;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

