
void FT_Vector_Unit(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 != (long *)0x0) {
    lVar3 = 0xdbd95b;
    lVar6 = 0;
    param_1[1] = 0;
    *param_1 = 0xdbd95b;
    if (param_2 < -0x2d0000) {
      lVar4 = param_2;
      lVar5 = 0xdbd95b;
      do {
        lVar3 = lVar6;
        param_2 = lVar4 + 0x5a0000;
        lVar6 = -lVar5;
        bVar1 = lVar4 < -0x870000;
        lVar4 = param_2;
        lVar5 = lVar3;
      } while (bVar1);
    }
    lVar4 = param_2;
    lVar5 = lVar6;
    if (0x2d0000 < param_2) {
      do {
        lVar6 = lVar3;
        param_2 = lVar4 + -0x5a0000;
        lVar3 = -lVar5;
        bVar1 = 0x870000 < lVar4;
        lVar4 = param_2;
        lVar5 = lVar6;
      } while (bVar1);
    }
    lVar4 = 0;
    lVar5 = 1;
    do {
      uVar2 = lVar4 + 1;
      lVar8 = lVar6 + lVar5 >> (uVar2 & 0x3f);
      if (param_2 < 0) {
        lVar9 = (&DAT_0145cbf8)[lVar4];
        lVar7 = -(lVar3 + lVar5 >> (uVar2 & 0x3f));
      }
      else {
        lVar7 = lVar3 + lVar5 >> (uVar2 & 0x3f);
        lVar8 = -lVar8;
        lVar9 = -(&DAT_0145cbf8)[lVar4];
      }
      lVar6 = lVar7 + lVar6;
      lVar3 = lVar3 + lVar8;
      param_2 = param_2 + lVar9;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 << 1;
    } while (lVar4 != 0x16);
    *param_1 = lVar3 + 0x80 >> 8;
    param_1[1] = lVar6 + 0x80 >> 8;
  }
  return;
}

