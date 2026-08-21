
/* v8::internal::ParserBase<v8::internal::PreParser>::ClassifyArrowParameter(v8::internal::AccumulationScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >*, int, v8::internal::PreParserExpression) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ClassifyArrowParameter
          (ParserBase<v8::internal::PreParser> *this,long *param_1,uint param_2,uint param_4)

{
  uint uVar1;
  PendingCompilationErrorHandler *pPVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (*(uint *)((long)param_1 + 0x14) < *(uint *)(param_1 + 2)) {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar4 + 0x30);
      param_1[2] = *(long *)(lVar4 + 0x38);
    }
    *(undefined4 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0xffffffff;
    lVar4 = *param_1;
    if (*(uint *)((long)param_1 + 0x1c) < *(uint *)(param_1 + 3)) {
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar4 + 0x34);
      param_1[3] = *(long *)(lVar4 + 0x40);
    }
    *(undefined4 *)(lVar4 + 0x34) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0xffffffff;
  }
  if ((param_4 >> 3 & 1) == 0) {
    if ((param_4 & 7) == 3) {
      if ((param_4 & 0xfe0) != 0x20) {
        return;
      }
      plVar5 = *(long **)(this + 0x90);
      if (2 < *(byte *)(plVar5 + 2) - 1) {
        return;
      }
      plVar8 = (long *)*plVar5;
      uVar1 = *(uint *)(**(long **)(this + 200) + 4);
      if (*(byte *)(plVar5 + 2) != 3) {
        plVar8[0x1d] = CONCAT44(uVar1,param_2);
        *(undefined4 *)(*plVar5 + 0xf0) = 0x128;
        return;
      }
      if ((*(byte *)(*plVar8 + 0x81) & 1) == 0) {
        *(bool *)(plVar8[0x1c] + 0x15) = param_2 <= uVar1;
        return;
      }
      pPVar2 = (PendingCompilationErrorHandler *)plVar8[0x10];
      uVar3 = 0x128;
      goto LAB_0117c590;
    }
    if (((~param_4 & 6) == 0) || ((param_4 & 0xf7) == 0x92)) {
      if (1 < *(byte *)(*(long *)(this + 0x90) + 0x10) - 1) {
        return;
      }
      *(undefined1 *)(*(long *)(this + 0x90) + 0x58) = 0;
      return;
    }
  }
  puVar6 = *(undefined8 **)(this + 0x90);
  if (4 < *(byte *)(puVar6 + 2) - 1) {
    return;
  }
  uVar1 = *(uint *)(**(long **)(this + 200) + 4);
  if (2 < *(byte *)(puVar6 + 2) - 3) {
    *(ulong *)((long)puVar6 + 0x4c) = CONCAT44(uVar1,param_2);
    *(undefined4 *)((long)puVar6 + 0x54) = 0xfd;
    return;
  }
  plVar8 = (long *)*puVar6;
  uVar3 = 0xfd;
  pPVar2 = (PendingCompilationErrorHandler *)plVar8[0x10];
LAB_0117c590:
  PendingCompilationErrorHandler::ReportMessageAt(pPVar2,param_2,uVar1,uVar3,0);
  lVar4 = plVar8[0x19];
  lVar7 = *(long *)(lVar4 + 0x18);
  if (*(char *)(lVar7 + 0x30) == '\0') {
    *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined1 *)(lVar4 + 0x60) = 0x6d;
    *(undefined1 *)(lVar4 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar4 + 0x100) = 0x6d;
  }
  return;
}

