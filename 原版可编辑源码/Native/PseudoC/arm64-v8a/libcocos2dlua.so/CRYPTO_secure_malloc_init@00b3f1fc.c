
int CRYPTO_secure_malloc_init(ulong param_1,uint param_2)

{
  size_t __len;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  int iVar8;
  
  if ((DAT_01784990 & 1) == 0) {
    DAT_017849a0 = CRYPTO_THREAD_lock_new();
    iVar8 = 0;
    if (DAT_017849a0 != 0) {
      memset(&DAT_017849b0,0,0x50);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: size > 0","crypto/mem_sec.c",0x15a);
      }
      if ((param_1 - 1 & param_1) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (size & (size - 1)) == 0","crypto/mem_sec.c",0x15b);
      }
      if ((int)param_2 < 1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: minsize > 0","crypto/mem_sec.c",0x15c);
      }
      if ((param_2 - 1 & param_2) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (minsize & (minsize - 1)) == 0","crypto/mem_sec.c",0x15d);
      }
      DAT_017849e0 = (ulong)(int)param_2;
      DAT_017849d8 = -1;
      uVar7 = 0;
      if (DAT_017849e0 != 0) {
        uVar7 = param_1 / DAT_017849e0;
      }
      DAT_017849f8 = uVar7 << 1;
      if ((int)DAT_017849f8 == 0) {
        lVar5 = -8;
      }
      else {
        DAT_017849d8 = -1;
        lVar5 = -8;
        uVar7 = DAT_017849f8;
        do {
          DAT_017849d8 = DAT_017849d8 + 1;
          uVar2 = (int)uVar7 >> 1;
          uVar7 = (ulong)uVar2;
          lVar5 = lVar5 + 8;
        } while (uVar2 != 0);
      }
      DAT_017849c8 = param_1;
      DAT_017849d0 = CRYPTO_zalloc(lVar5,"crypto/mem_sec.c",0x16b);
      if (DAT_017849d0 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.freelist != NULL","crypto/mem_sec.c",0x16c);
      }
      DAT_017849e8 = CRYPTO_zalloc(DAT_017849f8 >> 3,"crypto/mem_sec.c",0x170);
      if (DAT_017849e8 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.bittable != NULL","crypto/mem_sec.c",0x171);
      }
      DAT_017849f0 = CRYPTO_zalloc(DAT_017849f8 >> 3,"crypto/mem_sec.c",0x175);
      if (DAT_017849f0 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.bitmalloc != NULL","crypto/mem_sec.c",0x176);
      }
      sVar6 = sysconf(0x28);
      __len = 0x1000;
      if (0 < (long)sVar6) {
        __len = sVar6;
      }
      DAT_017849b8 = __len * 2 + DAT_017849c8;
      DAT_017849b0 = mmap((void *)0x0,DAT_017849b8,3,0x22,-1,0);
      if (DAT_017849b0 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sh.map_result != MAP_FAILED","crypto/mem_sec.c",0x19a);
      }
      DAT_017849c0 = (void *)((long)DAT_017849b0 + __len);
      FUN_00b40684(DAT_017849c0,0,DAT_017849e8);
      FUN_00b4076c(DAT_017849d0,DAT_017849c0);
      iVar1 = mprotect(DAT_017849b0,__len,0);
      uVar2 = mprotect((void *)((long)DAT_017849b0 + ((__len * 2 + DAT_017849c8) - 1 & -__len)),
                       __len,0);
      uVar3 = mlock(DAT_017849c0,DAT_017849c8);
      uVar4 = madvise(DAT_017849c0,DAT_017849c8,0x10);
      iVar8 = 2;
      if (-1 < (int)(uVar3 | uVar2 | uVar4)) {
        iVar8 = 1 - (iVar1 >> 0x1f);
      }
      DAT_01784990 = 1;
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}

