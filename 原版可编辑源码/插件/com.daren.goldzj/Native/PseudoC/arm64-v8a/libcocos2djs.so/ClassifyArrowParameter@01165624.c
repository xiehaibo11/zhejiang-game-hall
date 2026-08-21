
/* v8::internal::ParserBase<v8::internal::Parser>::ClassifyArrowParameter(v8::internal::AccumulationScope<v8::internal::ParserTypes<v8::internal::Parser>
   >*, int, v8::internal::Expression*) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ClassifyArrowParameter
          (ParserBase<v8::internal::Parser> *this,AccumulationScope *param_1,int param_2,
          Expression *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  PendingCompilationErrorHandler *pPVar4;
  undefined8 uVar5;
  long lVar6;
  Expression *pEVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  lVar6 = *(long *)param_1;
  if (lVar6 != 0) {
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
  uVar2 = *(uint *)(param_3 + 4);
  if ((uVar2 >> 6 & 1) == 0) {
    uVar1 = uVar2 & 0x3f;
    if (((uVar2 >> 10 & 1) != 0) || (uVar1 != 0x35)) {
      if (((uVar2 & 0x3e) != 0x16) && (uVar1 != 0x18)) goto LAB_01165740;
      if ((uVar1 != 0x35) || ((uVar2 >> 10 & 1) != 0)) {
        if (1 < *(byte *)(*(long *)(this + 0xc0) + 0x10) - 1) {
          return;
        }
        *(undefined1 *)(*(long *)(this + 0xc0) + 0x58) = 0;
        return;
      }
    }
    pEVar7 = param_3 + 8;
    if ((uVar2 >> 8 & 1) != 0) {
      pEVar7 = (Expression *)(*(long *)pEVar7 + 8);
    }
    uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) != *(long *)pEVar7) &&
       (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) != *(long *)pEVar7)) {
      return;
    }
    plVar8 = *(long **)(this + 0xc0);
    if (2 < *(byte *)(plVar8 + 2) - 1) {
      return;
    }
    plVar10 = (long *)*plVar8;
    if (*(byte *)(plVar8 + 2) != 3) {
      plVar10[0x23] = CONCAT44(uVar3,param_2);
      *(undefined4 *)(*plVar8 + 0x120) = 0x128;
      return;
    }
    if ((*(byte *)(*plVar10 + 0x81) & 1) == 0) {
      lVar6 = plVar10[0x22];
      *(ulong *)(lVar6 + 0x30) = CONCAT44(uVar3,param_2);
      *(undefined4 *)(lVar6 + 0x38) = 0x128;
      return;
    }
    pPVar4 = (PendingCompilationErrorHandler *)plVar10[0x16];
    uVar5 = 0x128;
  }
  else {
LAB_01165740:
    puVar9 = *(undefined8 **)(this + 0xc0);
    if (4 < *(byte *)(puVar9 + 2) - 1) {
      return;
    }
    uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    if (2 < *(byte *)(puVar9 + 2) - 3) {
      *(ulong *)((long)puVar9 + 0x4c) = CONCAT44(uVar3,param_2);
      *(undefined4 *)((long)puVar9 + 0x54) = 0xfd;
      return;
    }
    plVar10 = (long *)*puVar9;
    uVar5 = 0xfd;
    pPVar4 = (PendingCompilationErrorHandler *)plVar10[0x16];
  }
  PendingCompilationErrorHandler::ReportMessageAt(pPVar4,param_2,uVar3,uVar5,0);
  lVar6 = plVar10[0x2b];
  if (*(char *)(lVar6 + 0x30) == '\0') {
    *(undefined4 *)(plVar10 + 0x2c) = 0xffffffff;
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
    *(undefined1 *)(plVar10 + 0x34) = 0x6d;
    *(undefined1 *)(plVar10 + 0x3e) = 0x6d;
    *(undefined1 *)(plVar10 + 0x48) = 0x6d;
  }
  return;
}

