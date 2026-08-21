
/* cocos2d::Console::Command::~Command() */

void __thiscall cocos2d::Console::Command::~Command(Command *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  Command *pCVar3;
  code *pcVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x70);
  if (plVar5 != (long *)0x0) {
    do {
      pCVar3 = (Command *)plVar5[5];
      if (pCVar3 != (Command *)0x0) {
        ~Command(pCVar3);
        operator_delete(pCVar3);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar1 = *(void **)(this + 0x70);
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
  }
  pvVar2 = *(void **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pCVar3 = *(Command **)(this + 0x50);
  if (this + 0x30 == pCVar3) {
    pcVar4 = *(code **)(*(long *)pCVar3 + 0x20);
  }
  else {
    if (pCVar3 == (Command *)0x0) goto LAB_00f8cdcc;
    pcVar4 = *(code **)(*(long *)pCVar3 + 0x28);
  }
  (*pcVar4)();
LAB_00f8cdcc:
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}

