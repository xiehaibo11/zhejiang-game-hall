
/* v8::internal::SimpleStringBuilder::Finalize() */

undefined8 __thiscall v8::internal::SimpleStringBuilder::Finalize(SimpleStringBuilder *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x10);
  iVar2 = iVar1;
  if (iVar1 == *(int *)(this + 8)) {
    iVar2 = iVar1 + -1;
    *(int *)(this + 0x10) = iVar2;
    if (3 < iVar2) {
      *(undefined1 *)((long)iVar1 + *(long *)this + -4) = 0x2e;
      iVar2 = *(int *)(this + 0x10);
      if (2 < iVar2) {
        *(undefined1 *)((long)iVar2 + *(long *)this + -2) = 0x2e;
        iVar2 = *(int *)(this + 0x10);
        if (1 < iVar2) {
          *(undefined1 *)((long)iVar2 + *(long *)this + -1) = 0x2e;
          iVar2 = *(int *)(this + 0x10);
        }
      }
    }
  }
  *(undefined1 *)(*(long *)this + (long)iVar2) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return *(undefined8 *)this;
}

