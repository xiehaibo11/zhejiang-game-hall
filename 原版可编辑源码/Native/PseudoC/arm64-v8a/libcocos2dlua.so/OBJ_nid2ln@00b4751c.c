
char * OBJ_nid2ln(int n)

{
  char *pcVar1;
  int line;
  long lVar2;
  undefined1 auStack_48 [16];
  int local_38;
  undefined4 local_20 [2];
  undefined1 *local_18;
  
  if ((uint)n < 0x425) {
    if (n == 0) {
      lVar2 = 0;
    }
    else {
      if (*(int *)(&DAT_016b3c48 + (long)n * 0x28) == 0) {
        line = 0x119;
        goto LAB_00b475e0;
      }
      lVar2 = (long)n;
    }
    pcVar1 = (&PTR_s_undefined_016b3c40)[lVar2 * 5];
  }
  else {
    if (DAT_01784a28 != 0) {
      local_18 = auStack_48;
      local_20[0] = 3;
      local_38 = n;
      lVar2 = OPENSSL_LH_retrieve(DAT_01784a28,local_20);
      if (lVar2 != 0) {
        return *(char **)(*(long *)(lVar2 + 8) + 8);
      }
      line = 0x127;
LAB_00b475e0:
      ERR_put_error(8,0x66,0x65,"crypto/objects/obj_dat.c",line);
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

