
void SSL_get0_alpn_selected(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_2 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x3d0);
    *param_2 = lVar2;
                    /* try { // try from 00ad8424 to 00bd842b has its CatchHandler @ 00ad8468 */
    uVar1 = 0;
    if (lVar2 != 0) {
                    /* try { // try from 00ad842c to 00bd8483 has its CatchHandler @ 00ad83bc */
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x3d8);
    }
  }
  *param_3 = uVar1;
  return;
}

