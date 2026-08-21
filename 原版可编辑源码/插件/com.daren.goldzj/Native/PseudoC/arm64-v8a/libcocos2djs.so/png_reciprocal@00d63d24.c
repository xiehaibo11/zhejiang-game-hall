
int png_reciprocal(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = 10000000000.0 / (double)param_1 + 0.5;
  dVar5 = (double)(long)dVar4;
  bVar1 = false;
  bVar2 = true;
  if (-2147483648.0 <= dVar5) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar5)) {
      bVar1 = dVar5 == 2147483647.0;
      bVar2 = 2147483647.0 <= dVar5;
    }
  }
  iVar3 = (int)dVar4;
  if (bVar2 && !bVar1) {
    iVar3 = 0;
  }
  return iVar3;
}

