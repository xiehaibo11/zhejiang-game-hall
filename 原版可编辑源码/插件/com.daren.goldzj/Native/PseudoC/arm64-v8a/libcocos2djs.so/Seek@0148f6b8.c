
/* v8::internal::AsmJsScanner::Seek(unsigned long) */

void __thiscall v8::internal::AsmJsScanner::Seek(AsmJsScanner *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  uVar3 = plVar1[4];
  if (param_1 < uVar3) {
    lVar2 = plVar1[1];
  }
  else {
    lVar2 = plVar1[1];
    if (param_1 < uVar3 + (plVar1[3] - lVar2 >> 1)) {
      plVar1[2] = lVar2 + (param_1 - uVar3) * 2;
      goto LAB_0148f6fc;
    }
  }
  plVar1[4] = param_1;
  plVar1[2] = lVar2;
  if ((char)plVar1[6] == '\0') {
    (**(code **)(*plVar1 + 0x28))();
  }
LAB_0148f6fc:
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x30] = (AsmJsScanner)0x0;
  Next(this);
  return;
}

