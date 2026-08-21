
undefined4
tls1_generate_master_secret(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_c0 [128];
  
  if ((*(byte *)(*(long *)(param_1 + 0x178) + 0x150) & 1) == 0) {
    uVar2 = 0x30;
    FUN_00ae7e74(param_1,"master secret",0xd,*(long *)(param_1 + 0x90) + 0xb0,0x20,0,0,
                 *(long *)(param_1 + 0x90) + 0x90,0x20,param_3,param_4,
                 *(long *)(param_1 + 0x178) + 8,0x30);
  }
  else {
    iVar1 = ssl3_digest_cached_records(param_1,1);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = ssl_handshake_hash(param_1,auStack_c0,0x80);
      uVar2 = 0x30;
      FUN_00ae7e74(param_1,"extended master secret",0x16,auStack_c0,iVar1,0,0,0,0,param_3,param_4,
                   *(long *)(param_1 + 0x178) + 8,0x30);
      OPENSSL_cleanse(auStack_c0,(long)iVar1);
    }
  }
  return uVar2;
}

