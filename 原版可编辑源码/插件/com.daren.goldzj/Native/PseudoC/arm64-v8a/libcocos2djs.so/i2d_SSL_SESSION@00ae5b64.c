
int i2d_SSL_SESSION(SSL_SESSION *in,uchar **pp)

{
  int iVar1;
  size_t sVar2;
  undefined2 uVar3;
  long lVar4;
  char *pcVar5;
  undefined4 local_1c8 [2];
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0 [2];
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198 [2];
  char *local_190;
  undefined8 uStack_188;
  undefined4 local_180 [2];
  long local_178;
  undefined8 uStack_170;
  undefined4 local_168 [2];
  char *local_160;
  undefined8 uStack_158;
  undefined1 local_14c [4];
  undefined4 local_148 [2];
  undefined1 *local_140;
  undefined8 uStack_138;
  undefined4 local_130 [2];
  uchar *local_128;
  undefined8 uStack_120;
  undefined4 local_118 [2];
  uchar *local_110;
  undefined8 uStack_108;
  uint local_100 [2];
  uchar *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined4 local_e0 [2];
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  uint *local_a8;
  undefined4 *local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  undefined4 *local_68;
  long local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  ulong local_38;
  
  iVar1 = 0;
  if (in != (SSL_SESSION *)0x0) {
    lVar4 = *(long *)(in->krb5_client_princ + 0x48);
    if (lVar4 == 0) {
                    /* try { // try from 00ae5c80 to 00be5c8f has its CatchHandler @ 00ae62c4 */
      if (*(long *)(in->krb5_client_princ + 0x50) == 0) {
        return 0;
      }
      memset(&local_b8,0,0x88);
      iVar1 = in->ssl_version;
      uVar3 = (undefined2)*(undefined8 *)(in->krb5_client_princ + 0x50);
    }
    else {
      memset(&local_b8,0,0x88);
      iVar1 = in->ssl_version;
      uVar3 = (undefined2)*(undefined4 *)(lVar4 + 0x10);
    }
    local_c0 = (long)iVar1;
    local_c8 = 1;
    local_d8 = &local_e4;
    local_b8 = local_e0;
                    /* try { // try from 00ae5bc4 to 00be5bcb has its CatchHandler @ 00ae62f4 */
    local_e4 = (undefined1)((ushort)uVar3 >> 8);
    local_e3 = (undefined1)uVar3;
                    /* try { // try from 00ae5bcc to 00be5c7f has its CatchHandler @ 00ae4dc4 */
    uStack_d0 = 0;
    local_e0[0] = 2;
    if (*(int *)(in->krb5_client_princ + 0x40) != 0) {
      local_14c[0] = (undefined1)*(int *)(in->krb5_client_princ + 0x40);
      local_140 = local_14c;
      local_b0 = local_148;
      uStack_138 = 0;
      local_148[0] = 1;
    }
    local_100[0] = in->key_arg_length;
    local_f8 = in->key_arg;
    uStack_f0 = 0;
    local_a8 = local_100;
    local_118[0] = *(undefined4 *)(in->master_key + 0x24);
    local_110 = in->master_key + 0x28;
    uStack_108 = 0;
    local_a0 = local_118;
    local_130[0] = *(undefined4 *)(in->session_id + 0x14);
    local_128 = in->session_id + 0x18;
    uStack_120 = 0;
    local_78 = local_130;
    local_90 = *(undefined8 *)(in->krb5_client_princ + 0x38);
    local_88 = *(undefined8 *)(in->krb5_client_princ + 0x30);
    uStack_70 = *(undefined8 *)(in->krb5_client_princ + 0x20);
    local_80 = *(undefined8 *)(in->krb5_client_princ + 8);
    pcVar5 = *(char **)(in->krb5_client_princ + 0x78);
    if (pcVar5 == (char *)0x0) {
      local_68 = (undefined4 *)0x0;
    }
    else {
      sVar2 = strlen(pcVar5);
      local_68 = local_168;
      uStack_158 = 0;
      local_168[0] = (undefined4)sVar2;
      local_160 = pcVar5;
    }
    if (*(long *)(in->krb5_client_princ + 0xa0) != 0) {
      uStack_170 = 0;
      local_58 = local_180;
      local_180[0] = (undefined4)*(undefined8 *)(in->krb5_client_princ + 0xa8);
      local_178 = *(long *)(in->krb5_client_princ + 0xa0);
    }
    if (*(long *)(in->krb5_client_princ + 0xb0) != 0) {
      local_60 = *(long *)(in->krb5_client_princ + 0xb0);
    }
    pcVar5 = *(char **)(in->sid_ctx + 0x14);
    if (pcVar5 == (char *)0x0) {
      local_50 = (undefined4 *)0x0;
    }
    else {
      sVar2 = strlen(pcVar5);
      local_50 = local_1c8;
      uStack_1b8 = 0;
      local_1c8[0] = (undefined4)sVar2;
      local_1c0 = pcVar5;
    }
    pcVar5 = *(char **)(in->sid_ctx + 0x1c);
    if (pcVar5 == (char *)0x0) {
      local_48 = (undefined4 *)0x0;
    }
    else {
      sVar2 = strlen(pcVar5);
      local_48 = local_1b0;
      uStack_1a0 = 0;
      local_1b0[0] = (undefined4)sVar2;
      local_1a8 = pcVar5;
    }
    pcVar5 = *(char **)(in->krb5_client_princ + 0xb8);
    if (pcVar5 == (char *)0x0) {
      local_40 = (undefined4 *)0x0;
    }
    else {
                    /* try { // try from 00ae5d40 to 00be5d4b has its CatchHandler @ 00ae6388 */
      sVar2 = strlen(pcVar5);
      local_40 = local_198;
      uStack_188 = 0;
      local_198[0] = (undefined4)sVar2;
      local_190 = pcVar5;
    }
    local_38 = (ulong)*(uint *)(in->krb5_client_princ + 0xc0);
                    /* try { // try from 00ae5d78 to 00be5d87 has its CatchHandler @ 00ae62dc */
    iVar1 = ASN1_item_i2d((ASN1_VALUE *)&local_c8,pp,(ASN1_ITEM *)&DAT_01c72a60);
  }
  return iVar1;
}

