
void memcpy_to_q8_23_from_i16(int *param_1,short *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  short *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    if (7 < param_3) {
      uVar2 = param_3 & 0xfffffffffffffff8;
      piVar3 = param_1 + 4;
      param_1 = param_1 + uVar2;
      psVar4 = param_2 + 4;
      uVar5 = uVar2;
      do {
        uVar6 = *(undefined8 *)(psVar4 + -4);
        uVar7 = *(undefined8 *)psVar4;
        uVar5 = uVar5 - 8;
        psVar4 = psVar4 + 8;
        *(ulong *)(piVar3 + -2) =
             CONCAT44((int)(short)((ulong)uVar6 >> 0x30) << 8,
                      (int)(short)((ulong)uVar6 >> 0x20) << 8);
        *(ulong *)(piVar3 + -4) =
             CONCAT44((int)(short)((ulong)uVar6 >> 0x10) << 8,(int)(short)uVar6 << 8);
        *(ulong *)(piVar3 + 2) =
             CONCAT44((int)(short)((ulong)uVar7 >> 0x30) << 8,
                      (int)(short)((ulong)uVar7 >> 0x20) << 8);
        *(ulong *)piVar3 = CONCAT44((int)(short)((ulong)uVar7 >> 0x10) << 8,(int)(short)uVar7 << 8);
        piVar3 = piVar3 + 8;
      } while (uVar5 != 0);
      bVar1 = uVar2 == param_3;
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
      if (bVar1) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = (int)*param_2 << 8;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

