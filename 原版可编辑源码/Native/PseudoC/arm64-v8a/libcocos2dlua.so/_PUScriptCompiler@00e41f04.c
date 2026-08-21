
/* cocos2d::PUScriptCompiler::~PUScriptCompiler() */

void __thiscall cocos2d::PUScriptCompiler::~PUScriptCompiler(PUScriptCompiler *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(this + 0x40);
  *(undefined ***)this = &PTR__PUScriptCompiler_016f2070;
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    for (lVar3 = plVar5[6]; plVar5 + 5 != (long *)lVar3; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long **)(lVar3 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x10) + 8))();
      }
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    puVar1 = *(void **)(this + 0x40);
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      if (puVar1[7] != 0) {
        lVar3 = puVar1[5];
        plVar5 = (long *)puVar1[6];
        lVar4 = *plVar5;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar4;
        puVar1[7] = 0;
        while (plVar5 != puVar1 + 5) {
          plVar6 = (long *)plVar5[1];
          operator_delete(plVar5);
          plVar5 = plVar6;
        }
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    lVar3 = *(long *)(this + 0x38);
    *(undefined8 *)(this + 0x40) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x30) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x48) = 0;
  }
  puVar1 = *(void **)(this + 0x40);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (puVar1[7] != 0) {
      lVar3 = puVar1[5];
      plVar5 = (long *)puVar1[6];
      lVar4 = *plVar5;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar4;
      puVar1[7] = 0;
      while (plVar5 != puVar1 + 5) {
        plVar6 = (long *)plVar5[1];
        operator_delete(plVar5);
        plVar5 = plVar6;
      }
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
      operator_delete((void *)puVar1[7]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

