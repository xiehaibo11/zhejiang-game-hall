
void FUN_00b32204(long param_1,uint param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((int)param_2 < 0) || (DAT_01d3ac58 <= (int)param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x125);
  }
  uVar3 = DAT_01d3ac48 >> ((ulong)param_2 & 0x3f);
  if ((uVar3 - 1 & param_1 - DAT_01d3ac40) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x126);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (ulong)(param_1 - DAT_01d3ac40) / uVar3;
  }
  uVar2 = uVar2 + (1L << ((ulong)param_2 & 0x3f));
  if ((uVar2 != 0) && (uVar2 < DAT_01d3ac78)) {
    bVar1 = *(byte *)(param_3 + (uVar2 >> 3));
    uVar3 = 1L << (uVar2 & 7);
    if ((uVar3 & bVar1) == 0) {
      *(byte *)(param_3 + (uVar2 >> 3)) = (byte)uVar3 | bVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !TESTBIT(table, bit)","crypto/mem_sec.c",0x129);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x128);
}

