
/* se::ScriptEngine::runScript(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Value*) */

uint __thiscall se::ScriptEngine::runScript(ScriptEngine *this,basic_string *param_1,Value *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  basic_string *pbVar5;
  byte local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long **)(this + 0x110) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (**(code **)(**(long **)(this + 0x110) + 0x30))(local_60);
  uVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 0) {
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    __android_log_print(6,"jswrapper","ScriptEngine::runScript script %s, buffer is empty!\n",pbVar5
                       );
    uVar4 = 0;
  }
  else {
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    pcVar2 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar2 = local_50;
    }
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    uVar4 = evalString(this,pcVar2,uVar1,param_2,(char *)pbVar5);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

