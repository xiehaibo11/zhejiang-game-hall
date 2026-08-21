
int ENGINE_set_id(ENGINE *e,char *id)

{
  if (id != (char *)0x0) {
    *(char **)e = id;
    return 1;
  }
  ERR_put_error(0x26,0x81,0x43,"crypto/engine/eng_lib.c",0xc0);
  return 0;
}

