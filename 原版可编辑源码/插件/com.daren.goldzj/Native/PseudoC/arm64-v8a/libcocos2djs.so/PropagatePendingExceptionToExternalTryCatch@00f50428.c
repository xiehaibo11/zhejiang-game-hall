
/* v8::internal::Isolate::PropagatePendingExceptionToExternalTryCatch() */

undefined8 __thiscall
v8::internal::Isolate::PropagatePendingExceptionToExternalTryCatch(Isolate *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(this + 0x2bd8);
  if (((iVar1 != *(int *)(this + 0x188)) && (*(ulong *)(this + 0x2c30) != 0)) &&
     ((*(long *)(this + 0x2bb8) == 0 ||
      (*(ulong *)(this + 0x2c30) <= *(long *)(*(long *)(this + 0x2bb8) + 0x20) - 1U)))) {
    this[0x2c19] = (Isolate)0x0;
    return 0;
  }
  lVar2 = *(long *)(this + 0x2bb8);
  if (((lVar2 == 0) || (*(ulong *)(lVar2 + 0x20) == 0)) ||
     ((iVar1 != *(int *)(this + 0x188) && (*(long *)(this + 0x2c30) - 1U < *(ulong *)(lVar2 + 0x20))
      ))) {
    this[0x2c19] = (Isolate)0x0;
  }
  else {
    this[0x2c19] = (Isolate)0x1;
    if (iVar1 == *(int *)(this + 0x188)) {
      *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) & 0xfd;
      *(byte *)(*(long *)(this + 0x2bb8) + 0x28) = *(byte *)(*(long *)(this + 0x2bb8) + 0x28) | 0x10
      ;
      *(undefined8 *)(*(long *)(this + 0x2bb8) + 0x10) = *(undefined8 *)(this + 0xb0);
    }
    else {
      *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) & 0xef | 2;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(this + 0x2bd8);
      uVar3 = *(ulong *)(this + 0x2c10);
      if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(this + 0xa8))) {
        *(ulong *)(lVar2 + 0x18) = uVar3;
      }
    }
  }
  return 1;
}

