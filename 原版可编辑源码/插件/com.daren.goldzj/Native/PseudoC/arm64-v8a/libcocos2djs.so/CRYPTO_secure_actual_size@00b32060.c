
ulong CRYPTO_secure_actual_size(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  CRYPTO_THREAD_write_lock(DAT_01d3ac20);
  if ((param_1 < DAT_01d3ac40) || (DAT_01d3ac40 + DAT_01d3ac48 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x23e);
  }
  uVar4 = (param_1 + DAT_01d3ac48) - DAT_01d3ac40;
  uVar2 = DAT_01d3ac58 - 1;
  if (uVar4 < DAT_01d3ac60) {
    iVar1 = (int)uVar2;
  }
  else {
    uVar3 = 0;
    if (DAT_01d3ac60 != 0) {
      uVar3 = uVar4 / DAT_01d3ac60;
    }
    do {
      if ((1L << (uVar3 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar3 >> 3))) != 0) break;
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x103);
      }
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 - 1;
    } while (uVar3 != 0);
    iVar1 = (int)uVar2;
  }
  if ((iVar1 < 0) || (DAT_01d3ac58 <= (int)uVar2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x10e);
  }
  uVar4 = DAT_01d3ac48 >> (uVar2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_01d3ac40) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x10f);
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = (param_1 - DAT_01d3ac40) / uVar4;
  }
  uVar3 = uVar3 + (1L << (uVar2 & 0x3f));
  if ((uVar3 != 0) && (uVar3 < DAT_01d3ac78)) {
    if ((1L << (uVar3 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar3 >> 3))) != 0) {
      CRYPTO_THREAD_unlock(DAT_01d3ac20);
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x242);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x111);
}

