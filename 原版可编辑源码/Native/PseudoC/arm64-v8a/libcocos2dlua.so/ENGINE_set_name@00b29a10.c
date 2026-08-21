
int ENGINE_set_name(ENGINE *e,char *name)

{
  if (name != (char *)0x0) {
    *(char **)(e + 8) = name;
    return 1;
  }
  ERR_put_error(0x26,0x82,0x43,"crypto/engine/eng_lib.c",0xca);
  return 0;
}

