
void FUN_00fcf880(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  char *__ptr;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  glGetShaderiv(param_2,0x8b84,&local_4c);
  iVar2 = local_4c;
  if (local_4c < 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(param_1,"");
  }
  else {
    __ptr = malloc((long)local_4c);
                    /* catch() { ... } // from try @ 00fcf874 with catch @ 00fcf8e4 */
    glGetShaderInfoLog(param_2 & 0xffffffff,iVar2,0,__ptr);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_68,__ptr);
    free(__ptr);
    *(undefined8 *)(param_1 + 0x10) = local_58;
    *(undefined8 *)(param_1 + 8) = uStack_60;
    *(undefined8 *)param_1 = local_68;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

