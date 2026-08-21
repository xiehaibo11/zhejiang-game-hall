
/* v8::base::PosixMemoryMappedFile::~PosixMemoryMappedFile() */

int __thiscall v8::base::PosixMemoryMappedFile::~PosixMemoryMappedFile(PosixMemoryMappedFile *this)

{
  int iVar1;
  long lVar2;
  void *__addr;
  long lVar3;
  
  __addr = *(void **)(this + 0x10);
  *(undefined ***)this = &PTR__PosixMemoryMappedFile_01cc3f88;
  if (__addr != (void *)0x0) {
    lVar3 = *(long *)(this + 0x18);
    lVar2 = sysconf(0x27);
    iVar1 = munmap(__addr,(lVar3 + lVar2) - 1U & -lVar2);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","OS::Free(memory_, RoundUp(size_, OS::AllocatePageSize()))");
    }
  }
  iVar1 = fclose(*(FILE **)(this + 8));
  return iVar1;
}

