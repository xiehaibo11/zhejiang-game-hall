
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(ClipperLib::IntersectNode*,
   ClipperLib::IntersectNode*), ClipperLib::IntersectNode**>(ClipperLib::IntersectNode**,
   ClipperLib::IntersectNode**, bool (*&)(ClipperLib::IntersectNode*, ClipperLib::IntersectNode*))
    */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
               (IntersectNode **param_1,IntersectNode **param_2,
               _func_bool_IntersectNode_ptr_IntersectNode_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  IntersectNode *pIVar4;
  IntersectNode *pIVar5;
  IntersectNode **ppIVar6;
  IntersectNode **ppIVar7;
  IntersectNode **ppIVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
                    /* catch() { ... } // from try @ 0103e2a0 with catch @ 0103e2f0 */
                    /* catch() { ... } // from try @ 0103e348 with catch @ 0103e30c */
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pIVar4 = *param_1;
    *param_1 = param_2[-1];
                    /* try { // try from 0103e340 to 0113e347 has its CatchHandler @ 0103e39c */
    goto LAB_0103e498;
  case 3:
                    /* try { // try from 0103e348 to 0113e3b7 has its CatchHandler @ 0103e30c */
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        return true;
      }
      pIVar4 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = pIVar4;
      uVar2 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar2 & 1) == 0) {
        return true;
      }
                    /* catch() { ... } // from try @ 0103e3e0 with catch @ 0103e430 */
      auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
      param_1[1] = auVar12._8_8_;
      *param_1 = auVar12._0_8_;
      return true;
    }
    pIVar4 = *param_1;
    if ((uVar3 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = pIVar4;
      return true;
    }
                    /* try { // try from 0103e474 to 0113e47b has its CatchHandler @ 0103e4c4 */
    *param_1 = param_1[1];
    param_1[1] = pIVar4;
                    /* try { // try from 0103e47c to 0113e4df has its CatchHandler @ 0103e44c */
    uVar2 = (**(code **)param_3)(param_2[-1]);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pIVar4 = param_1[1];
    param_1[1] = param_2[-1];
LAB_0103e498:
    param_2[-1] = pIVar4;
    break;
  case 4:
    __sort4<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
                    /* catch() { ... } // from try @ 0103e340 with catch @ 0103e39c */
    FUN_0103e06c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
                    /* catch() { ... } // from try @ 0103e3e8 with catch @ 0103e3b8 */
    uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        auVar12 = *(undefined1 (*) [16])(param_1 + 1);
                    /* catch() { ... } // from try @ 0103e47c with catch @ 0103e44c */
        auVar13 = NEON_ext(auVar12,auVar12,8,1);
        param_1[2] = auVar13._8_8_;
        param_1[1] = auVar13._0_8_;
        uVar2 = (**(code **)param_3)(auVar12._8_8_,*param_1);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
          param_1[1] = auVar12._8_8_;
          *param_1 = auVar12._0_8_;
        }
      }
    }
    else {
      pIVar4 = *param_1;
      if ((uVar3 & 1) == 0) {
        *param_1 = param_1[1];
        param_1[1] = pIVar4;
        uVar2 = (**(code **)param_3)(param_1[2]);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1)
                             ,8,1);
          param_1[2] = auVar12._8_8_;
          param_1[1] = auVar12._0_8_;
        }
      }
      else {
        pIVar5 = param_1[2];
                    /* try { // try from 0103e3e0 to 0113e3e7 has its CatchHandler @ 0103e430 */
        param_1[2] = pIVar4;
        *param_1 = pIVar5;
                    /* try { // try from 0103e3e8 to 0113e44b has its CatchHandler @ 0103e3b8 */
      }
    }
                    /* catch() { ... } // from try @ 0103e474 with catch @ 0103e4c4 */
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      ppIVar6 = param_1 + 3;
      ppIVar8 = param_1 + 2;
      do {
        ppIVar7 = ppIVar6;
        uVar2 = (**(code **)param_3)(*ppIVar7,*ppIVar8);
                    /* try { // try from 0103e510 to 0113e517 has its CatchHandler @ 0103e568 */
        if ((uVar2 & 1) != 0) {
          pIVar4 = *ppIVar7;
                    /* try { // try from 0103e518 to 0113e583 has its CatchHandler @ 0103e4e0 */
          lVar1 = lVar9;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            ppIVar6 = param_1;
            if (lVar11 == -0x10) goto LAB_0103e4dc;
            uVar2 = (**(code **)param_3)(pIVar4,*(undefined8 *)((long)param_1 + lVar11 + 8));
            lVar1 = lVar11 + -8;
          } while ((uVar2 & 1) != 0);
          ppIVar6 = (IntersectNode **)((long)param_1 + lVar11 + 0x10);
LAB_0103e4dc:
          iVar10 = iVar10 + 1;
                    /* catch() { ... } // from try @ 0103e518 with catch @ 0103e4e0 */
          *ppIVar6 = pIVar4;
          if (iVar10 == 8) {
            return ppIVar7 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        ppIVar6 = ppIVar7 + 1;
        ppIVar8 = ppIVar7;
      } while (ppIVar7 + 1 != param_2);
    }
  }
                    /* catch() { ... } // from try @ 0103e510 with catch @ 0103e568 */
  return true;
}

