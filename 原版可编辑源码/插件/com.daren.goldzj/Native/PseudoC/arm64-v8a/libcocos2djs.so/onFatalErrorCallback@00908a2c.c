
/* se::ScriptEngine::onFatalErrorCallback(char const*, char const*) */

void se::ScriptEngine::onFatalErrorCallback(char *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  long *plVar4;
  ScriptEngine *this;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  char *local_60;
  char *local_58;
  char *pcStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = operator_new(0x20);
  builtin_strncpy(local_70,"[FATAL ERROR] location: ",0x19);
  uStack_78 = 0x18;
  local_80 = 0x21;
  sVar3 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80
         ,param_1,sVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80
         ,", message: ",0xb);
  sVar3 = strlen(param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80
         ,param_2,sVar3);
  pcVar1 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pcVar1 = local_70;
  }
  __android_log_print(6,"jswrapper","%s\n",pcVar1);
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    this = operator_new(0x210);
    ScriptEngine(this);
    plVar4 = *(long **)(this + 0x1a0);
  }
  else {
    plVar4 = *(long **)(DAT_01d37220 + 0x1a0);
    this = DAT_01d37220;
  }
  DAT_01d37220 = this;
  if (plVar4 != (long *)0x0) {
    local_60 = "(no stack information)";
    local_58 = param_2;
    pcStack_50 = param_1;
    (**(code **)(*plVar4 + 0x30))(plVar4,&pcStack_50,&local_58,&local_60);
  }
  plVar4 = *(long **)(this + 0x1d0);
  if (plVar4 != (long *)0x0) {
    local_60 = "(no stack information)";
    local_58 = param_2;
    pcStack_50 = param_1;
    (**(code **)(*plVar4 + 0x30))(plVar4,&pcStack_50,&local_58,&local_60);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

