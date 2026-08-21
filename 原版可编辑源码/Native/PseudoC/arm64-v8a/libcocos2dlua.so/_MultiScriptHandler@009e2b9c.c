
/* universe::MultiScriptHandler::~MultiScriptHandler() */

void __thiscall universe::MultiScriptHandler::~MultiScriptHandler(MultiScriptHandler *this)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  lVar2 = *(long *)(this + 0x30);
  *(undefined ***)this = &PTR__MultiScriptHandler_016a0408;
  if ((lVar2 != 0) && (plVar4 = *(long **)(this + 0x18), plVar4 != (long *)0x0)) {
    while( true ) {
      luaL_unref(lVar2,0xffffd8f0,(int)plVar4[3]);
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) break;
      lVar2 = *(long *)(this + 0x30);
    }
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
  return;
}

