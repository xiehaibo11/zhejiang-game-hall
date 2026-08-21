
void FUN_00acfff8(void)

{
  DAT_0176c400 = CRYPTO_get_ex_new_index
                           (5,0,"SSL for verify callback",(undefined1 *)0x0,(undefined1 *)0x0,
                            (undefined1 *)0x0);
  DAT_01782c24 = DAT_0176c400 >> 0x1f ^ 1;
  return;
}

