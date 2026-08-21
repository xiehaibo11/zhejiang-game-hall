
void FUN_00c11624(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ScriptEngine *pSVar4;
  ulong uVar5;
  Isolate *pIVar6;
  code *pcVar7;
  Object *this;
  undefined **local_70;
  Object *pOStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = se::NativePtrToObjectMap::find(param_1);
  lVar3 = se::NativePtrToObjectMap::end();
  if (lVar2 != lVar3) {
    this = *(Object **)(lVar2 + 0x18);
    se::NativePtrToObjectMap::erase(lVar2);
    pSVar4 = (ScriptEngine *)se::ScriptEngine::getInstance();
    uVar5 = se::ScriptEngine::isGarbageCollecting(pSVar4);
    if ((uVar5 & 1) == 0) {
      pSVar4 = (ScriptEngine *)se::ScriptEngine::getInstance();
      uVar5 = se::ScriptEngine::isValid(pSVar4);
      if (((uVar5 & 1) != 0) && (pSVar4[0x20e] == (ScriptEngine)0x0)) {
        pIVar6 = (Isolate *)v8::Isolate::GetCurrent();
        v8::HandleScope::HandleScope((HandleScope *)&local_70,pIVar6);
        se::ScriptEngine::clearException();
        se::Object::clearPrivateData(this,false);
        se::Object::unroot(this);
        se::RefCounter::decRef((RefCounter *)this);
        v8::HandleScope::~HandleScope((HandleScope *)&local_70);
      }
    }
    else {
      local_70 = &PTR_FUN_01c8ced8;
      pOStack_68 = this;
      local_50 = (long *)&local_70;
      CleanupTask::pushTaskToAutoReleasePool((function *)&local_70);
      if (&local_70 == (undefined ***)local_50) {
        pcVar7 = *(code **)(*local_50 + 0x20);
      }
      else {
        if (local_50 == (long *)0x0) goto LAB_00c1170c;
        pcVar7 = *(code **)(*local_50 + 0x28);
      }
      (*pcVar7)();
    }
  }
LAB_00c1170c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

