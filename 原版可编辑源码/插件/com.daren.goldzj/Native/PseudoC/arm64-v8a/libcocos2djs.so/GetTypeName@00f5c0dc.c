
/* v8::internal::JSStackFrame::GetTypeName() */

int * __thiscall v8::internal::JSStackFrame::GetTypeName(JSStackFrame *this)

{
  long lVar1;
  ulong *puVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 8);
  puVar2 = *(ulong **)(this + 0x10);
  uVar5 = *puVar2;
  if ((uVar5 & 1) != 0) {
    piVar3 = (int *)(lVar1 + 0xb0);
    if ((int)uVar5 == *piVar3) {
      return piVar3;
    }
    if ((int)uVar5 == *(int *)(lVar1 + 0xa0)) {
      return piVar3;
    }
    uVar4 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0xa9) {
      return (int *)(lVar1 + 0x918);
    }
    if (0xa8 < *(ushort *)(uVar4 + *(uint *)(uVar5 - 1))) goto LAB_00f5c104;
  }
  puVar2 = (ulong *)Object::ToObjectImpl(lVar1,puVar2,0);
LAB_00f5c104:
  if (puVar2 == (ulong *)0x0) {
    *(undefined8 *)(*(long *)(this + 8) + 0x2bd8) = *(undefined8 *)(*(long *)(this + 8) + 0xa8);
    *(undefined1 *)(*(long *)(this + 8) + 0x2c19) = 0;
    return (int *)(*(long *)(this + 8) + 0xb0);
  }
  piVar3 = (int *)JSReceiver::GetConstructorName(puVar2);
  return piVar3;
}

