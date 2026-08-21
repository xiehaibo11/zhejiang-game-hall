
/* v8::internal::compiler::SpillRange::TryMerge(v8::internal::compiler::SpillRange*) */

undefined8 __thiscall
v8::internal::compiler::SpillRange::TryMerge(SpillRange *this,SpillRange *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  SpillRange *pSVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if (((*(int *)(this + 0x2c) == -1) && (*(int *)(param_1 + 0x2c) == -1)) &&
     (*(int *)(this + 0x30) == *(int *)(param_1 + 0x30))) {
    pSVar4 = this + 0x20;
    piVar5 = *(int **)pSVar4;
    if (((piVar5 == (int *)0x0) || (piVar6 = *(int **)(param_1 + 0x20), piVar6 == (int *)0x0)) ||
       ((iVar8 = *piVar6, *(int *)(this + 0x28) <= iVar8 ||
        (iVar9 = *piVar5, *(int *)(param_1 + 0x28) <= iVar9)))) {
LAB_01657d4c:
      iVar8 = *(int *)(param_1 + 0x28);
      if ((*(int *)(this + 0x28) < iVar8) && (iVar8 != 0x7fffffff)) {
        *(int *)(this + 0x28) = iVar8;
      }
      piVar5 = *(int **)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x28) = 0x7fffffff;
      if (piVar5 != (int *)0x0) {
        piVar7 = (int *)0x0;
        piVar10 = *(int **)pSVar4;
        piVar6 = piVar5;
        if (piVar10 != (int *)0x0) goto LAB_01657db0;
LAB_01657d8c:
        piVar5 = piVar10;
        piVar10 = piVar6;
        if (piVar7 == (int *)0x0) goto LAB_01657dc8;
        do {
          *(int **)(piVar7 + 2) = piVar10;
          piVar7 = piVar10;
          while( true ) {
            if (piVar5 == (int *)0x0) goto LAB_01657dd0;
            piVar10 = *(int **)(piVar7 + 2);
            piVar6 = piVar5;
            if (piVar10 == (int *)0x0) goto LAB_01657d8c;
LAB_01657db0:
            piVar6 = piVar5;
            if (*piVar5 < *piVar10) goto LAB_01657d8c;
            if (piVar7 != (int *)0x0) break;
LAB_01657dc8:
            *(int **)pSVar4 = piVar10;
            piVar7 = piVar10;
          }
        } while( true );
      }
LAB_01657dd0:
      plVar2 = *(long **)param_1;
      plVar3 = *(long **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (plVar2 != plVar3) {
        do {
          plVar1 = plVar2 + 1;
          *(SpillRange **)(*plVar2 + 0x70) = this;
          plVar2 = plVar1;
        } while (plVar3 != plVar1);
        plVar2 = *(long **)param_1;
        plVar3 = *(long **)(param_1 + 8);
      }
      std::__ndk1::
      vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
      ::insert<std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>>
                ((vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
                  *)this,*(undefined8 *)(this + 8),plVar2,plVar3);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
      return 1;
    }
    if (iVar8 <= iVar9) goto LAB_01657d10;
    while (piVar5[1] <= iVar8) {
      piVar5 = *(int **)(piVar5 + 2);
      while( true ) {
        if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) goto LAB_01657d4c;
        iVar9 = *piVar5;
        iVar8 = *piVar6;
        if (iVar9 < iVar8) break;
LAB_01657d10:
        if (iVar9 < piVar6[1]) {
          return 0;
        }
        piVar6 = *(int **)(piVar6 + 2);
      }
    }
  }
  return 0;
}

