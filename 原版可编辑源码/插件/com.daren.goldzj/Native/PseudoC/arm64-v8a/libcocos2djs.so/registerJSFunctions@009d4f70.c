
/* BuglyJSAgent::registerJSFunctions(se::Object*) */

void BuglyJSAgent::registerJSFunctions(Object *param_1)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  HandleObject aHStack_40 [8];
  Value aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_38);
  uVar2 = se::Object::getProperty(param_1,"jsb",aVStack_38);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(aHStack_40,pOVar3);
    se::Value::setObject(aVStack_38,aHStack_40,false);
    se::Object::setProperty(param_1,"jsb",aVStack_38);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  se::Value::toObject(aVStack_38);
                    /* catch() { ... } // from try @ 009d4ea8 with catch @ 009d4ff4 */
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
                    /* catch() { ... } // from try @ 009d4ea0 with catch @ 009d4ffc */
  se::Value::~Value(aVStack_38);
                    /* catch() { ... } // from try @ 009d4eb0 with catch @ 009d5004 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

