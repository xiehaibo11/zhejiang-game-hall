
long FUN_00bc8138(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = DAT_01d3b388;
  if ((DAT_01d3b388 == 0) &&
     (((((lVar2 = EVP_MD_meth_new(0x40,0x41), lVar2 == 0 ||
         (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x14), iVar1 == 0)) ||
        (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
       ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x68), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)))) ||
      ((iVar1 = EVP_MD_meth_set_init(lVar2,FUN_00bc8204), iVar1 == 0 ||
       ((iVar1 = EVP_MD_meth_set_update(lVar2,FUN_00bc8218), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_final(lVar2,&LAB_00bc8244), iVar1 == 0)))))))) {
    EVP_MD_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_01d3b388 = lVar2;
  return DAT_01d3b388;
}

