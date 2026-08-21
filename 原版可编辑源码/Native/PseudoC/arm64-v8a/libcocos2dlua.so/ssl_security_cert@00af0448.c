
undefined4
ssl_security_cert(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *name;
  EVP_MD *md;
  uint uVar5;
  int local_44;
  
  uVar5 = 0;
  if (param_4 != 0) {
    uVar5 = 0x1000;
  }
  if (param_5 == 0) {
    lVar4 = X509_get0_pubkey(param_3);
    if (lVar4 == 0) {
      uVar1 = 0xffffffff;
      if (param_1 != 0) goto LAB_00af04dc;
LAB_00af0528:
      iVar2 = ssl_ctx_security(param_2,uVar5 | 0x60011,uVar1,0,param_3);
    }
    else {
      uVar1 = EVP_PKEY_security_bits();
      if (param_1 == 0) goto LAB_00af0528;
LAB_00af04dc:
      iVar2 = ssl_security(param_1,uVar5 | 0x60011,uVar1,0,param_3);
    }
    if (iVar2 == 0) {
      return 0x18d;
    }
  }
  else {
    lVar4 = X509_get0_pubkey(param_3);
    if (lVar4 == 0) {
      uVar1 = 0xffffffff;
      if (param_1 != 0) goto LAB_00af04a0;
LAB_00af0500:
      iVar2 = ssl_ctx_security(param_2,uVar5 | 0x60010,uVar1,0,param_3);
    }
    else {
      uVar1 = EVP_PKEY_security_bits();
      if (param_1 == 0) goto LAB_00af0500;
LAB_00af04a0:
      iVar2 = ssl_security(param_1,uVar5 | 0x60010,uVar1,0,param_3);
    }
    if (iVar2 == 0) {
      return 399;
    }
  }
  local_44 = 0;
  uVar3 = X509_get_extension_flags(param_3);
  if ((uVar3 >> 0xd & 1) != 0) {
    iVar2 = 1;
    goto LAB_00af05d0;
  }
  iVar2 = X509_get_signature_nid(param_3);
  if (((iVar2 == 0) || (iVar2 = OBJ_find_sigid_algs(iVar2,&local_44,(int *)0x0), iVar2 == 0)) ||
     (local_44 == 0)) {
LAB_00af05b4:
    iVar2 = -1;
  }
  else {
    name = OBJ_nid2sn(local_44);
    md = EVP_get_digestbyname(name);
    if (md == (EVP_MD *)0x0) goto LAB_00af05b4;
    iVar2 = EVP_MD_size(md);
    iVar2 = iVar2 << 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af0604 with catch @ 00af0594
                       catch(type#1 @ 00000000) { ... } // from try @ 00af0634 with catch @ 00af0594
                       catch(type#1 @ 00000000) { ... } // from try @ 00af0664 with catch @ 00af0594
                       catch(type#1 @ 00000000) { ... } // from try @ 00af068c with catch @ 00af0594
                       catch(type#1 @ 00000000) { ... } // from try @ 00af06b8 with catch @ 00af0594
                        */
  }
  if (param_1 == 0) {
    iVar2 = ssl_ctx_security(param_2,uVar5 | 0x60012,iVar2,local_44,param_3);
  }
  else {
    iVar2 = ssl_security(param_1,uVar5 | 0x60012,iVar2,local_44,param_3);
  }
LAB_00af05d0:
  uVar1 = 0x18e;
  if (iVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}

