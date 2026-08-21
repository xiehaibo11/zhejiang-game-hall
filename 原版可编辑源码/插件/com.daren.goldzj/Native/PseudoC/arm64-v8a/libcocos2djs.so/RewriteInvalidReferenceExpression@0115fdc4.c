
/* v8::internal::ParserBase<v8::internal::Parser>::RewriteInvalidReferenceExpression(v8::internal::Expression*,
   int, int, v8::internal::MessageTemplate) */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::RewriteInvalidReferenceExpression
          (ParserBase<v8::internal::Parser> *this,long param_1,undefined4 param_2,undefined4 param_3
          ,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  Zone *this_00;
  long lVar5;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 4) & 0x43f) != 0x35)) {
    if ((*(uint *)(param_1 + 4) & 0x13f) == 0x1c) {
      plVar4 = *(long **)(this + 0xc0);
      if (*(byte *)(plVar4 + 2) - 3 < 3) {
        lVar5 = *plVar4;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar5 + 0xb0),param_2,param_3,0xfd,0);
        lVar3 = *(long *)(lVar5 + 0x158);
        if (*(char *)(lVar3 + 0x30) == '\0') {
          *(undefined4 *)(lVar5 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar3 + 0x30) = 1;
          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
          *(undefined1 *)(lVar5 + 0x1a0) = 0x6d;
          *(undefined1 *)(lVar5 + 0x1f0) = 0x6d;
          *(undefined1 *)(lVar5 + 0x240) = 0x6d;
        }
      }
      else if (*(uint *)((long)plVar4 + 0x44) < *(uint *)(plVar4 + 8)) {
        *(undefined4 *)((long)plVar4 + 0x34) = 0xfd;
        plVar4[8] = CONCAT44(param_3,param_2);
      }
      lVar3 = 0x90;
      if ((*(ushort *)(*(long *)this + 0x81) & 1) != 0) {
        lVar3 = 0x94;
      }
      *(int *)(this + lVar3 + 0x310) = *(int *)(this + lVar3 + 0x310) + 1;
      uVar1 = Parser::NewThrowError
                        ((Parser *)this,0x98,param_5,
                         *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110),param_2);
      this_00 = *(Zone **)(this + 0x68);
      puVar2 = *(undefined4 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x18) {
        puVar2 = (undefined4 *)Zone::NewExpand(this_00,0x18);
      }
      else {
        *(undefined4 **)(this_00 + 0x10) = puVar2 + 6;
      }
      *(long *)(puVar2 + 2) = param_1;
      *(undefined8 *)(puVar2 + 4) = uVar1;
      *puVar2 = param_2;
      puVar2[1] = 0x2c;
      return puVar2;
    }
  }
  else {
    param_5 = 0x128;
  }
  ReportMessageAt(this,CONCAT44(param_3,param_2),param_5);
  return *(undefined4 **)(this + 0x88);
}

