
/* void std::__ndk1::__insertion_sort_3<bool (*&)(ClipperLib::IntersectNode*,
   ClipperLib::IntersectNode*), ClipperLib::IntersectNode**>(ClipperLib::IntersectNode**,
   ClipperLib::IntersectNode**, bool (*&)(ClipperLib::IntersectNode*, ClipperLib::IntersectNode*))
    */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
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
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar2 = (**(code **)param_3)(param_1[1],*param_1);
  uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      auVar11 = *(undefined1 (*) [16])(param_1 + 1);
      auVar12 = NEON_ext(auVar11,auVar11,8,1);
      param_1[2] = auVar12._8_8_;
      param_1[1] = auVar12._0_8_;
      uVar2 = (**(code **)param_3)(auVar11._8_8_,*param_1);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
        param_1[1] = auVar11._8_8_;
        *param_1 = auVar11._0_8_;
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
        auVar11 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1),8
                           ,1);
        param_1[2] = auVar11._8_8_;
        param_1[1] = auVar11._0_8_;
      }
    }
    else {
      pIVar5 = param_1[2];
      param_1[2] = pIVar4;
      *param_1 = pIVar5;
    }
  }
  if (param_1 + 3 != param_2) {
    lVar9 = 0;
    ppIVar6 = param_1 + 3;
    ppIVar8 = param_1 + 2;
    do {
      ppIVar7 = ppIVar6;
      uVar2 = (**(code **)param_3)(*ppIVar7,*ppIVar8);
      if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 0103e2a8 with catch @ 0103e278 */
        pIVar4 = *ppIVar7;
        lVar1 = lVar9;
        do {
          lVar10 = lVar1;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x10);
          ppIVar6 = param_1;
          if (lVar10 == -0x10) goto LAB_0103e24c;
                    /* try { // try from 0103e2a0 to 0113e2a7 has its CatchHandler @ 0103e2f0 */
          uVar2 = (**(code **)param_3)(pIVar4,*(undefined8 *)((long)param_1 + lVar10 + 8));
                    /* try { // try from 0103e2a8 to 0113e30b has its CatchHandler @ 0103e278 */
          lVar1 = lVar10 + -8;
        } while ((uVar2 & 1) != 0);
        ppIVar6 = (IntersectNode **)((long)param_1 + lVar10 + 0x10);
LAB_0103e24c:
        *ppIVar6 = pIVar4;
      }
      lVar9 = lVar9 + 8;
      ppIVar6 = ppIVar7 + 1;
      ppIVar8 = ppIVar7;
    } while (ppIVar7 + 1 != param_2);
  }
  return;
}

