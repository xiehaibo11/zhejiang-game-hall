
/* WARNING: Control flow encountered bad instruction data */

void FUN_0129accc(void)

{
  undefined2 uVar1;
  undefined1 in_q10 [16];
  undefined1 in_q27 [16];
  
  uVar1 = SIMD_PIECE(in_q10,0);
  NEON_fcmla(in_q27,uVar1,0x10e,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

