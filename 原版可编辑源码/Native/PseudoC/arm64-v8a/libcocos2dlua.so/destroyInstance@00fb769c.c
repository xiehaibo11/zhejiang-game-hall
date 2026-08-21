
/* cocos2d::ScriptEngineManager::destroyInstance() */

void cocos2d::ScriptEngineManager::destroyInstance(void)

{
  long *plVar1;
  
  plVar1 = DAT_0178fd20;
  if (DAT_0178fd20 != (long *)0x0) {
    if ((long *)*DAT_0178fd20 != (long *)0x0) {
      (**(code **)(*(long *)*DAT_0178fd20 + 8))();
    }
    operator_delete(plVar1);
    DAT_0178fd20 = (long *)0x0;
  }
  return;
}

