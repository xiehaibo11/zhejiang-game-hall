
/* se::ScriptEngine::getInstance() */

ScriptEngine * se::ScriptEngine::getInstance(void)

{
  ScriptEngine *this;
  
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    this = operator_new(0x210);
    ScriptEngine(this);
    DAT_01d37220 = this;
  }
  return DAT_01d37220;
}

