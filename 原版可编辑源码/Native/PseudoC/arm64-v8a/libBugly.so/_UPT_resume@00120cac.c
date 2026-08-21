
void _UPT_resume(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  ptrace(PTRACE_CONT,(ulong)*param_3,0,0);
  return;
}

