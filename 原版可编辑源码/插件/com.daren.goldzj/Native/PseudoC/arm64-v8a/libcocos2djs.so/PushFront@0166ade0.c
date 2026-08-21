
/* v8::internal::compiler::FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::PushFront(v8::internal::compiler::BranchElimination::BranchCondition,
   v8::internal::Zone*,
   v8::internal::compiler::FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>)
    */

void __thiscall
v8::internal::compiler::FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::
PushFront(FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *this,
         long *param_2,Zone *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_4 == (long *)0x0) {
    lVar3 = 0;
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) goto LAB_0166ae04;
LAB_0166ae24:
    if (lVar3 != 1) goto LAB_0166aeec;
  }
  else {
    lVar3 = param_4[4];
    plVar1 = *(long **)this;
    if (plVar1 == (long *)0x0) goto LAB_0166ae24;
LAB_0166ae04:
    if (lVar3 != plVar1[4] + 1) goto LAB_0166aeec;
  }
  if (((*param_4 == *param_2) && (param_4[1] == param_2[1])) &&
     ((char)param_4[2] == (char)param_2[2])) {
    if (param_4[4] == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Size() > 0");
    }
    plVar4 = (long *)param_4[3];
    if (plVar4 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar4[4];
    }
    if (plVar1 == (long *)0x0) {
      if (lVar3 == 0) {
LAB_0166ae90:
        if (plVar4 != plVar1) {
          do {
            if (((*plVar4 != *plVar1) || (plVar4[1] != plVar1[1])) ||
               ((char)plVar4[2] != (char)plVar1[2])) goto LAB_0166aeec;
            plVar4 = (long *)plVar4[3];
            plVar1 = (long *)plVar1[3];
          } while (plVar4 != plVar1);
        }
        *(long **)this = param_4;
        return;
      }
    }
    else if (lVar3 == plVar1[4]) goto LAB_0166ae90;
  }
LAB_0166aeec:
  lVar3 = param_2[2];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  plVar1 = *(long **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)plVar1) < 0x28) {
    plVar1 = (long *)Zone::NewExpand(param_3,0x28);
  }
  else {
    *(long **)(param_3 + 0x10) = plVar1 + 5;
  }
  lVar2 = *(long *)this;
  plVar1[1] = lVar6;
  *plVar1 = lVar5;
  plVar1[2] = lVar3;
  plVar1[3] = lVar2;
  if (lVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x20) + 1;
  }
  plVar1[4] = lVar3;
  *(long **)this = plVar1;
  return;
}

