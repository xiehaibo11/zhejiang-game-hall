
undefined8 tls_construct_server_hello(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_34;
  
  local_34 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x1e) + 8);
  puVar1 = (undefined1 *)(lVar7 + (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x6c))
  ;
  *puVar1 = (char)((uint)*param_1 >> 8);
  puVar1[1] = (char)*param_1;
  lVar5 = *(long *)(param_1 + 0x24);
  uVar8 = *(undefined8 *)(lVar5 + 0xa0);
                    /* try { // try from 00ae5cd0 to 00be5cdb has its CatchHandler @ 00ae5d48 */
  *(undefined8 *)(puVar1 + 0x1a) = *(undefined8 *)(lVar5 + 0xa8);
  *(undefined8 *)(puVar1 + 0x12) = uVar8;
  uVar8 = *(undefined8 *)(lVar5 + 0x90);
  *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(lVar5 + 0x98);
  *(undefined8 *)(puVar1 + 2) = uVar8;
                    /* try { // try from 00ae5cdc to 00be5d7f has its CatchHandler @ 00ae5c20 */
  lVar5 = *(long *)(param_1 + 0x5e);
  if ((*(int *)(lVar5 + 0x90) != 0) ||
     (((*(byte *)(*(long *)(param_1 + 0x6e) + 0x40) >> 1 & 1) == 0 && (param_1[0x2c] == 0)))) {
    *(undefined4 *)(lVar5 + 0x38) = 0;
  }
  iVar2 = *(int *)(lVar5 + 0x38);
  if (iVar2 < 0x21) {
    puVar6 = puVar1 + 0x23;
    puVar1[0x22] = (char)iVar2;
    memcpy(puVar6,(void *)(*(long *)(param_1 + 0x5e) + 0x3c),(long)iVar2);
                    /* catch() { ... } // from try @ 00ae5cd0 with catch @ 00ae5d48 */
    puVar6 = puVar6 + iVar2;
    iVar2 = ssl3_put_cipher_by_char(*(undefined8 *)(*(long *)(param_1 + 0x24) + 0x228),puVar6);
    uVar4 = 0;
    if (*(undefined4 **)(*(long *)(param_1 + 0x24) + 0x280) != (undefined4 *)0x0) {
      uVar4 = (undefined1)**(undefined4 **)(*(long *)(param_1 + 0x24) + 0x280);
    }
    puVar6[iVar2] = uVar4;
    iVar3 = ssl_prepare_serverhello_tlsext(param_1);
    if (iVar3 < 1) {
      iVar2 = 0x113;
      iVar3 = 0x623;
    }
    else {
      lVar5 = ssl_add_serverhello_tlsext(param_1,puVar6 + iVar2 + 1,lVar7 + 0x4000,&local_34);
      if (lVar5 == 0) {
        ssl3_send_alert(param_1,2,local_34);
        iVar2 = 0x44;
        iVar3 = 0x62b;
      }
      else {
        iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x70))
                          (param_1,2,lVar5 - (long)puVar1);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = 0x44;
        iVar3 = 0x633;
      }
    }
  }
  else {
    iVar2 = 0x44;
    iVar3 = 0x60c;
  }
  ERR_put_error(0x14,0x178,iVar2,"ssl/statem/statem_srvr.c",iVar3);
  ossl_statem_set_error(param_1);
  return 0;
}

