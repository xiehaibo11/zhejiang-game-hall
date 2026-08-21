
void FT_Vector_Transform(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
                    /* catch() { ... } // from try @ 0105c66c with catch @ 0105c62c */
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar5 = *param_1;
    lVar6 = param_1[1];
    lVar9 = *param_2;
    lVar8 = param_2[1];
    lVar4 = -lVar5;
    if (-1 < lVar5) {
      lVar4 = lVar5;
    }
    iVar3 = 1;
    if (-1 >= lVar5) {
      iVar3 = -1;
    }
    lVar5 = -lVar9;
    if (-1 < lVar9) {
      lVar5 = lVar9;
    }
    iVar1 = -iVar3;
    if (-1 < lVar9) {
      iVar1 = iVar3;
    }
    lVar9 = lVar5 * lVar4 + 0x8000 >> 0x10;
                    /* try { // try from 0105c664 to 0115c66b has its CatchHandler @ 0105c708 */
    lVar5 = -lVar9;
    if (-1 < iVar1) {
      lVar5 = lVar9;
    }
                    /* try { // try from 0105c66c to 0115c723 has its CatchHandler @ 0105c62c */
    lVar9 = -lVar6;
    if (-1 < lVar6) {
      lVar9 = lVar6;
    }
    iVar1 = 1;
    if (-1 >= lVar6) {
      iVar1 = -1;
    }
    iVar2 = -iVar1;
    if (-1 < lVar8) {
      iVar2 = iVar1;
    }
    lVar6 = -lVar8;
    if (-1 < lVar8) {
      lVar6 = lVar8;
    }
    lVar8 = param_2[2];
    lVar7 = param_2[3];
    lVar10 = lVar6 * lVar9 + 0x8000 >> 0x10;
    lVar6 = -lVar10;
    if (-1 < iVar2) {
      lVar6 = lVar10;
    }
    lVar10 = -lVar8;
    if (-1 < lVar8) {
      lVar10 = lVar8;
    }
    iVar2 = -iVar3;
    if (-1 < lVar8) {
      iVar2 = iVar3;
    }
    lVar8 = lVar10 * lVar4 + 0x8000 >> 0x10;
    lVar4 = -lVar8;
    if (-1 < iVar2) {
      lVar4 = lVar8;
    }
    lVar8 = -lVar7;
    if (-1 < lVar7) {
      lVar8 = lVar7;
    }
    iVar3 = -iVar1;
    if (-1 < lVar7) {
      iVar3 = iVar1;
    }
    lVar8 = lVar8 * lVar9 + 0x8000 >> 0x10;
    lVar9 = -lVar8;
    if (-1 < iVar3) {
      lVar9 = lVar8;
    }
    *param_1 = lVar6 + lVar5;
    param_1[1] = lVar9 + lVar4;
  }
  return;
}

