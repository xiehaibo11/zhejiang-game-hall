
/* fairygui::TweenConfig::~TweenConfig() */

void __thiscall fairygui::TweenConfig::~TweenConfig(TweenConfig *this)

{
  void *pvVar1;
  TweenConfig *pTVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    pvVar1 = (void *)puVar4[3];
    if (pvVar1 != (void *)0x0) {
      puVar4[4] = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)*puVar4;
    if (pvVar1 != (void *)0x0) {
      puVar4[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar4);
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  pTVar2 = *(TweenConfig **)(this + 0x60);
  *(undefined8 *)(this + 0x18) = 0;
  if (this + 0x40 == pTVar2) {
    pcVar3 = *(code **)(*(long *)pTVar2 + 0x20);
  }
  else {
    if (pTVar2 == (TweenConfig *)0x0) goto LAB_00a96e74;
    pcVar3 = *(code **)(*(long *)pTVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00a96e74:
  if (((byte)this[0x28] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}

