
void ssl3_get_cipher_by_char(undefined1 *param_1)

{
  undefined1 auStack_58 [16];
  uint local_48;
  
  local_48 = CONCAT11(*param_1,param_1[1]) | 0x3000000;
  OBJ_bsearch_ssl_cipher_id(auStack_58,&DAT_01769a60,0x94);
  return;
}

