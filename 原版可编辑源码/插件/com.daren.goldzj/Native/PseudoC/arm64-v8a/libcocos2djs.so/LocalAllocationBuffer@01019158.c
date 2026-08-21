
/* v8::internal::LocalAllocationBuffer::LocalAllocationBuffer(v8::internal::Heap*,
   v8::internal::LinearAllocationArea) */

void __thiscall
v8::internal::LocalAllocationBuffer::LocalAllocationBuffer
          (LocalAllocationBuffer *this,Heap *param_1,long param_3,undefined8 param_4)

{
  *(Heap **)this = param_1;
  *(long *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = param_4;
  if (param_3 != 0) {
    Heap::CreateFillerObjectAt(param_1,param_3,(int)param_4 - (int)param_3,1,1);
    return;
  }
  return;
}

