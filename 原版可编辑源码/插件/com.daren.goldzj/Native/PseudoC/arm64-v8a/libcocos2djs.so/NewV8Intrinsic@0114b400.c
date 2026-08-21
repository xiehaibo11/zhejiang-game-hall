
/* v8::internal::Parser::NewV8Intrinsic(v8::internal::AstRawString const*,
   v8::internal::ScopedList<v8::internal::Expression*, void*> const&, int) */

int * __thiscall
v8::internal::Parser::NewV8Intrinsic
          (Parser *this,AstRawString *param_1,ScopedList *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  Scope *this_00;
  long lVar3;
  int *piVar4;
  Zone *pZVar5;
  
  if (*(long *)(this + 0x18) != 0) {
    this_00 = *(Scope **)this;
    while( true ) {
      lVar3 = Scope::GetClosureScope(this_00);
      *(ushort *)(lVar3 + 0x83) = *(ushort *)(lVar3 + 0x83) | 4;
      if (*(char *)(lVar3 + 0x80) == '\x04') break;
      this_00 = *(Scope **)(lVar3 + 8);
    }
  }
  if (param_1[0x1c] == (AstRawString)0x0) {
LAB_0114b530:
    ParserBase<v8::internal::Parser>::ReportMessage<v8::internal::AstRawString_const*>
              ((ParserBase<v8::internal::Parser> *)this,0xb2,param_1);
LAB_0114b550:
    piVar4 = *(int **)(this + 0x88);
  }
  else {
    lVar3 = Runtime::FunctionForName(*(uchar **)(param_1 + 8),*(int *)(param_1 + 0x10));
    if (lVar3 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = iVar1 + 1;
      }
      iVar2 = iVar2 >> 1;
      if (param_1[0x1c] != (AstRawString)0x0) {
        iVar2 = iVar1;
      }
      iVar2 = Context::IntrinsicIndexForName(*(uchar **)(param_1 + 8),iVar2);
      if (iVar2 == -1) goto LAB_0114b530;
      pZVar5 = *(Zone **)(this + 0x68);
      piVar4 = *(int **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)piVar4) < 0x28) {
        piVar4 = (int *)Zone::NewExpand(pZVar5,0x28);
      }
      else {
        *(int **)(pZVar5 + 0x10) = piVar4 + 10;
      }
      pZVar5 = *(Zone **)(this + 0x68);
      piVar4[1] = 0x1e;
      piVar4[2] = iVar2;
      *piVar4 = param_3;
      piVar4[4] = 0;
      piVar4[5] = 0;
    }
    else {
      if ((*(char *)(lVar3 + 0x18) != -1) &&
         (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8) != (int)*(char *)(lVar3 + 0x18))) {
        ParserBase<v8::internal::Parser>::ReportMessage
                  ((ParserBase<v8::internal::Parser> *)this,0x122);
        goto LAB_0114b550;
      }
      pZVar5 = *(Zone **)(this + 0x68);
      piVar4 = *(int **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)piVar4) < 0x28) {
        piVar4 = (int *)Zone::NewExpand(pZVar5,0x28);
      }
      else {
        *(int **)(pZVar5 + 0x10) = piVar4 + 10;
      }
      pZVar5 = *(Zone **)(this + 0x68);
      *piVar4 = param_3;
      piVar4[1] = 0x1e;
      *(long *)(piVar4 + 4) = lVar3;
    }
    piVar4[8] = 0;
    piVar4[9] = 0;
    *(undefined8 *)(piVar4 + 6) = 0;
    ScopedList<v8::internal::Expression*,void*>::CopyTo
              ((ScopedList<v8::internal::Expression*,void*> *)param_2,(ZoneList *)(piVar4 + 6),
               pZVar5);
  }
  return piVar4;
}

