
/* cocos2d::__String::initWithFormatAndValist(char const*, std::__va_list) */

void __thiscall
cocos2d::__String::initWithFormatAndValist(__String *this,char *param_1,undefined8 *param_3)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ffe3a8 to 010fe3af has its CatchHandler @ 00ffe47c */
  __s = malloc(0x19000);
  if (__s != (char *)0x0) {
    uStack_68 = param_3[1];
    local_70 = *param_3;
                    /* try { // try from 00ffe3b0 to 010fe48f has its CatchHandler @ 00ffe260 */
    uStack_58 = param_3[3];
    uStack_60 = param_3[2];
    vsnprintf(__s,0x19000,param_1,&local_70);
    sVar2 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),__s,sVar2);
    free(__s);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s != (char *)0x0);
}

