
/* ClipperLib::ClipperBase::AddPath(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&, ClipperLib::PolyType, bool) */

void __thiscall
ClipperLib::ClipperBase::AddPath(ClipperBase *this,long *param_1,undefined4 param_3,ulong param_4)

{
  ClipperBase *pCVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  TEdge *pTVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  TEdge *pTVar11;
  clipperException *this_00;
  long lVar12;
  long *plVar13;
  long *plVar14;
  TEdge *pTVar15;
  ClipperBase *pCVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  TEdge *pTVar22;
  long lVar23;
  TEdge *pTVar24;
  long *plVar25;
  TEdge *pTVar26;
  TEdge *pTVar27;
  long lVar28;
  undefined4 uVar29;
  long lVar30;
  double dVar31;
  undefined8 uVar32;
  TEdge *local_70;
  long local_68;
  
                    /* try { // try from 010321f4 to 01132233 has its CatchHandler @ 01031838 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((param_4 & 1) == 0) {
    this_00 = (clipperException *)__cxa_allocate_exception(0x20);
    clipperException::clipperException(this_00,"AddPath: Open paths have been disabled.");
                    /* try { // try from 01032a9c to 01132abf has its CatchHandler @ 010332a8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&clipperException::typeinfo,clipperException::~clipperException);
  }
  plVar13 = (long *)*param_1;
  uVar17 = param_1[1] - (long)plVar13;
  lVar21 = (long)(uVar17 * 0x10000000) >> 0x20;
  uVar19 = uVar17 * 0x10000000 & 0xffffffff00000000;
  plVar14 = plVar13 + (long)(int)(uVar17 >> 4) * 2 + -1;
                    /* try { // try from 01032234 to 01132257 has its CatchHandler @ 0103329c */
  do {
    lVar21 = lVar21 + -1;
    uVar19 = uVar19 - 0x100000000;
                    /* try { // try from 01032258 to 01132287 has its CatchHandler @ 01031838 */
    if ((lVar21 < 1) || (plVar14[-1] != *plVar13)) break;
    lVar23 = *plVar14;
    plVar14 = plVar14 + -2;
  } while (lVar23 == plVar13[1]);
  plVar13 = plVar13 + (long)(int)(uint)lVar21 * 2;
  lVar23 = (long)uVar19 >> 0x20;
  lVar18 = lVar21 << 0x20;
  uVar20 = (uint)lVar21;
                    /* try { // try from 01032288 to 011322ab has its CatchHandler @ 010332d4 */
  do {
    uVar5 = uVar20;
    lVar21 = lVar18;
    uVar20 = uVar5 - 1;
                    /* try { // try from 010322ac to 011322d7 has its CatchHandler @ 01031838 */
    if ((lVar23 < 1) || (*plVar13 != plVar13[-2])) break;
    plVar14 = plVar13 + 1;
    plVar25 = plVar13 + -1;
    plVar13 = plVar13 + -2;
    lVar23 = lVar23 + -1;
    lVar18 = lVar21 + -0x100000000;
  } while (*plVar14 == *plVar25);
  if (1 < (int)uVar5) {
                    /* try { // try from 010322d8 to 011322fb has its CatchHandler @ 010332d0 */
    uVar17 = lVar21 + 0x100000000 >> 0x20;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    uVar17 = uVar17 * 0x98;
    uVar19 = uVar17;
    if (SUB168(auVar3 * ZEXT816(0x98),8) != 0) {
      uVar19 = 0xffffffffffffffff;
    }
    pTVar8 = operator_new__(uVar19);
                    /* try { // try from 010322fc to 01132327 has its CatchHandler @ 01031838 */
    lVar23 = 0;
    do {
      pTVar22 = pTVar8 + lVar23;
      lVar23 = lVar23 + 0x98;
      *(undefined8 *)(pTVar22 + 0x28) = 0;
      *(undefined8 *)(pTVar22 + 0x20) = 0;
      *(undefined8 *)(pTVar22 + 0x38) = 0;
      *(undefined8 *)(pTVar22 + 0x30) = 0;
      *(undefined8 *)(pTVar22 + 8) = 0;
      *(undefined8 *)pTVar22 = 0;
      *(undefined8 *)(pTVar22 + 0x18) = 0;
      *(undefined8 *)(pTVar22 + 0x10) = 0;
    } while (uVar17 - lVar23 != 0);
    plVar13 = (long *)*param_1;
    lVar23 = lVar21 >> 0x20;
                    /* try { // try from 01032328 to 0113234b has its CatchHandler @ 010332cc */
    lVar18 = plVar13[2];
    *(long *)(pTVar8 + 0xb0) = plVar13[3];
    *(long *)(pTVar8 + 0xa8) = lVar18;
    lVar18 = *plVar13;
    local_70 = pTVar8;
    if (this[0x18] == (ClipperBase)0x0) {
                    /* try { // try from 0103234c to 01132377 has its CatchHandler @ 01031838 */
      if ((0x7ffffffe < lVar18 + 0x3fffffffU) || (0x7ffffffe < plVar13[1] + 0x3fffffffU)) {
        this[0x18] = (ClipperBase)0x1;
        goto LAB_010323a8;
      }
      plVar14 = (long *)((long)plVar13 + (lVar21 >> 0x1c));
      lVar21 = *plVar14;
                    /* try { // try from 01032378 to 0113239b has its CatchHandler @ 010332c8 */
      if ((lVar21 + 0x3fffffffU < 0x7fffffff) && (plVar14[1] + 0x3fffffffU < 0x7fffffff))
      goto LAB_0103240c;
      this[0x18] = (ClipperBase)0x1;
                    /* try { // try from 0103239c to 011323c7 has its CatchHandler @ 01031838 */
    }
    else {
LAB_010323a8:
                    /* try { // try from 010323c8 to 011323eb has its CatchHandler @ 010332c4 */
      if (((0x3fffffffffffffff < lVar18) || (lVar18 < -0x3fffffffffffffff)) ||
         (0x7ffffffffffffffe < plVar13[1] + 0x3fffffffffffffffU)) {
        puVar9 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar9 = "Coordinate outside allowed range";
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01032a70 to 01132a9b has its CatchHandler @ 01031838 */
        __cxa_throw(puVar9,&char_const*::typeinfo,0);
      }
      lVar21 = *(long *)((long)plVar13 + (lVar21 >> 0x1c));
    }
                    /* try { // try from 010323ec to 01132417 has its CatchHandler @ 01031838 */
    if (((0x3fffffffffffffff < lVar21) || (lVar21 < -0x3fffffffffffffff)) ||
       (0x7ffffffffffffffe < plVar13[lVar23 * 2 + 1] + 0x3fffffffffffffffU)) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = "Coordinate outside allowed range";
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01032a4c to 01132a6f has its CatchHandler @ 0103327c */
      __cxa_throw(puVar9,&char_const*::typeinfo,0);
    }
LAB_0103240c:
                    /* try { // try from 01032418 to 0113243b has its CatchHandler @ 010332c0 */
    pTVar22 = pTVar8 + lVar23 * 0x98;
    *(long *)(pTVar8 + 0x90) = 0;
    *(long *)(pTVar8 + 0x78) = 0;
    *(long *)(pTVar8 + 0x70) = 0;
    *(long *)(pTVar8 + 0x88) = 0;
    *(long *)(pTVar8 + 0x80) = 0;
    *(long *)(pTVar8 + 0x58) = 0;
    *(long *)(pTVar8 + 0x50) = 0;
    *(long *)(pTVar8 + 0x68) = 0;
    *(long *)(pTVar8 + 0x60) = 0;
    *(long *)(pTVar8 + 0x38) = 0;
    *(long *)(pTVar8 + 0x30) = 0;
    *(long *)(pTVar8 + 0x48) = 0;
    *(long *)(pTVar8 + 0x40) = 0;
    *(long *)(pTVar8 + 0x18) = 0;
    *(long *)(pTVar8 + 0x10) = 0;
    *(long *)(pTVar8 + 0x28) = 0;
    *(long *)(pTVar8 + 0x20) = 0;
    *(long *)(pTVar8 + 8) = 0;
    *(long *)pTVar8 = 0;
    *(TEdge **)(pTVar8 + 0x60) = pTVar8 + 0x98;
    *(TEdge **)(pTVar8 + 0x68) = pTVar22;
    lVar18 = plVar13[1];
    lVar21 = *plVar13;
                    /* try { // try from 0103243c to 01132467 has its CatchHandler @ 01031838 */
    *(undefined4 *)(pTVar8 + 0x5c) = 0xffffffff;
    *(long *)(pTVar8 + 0x18) = lVar18;
    *(long *)(pTVar8 + 0x10) = lVar21;
    *(undefined8 *)(pTVar22 + 0x90) = 0;
    *(undefined8 *)(pTVar22 + 0x78) = 0;
    *(undefined8 *)(pTVar22 + 0x70) = 0;
    *(undefined8 *)(pTVar22 + 0x88) = 0;
    *(undefined8 *)(pTVar22 + 0x80) = 0;
    *(undefined8 *)(pTVar22 + 0x58) = 0;
    *(undefined8 *)(pTVar22 + 0x50) = 0;
    *(undefined8 *)(pTVar22 + 0x68) = 0;
    *(undefined8 *)(pTVar22 + 0x60) = 0;
    *(undefined8 *)(pTVar22 + 0x38) = 0;
    *(undefined8 *)(pTVar22 + 0x30) = 0;
    *(undefined8 *)(pTVar22 + 0x48) = 0;
    *(undefined8 *)(pTVar22 + 0x40) = 0;
    *(undefined8 *)(pTVar22 + 0x18) = 0;
    *(undefined8 *)(pTVar22 + 0x10) = 0;
    *(undefined8 *)(pTVar22 + 0x28) = 0;
    *(undefined8 *)(pTVar22 + 0x20) = 0;
    *(undefined8 *)(pTVar22 + 8) = 0;
    *(undefined8 *)pTVar22 = 0;
    *(TEdge **)(pTVar22 + 0x60) = pTVar8;
    *(TEdge **)(pTVar22 + 0x68) = pTVar8 + (long)(int)uVar20 * 0x98;
                    /* try { // try from 01032468 to 0113248b has its CatchHandler @ 010332bc */
    lVar18 = (plVar13 + lVar23 * 2)[1];
    lVar21 = plVar13[lVar23 * 2];
    *(undefined4 *)(pTVar22 + 0x5c) = 0xffffffff;
    *(long *)(pTVar22 + 0x18) = lVar18;
    *(long *)(pTVar22 + 0x10) = lVar21;
    pTVar22 = pTVar8;
    pTVar11 = pTVar8;
    if (0 < (int)uVar20) {
                    /* try { // try from 0103248c to 011324c7 has its CatchHandler @ 01031838 */
      lVar23 = (long)(int)uVar20;
      uVar19 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
      lVar21 = (long)(int)uVar20 * 0x98 + 0x98;
      do {
        lVar18 = *param_1;
        lVar12 = *(long *)(lVar18 + uVar19);
                    /* try { // try from 01032518 to 0113253b has its CatchHandler @ 01033294 */
        if (this[0x18] == (ClipperBase)0x0) {
          if ((0x7ffffffe < lVar12 + 0x3fffffffU) ||
             (0x7ffffffe < *(long *)(lVar18 + uVar19 + 8) + 0x3fffffffU)) {
            this[0x18] = (ClipperBase)0x1;
                    /* try { // try from 01032568 to 0113258b has its CatchHandler @ 0103328c */
            goto joined_r0x0103256c;
          }
        }
        else {
joined_r0x0103256c:
                    /* try { // try from 0103253c to 01132567 has its CatchHandler @ 01031838 */
          if (((0x3fffffffffffffff < lVar12) || (lVar12 < -0x3fffffffffffffff)) ||
             (0x7ffffffffffffffe < *(long *)(lVar18 + uVar19 + 8) + 0x3fffffffffffffffU)) {
            puVar9 = (undefined8 *)__cxa_allocate_exception(8);
            *puVar9 = "Coordinate outside allowed range";
                    /* try { // try from 0103258c to 011325b7 has its CatchHandler @ 01031838 */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar9,&char_const*::typeinfo,0);
          }
        }
        lVar23 = lVar23 + -1;
        pTVar15 = pTVar8 + lVar21;
                    /* try { // try from 010324c8 to 011324eb has its CatchHandler @ 01033298 */
        *(undefined8 *)(pTVar15 + -0x30) = 0;
        *(undefined8 *)(pTVar15 + -0x38) = 0;
        *(undefined8 *)(pTVar15 + -8) = 0;
        *(undefined8 *)(pTVar15 + -0x10) = 0;
        *(undefined8 *)(pTVar15 + -0x18) = 0;
        *(undefined8 *)(pTVar15 + -0x20) = 0;
        *(undefined8 *)(pTVar15 + -0x28) = 0;
        *(undefined8 *)(pTVar15 + -0x40) = 0;
        *(undefined8 *)(pTVar15 + -0x48) = 0;
        *(undefined8 *)(pTVar15 + -0x50) = 0;
        *(undefined8 *)(pTVar15 + -0x58) = 0;
        *(undefined8 *)(pTVar15 + -0x60) = 0;
        *(undefined8 *)(pTVar15 + -0x68) = 0;
        *(undefined8 *)(pTVar15 + -0x70) = 0;
        *(undefined8 *)(pTVar15 + -0x78) = 0;
        *(undefined8 *)(pTVar15 + -0x80) = 0;
        *(undefined8 *)(pTVar15 + -0x88) = 0;
                    /* try { // try from 010324ec to 01132517 has its CatchHandler @ 01031838 */
        *(undefined8 *)(pTVar15 + -0x90) = 0;
        *(undefined8 *)(pTVar15 + -0x98) = 0;
        *(TEdge **)(pTVar15 + -0x38) = pTVar15;
        *(TEdge **)(pTVar15 + -0x30) = pTVar15 + -0x130;
        uVar32 = ((undefined8 *)(lVar18 + uVar19))[1];
        uVar10 = *(undefined8 *)(lVar18 + uVar19);
        lVar21 = lVar21 + -0x98;
        uVar19 = uVar19 - 0x10;
        *(undefined4 *)(pTVar15 + -0x3c) = 0xffffffff;
        *(undefined8 *)(pTVar15 + -0x80) = uVar32;
        *(undefined8 *)(pTVar15 + -0x88) = uVar10;
      } while (0 < lVar23);
    }
LAB_010325a4:
    do {
      pTVar15 = pTVar22;
      lVar21 = *(long *)(pTVar22 + 0x10);
LAB_010325d8:
                    /* try { // try from 010325dc to 01132607 has its CatchHandler @ 01031838 */
      pTVar26 = *(TEdge **)(pTVar15 + 0x60);
      lVar23 = *(long *)(pTVar26 + 0x10);
      pTVar27 = pTVar15;
      if ((lVar21 == lVar23) && (*(long *)(pTVar15 + 0x18) == *(long *)(pTVar26 + 0x18))) {
        if (pTVar15 == pTVar26) goto LAB_010326f0;
                    /* try { // try from 010326cc to 011326f7 has its CatchHandler @ 01031838 */
        lVar21 = *(long *)(pTVar15 + 0x68);
        pTVar27 = pTVar26;
        if (pTVar15 != pTVar11) {
          pTVar27 = pTVar11;
        }
        *(TEdge **)(lVar21 + 0x60) = pTVar26;
        pTVar22 = *(TEdge **)(pTVar15 + 0x60);
        *(long *)(pTVar22 + 0x68) = lVar21;
        *(long *)(pTVar15 + 0x68) = 0;
        pTVar11 = pTVar27;
        goto LAB_010325a4;
      }
      pTVar24 = *(TEdge **)(pTVar15 + 0x68);
                    /* try { // try from 01032608 to 0113262b has its CatchHandler @ 01033284 */
      if (pTVar24 == pTVar26) goto LAB_010326f0;
      lVar18 = *(long *)(pTVar24 + 0x10);
      lVar12 = *(long *)(pTVar24 + 0x18);
      lVar28 = *(long *)(pTVar15 + 0x18);
      lVar30 = *(long *)(pTVar26 + 0x18);
                    /* try { // try from 0103262c to 01132657 has its CatchHandler @ 01031838 */
      uVar19 = SlopesEqual(lVar18,lVar12,lVar21,lVar28,lVar23,lVar30,this[0x18]);
      if ((uVar19 & 1) == 0) goto LAB_010325cc;
                    /* try { // try from 01032658 to 0113267b has its CatchHandler @ 01033280 */
      if ((this[0x38] != (ClipperBase)0x0) && ((lVar18 != lVar23 || (lVar12 != lVar30)))) {
                    /* try { // try from 0103267c to 011326a7 has its CatchHandler @ 01031838 */
        if ((lVar18 != lVar21 || lVar12 != lVar28) && (lVar21 != lVar23 || lVar30 != lVar28)) {
          if (lVar18 == lVar23) {
                    /* try { // try from 010325b8 to 011325db has its CatchHandler @ 01033288 */
            bVar7 = lVar28 <= lVar12;
            bVar6 = SBORROW8(lVar28,lVar30);
            lVar21 = lVar28 - lVar30;
          }
          else {
            bVar7 = lVar21 <= lVar18;
            bVar6 = SBORROW8(lVar21,lVar23);
            lVar21 = lVar21 - lVar23;
          }
          if ((bool)(bVar7 ^ lVar21 < 0 != bVar6)) goto LAB_010325cc;
        }
      }
      *(TEdge **)(pTVar24 + 0x60) = pTVar26;
                    /* try { // try from 010326a8 to 011326cb has its CatchHandler @ 01033278 */
      lVar21 = *(long *)(pTVar15 + 0x60);
      if (pTVar15 != pTVar11) {
        pTVar26 = pTVar11;
      }
      *(TEdge **)(lVar21 + 0x68) = pTVar24;
      *(long *)(pTVar15 + 0x68) = 0;
      pTVar22 = *(TEdge **)(lVar21 + 0x68);
      pTVar11 = pTVar26;
    } while( true );
  }
LAB_010327c8:
  uVar10 = 0;
LAB_010327cc:
                    /* try { // try from 010327d4 to 011327e3 has its CatchHandler @ 01031838 */
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
                    /* try { // try from 010327e4 to 01132807 has its CatchHandler @ 01033254 */
  return;
LAB_010325cc:
  pTVar15 = pTVar26;
  lVar21 = lVar23;
  pTVar27 = pTVar22;
  if (pTVar26 != pTVar22) goto LAB_010325d8;
LAB_010326f0:
                    /* try { // try from 010326f8 to 0113271b has its CatchHandler @ 01033274 */
  if (*(long *)(pTVar27 + 0x68) == *(long *)(pTVar27 + 0x60)) goto joined_r0x010327c0;
  bVar7 = true;
  pTVar22 = pTVar11;
  do {
    pTVar15 = *(TEdge **)(pTVar22 + 0x60);
                    /* try { // try from 01032748 to 0113276b has its CatchHandler @ 01033270 */
    if (*(long *)(pTVar22 + 0x18) < *(long *)(pTVar15 + 0x18)) {
      *(long *)(pTVar22 + 0x28) = *(long *)(pTVar22 + 0x18);
      *(long *)(pTVar22 + 0x20) = *(long *)(pTVar22 + 0x10);
      pTVar26 = pTVar22;
    }
    else {
      pTVar26 = pTVar22 + 0x20;
      *(long *)(pTVar22 + 8) = *(long *)(pTVar22 + 0x18);
      *(long *)pTVar22 = *(long *)(pTVar22 + 0x10);
    }
                    /* try { // try from 0103276c to 011327af has its CatchHandler @ 01031838 */
    lVar21 = *(long *)(pTVar15 + 0x10);
    *(long *)(pTVar26 + 8) = *(long *)(pTVar15 + 0x18);
    *(long *)pTVar26 = lVar21;
    lVar21 = *(long *)(pTVar22 + 0x28) - *(long *)(pTVar22 + 8);
    *(long *)(pTVar22 + 0x30) = *(long *)(pTVar22 + 0x20) - *(long *)pTVar22;
    *(long *)(pTVar22 + 0x38) = lVar21;
    dVar31 = -1e+40;
    if (lVar21 != 0) {
      dVar31 = (double)(*(long *)(pTVar22 + 0x20) - *(long *)pTVar22) / (double)lVar21;
    }
    *(double *)(pTVar22 + 0x40) = dVar31;
    *(undefined4 *)(pTVar22 + 0x48) = param_3;
    if (bVar7) {
                    /* try { // try from 0103271c to 01132747 has its CatchHandler @ 01031838 */
      bVar7 = *(long *)(pTVar15 + 0x18) == *(long *)(pTVar11 + 0x18);
    }
    else {
      bVar7 = false;
    }
    pTVar22 = pTVar15;
  } while (pTVar15 != pTVar11);
                    /* try { // try from 010327b0 to 011327d3 has its CatchHandler @ 01033268 */
  if (!bVar7) {
    puVar9 = *(undefined8 **)(this + 0x28);
    if (puVar9 == *(undefined8 **)(this + 0x30)) {
      std::__ndk1::vector<ClipperLib::TEdge*,std::__ndk1::allocator<ClipperLib::TEdge*>>::
      __push_back_slow_path<ClipperLib::TEdge*const&>
                ((vector<ClipperLib::TEdge*,std::__ndk1::allocator<ClipperLib::TEdge*>> *)
                 (this + 0x20),&local_70);
    }
    else {
                    /* try { // try from 01032808 to 01132833 has its CatchHandler @ 01031838 */
      *puVar9 = pTVar8;
      *(undefined8 **)(this + 0x28) = puVar9 + 1;
    }
    pCVar1 = this + 0x10;
    pTVar8 = (TEdge *)0x0;
LAB_01032838:
    do {
                    /* try { // try from 01032858 to 0113289b has its CatchHandler @ 01031838 */
      for (; ((pTVar22 = *(TEdge **)(pTVar11 + 0x68), *(long *)pTVar11 != *(long *)pTVar22 ||
              (*(long *)(pTVar11 + 8) != *(long *)(pTVar22 + 8))) ||
             ((*(long *)(pTVar11 + 0x10) == *(long *)(pTVar11 + 0x20) &&
              (*(long *)(pTVar11 + 0x18) == *(long *)(pTVar11 + 0x28)))));
          pTVar11 = *(TEdge **)(pTVar11 + 0x60)) {
                    /* try { // try from 01032834 to 01132857 has its CatchHandler @ 01033290 */
      }
      if (*(long *)(pTVar11 + 0x38) != 0) {
        if (*(long *)(pTVar22 + 0x38) == 0) goto LAB_0103288c;
        goto LAB_010328ec;
      }
      pTVar15 = pTVar11;
      if (*(long *)(pTVar22 + 0x38) == 0) {
LAB_0103288c:
        do {
          pTVar15 = pTVar22;
          pTVar22 = *(TEdge **)(pTVar15 + 0x68);
        } while (*(long *)(pTVar22 + 0x38) == 0);
                    /* try { // try from 0103289c to 011328bf has its CatchHandler @ 01033264 */
        pTVar26 = pTVar22;
        pTVar11 = pTVar15;
        pTVar27 = pTVar15;
        if (*(long *)(pTVar15 + 0x38) == 0) goto LAB_010328bc;
      }
      else {
LAB_010328bc:
        do {
          pTVar27 = *(TEdge **)(pTVar11 + 0x60);
                    /* try { // try from 010328c0 to 011328cf has its CatchHandler @ 01031838 */
          pTVar11 = pTVar27;
        } while (*(long *)(pTVar27 + 0x38) == 0);
        pTVar26 = *(TEdge **)(pTVar27 + 0x68);
      }
                    /* try { // try from 010328d0 to 011328f3 has its CatchHandler @ 01033250 */
      pTVar11 = pTVar27;
    } while (*(long *)(pTVar27 + 0x28) == *(long *)(pTVar26 + 8));
    pTVar11 = pTVar15;
    if (*(long *)pTVar27 <= *(long *)pTVar22) {
      pTVar11 = pTVar27;
    }
LAB_010328ec:
    if (pTVar11 != pTVar8) {
                    /* try { // try from 010328f4 to 01132917 has its CatchHandler @ 01031838 */
      pTVar22 = pTVar11;
      if (pTVar8 != (TEdge *)0x0) {
        pTVar22 = pTVar8;
      }
      plVar13 = operator_new(0x20);
      plVar13[3] = 0;
      *plVar13 = *(long *)(pTVar11 + 8);
                    /* try { // try from 01032918 to 01132923 has its CatchHandler @ 01033258 */
      pTVar8 = *(TEdge **)(pTVar11 + 0x68);
                    /* try { // try from 01032924 to 01132953 has its CatchHandler @ 01031838 */
      bVar7 = *(double *)(pTVar8 + 0x40) <= *(double *)(pTVar11 + 0x40);
      if (bVar7) {
        plVar13[2] = (long)pTVar8;
                    /* try { // try from 01032954 to 01132977 has its CatchHandler @ 01033260 */
        plVar13[1] = (long)pTVar11;
        pTVar15 = pTVar11;
      }
      else {
        plVar13[2] = (long)pTVar11;
        plVar13[1] = (long)pTVar8;
        pTVar15 = pTVar8;
        pTVar8 = pTVar11;
      }
      plVar14 = plVar13 + 2;
      *(undefined4 *)(pTVar15 + 0x4c) = 1;
      *(undefined4 *)(pTVar8 + 0x4c) = 2;
                    /* try { // try from 01032978 to 011329c7 has its CatchHandler @ 01031838 */
      uVar2 = 1;
      if (*(TEdge **)(pTVar15 + 0x60) == pTVar8) {
        uVar2 = 0xffffffff;
      }
      uVar29 = 0xffffffff;
      if (*(TEdge **)(pTVar15 + 0x60) == pTVar8) {
        uVar29 = 1;
      }
      *(undefined4 *)(pTVar15 + 0x50) = uVar2;
      *(undefined4 *)(pTVar8 + 0x50) = uVar29;
      pTVar11 = (TEdge *)ProcessBound(this,pTVar15,bVar7);
      pTVar15 = (TEdge *)ProcessBound(this,(TEdge *)*plVar14,!bVar7);
      plVar25 = plVar13 + 1;
      if ((*(int *)(plVar13[1] + 0x5c) == -2) ||
         (plVar25 = plVar14, *(int *)(*plVar14 + 0x5c) == -2)) {
                    /* try { // try from 010329c8 to 011329eb has its CatchHandler @ 0103325c */
        *plVar25 = 0;
      }
      plVar14 = *(long **)pCVar1;
      pCVar16 = pCVar1;
      if (plVar14 != (long *)0x0) {
        if (*plVar13 < *plVar14) {
          do {
            plVar25 = plVar14;
            plVar14 = (long *)plVar25[3];
                    /* try { // try from 010329ec to 011329fb has its CatchHandler @ 01031838 */
            if (plVar14 == (long *)0x0) break;
          } while (*plVar13 < *plVar14);
                    /* try { // try from 010329fc to 01132a1f has its CatchHandler @ 0103324c */
          plVar13[3] = (long)plVar14;
          pCVar16 = (ClipperBase *)(plVar25 + 3);
        }
        else {
          plVar13[3] = (long)plVar14;
        }
      }
      *(long **)pCVar16 = plVar13;
      pTVar8 = pTVar22;
      if (!bVar7) {
        pTVar11 = pTVar15;
      }
      goto LAB_01032838;
    }
                    /* try { // try from 01032a20 to 01132a4b has its CatchHandler @ 01031838 */
    uVar10 = 1;
    goto LAB_010327cc;
  }
joined_r0x010327c0:
  uVar10 = 0;
  if (pTVar8 == (TEdge *)0x0) goto LAB_010327cc;
  operator_delete__(pTVar8);
  goto LAB_010327c8;
}

