
/* v8::internal::Zone::DeleteAll() */

void __thiscall v8::internal::Zone::DeleteAll(Zone *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x28);
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    *(long *)(this + 8) = *(long *)(this + 8) - *(long *)(lVar2 + 0x10);
    (**(code **)(**(long **)(this + 0x20) + 0x18))();
    lVar2 = lVar1;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

