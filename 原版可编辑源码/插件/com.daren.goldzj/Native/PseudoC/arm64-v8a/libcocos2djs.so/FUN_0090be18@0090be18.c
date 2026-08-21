
void FUN_0090be18(void)

{
  ScriptEngine *this;
  
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    this = operator_new(0x210);
    se::ScriptEngine::ScriptEngine(this);
    DAT_01d37220 = this;
  }
  se::ScriptEngine::garbageCollect(DAT_01d37220);
  return;
}

