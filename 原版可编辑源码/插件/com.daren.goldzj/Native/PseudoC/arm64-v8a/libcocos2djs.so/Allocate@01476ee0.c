
/* v8::base::OS::Allocate(void*, unsigned long, unsigned long, v8::base::OS::MemoryPermission) */

void * v8::base::OS::Allocate(ulong param_1,long param_2,long param_3,uint param_4)

{
  int __prot;
  int iVar1;
  long lVar2;
  long lVar3;
  void *__addr;
  uint *puVar4;
  char *pcVar5;
  void *pvVar6;
  ulong __len;
  
  lVar2 = sysconf(0x27);
  lVar3 = sysconf(0x27);
  if (4 < param_4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  __prot = *(int *)(&DAT_01a3dbe0 + (long)(int)param_4 * 4);
  __len = (((param_2 + param_3) - lVar2) + lVar3) - 1U & -lVar3;
  iVar1 = 0x4022;
  if (param_4 != 0) {
    iVar1 = 0x22;
  }
  printf("Allocate size %zu\n",__len);
  __addr = mmap((void *)(-param_3 & param_1),__len,__prot,iVar1,-1,0);
  if (__addr != (void *)0x0) {
    if (__addr != (void *)0xffffffffffffffff) {
      pvVar6 = (void *)((long)__addr + param_3 + -1 & -param_3);
      if (__addr != pvVar6) {
        iVar1 = munmap(__addr,(long)pvVar6 - (long)__addr);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","Free(base, prefix_size)");
        }
        __len = __len - ((long)pvVar6 - (long)__addr);
      }
      if (__len - param_2 == 0) {
        return pvVar6;
      }
      iVar1 = munmap((void *)((long)pvVar6 + param_2),__len - param_2);
      if (iVar1 == 0) {
        return pvVar6;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Free(aligned_base + size, suffix_size)");
    }
    puVar4 = (uint *)__errno();
    pcVar5 = strerror(*puVar4);
    printf(" allocate error :\'%s\', code %d\n",pcVar5,(ulong)*puVar4);
  }
  return (void *)0x0;
}

