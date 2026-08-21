
/* se::ScriptEngine::privateDataFinalize(void*) */

void se::ScriptEngine::privateDataFinalize(void *param_1)

{
  Object::nativeObjectFinalizeHook(*(void **)param_1);
  RefCounter::decRef(*(RefCounter **)((long)param_1 + 8));
  free(param_1);
  return;
}

