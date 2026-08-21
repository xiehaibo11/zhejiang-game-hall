
/* v8::internal::InstructionStream::CreateOffHeapInstructionStream(v8::internal::Isolate*, unsigned
   char**, unsigned int*) */

void v8::internal::InstructionStream::CreateOffHeapInstructionStream
               (Isolate *param_1,uchar **param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  long *plVar3;
  ulong uVar4;
  uchar *__dest;
  undefined1 auVar5 [16];
  
  auVar5 = EmbeddedData::FromIsolate(param_1);
  __src = auVar5._0_8_;
  plVar3 = (long *)GetPlatformPageAllocator();
  uVar2 = (**(code **)(*plVar3 + 0x10))();
  uVar4 = GetRandomMmapAddr();
  uVar1 = -uVar2 & (auVar5._8_4_ + uVar2) - 1;
  __dest = (uchar *)AllocatePages(plVar3,uVar4 & -(ulong)uVar2,uVar1,(ulong)uVar2,2);
  if (__dest == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(allocated_bytes) != nullptr");
  }
  memcpy(__dest,__src,auVar5._8_8_ & 0xffffffff);
  uVar4 = SetPermissions(plVar3,__dest,uVar1,4);
  if ((uVar4 & 1) != 0) {
    *param_2 = __dest;
    *param_3 = auVar5._8_4_;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "SetPermissions(page_allocator, allocated_bytes, allocation_size, PageAllocator::kReadExecute)"
          );
}

