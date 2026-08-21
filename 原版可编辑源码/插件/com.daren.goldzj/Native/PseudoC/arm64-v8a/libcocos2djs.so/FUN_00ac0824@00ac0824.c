
void FUN_00ac0824(void)

{
  DAT_01d1e1b0 = CRYPTO_get_ex_new_index
                           (5,0,"SSL for verify callback",(undefined1 *)0x0,(undefined1 *)0x0,
                            (undefined1 *)0x0);
  DAT_01d38ea4 = DAT_01d1e1b0 >> 0x1f ^ 1;
  return;
}

