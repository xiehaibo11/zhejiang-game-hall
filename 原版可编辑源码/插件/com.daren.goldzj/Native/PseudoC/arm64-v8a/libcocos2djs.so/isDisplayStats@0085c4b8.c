
/* cocos2d::Application::isDisplayStats() */

uint cocos2d::Application::isDisplayStats(void)

{
  long lVar1;
  uint uVar2;
  Isolate *pIVar3;
  ScriptEngine *this;
  HandleScope aHStack_b8 [24];
  Value aVStack_a0 [16];
  char local_90 [104];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_b8,pIVar3);
  se::Value::Value(aVStack_a0);
  local_90[0x60] = '\0';
  local_90[0x61] = '\0';
  local_90[0x62] = '\0';
  local_90[99] = '\0';
  builtin_strncpy(local_90,"cc.debug.isDisplayStats();",0x1b);
  local_90[0x1b] = '\0';
  local_90[0x1c] = '\0';
  local_90[0x1d] = '\0';
  local_90[0x1e] = '\0';
  local_90[0x1f] = '\0';
  local_90[0x48] = '\0';
  local_90[0x49] = '\0';
  local_90[0x4a] = '\0';
  local_90[0x4b] = '\0';
  local_90[0x4c] = '\0';
  local_90[0x4d] = '\0';
  local_90[0x4e] = '\0';
  local_90[0x4f] = '\0';
  local_90[0x40] = '\0';
  local_90[0x41] = '\0';
  local_90[0x42] = '\0';
  local_90[0x43] = '\0';
  local_90[0x44] = '\0';
  local_90[0x45] = '\0';
  local_90[0x46] = '\0';
  local_90[0x47] = '\0';
  local_90[0x58] = '\0';
  local_90[0x59] = '\0';
  local_90[0x5a] = '\0';
  local_90[0x5b] = '\0';
  local_90[0x5c] = '\0';
  local_90[0x5d] = '\0';
  local_90[0x5e] = '\0';
  local_90[0x5f] = '\0';
  local_90[0x50] = '\0';
  local_90[0x51] = '\0';
  local_90[0x52] = '\0';
  local_90[0x53] = '\0';
  local_90[0x54] = '\0';
  local_90[0x55] = '\0';
  local_90[0x56] = '\0';
  local_90[0x57] = '\0';
  local_90[0x28] = '\0';
  local_90[0x29] = '\0';
  local_90[0x2a] = '\0';
  local_90[0x2b] = '\0';
  local_90[0x2c] = '\0';
  local_90[0x2d] = '\0';
  local_90[0x2e] = '\0';
  local_90[0x2f] = '\0';
  local_90[0x20] = '\0';
  local_90[0x21] = '\0';
  local_90[0x22] = '\0';
  local_90[0x23] = '\0';
  local_90[0x24] = '\0';
  local_90[0x25] = '\0';
  local_90[0x26] = '\0';
  local_90[0x27] = '\0';
  local_90[0x38] = '\0';
  local_90[0x39] = '\0';
  local_90[0x3a] = '\0';
  local_90[0x3b] = '\0';
  local_90[0x3c] = '\0';
  local_90[0x3d] = '\0';
  local_90[0x3e] = '\0';
  local_90[0x3f] = '\0';
  local_90[0x30] = '\0';
  local_90[0x31] = '\0';
  local_90[0x32] = '\0';
  local_90[0x33] = '\0';
  local_90[0x34] = '\0';
  local_90[0x35] = '\0';
  local_90[0x36] = '\0';
  local_90[0x37] = '\0';
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  se::ScriptEngine::evalString(this,local_90,100,aVStack_a0,(char *)0x0);
  uVar2 = se::Value::toBoolean(aVStack_a0);
  se::Value::~Value(aVStack_a0);
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

