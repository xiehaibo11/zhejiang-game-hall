
undefined8 ossl_statem_server_construct_message(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  void *__src;
  int reason;
  ulong uVar5;
  int line;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = 0x175;
    reason = 0x44;
    line = 0x34a;
    break;
  default:
    goto switchD_00ae5848_caseD_14;
  case 0x15:
    pcVar6 = *(code **)(*(long *)(param_1 + 0x1b8) + 0xc0);
    if (pcVar6 != (code *)0x0) {
                    /* try { // try from 00ae5894 to 00be591b has its CatchHandler @ 00ae5894
                       catch() { ... } // from try @ 00ae5894 with catch @ 00ae5894
                       catch() { ... } // from try @ 00ae59b8 with catch @ 00ae5894 */
      lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 8);
      iVar3 = (*pcVar6)(param_1,*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x98) + 0x100);
      if (iVar3 != 0) {
        __src = *(void **)(param_1 + 0x98);
        uVar2 = *(uint *)((long)__src + 0x100);
        if (uVar2 < 0x100) {
          *(undefined2 *)(lVar7 + 0xc) = 0xfffe;
          *(char *)(lVar7 + 0xe) = (char)uVar2;
          memcpy((void *)(lVar7 + 0xf),__src,(ulong)(uVar2 & 0xff));
          uVar8 = lVar7 + 0xf + ((ulong)(uVar2 & 0xff) - (lVar7 + 0xc));
          uVar5 = uVar8 & 0xffffffff;
          dtls1_set_message_header(param_1,3,uVar5,0,uVar5);
          *(int *)(param_1 + 0x88) = (int)uVar8 + 0xc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          return 1;
        }
      }
    }
    iVar3 = 0x181;
    reason = 400;
    line = 0x372;
    break;
  case 0x16:
    uVar4 = tls_construct_server_hello(param_1);
    return uVar4;
  case 0x17:
    lVar7 = ssl_get_server_send_pkey(param_1);
    if (lVar7 == 0) {
      iVar3 = 0x176;
      reason = 0x44;
      line = 0xb9b;
    }
    else {
      lVar7 = ssl3_output_cert_chain(param_1,lVar7);
      if (lVar7 != 0) {
        return 1;
      }
                    /* try { // try from 00ae591c to 00be59b7 has its CatchHandler @ 00ae5a54 */
      iVar3 = 0x176;
      reason = 0x44;
      line = 0xba1;
    }
    break;
  case 0x18:
    uVar4 = tls_construct_server_key_exchange(param_1);
    return uVar4;
  case 0x19:
    uVar4 = tls_construct_certificate_request(param_1);
    return uVar4;
  case 0x1a:
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0xe,0);
    if (iVar3 != 0) {
      if (*(int *)(*(long *)(param_1 + 0x90) + 0x288) != 0) {
        return 1;
      }
      iVar3 = ssl3_digest_cached_records(param_1,0);
      if (iVar3 != 0) {
        return 1;
      }
      ossl_statem_set_error(param_1);
      return 1;
    }
                    /* try { // try from 00ae5ac0 to 00be5b6f has its CatchHandler @ 00ae5ac0
                       catch() { ... } // from try @ 00ae5ac0 with catch @ 00ae5ac0
                       catch() { ... } // from try @ 00ae5b7c with catch @ 00ae5ac0 */
    iVar3 = 0x177;
    reason = 0x44;
    line = 0x63e;
    break;
  case 0x21:
    uVar4 = tls_construct_new_session_ticket(param_1);
    return uVar4;
  case 0x22:
                    /* try { // try from 00ae59b8 to 00be5abf has its CatchHandler @ 00ae5894 */
    lVar7 = (long)*(int *)(param_1 + 0x280) + 4;
    iVar3 = BUF_MEM_grow(*(BUF_MEM **)(param_1 + 0x78),
                         (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c) + lVar7);
    if (iVar3 != 0) {
      puVar1 = (undefined1 *)
               (*(long *)(*(long *)(param_1 + 0x78) + 8) +
               (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c));
      *puVar1 = (char)*(undefined4 *)(param_1 + 0x234);
      puVar1[1] = (char)*(undefined2 *)(param_1 + 0x282);
      puVar1[2] = (char)((uint)*(undefined4 *)(param_1 + 0x280) >> 8);
      puVar1[3] = (char)*(undefined4 *)(param_1 + 0x280);
      memcpy(puVar1 + 4,*(void **)(param_1 + 0x278),(long)*(int *)(param_1 + 0x280));
      iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0x16,lVar7);
      if (iVar3 != 0) {
        return 1;
      }
    }
    goto LAB_00ae5ad8;
  case 0x23:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00ae591c with catch @ 00ae5a54 */
      uVar4 = tls_construct_change_cipher_spec(param_1);
      return uVar4;
    }
    uVar4 = dtls_construct_change_cipher_spec(param_1);
    return uVar4;
  case 0x24:
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
    uVar4 = tls_construct_finished
                      (param_1,*(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x50));
    return uVar4;
  }
  ERR_put_error(0x14,iVar3,reason,"ssl/statem/statem_srvr.c",line);
LAB_00ae5ad8:
  ossl_statem_set_error(param_1);
switchD_00ae5848_caseD_14:
  return 0;
}

