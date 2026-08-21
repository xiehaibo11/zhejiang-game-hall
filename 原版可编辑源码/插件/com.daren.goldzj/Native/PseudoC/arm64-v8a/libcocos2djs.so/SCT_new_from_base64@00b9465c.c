
long SCT_new_from_base64(undefined1 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  int line;
  void *local_48;
  
  lVar2 = SCT_new();
  local_48 = (void *)0x0;
  if (lVar2 == 0) {
    ERR_put_error(0x32,0x7f,0x41,"crypto/ct/ct_b64.c",0x41);
    return 0;
  }
  iVar1 = SCT_set_version(lVar2,param_1);
  if (iVar1 == 0) {
    iVar1 = 0x73;
    line = 0x4a;
  }
  else {
    iVar1 = FUN_00b94824(param_2,&local_48);
    if (iVar1 < 0) {
      iVar1 = 0x76;
      line = 0x50;
    }
    else {
      iVar1 = SCT_set0_log_id(lVar2,local_48,(long)iVar1);
      if (iVar1 == 0) goto LAB_00b947e8;
      local_48 = (void *)0x0;
      iVar1 = FUN_00b94824(param_5,&local_48);
      if (iVar1 < 0) {
        iVar1 = 0x76;
        line = 0x59;
      }
      else {
        SCT_set0_extensions(lVar2,local_48,(long)iVar1);
        local_48 = (void *)0x0;
        iVar1 = FUN_00b94824(param_6,&local_48);
        if (-1 < iVar1) {
          iVar1 = o2i_SCT_signature(lVar2,&local_48,(long)iVar1);
          if (0 < iVar1) {
            CRYPTO_free(local_48);
            local_48 = (void *)0x0;
            SCT_set_timestamp(lVar2,param_4);
            iVar1 = SCT_set_log_entry_type(lVar2,param_3);
            if (iVar1 != 0) {
              return lVar2;
            }
          }
          goto LAB_00b947e8;
        }
        iVar1 = 0x76;
        line = 0x61;
      }
    }
  }
  ERR_put_error(0x32,0x7f,iVar1,"crypto/ct/ct_b64.c",line);
LAB_00b947e8:
  CRYPTO_free(local_48);
  SCT_free(lVar2);
  return 0;
}

