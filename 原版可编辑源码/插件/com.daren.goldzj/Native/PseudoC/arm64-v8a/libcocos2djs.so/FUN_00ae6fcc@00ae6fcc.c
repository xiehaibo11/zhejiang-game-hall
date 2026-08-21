
bool FUN_00ae6fcc(void)

{
  int iVar1;
  
  iVar1 = SSL_CTX_use_serverinfo_file();
                    /* try { // try from 00ae6fe4 to 00be6feb has its CatchHandler @ 00ae7230 */
  return 0 < iVar1;
}

