
/* p2t::SweepContext::InitTriangulation() */

void __thiscall p2t::SweepContext::InitTriangulation(SweepContext *this)

{
  Point **ppPVar1;
  Point **ppPVar2;
  long lVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Point **ppPVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  code *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppPVar1 = *(Point ***)(this + 0x80);
  ppPVar2 = *(Point ***)(this + 0x88);
  dVar10 = *(double *)*ppPVar1;
  dVar12 = *(double *)(*ppPVar1 + 8);
  ppPVar9 = ppPVar2;
  dVar14 = dVar12;
  dVar16 = dVar10;
  if (((long)ppPVar2 - (long)ppPVar1 != 0) &&
     (uVar6 = (long)ppPVar2 - (long)ppPVar1 >> 3, ppPVar9 = ppPVar1, 1 < uVar6)) {
    uVar4 = 2;
    uVar8 = 1;
    dVar17 = dVar12;
    dVar11 = dVar10;
    dVar13 = dVar12;
    dVar15 = dVar10;
    do {
      uVar7 = uVar4;
      dVar10 = *(double *)ppPVar1[uVar8];
      dVar14 = *(double *)(ppPVar1[uVar8] + 8);
      dVar16 = dVar10;
      if (dVar10 <= dVar15) {
        dVar16 = dVar15;
      }
      if (dVar11 <= dVar10) {
        dVar10 = dVar11;
      }
      dVar12 = dVar14;
      if (dVar14 <= dVar17) {
        dVar12 = dVar17;
      }
      if (dVar13 <= dVar14) {
        dVar14 = dVar13;
      }
      uVar4 = (ulong)((int)uVar7 + 1);
      uVar8 = uVar7;
      dVar17 = dVar12;
      dVar11 = dVar10;
      dVar13 = dVar14;
      dVar15 = dVar16;
    } while (uVar7 < uVar6);
  }
  dVar17 = (dVar16 - dVar10) * 0.3;
  pdVar5 = operator_new(0x28);
  dVar14 = dVar14 - (dVar12 - dVar14) * 0.3;
  pdVar5[3] = 0.0;
  pdVar5[4] = 0.0;
  pdVar5[2] = 0.0;
  *pdVar5 = dVar16 + dVar17;
  pdVar5[1] = dVar14;
  *(double **)(this + 0xa0) = pdVar5;
  pdVar5 = operator_new(0x28);
  pdVar5[3] = 0.0;
  pdVar5[4] = 0.0;
  pdVar5[2] = 0.0;
  *pdVar5 = dVar10 - dVar17;
  pdVar5[1] = dVar14;
  *(double **)(this + 0xa8) = pdVar5;
  local_70 = cmp;
  std::__ndk1::__sort<bool(*&)(p2t::Point_const*,p2t::Point_const*),p2t::Point**>
            (ppPVar9,ppPVar2,(_func_bool_Point_ptr_Point_ptr *)&local_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

