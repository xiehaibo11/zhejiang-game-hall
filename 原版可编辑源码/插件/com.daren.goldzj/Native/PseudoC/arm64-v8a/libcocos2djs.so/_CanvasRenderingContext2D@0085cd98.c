
/* cocos2d::CanvasRenderingContext2D::~CanvasRenderingContext2D() */

void __thiscall
cocos2d::CanvasRenderingContext2D::~CanvasRenderingContext2D(CanvasRenderingContext2D *this)

{
  CanvasRenderingContext2D CVar1;
  long *plVar2;
  CanvasRenderingContext2D *pCVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x100);
  if (puVar5 != (undefined8 *)0x0) {
    plVar2 = (long *)JniHelper::getEnv();
    (**(code **)(*plVar2 + 0xb0))(plVar2,*puVar5);
    Data::~Data((Data *)(puVar5 + 1));
    operator_delete(puVar5);
  }
  pCVar3 = *(CanvasRenderingContext2D **)(this + 0xf0);
  if (this + 0xd0 == pCVar3) {
    pcVar4 = *(code **)(*(long *)pCVar3 + 0x20);
  }
  else {
    if (pCVar3 == (CanvasRenderingContext2D *)0x0) goto LAB_0085ce08;
    pcVar4 = *(code **)(*(long *)pCVar3 + 0x28);
  }
  (*pcVar4)();
LAB_0085ce08:
  if (((byte)this[0xb8] & 1) == 0) {
    CVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 200));
    CVar1 = this[0xa0];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    CVar1 = this[0x88];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    CVar1 = this[0x70];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    CVar1 = this[0x58];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    CVar1 = this[0x40];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    CVar1 = this[0x28];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    CVar1 = this[0x10];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}

