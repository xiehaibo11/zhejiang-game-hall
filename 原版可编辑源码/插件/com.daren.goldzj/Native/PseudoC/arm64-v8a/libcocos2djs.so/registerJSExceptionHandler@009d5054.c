
/* BuglyJSAgent::registerJSExceptionHandler() */

void BuglyJSAgent::registerJSExceptionHandler(void)

{
  long lVar1;
  ScriptEngine *this;
  code *pcVar2;
  undefined **local_60;
  code *pcStack_58;
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d506c to 00ad5073 has its CatchHandler @ 009d5208 */
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
                    /* try { // try from 009d5074 to 00ad507b has its CatchHandler @ 009d5200 */
                    /* try { // try from 009d507c to 00ad5083 has its CatchHandler @ 009d51f8 */
                    /* try { // try from 009d5084 to 00ad513f has its CatchHandler @ 009d5210 */
  local_60 = &PTR_FUN_01c6bc10;
  pcStack_58 = reportJSError;
  local_40 = (long *)&local_60;
  se::ScriptEngine::setJSExceptionCallback(this,(function *)&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_009d50c4;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_009d50c4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

