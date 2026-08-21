
int DSA_set_method(DSA *dsa,DSA_METHOD *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)(dsa->method_mont_p->Ni).d;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(dsa);
  }
  ENGINE_finish(*(ENGINE **)&dsa->references);
  dsa->method_mont_p = (BN_MONT_CTX *)param_2;
  *(undefined8 *)&dsa->references = 0;
  if (param_2->init != (_func_1738 *)0x0) {
    (*param_2->init)(dsa);
  }
  return 1;
}

