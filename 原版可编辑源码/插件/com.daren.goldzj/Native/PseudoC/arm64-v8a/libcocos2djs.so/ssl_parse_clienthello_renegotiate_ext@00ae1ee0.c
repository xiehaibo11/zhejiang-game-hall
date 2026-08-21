
undefined8 ssl_parse_clienthello_renegotiate_ext(long param_1,long *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *__s1;
  ulong __n;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2[1] != 0) {
    uVar4 = param_2[1] - 1;
                    /* try { // try from 00ae1f04 to 00be1f0f has its CatchHandler @ 00ae1fe4 */
    __s1 = (byte *)*param_2 + 1;
    bVar1 = *(byte *)*param_2;
    __n = (ulong)bVar1;
    *param_2 = (long)__s1;
    param_2[1] = uVar4;
    if (__n <= uVar4) {
      *param_2 = (long)(__s1 + __n);
      param_2[1] = uVar4 - __n;
      lVar5 = *(long *)(param_1 + 0x90);
      if (bVar1 == *(byte *)(lVar5 + 0x380)) {
        iVar2 = memcmp(__s1,(void *)(lVar5 + 0x340),__n);
        if (iVar2 == 0) {
          *(undefined4 *)(lVar5 + 0x3c4) = 1;
          return 1;
        }
                    /* try { // try from 00ae1f68 to 00be1f6f has its CatchHandler @ 00ae1fcc */
                    /* try { // try from 00ae1f70 to 00be1fc3 has its CatchHandler @ 00ae1eb4 */
        iVar2 = 0x42;
      }
      else {
        iVar2 = 0x3a;
      }
      ERR_put_error(0x14,300,0x151,"ssl/t1_reneg.c",iVar2);
      uVar3 = 0x28;
      goto LAB_00ae1f98;
    }
  }
  ERR_put_error(0x14,300,0x150,"ssl/t1_reneg.c",0x32);
  uVar3 = 0x2f;
LAB_00ae1f98:
  *param_3 = uVar3;
  return 0;
}

