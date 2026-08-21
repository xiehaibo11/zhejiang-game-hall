
uint ssl_generate_master_secret(long param_1,void *param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  size_t __n;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  size_t __n_00;
  
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x14);
  if ((uVar3 & 0x1c8) == 0) {
                    /* try { // try from 00ac0184 to 00bc01ab has its CatchHandler @ 00ac0338 */
    uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(long *)(param_1 + 0x178) + 8,param_2,param_3 & 0xffffffff);
    *(undefined4 *)(*(long *)(param_1 + 0x178) + 4) = uVar5;
    __n = param_3;
  }
  else {
    __n_00 = *(size_t *)(*(long *)(param_1 + 0x90) + 0x2b8);
    __n = __n_00;
    if ((uVar3 & 8) == 0) {
      __n = param_3;
    }
    uVar1 = __n_00 + __n + 4;
    puVar6 = CRYPTO_malloc((int)uVar1,"ssl/s3_lib.c",0xf7a);
                    /* try { // try from 00ac0138 to 00bc0183 has its CatchHandler @ 00ac0138
                       catch() { ... } // from try @ 00ac0138 with catch @ 00ac0138
                       catch() { ... } // from try @ 00ac01d8 with catch @ 00ac0138
                       catch() { ... } // from try @ 00ac0270 with catch @ 00ac0138 */
    if (puVar6 == (undefined1 *)0x0) {
      *(undefined4 *)(*(long *)(param_1 + 0x178) + 4) = 0;
    }
    else {
      puVar2 = puVar6 + 2;
      puVar6[1] = (char)__n;
      *puVar6 = (char)(__n >> 8);
      if ((uVar3 >> 3 & 1) == 0) {
        memcpy(puVar2,param_2,__n);
      }
      else {
        memset(puVar2,0,__n);
      }
      puVar2 = puVar2 + __n;
      *puVar2 = (char)(__n_00 >> 8);
      puVar2[1] = (char)__n_00;
      memcpy(puVar2 + 2,*(void **)(*(long *)(param_1 + 0x90) + 0x2b0),__n_00);
                    /* try { // try from 00ac0220 to 00bc0227 has its CatchHandler @ 00ac0308 */
      CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2b0),__n_00,"ssl/s3_lib.c",
                        0xf89);
                    /* try { // try from 00ac0238 to 00bc023f has its CatchHandler @ 00ac02f8 */
                    /* try { // try from 00ac0244 to 00bc024b has its CatchHandler @ 00ac02e8 */
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2b0) = 0;
                    /* try { // try from 00ac0254 to 00bc0267 has its CatchHandler @ 00ac02d8 */
      uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18))
                        (param_1,*(long *)(param_1 + 0x178) + 8,puVar6,uVar1 & 0xffffffff);
                    /* try { // try from 00ac0268 to 00bc026f has its CatchHandler @ 00ac02c4 */
                    /* try { // try from 00ac0270 to 00bc034b has its CatchHandler @ 00ac0138 */
      *(undefined4 *)(*(long *)(param_1 + 0x178) + 4) = uVar5;
      CRYPTO_clear_free(puVar6,uVar1,"ssl/s3_lib.c",0xf8f);
    }
  }
  if (param_2 == (void *)0x0) {
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else if (param_4 == 0) {
                    /* try { // try from 00ac01d0 to 00bc01d7 has its CatchHandler @ 00ac0328 */
    OPENSSL_cleanse(param_2,__n);
                    /* try { // try from 00ac01d8 to 00bc021f has its CatchHandler @ 00ac0138 */
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    CRYPTO_clear_free(param_2,__n,"ssl/s3_lib.c",3999);
                    /* try { // try from 00ac01b0 to 00bc01b7 has its CatchHandler @ 00ac0330 */
    iVar4 = *(int *)(param_1 + 0x38);
  }
  if (iVar4 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2a0) = 0;
  }
  return *(uint *)(*(long *)(param_1 + 0x178) + 4) >> 0x1f ^ 1;
}

