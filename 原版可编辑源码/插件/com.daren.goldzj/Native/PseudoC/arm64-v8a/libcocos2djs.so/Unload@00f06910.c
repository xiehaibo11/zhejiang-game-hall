
/* v8::internal::Debug::Unload() */

void __thiscall v8::internal::Debug::Unload(Debug *this)

{
  Debug *pDVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  pDVar1 = (Debug *)ClearAllBreakPoints(this);
  for (puVar3 = *(undefined8 **)(this + 0x18); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[1]) {
    uVar2 = *puVar3;
    ClearBreakPoints(pDVar1,uVar2);
    pDVar1 = (Debug *)ApplyBreakPoints(this,uVar2);
  }
  this[0x4c] = (Debug)0xff;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (Debug)0x0;
  *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(this + 100) = 0xffffffff;
  this[0x84] = (Debug)0x0;
  this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
  RemoveAllCoverageInfos(this);
  ClearAllDebuggerHints(this);
  *(undefined8 *)this = 0;
  return;
}

