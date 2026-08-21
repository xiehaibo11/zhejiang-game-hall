
int ENGINE_up_ref(ENGINE *e)

{
  undefined1 auStack_14 [4];
  
  if (e == (ENGINE *)0x0) {
    ERR_put_error(0x26,0xbe,0x43,"crypto/engine/eng_list.c",0x15d);
  }
  else {
    CRYPTO_atomic_add(e + 0x9c,1,auStack_14,global_engine_lock);
  }
  return (uint)(e != (ENGINE *)0x0);
}

