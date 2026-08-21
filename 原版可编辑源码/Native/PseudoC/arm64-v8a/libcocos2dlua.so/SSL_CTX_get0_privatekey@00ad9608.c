
undefined8 SSL_CTX_get0_privatekey(long param_1)

{
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
                    /* try { // try from 00ad9610 to 00bd965f has its CatchHandler @ 00ad975c */
    return *(undefined8 *)(**(long **)(param_1 + 0x120) + 8);
  }
  return 0;
}

