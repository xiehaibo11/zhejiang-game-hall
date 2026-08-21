
/* se::ScriptEngine::onOOMErrorCallback(char const*, bool) */

void se::ScriptEngine::onOOMErrorCallback(char *param_1,bool param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  ScriptEngine *pSVar6;
  long *plVar7;
  basic_string *pbVar8;
  char *local_90;
  ulong local_88;
  char *local_80;
  ulong local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  char local_5f [16];
  undefined6 uStack_4f;
  undefined1 uStack_49;
  char *local_48;
  void *pvStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_60 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2c;
  uStack_4f = 0x203a6e6f6974;
  builtin_strncpy(local_5f,"[OOM ERROR] loca",0x10);
  uStack_49 = 0;
  sVar5 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(&local_60,param_1,sVar5);
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_78,
         "is heap out of memory: ",0x17);
  if (param_2) {
    pbVar8 = (basic_string *)&DAT_00000004;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_78,"true",4);
  }
  else {
    pbVar8 = (basic_string *)0x5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_78,"false",5);
  }
  std::__ndk1::operator+((__ndk1 *)0x19c5a17,(char *)local_78,pbVar8);
  uVar1 = (ulong)local_90 >> 1 & 0x7f;
  pcVar4 = (char *)((ulong)&local_90 | 1);
  if (((ulong)local_90 & 1) != 0) {
    uVar1 = local_88;
    pcVar4 = local_80;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(&local_60,pcVar4,uVar1);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar1 = (ulong)&local_60 | 1;
  if (((byte)local_60 & 1) != 0) {
    uVar1 = CONCAT17(uStack_49,CONCAT61(uStack_4f,local_5f[0xf]));
  }
  __android_log_print(6,"jswrapper","%s\n",uVar1);
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    pSVar6 = operator_new(0x210);
    ScriptEngine(pSVar6);
    DAT_01d37220 = pSVar6;
  }
  pSVar6 = DAT_01d37220;
  plVar7 = *(long **)(DAT_01d37220 + 0x1a0);
  pvVar2 = (void *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pvVar2 = local_68;
  }
  if (plVar7 != (long *)0x0) {
    local_48 = "(no stack information)";
    local_90 = param_1;
    pvStack_40 = pvVar2;
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_90,&pvStack_40,&local_48);
  }
  plVar7 = *(long **)(pSVar6 + 0x1d0);
  if (plVar7 != (long *)0x0) {
    local_48 = "(no stack information)";
    local_90 = param_1;
    pvStack_40 = pvVar2;
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_90,&pvStack_40,&local_48);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(uStack_4f,local_5f[0xf])));
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

