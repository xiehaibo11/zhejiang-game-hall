
int png_reciprocal2(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
                    /* try { // try from 010c0228 to 011c0237 has its CatchHandler @ 010c02b4 */
                    /* try { // try from 010c0248 to 011c0273 has its CatchHandler @ 010c02d0 */
  dVar4 = (1e+15 / (double)param_1) / (double)param_2 + 0.5;
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

