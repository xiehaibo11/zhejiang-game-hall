
/* v8::internal::ParserBase<v8::internal::PreParser>::RewriteInvalidReferenceExpression(v8::internal::PreParserExpression,
   int, int, v8::internal::MessageTemplate) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::RewriteInvalidReferenceExpression
          (ParserBase<v8::internal::PreParser> *this,uint param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 & 7) == 3) {
    param_5 = 0x128;
LAB_0117ccbc:
    ReportMessageAt(this,CONCAT44(param_4,param_3),param_5);
    return 1;
  }
  if ((((param_2 & 7) != 2) || (2 < (param_2 >> 4 & 0xf) - 5)) || ((param_2 & 0xf0) == 0x70))
  goto LAB_0117ccbc;
  plVar1 = *(long **)(this + 0x90);
  if (*(byte *)(plVar1 + 2) - 3 < 3) {
    lVar3 = *plVar1;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar3 + 0x80),param_3,param_4,0xfd,0);
    lVar3 = *(long *)(lVar3 + 200);
    lVar2 = *(long *)(lVar3 + 0x18);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined1 *)(lVar3 + 0x60) = 0x6d;
      *(undefined1 *)(lVar3 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar3 + 0x100) = 0x6d;
      lVar3 = *(long *)(this + 0x108);
      goto joined_r0x0117cd08;
    }
  }
  else if (*(uint *)((long)plVar1 + 0x44) < *(uint *)(plVar1 + 8)) {
    *(undefined4 *)((long)plVar1 + 0x34) = 0xfd;
    plVar1[8] = CONCAT44(param_4,param_3);
  }
  lVar3 = *(long *)(this + 0x108);
joined_r0x0117cd08:
  if (lVar3 != 0) {
    lVar2 = 0x90;
    if ((*(ushort *)(*(long *)this + 0x81) & 1) != 0) {
      lVar2 = 0x94;
    }
    *(int *)(lVar3 + lVar2) = *(int *)(lVar3 + lVar2) + 1;
  }
  if ((param_2 & 0xf7) == 2) {
    return 0x12;
  }
  return 0x32;
}

