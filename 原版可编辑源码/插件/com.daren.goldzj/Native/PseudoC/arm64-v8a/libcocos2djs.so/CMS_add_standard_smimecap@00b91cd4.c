
int CMS_add_standard_smimecap(stack_st_X509_ALGOR **smcap)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  EVP_CIPHER *pEVar4;
  EVP_MD *pEVar5;
  
  pcVar3 = OBJ_nid2sn(0x1ab);
  pEVar4 = EVP_get_cipherbyname(pcVar3);
  if ((pEVar4 == (EVP_CIPHER *)0x0) ||
     (iVar1 = CMS_add_simple_smimecap(smcap,0x1ab,-1), uVar2 = 0, iVar1 != 0)) {
    pcVar3 = OBJ_nid2sn(0x3d6);
    pEVar5 = EVP_get_digestbyname(pcVar3);
    if ((pEVar5 == (EVP_MD *)0x0) ||
       (iVar1 = CMS_add_simple_smimecap(smcap,0x3d6,-1), uVar2 = 0, iVar1 != 0)) {
      pcVar3 = OBJ_nid2sn(0x3d7);
      pEVar5 = EVP_get_digestbyname(pcVar3);
      if ((pEVar5 == (EVP_MD *)0x0) ||
         (iVar1 = CMS_add_simple_smimecap(smcap,0x3d7,-1), uVar2 = 0, iVar1 != 0)) {
        pcVar3 = OBJ_nid2sn(0x329);
        pEVar5 = EVP_get_digestbyname(pcVar3);
        if ((pEVar5 == (EVP_MD *)0x0) ||
           (iVar1 = CMS_add_simple_smimecap(smcap,0x329,-1), uVar2 = 0, iVar1 != 0)) {
          pcVar3 = OBJ_nid2sn(0x32d);
          pEVar4 = EVP_get_cipherbyname(pcVar3);
          if ((pEVar4 == (EVP_CIPHER *)0x0) ||
             (iVar1 = CMS_add_simple_smimecap(smcap,0x32d,-1), uVar2 = 0, iVar1 != 0)) {
            pcVar3 = OBJ_nid2sn(0x1a7);
            pEVar4 = EVP_get_cipherbyname(pcVar3);
            if ((pEVar4 == (EVP_CIPHER *)0x0) ||
               (iVar1 = CMS_add_simple_smimecap(smcap,0x1a7,-1), uVar2 = 0, iVar1 != 0)) {
              pcVar3 = OBJ_nid2sn(0x1a3);
              pEVar4 = EVP_get_cipherbyname(pcVar3);
              if ((pEVar4 == (EVP_CIPHER *)0x0) ||
                 (iVar1 = CMS_add_simple_smimecap(smcap,0x1a3,-1), uVar2 = 0, iVar1 != 0)) {
                pcVar3 = OBJ_nid2sn(0x2c);
                pEVar4 = EVP_get_cipherbyname(pcVar3);
                if ((pEVar4 == (EVP_CIPHER *)0x0) ||
                   (iVar1 = CMS_add_simple_smimecap(smcap,0x2c,-1), uVar2 = 0, iVar1 != 0)) {
                  pcVar3 = OBJ_nid2sn(0x25);
                  pEVar4 = EVP_get_cipherbyname(pcVar3);
                  if ((pEVar4 == (EVP_CIPHER *)0x0) ||
                     (iVar1 = CMS_add_simple_smimecap(smcap,0x25,0x80), uVar2 = 0, iVar1 != 0)) {
                    pcVar3 = OBJ_nid2sn(0x25);
                    pEVar4 = EVP_get_cipherbyname(pcVar3);
                    if ((pEVar4 == (EVP_CIPHER *)0x0) ||
                       (iVar1 = CMS_add_simple_smimecap(smcap,0x25,0x40), uVar2 = 0, iVar1 != 0)) {
                      pcVar3 = OBJ_nid2sn(0x1f);
                      pEVar4 = EVP_get_cipherbyname(pcVar3);
                      if ((pEVar4 == (EVP_CIPHER *)0x0) ||
                         (iVar1 = CMS_add_simple_smimecap(smcap,0x1f,-1), uVar2 = 0, iVar1 != 0)) {
                        pcVar3 = OBJ_nid2sn(0x25);
                        pEVar4 = EVP_get_cipherbyname(pcVar3);
                        if (pEVar4 == (EVP_CIPHER *)0x0) {
                          uVar2 = 1;
                        }
                        else {
                          iVar1 = CMS_add_simple_smimecap(smcap,0x25,0x28);
                          uVar2 = (uint)(iVar1 != 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

