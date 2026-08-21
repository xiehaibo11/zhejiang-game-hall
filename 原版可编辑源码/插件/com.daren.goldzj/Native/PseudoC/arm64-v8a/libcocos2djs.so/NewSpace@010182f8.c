
/* v8::internal::NewSpace::NewSpace(v8::internal::Heap*, v8::PageAllocator*, unsigned long, unsigned
   long) */

void __thiscall
v8::internal::NewSpace::NewSpace
          (NewSpace *this,Heap *param_1,PageAllocator *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  SemiSpace *this_00;
  
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__FreeList_01caa258;
  *(undefined8 **)(this + 0x60) = puVar1;
  *(undefined ***)this = &PTR__Space_01ca9d00;
  this[0x38] = (NewSpace)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(Heap **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  puVar1 = operator_new__(0x10);
  *(undefined8 **)(this + 0x30) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__NewSpace_01ca95e8;
  base::Mutex::Mutex((Mutex *)(this + 0x98));
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__FreeList_01caa258;
  this_00 = (SemiSpace *)(this + 0xd0);
  *(undefined ***)this_00 = &PTR__Space_01ca9d00;
  *(undefined8 **)(this + 0x130) = puVar1;
  this[0x108] = (NewSpace)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(Heap **)(this + 0x110) = param_1;
  *(undefined4 *)(this + 0x118) = 1;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  puVar1 = operator_new__(0x10);
  *(undefined8 **)(this + 0x100) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this_00 = &PTR__Space_01ca9e90;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x158] = (NewSpace)0x0;
  *(undefined4 *)(this + 0x15c) = 1;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__FreeList_01caa258;
  *(undefined8 **)(this + 0x1d0) = puVar1;
  *(undefined ***)(this + 0x170) = &PTR__Space_01ca9d00;
  this[0x1a8] = (NewSpace)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(Heap **)(this + 0x1b0) = param_1;
  *(undefined4 *)(this + 0x1b8) = 1;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  puVar1 = operator_new__(0x10);
  *(undefined8 **)(this + 0x1a0) = puVar1;
  *puVar1 = 0;
  uVar2 = param_3 & 0xfffffffffffc0000;
  puVar1[1] = 0;
  *(undefined ***)(this + 0x170) = &PTR__Space_01ca9e90;
  *(ulong *)(this + 0x1e8) = uVar2;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  *(undefined8 *)(this + 0x1fc) = 0;
  *(ulong *)(this + 0x140) = param_4 & 0xfffffffffffc0000;
  *(ulong *)(this + 0x148) = uVar2;
  *(ulong *)(this + 0x138) = uVar2;
  this[0x158] = (NewSpace)0x0;
  *(ulong *)(this + 0x1d8) = uVar2;
  *(ulong *)(this + 0x1e0) = param_4 & 0xfffffffffffc0000;
  this[0x1f8] = (NewSpace)0x0;
  uVar2 = SemiSpace::Commit(this_00);
  if ((uVar2 & 1) != 0) {
    ResetLinearAllocationArea(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory((Isolate *)(param_1 + -0x8850),"New space setup",false);
}

