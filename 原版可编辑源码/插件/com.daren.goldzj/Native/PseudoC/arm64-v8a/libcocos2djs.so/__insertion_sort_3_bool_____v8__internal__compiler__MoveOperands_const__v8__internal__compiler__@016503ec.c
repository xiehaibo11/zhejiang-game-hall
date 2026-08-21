
/* void std::__ndk1::__insertion_sort_3<bool (*&)(v8::internal::compiler::MoveOperands const*,
   v8::internal::compiler::MoveOperands const*),
   v8::internal::compiler::MoveOperands**>(v8::internal::compiler::MoveOperands**,
   v8::internal::compiler::MoveOperands**, bool (*&)(v8::internal::compiler::MoveOperands const*,
   v8::internal::compiler::MoveOperands const*)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(v8::internal::compiler::MoveOperands_const*,v8::internal::compiler::MoveOperands_const*),v8::internal::compiler::MoveOperands**>
               (MoveOperands **param_1,MoveOperands **param_2,
               _func_bool_MoveOperands_ptr_MoveOperands_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  MoveOperands *pMVar4;
  MoveOperands *pMVar5;
  MoveOperands **ppMVar6;
  MoveOperands **ppMVar7;
  MoveOperands **ppMVar8;
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
    pMVar4 = *param_1;
    if ((uVar3 & 1) == 0) {
      *param_1 = param_1[1];
      param_1[1] = pMVar4;
      uVar2 = (**(code **)param_3)(param_1[2]);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1),8
                           ,1);
        param_1[2] = auVar11._8_8_;
        param_1[1] = auVar11._0_8_;
      }
    }
    else {
      pMVar5 = param_1[2];
      param_1[2] = pMVar4;
      *param_1 = pMVar5;
    }
  }
  if (param_1 + 3 != param_2) {
    lVar9 = 0;
    ppMVar6 = param_1 + 3;
    ppMVar8 = param_1 + 2;
    do {
      ppMVar7 = ppMVar6;
      uVar2 = (**(code **)param_3)(*ppMVar7,*ppMVar8);
      if ((uVar2 & 1) != 0) {
        pMVar4 = *ppMVar7;
        lVar1 = lVar9;
        do {
          lVar10 = lVar1;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x10);
          ppMVar6 = param_1;
          if (lVar10 == -0x10) goto LAB_016504c4;
          uVar2 = (**(code **)param_3)(pMVar4,*(undefined8 *)((long)param_1 + lVar10 + 8));
          lVar1 = lVar10 + -8;
        } while ((uVar2 & 1) != 0);
        ppMVar6 = (MoveOperands **)((long)param_1 + lVar10 + 0x10);
LAB_016504c4:
        *ppMVar6 = pMVar4;
      }
      lVar9 = lVar9 + 8;
      ppMVar6 = ppMVar7 + 1;
      ppMVar8 = ppMVar7;
    } while (ppMVar7 + 1 != param_2);
  }
  return;
}

