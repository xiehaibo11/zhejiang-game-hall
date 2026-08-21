
/* v8::internal::Isolate::CancelTerminateExecution() */

void __thiscall v8::internal::Isolate::CancelTerminateExecution(Isolate *this)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(long *)(this + 0x2bb8);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xef;
  }
  iVar3 = (int)*(ulong *)(this + 0x2bd8);
  if (((*(ulong *)(this + 0x2bd8) & 1) == 0) ||
     (uVar2 = *(undefined8 *)(this + 0xa8), iVar3 != (int)uVar2)) {
    if (iVar3 == *(int *)(this + 0x188)) {
      this[0x2c19] = (Isolate)0x0;
      uVar2 = *(undefined8 *)(this + 0xa8);
      *(undefined8 *)(this + 0x2bd8) = uVar2;
    }
    else {
      uVar2 = *(undefined8 *)(this + 0xa8);
    }
  }
  if ((*(int *)(this + 0x2c20) != (int)uVar2) && (*(int *)(this + 0x2c20) == *(int *)(this + 0x188))
     ) {
    this[0x2c19] = (Isolate)0x0;
    *(undefined8 *)(this + 0x2c20) = uVar2;
  }
  return;
}

