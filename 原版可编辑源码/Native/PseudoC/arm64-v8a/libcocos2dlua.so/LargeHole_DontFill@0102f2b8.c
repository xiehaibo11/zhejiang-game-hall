
/* p2t::Sweep::LargeHole_DontFill(p2t::Node const*) const */

undefined8 __thiscall p2t::Sweep::LargeHole_DontFill(Sweep *this,Node *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  plVar3 = *(long **)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0102f308 with catch @ 0102f2dc */
  pdVar4 = (double *)*plVar3;
  pdVar5 = (double *)*plVar1;
  dVar8 = **(double **)param_1;
  dVar9 = (*(double **)param_1)[1];
  dVar11 = *pdVar4 - dVar8;
  dVar10 = pdVar4[1] - dVar9;
  dVar13 = *pdVar5 - dVar8;
  dVar12 = pdVar5[1] - dVar9;
                    /* try { // try from 0102f300 to 0112f307 has its CatchHandler @ 0102f36c */
                    /* try { // try from 0102f308 to 0112f387 has its CatchHandler @ 0102f2dc */
  dVar6 = atan2(dVar11 * dVar12 - dVar10 * dVar13,dVar11 * dVar13 + dVar10 * dVar12);
                    /* catch() { ... } // from try @ 0102f300 with catch @ 0102f36c */
                    /* catch() { ... } // from try @ 0102f3b8 with catch @ 0102f388 */
                    /* try { // try from 0102f3b0 to 0112f3b7 has its CatchHandler @ 0102f420 */
                    /* try { // try from 0102f3b8 to 0112f43b has its CatchHandler @ 0102f388 */
  if ((((dVar6 <= 1.5707963267948966) && (-1.5707963267948966 <= dVar6)) ||
      ((plVar3 = (long *)plVar3[2], plVar3 != (long *)0x0 &&
       ((pdVar4 = (double *)*plVar3, dVar6 = *pdVar4 - dVar8, dVar7 = pdVar4[1] - dVar9,
        dVar6 = atan2(dVar12 * dVar6 - dVar13 * dVar7,dVar13 * dVar6 + dVar12 * dVar7),
        dVar6 <= 1.5707963267948966 && (0.0 <= dVar6)))))) ||
     ((plVar3 = (long *)plVar1[3], plVar3 != (long *)0x0 &&
      ((pdVar4 = (double *)*plVar3, dVar8 = *pdVar4 - dVar8, dVar9 = pdVar4[1] - dVar9,
       dVar6 = atan2(dVar11 * dVar9 - dVar10 * dVar8,dVar11 * dVar8 + dVar10 * dVar9),
       dVar6 <= 1.5707963267948966 && (0.0 <= dVar6)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

