
void OPENSSL_config(char *config_name)

{
  char *local_18;
  
  local_18 = (char *)0x0;
  if (config_name != (char *)0x0) {
    local_18 = strdup(config_name);
  }
  OPENSSL_init_crypto(0x40,&local_18);
  return;
}

