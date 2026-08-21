
int ssl_fill_hello_random(long param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  time_t tVar2;
  uint uVar3;
  
  if (3 < param_4) {
    uVar3 = 0x20;
    if (param_2 != 0) {
      uVar3 = 0x40;
    }
    if ((*(uint *)(param_1 + 0x1e8) & uVar3) != 0) {
      tVar2 = time((time_t *)0x0);
      *param_3 = (uchar)((ulong)tVar2 >> 0x18);
      param_3[1] = (uchar)((ulong)tVar2 >> 0x10);
      param_3[2] = (uchar)((ulong)tVar2 >> 8);
      param_3[3] = (uchar)tVar2;
      param_3 = param_3 + 4;
      param_4 = param_4 + -4;
    }
    iVar1 = RAND_bytes(param_3,param_4);
    return iVar1;
  }
  return 0;
}

