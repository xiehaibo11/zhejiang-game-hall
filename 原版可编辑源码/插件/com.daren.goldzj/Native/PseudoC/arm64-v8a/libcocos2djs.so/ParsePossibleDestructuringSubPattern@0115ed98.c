
/* v8::internal::ParserBase<v8::internal::Parser>::ParsePossibleDestructuringSubPattern(v8::internal::AccumulationScope<v8::internal::ParserTypes<v8::internal::Parser>
   >*) */

long __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParsePossibleDestructuringSubPattern
          (ParserBase<v8::internal::Parser> *this,AccumulationScope *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  PendingCompilationErrorHandler *pPVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  
  if ((param_1 != (AccumulationScope *)0x0) && (lVar7 = *(long *)param_1, lVar7 != 0)) {
    if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar7 + 0x30);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar7 + 0x38);
    }
    *(undefined4 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0xffffffff;
    lVar7 = *(long *)param_1;
    if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar7 + 0x34);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar7 + 0x40);
    }
    *(undefined4 *)(lVar7 + 0x34) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0xffffffff;
  }
  uVar1 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  lVar7 = ParseAssignmentExpressionCoverGrammar(this);
  uVar2 = *(uint *)(lVar7 + 4);
  bVar4 = (uVar2 & 0x43f) != 0x35;
  if (lVar7 == 0 || bVar4) {
LAB_0115ee90:
    if ((uVar2 & 0x3f) != 0x2c) {
      if ((uVar2 >> 6 & 1) == 0) {
        if ((uVar2 & 0x3e) == 0x16) {
          return lVar7;
        }
        if ((uVar2 & 0x3f) == 0x18) {
          return lVar7;
        }
      }
      puVar10 = *(undefined8 **)(this + 0xc0);
      uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      if (2 < *(byte *)(puVar10 + 2) - 3) {
        if (*(uint *)(puVar10 + 8) <= *(uint *)((long)puVar10 + 0x44)) {
          return lVar7;
        }
        *(undefined4 *)((long)puVar10 + 0x34) = 0xfd;
        puVar10[8] = CONCAT44(uVar3,uVar1);
        return lVar7;
      }
      plVar8 = (long *)*puVar10;
      uVar6 = 0xfd;
      pPVar5 = (PendingCompilationErrorHandler *)plVar8[0x16];
      goto LAB_0115f15c;
    }
    if (lVar7 == 0 || bVar4) {
      plVar8 = *(long **)(this + 0xc0);
      if (*(byte *)(plVar8 + 2) - 1 < 5) {
        if (*(byte *)(plVar8 + 2) - 3 < 3) {
          lVar12 = *plVar8;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar12 + 0xb0),uVar1,
                     *(undefined4 *)(**(long **)(this + 0xf8) + 4),0xf7,0);
          lVar9 = *(long *)(lVar12 + 0x158);
          if (*(char *)(lVar9 + 0x30) == '\0') {
            *(undefined4 *)(lVar12 + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar9 + 0x30) = 1;
            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
            *(undefined1 *)(lVar12 + 0x1a0) = 0x6d;
            *(undefined1 *)(lVar12 + 0x1f0) = 0x6d;
            *(undefined1 *)(lVar12 + 0x240) = 0x6d;
          }
        }
        else {
          *(ulong *)((long)plVar8 + 0x4c) =
               CONCAT44(*(undefined4 *)(**(long **)(this + 0xf8) + 4),uVar1);
          *(undefined4 *)((long)plVar8 + 0x54) = 0xf7;
        }
      }
      if (param_1 == (AccumulationScope *)0x0) {
        return lVar7;
      }
      plVar8 = *(long **)param_1;
      if (plVar8 == (long *)0x0) {
        return lVar7;
      }
      if (*(uint *)(plVar8 + 7) <= *(uint *)((long)plVar8 + 0x3c)) {
        lVar12 = *plVar8;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar12 + 0xb0),(int)plVar8[7],
                   *(undefined4 *)((long)plVar8 + 0x3c),(int)plVar8[6],0);
        lVar9 = *(long *)(lVar12 + 0x158);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(lVar12 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined1 *)(lVar12 + 0x1a0) = 0x6d;
          *(undefined1 *)(lVar12 + 0x1f0) = 0x6d;
          *(undefined1 *)(lVar12 + 0x240) = 0x6d;
        }
      }
      lVar9 = *(long *)param_1;
      *(undefined4 *)(lVar9 + 0x34) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0xffffffff;
      return lVar7;
    }
  }
  else if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
    plVar8 = (long *)(lVar7 + 8);
    if ((uVar2 >> 8 & 1) != 0) {
      plVar8 = (long *)(*plVar8 + 8);
    }
    if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *plVar8) ||
       (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *plVar8)) goto LAB_0115ee90;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    plVar8 = *(long **)(this + 0xc0);
    if (*(byte *)(plVar8 + 2) - 1 < 5) {
      if (*(byte *)(plVar8 + 2) - 3 < 3) {
        lVar12 = *plVar8;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar12 + 0xb0),uVar1,
                   *(undefined4 *)(**(long **)(this + 0xf8) + 4),0xfd,0);
        lVar9 = *(long *)(lVar12 + 0x158);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(lVar12 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined1 *)(lVar12 + 0x1a0) = 0x6d;
          *(undefined1 *)(lVar12 + 0x1f0) = 0x6d;
          *(undefined1 *)(lVar12 + 0x240) = 0x6d;
        }
      }
      else {
        *(ulong *)((long)plVar8 + 0x4c) =
             CONCAT44(*(undefined4 *)(**(long **)(this + 0xf8) + 4),uVar1);
        *(undefined4 *)((long)plVar8 + 0x54) = 0xfd;
      }
    }
  }
  lVar9 = lVar7;
  if ((*(uint *)(lVar7 + 4) & 0x3f) != 0x35) {
    lVar9 = 0;
  }
  plVar8 = (long *)(lVar9 + 8);
  if ((*(byte *)(lVar9 + 5) & 1) != 0) {
    plVar8 = (long *)(*plVar8 + 8);
  }
  uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
  if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) != *plVar8) &&
     (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) != *plVar8)) {
    return lVar7;
  }
  plVar11 = *(long **)(this + 0xc0);
  if (2 < *(byte *)(plVar11 + 2) - 1) {
    return lVar7;
  }
  plVar8 = (long *)*plVar11;
  if (*(byte *)(plVar11 + 2) != 3) {
    plVar8[0x23] = CONCAT44(uVar3,uVar1);
    *(undefined4 *)(*plVar11 + 0x120) = 0x128;
    return lVar7;
  }
  if ((*(byte *)(*plVar8 + 0x81) & 1) == 0) {
    lVar9 = plVar8[0x22];
    *(ulong *)(lVar9 + 0x30) = CONCAT44(uVar3,uVar1);
    *(undefined4 *)(lVar9 + 0x38) = 0x128;
    return lVar7;
  }
  pPVar5 = (PendingCompilationErrorHandler *)plVar8[0x16];
  uVar6 = 0x128;
LAB_0115f15c:
  PendingCompilationErrorHandler::ReportMessageAt(pPVar5,uVar1,uVar3,uVar6,0);
  lVar9 = plVar8[0x2b];
  if (*(char *)(lVar9 + 0x30) == '\0') {
    *(undefined4 *)(plVar8 + 0x2c) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined1 *)(plVar8 + 0x34) = 0x6d;
    *(undefined1 *)(plVar8 + 0x3e) = 0x6d;
    *(undefined1 *)(plVar8 + 0x48) = 0x6d;
  }
  return lVar7;
}

