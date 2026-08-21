
/* se::ScriptEngine::getCurrentStackTrace() */

void se::ScriptEngine::getCurrentStackTrace(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x0 + 0x20c) == '\0') {
    in_x8[1] = 0;
    in_x8[2] = 0;
    *in_x8 = 0;
  }
  else {
    v8::HandleScope::HandleScope(aHStack_50,*(Isolate **)(in_x0 + 0x90));
    v8::StackTrace::CurrentStackTrace(*(undefined8 *)(in_x0 + 0x90),__jsbStackFrameLimit,0xf);
    FUN_00909784();
    v8::HandleScope::~HandleScope(aHStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

