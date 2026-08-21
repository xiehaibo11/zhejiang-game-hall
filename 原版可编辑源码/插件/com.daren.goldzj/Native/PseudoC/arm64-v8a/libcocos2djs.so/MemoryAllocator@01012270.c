
/* v8::internal::MemoryAllocator::MemoryAllocator(v8::internal::Isolate*, unsigned long, unsigned
   long) */

void __thiscall
v8::internal::MemoryAllocator::MemoryAllocator
          (MemoryAllocator *this,Isolate *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = Isolate::page_allocator(param_1);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(ulong *)(this + 0x48) = param_2 + 0x3ffff & 0xfffffffffffc0000;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  Unmapper::Unmapper((Unmapper *)(this + 0x88),(Heap *)(param_1 + 0x8850),this);
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 0x3f800000;
  InitializeCodePageAllocator(this,*(PageAllocator **)(this + 0x20),param_3);
  return;
}

