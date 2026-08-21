
/* se::ScriptEngine::callExceptionCallback(char const*, char const*, char const*) */

void __thiscall
se::ScriptEngine::callExceptionCallback
          (ScriptEngine *this,char *param_1,char *param_2,char *param_3)

{
  long lVar1;
  long *plVar2;
  char *local_60;
  char *local_58;
  char *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x1a0);
  if (plVar2 != (long *)0x0) {
    local_60 = param_3;
    local_58 = param_2;
    pcStack_50 = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,&pcStack_50,&local_58,&local_60);
  }
  plVar2 = *(long **)(this + 0x1d0);
  if (plVar2 != (long *)0x0) {
    local_60 = param_3;
    local_58 = param_2;
    pcStack_50 = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,&pcStack_50,&local_58,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

