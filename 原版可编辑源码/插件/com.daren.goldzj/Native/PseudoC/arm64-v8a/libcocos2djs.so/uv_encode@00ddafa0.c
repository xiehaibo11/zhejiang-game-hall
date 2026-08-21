
ulong uv_encode(double param_1,double param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  
  if (0.016939999535679817 <= param_2) {
    dVar4 = (param_2 + -0.016939999535679817) * 285.7142768952314;
    if (param_3 != 0) {
      iVar1 = rand();
      dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
    }
    uVar3 = (uint)dVar4;
    if (((int)uVar3 < 0xa3) &&
       ((double)*(float *)(&DAT_0196ec50 +
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)) <=
        param_1)) {
      dVar4 = (param_1 -
              (double)*(float *)(&DAT_0196ec50 +
                                (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)))
              * 285.7142768952314;
      if (param_3 != 0) {
        iVar1 = rand();
        dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
      }
      if ((int)dVar4 < (int)*(short *)(&DAT_0196ec54 + (long)(int)uVar3 * 8)) {
        return (ulong)(uint)((int)*(short *)(&DAT_0196ec56 + (long)(int)uVar3 * 8) + (int)dVar4);
      }
    }
  }
  uVar2 = FUN_00ddb0bc(param_1,param_2);
  return uVar2;
}

