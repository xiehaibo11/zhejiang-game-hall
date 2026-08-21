
/* v8::internal::compiler::LiveRange::AttachToNext() */

void __thiscall v8::internal::compiler::LiveRange::AttachToNext(LiveRange *this)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(*(long *)(this + 8) + 8) = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
  *(undefined8 *)(*(long *)(this + 0x28) + 0x10) = 0;
  *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)(this + 0x28) + 8);
  *(undefined8 *)(*(long *)(this + 0x28) + 8) = 0;
  lVar2 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x18) == 0) {
    lVar2 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  }
  else {
    do {
      lVar1 = lVar2;
      lVar2 = *(long *)(lVar1 + 0x10);
    } while (lVar2 != 0);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(*(long *)(this + 0x28) + 0x18);
    lVar2 = *(long *)(this + 0x28);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  lVar2 = *(long *)(this + 0x28);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}

