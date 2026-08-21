
int ENGINE_set_default_string(ENGINE *e,char *def_list)

{
  int iVar1;
  uint local_24;
  
  local_24 = 0;
  iVar1 = CONF_parse_list(def_list,0x2c,1,(list_cb *)&LAB_00b19c24,&local_24);
  if (iVar1 == 0) {
    ERR_put_error(0x26,0xbd,0x96,"crypto/engine/eng_fat.c",0x5b);
    ERR_add_error_data(2,&DAT_018b0571,def_list);
    iVar1 = 0;
  }
  else {
    iVar1 = ENGINE_set_default(e,local_24);
  }
  return iVar1;
}

