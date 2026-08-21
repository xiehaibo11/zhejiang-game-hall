
/* register_all_spine_manual(se::Object*) */

undefined8 register_all_spine_manual(Object *param_1)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  ScriptEngine *this;
  code *pcVar4;
  Value aVStack_70 [16];
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_70);
  uVar2 = se::Object::getProperty(param_1,"spine",aVStack_70);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject((HandleObject *)local_60,pOVar3);
    se::Value::setObject(aVStack_70,(HandleObject *)local_60,false);
    se::Object::setProperty(param_1,"spine",aVStack_70);
    se::HandleObject::~HandleObject((HandleObject *)local_60);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_70);
  se::Object::defineFunction
            (pOVar3,"initSkeletonRenderer",js_register_spine_initSkeletonRendererRegistry);
  se::Object::defineFunction(pOVar3,"initSkeletonData",js_register_spine_initSkeletonDataRegistry);
  se::Object::defineFunction
            (pOVar3,"retainSkeletonData",js_register_spine_retainSkeletonDataRegistry);
  se::Object::defineFunction
            (pOVar3,"disposeSkeletonData",js_register_spine_disposeSkeletonDataRegistry);
  spine::setSpineObjectDisposeCallback(FUN_00c11624);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_60[0] = &PTR_FUN_01c8cf58;
  local_40 = local_60;
  se::ScriptEngine::addBeforeCleanupHook(this,(function *)local_60);
  if (local_60 == local_40) {
    pcVar4 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00c104dc;
    pcVar4 = (code *)(*local_40)[5];
  }
  (*pcVar4)();
LAB_00c104dc:
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Value::~Value(aVStack_70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

