
/* v8::internal::LocalAllocationBuffer::LocalAllocationBuffer(v8::internal::LocalAllocationBuffer
   const&) */

void __thiscall
v8::internal::LocalAllocationBuffer::LocalAllocationBuffer
          (LocalAllocationBuffer *this,LocalAllocationBuffer *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

