
/* v8::internal::Debug::ClearOneShot() */

void __thiscall v8::internal::Debug::ClearOneShot(Debug *this)

{
  Debug *pDVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  pDVar1 = this;
  for (puVar3 = *(undefined8 **)(this + 0x18); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[1]) {
    uVar2 = *puVar3;
    ClearBreakPoints(pDVar1,uVar2);
    pDVar1 = (Debug *)ApplyBreakPoints(this,uVar2);
  }
  return;
}

