
/* v8::internal::ParserBase<v8::internal::PreParser>::ParsePossibleDestructuringSubPattern(v8::internal::AccumulationScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >*) */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParsePossibleDestructuringSubPattern
          (ParserBase<v8::internal::PreParser> *this,AccumulationScope *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  PendingCompilationErrorHandler *pPVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  
  if ((param_1 != (AccumulationScope *)0x0) && (lVar6 = *(long *)param_1, lVar6 != 0)) {
    if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 0x30);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar6 + 0x38);
    }
    *(undefined4 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0xffffffff;
    lVar6 = *(long *)param_1;
    if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar6 + 0x34);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x40);
    }
    *(undefined4 *)(lVar6 + 0x34) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0xffffffff;
  }
  uVar1 = **(uint **)(*(long *)(this + 200) + 8);
  uVar3 = ParseAssignmentExpressionCoverGrammar(this);
  if ((uVar3 & 7) == 2) {
    if ((uVar3 >> 4 & 0xf) - 1 < 4) {
      plVar7 = *(long **)(this + 0x90);
      if (*(byte *)(plVar7 + 2) - 1 < 5) {
        if (*(byte *)(plVar7 + 2) - 3 < 3) {
          lVar6 = *plVar7;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar6 + 0x80),uVar1,
                     *(undefined4 *)(**(long **)(this + 200) + 4),0xf7,0);
          lVar6 = *(long *)(lVar6 + 200);
          lVar9 = *(long *)(lVar6 + 0x18);
          if (*(char *)(lVar9 + 0x30) == '\0') {
            *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar9 + 0x30) = 1;
            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
            *(undefined1 *)(lVar6 + 0x60) = 0x6d;
            *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar6 + 0x100) = 0x6d;
          }
        }
        else {
          *(ulong *)((long)plVar7 + 0x4c) =
               CONCAT44(*(undefined4 *)(**(long **)(this + 200) + 4),uVar1);
          *(undefined4 *)((long)plVar7 + 0x54) = 0xf7;
        }
      }
      if (param_1 == (AccumulationScope *)0x0) {
        return uVar3;
      }
      plVar7 = *(long **)param_1;
      if (plVar7 == (long *)0x0) {
        return uVar3;
      }
      if (*(uint *)(plVar7 + 7) <= *(uint *)((long)plVar7 + 0x3c)) {
        lVar6 = *plVar7;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar6 + 0x80),(int)plVar7[7],
                   *(undefined4 *)((long)plVar7 + 0x3c),(int)plVar7[6],0);
        lVar6 = *(long *)(lVar6 + 200);
        lVar9 = *(long *)(lVar6 + 0x18);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined1 *)(lVar6 + 0x60) = 0x6d;
          *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar6 + 0x100) = 0x6d;
        }
      }
      lVar6 = *(long *)param_1;
      *(undefined4 *)(lVar6 + 0x34) = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0xffffffff;
      return uVar3;
    }
  }
  else if (((uVar3 & 7) == 3) &&
          (((uVar3 & 0xfe0) != 0x20 || ((*(ushort *)(*(long *)this + 0x81) & 1) == 0)))) {
    if ((uVar3 >> 3 & 1) != 0) {
      plVar7 = *(long **)(this + 0x90);
      if (*(byte *)(plVar7 + 2) - 1 < 5) {
        if (*(byte *)(plVar7 + 2) - 3 < 3) {
          lVar6 = *plVar7;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar6 + 0x80),uVar1,
                     *(undefined4 *)(**(long **)(this + 200) + 4),0xfd,0);
          lVar6 = *(long *)(lVar6 + 200);
          lVar9 = *(long *)(lVar6 + 0x18);
          if (*(char *)(lVar9 + 0x30) == '\0') {
            *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar9 + 0x30) = 1;
            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
            *(undefined1 *)(lVar6 + 0x60) = 0x6d;
            *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar6 + 0x100) = 0x6d;
          }
        }
        else {
          *(ulong *)((long)plVar7 + 0x4c) =
               CONCAT44(*(undefined4 *)(**(long **)(this + 200) + 4),uVar1);
          *(undefined4 *)((long)plVar7 + 0x54) = 0xfd;
        }
      }
    }
    if ((uVar3 & 0xfe0) != 0x20) {
      return uVar3;
    }
    plVar7 = *(long **)(this + 0x90);
    if (2 < *(byte *)(plVar7 + 2) - 1) {
      return uVar3;
    }
    plVar10 = (long *)*plVar7;
    uVar2 = *(uint *)(**(long **)(this + 200) + 4);
    if (*(byte *)(plVar7 + 2) != 3) {
      plVar10[0x1d] = CONCAT44(uVar2,uVar1);
      *(undefined4 *)(*plVar7 + 0xf0) = 0x128;
      return uVar3;
    }
    if ((*(byte *)(*plVar10 + 0x81) & 1) == 0) {
      *(bool *)(plVar10[0x1c] + 0x15) = uVar1 <= uVar2;
      return uVar3;
    }
    pPVar4 = (PendingCompilationErrorHandler *)plVar10[0x10];
    uVar5 = 0x128;
    goto LAB_0117e070;
  }
  if ((uVar3 >> 3 & 1) == 0) {
    if ((~uVar3 & 6) == 0) {
      return uVar3;
    }
    if ((uVar3 & 0xf7) == 0x92) {
      return uVar3;
    }
  }
  puVar8 = *(undefined8 **)(this + 0x90);
  uVar2 = *(uint *)(**(long **)(this + 200) + 4);
  if (2 < *(byte *)(puVar8 + 2) - 3) {
    if (*(uint *)(puVar8 + 8) <= *(uint *)((long)puVar8 + 0x44)) {
      return uVar3;
    }
    *(undefined4 *)((long)puVar8 + 0x34) = 0xfd;
    puVar8[8] = CONCAT44(uVar2,uVar1);
    return uVar3;
  }
  plVar10 = (long *)*puVar8;
  uVar5 = 0xfd;
  pPVar4 = (PendingCompilationErrorHandler *)plVar10[0x10];
LAB_0117e070:
  PendingCompilationErrorHandler::ReportMessageAt(pPVar4,uVar1,uVar2,uVar5,0);
  lVar6 = plVar10[0x19];
  lVar9 = *(long *)(lVar6 + 0x18);
  if (*(char *)(lVar9 + 0x30) == '\0') {
    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined1 *)(lVar6 + 0x60) = 0x6d;
    *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar6 + 0x100) = 0x6d;
  }
  return uVar3;
}

