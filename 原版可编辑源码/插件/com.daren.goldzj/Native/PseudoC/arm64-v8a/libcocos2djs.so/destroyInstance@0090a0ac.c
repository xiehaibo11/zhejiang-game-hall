
/* se::ScriptEngine::destroyInstance() */

void se::ScriptEngine::destroyInstance(void)

{
  ScriptEngine *pSVar1;
  
  pSVar1 = DAT_01d37220;
  if (DAT_01d37220 != (ScriptEngine *)0x0) {
    ~ScriptEngine(DAT_01d37220);
    operator_delete(pSVar1);
  }
  DAT_01d37220 = (ScriptEngine *)0x0;
  return;
}

