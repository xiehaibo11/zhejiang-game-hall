
bool FUN_00b9bfa8(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00b9bfac to 00c9bfb3 has its CatchHandler @ 00b9c5d4 */
  lVar2 = EVP_MD_CTX_pkey_ctx();
                    /* try { // try from 00b9bfcc to 00c9bfd7 has its CatchHandler @ 00b9c5d0 */
  iVar1 = CMAC_Update(*(CMAC_CTX **)(lVar2 + 0x28),param_2,param_3);
                    /* try { // try from 00b9bfd8 to 00c9c09f has its CatchHandler @ 00b9b8d4 */
  return iVar1 != 0;
}

