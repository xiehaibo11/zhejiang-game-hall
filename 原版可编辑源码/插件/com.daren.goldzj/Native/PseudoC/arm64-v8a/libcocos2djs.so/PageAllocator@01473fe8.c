
/* v8::base::PageAllocator::PageAllocator() */

void __thiscall v8::base::PageAllocator::PageAllocator(PageAllocator *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__PageAllocator_01cc3f20;
  uVar1 = OS::AllocatePageSize();
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = OS::CommitPageSize();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}

