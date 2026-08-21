
/* v8::internal::InstructionStream::FreeOffHeapInstructionStream(unsigned char*, unsigned int) */

void v8::internal::InstructionStream::FreeOffHeapInstructionStream(uchar *param_1,uint param_2)

{
  int iVar1;
  PageAllocator *pPVar2;
  ulong uVar3;
  
  pPVar2 = (PageAllocator *)GetPlatformPageAllocator();
  iVar1 = (**(code **)(*(long *)pPVar2 + 0x10))();
  uVar3 = FreePages(pPVar2,param_1,(ulong)((param_2 + iVar1) - 1 & -iVar1));
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","FreePages(page_allocator, data, RoundUp(size, page_size))");
}

