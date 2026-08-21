
/* v8::internal::LocalAllocationBuffer::Close() */

undefined1  [16] __thiscall v8::internal::LocalAllocationBuffer::Close(LocalAllocationBuffer *this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    Heap::CreateFillerObjectAt(*(Heap **)this,lVar2,*(int *)(this + 0x10) - (int)lVar2,1,1);
    uVar1 = *(undefined8 *)(this + 8);
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

