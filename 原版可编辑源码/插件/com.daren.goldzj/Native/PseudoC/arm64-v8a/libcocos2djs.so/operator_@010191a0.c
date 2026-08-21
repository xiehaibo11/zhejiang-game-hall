
/* v8::internal::LocalAllocationBuffer::TEMPNAMEPLACEHOLDERVALUE(v8::internal::LocalAllocationBuffer
   const&) */

LocalAllocationBuffer * __thiscall
v8::internal::LocalAllocationBuffer::operator=
          (LocalAllocationBuffer *this,LocalAllocationBuffer *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    Heap::CreateFillerObjectAt(*(Heap **)this,lVar1,*(int *)(this + 0x10) - (int)lVar1,1,1);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return this;
}

