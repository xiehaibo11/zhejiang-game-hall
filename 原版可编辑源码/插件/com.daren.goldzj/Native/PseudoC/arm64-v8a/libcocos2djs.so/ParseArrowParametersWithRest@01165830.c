
/* v8::internal::ParserBase<v8::internal::Parser>::ParseArrowParametersWithRest(v8::internal::ScopedList<v8::internal::Expression*,
   void*>*, v8::internal::AccumulationScope<v8::internal::ParserTypes<v8::internal::Parser> >*, int)
    */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseArrowParametersWithRest
          (ParserBase<v8::internal::Parser> *this,ScopedList *param_1,AccumulationScope *param_2,
          int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  Expression *pEVar6;
  Zone *this_00;
  Scanner *this_01;
  vector<void*,std::__ndk1::allocator<void*>> *this_02;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  undefined4 *local_58;
  
  Scanner::Next(*(Scanner **)(this + 0xf8));
  puVar8 = (undefined4 *)**(undefined8 **)(this + 0xf8);
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  iVar11 = *(int *)(*(undefined8 **)(this + 0xf8))[1];
  pEVar6 = (Expression *)ParseBindingPattern(this);
  ClassifyArrowParameter(this,param_2,iVar11,pEVar6);
  if (*(byte *)(*(long *)(this + 0xc0) + 0x10) - 1 < 2) {
    *(undefined1 *)(*(long *)(this + 0xc0) + 0x58) = 0;
  }
  if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == '\x11') {
    uVar7 = 0x121;
  }
  else {
    this_00 = *(Zone **)(this + 0x68);
    puVar8 = *(undefined4 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar8) < 0x18) {
      puVar8 = (undefined4 *)Zone::NewExpand(this_00,0x18);
    }
    else {
      *(undefined4 **)(this_00 + 0x10) = puVar8 + 6;
    }
    puVar8[1] = 0x2d;
    puVar8[2] = iVar11;
    *puVar8 = uVar2;
    *(Expression **)(puVar8 + 4) = pEVar6;
    this_01 = *(Scanner **)(this + 0xf8);
    cVar5 = (char)(*(int **)(this_01 + 8))[0xe];
    if (cVar5 != '\x1e') {
      lVar9 = *(long *)(this + 0xc0);
      if (*(byte *)(lVar9 + 0x10) < 3) {
        iVar11 = (int)*(undefined8 *)(lVar9 + 0x28) - (int)*(long *)(lVar9 + 0x20);
        if ((iVar11 != 0) && (param_3 < iVar11)) {
          iVar4 = **(int **)(this_01 + 8);
          piVar10 = (int *)(**(long **)(lVar9 + 0x18) +
                            ((long)iVar11 + -1 + *(long *)(lVar9 + 0x20)) * 0x10 + 8);
          if (*piVar10 == -1) {
            lVar12 = (long)iVar11 + -2;
            do {
              *piVar10 = iVar4;
              if (lVar12 + 1 <= (long)param_3) break;
              lVar1 = lVar12 + *(long *)(lVar9 + 0x20);
              lVar12 = lVar12 + -1;
              piVar10 = (int *)(**(long **)(lVar9 + 0x18) + lVar1 * 0x10 + 8);
            } while (*piVar10 == -1);
            this_01 = *(Scanner **)(this + 0xf8);
            cVar5 = *(char *)(*(long *)(this_01 + 8) + 0x38);
          }
        }
      }
      if ((cVar5 == '\x06') && (cVar5 = Scanner::PeekAhead(this_01), cVar5 == '\x0f')) {
        this_02 = *(vector<void*,std::__ndk1::allocator<void*>> **)param_1;
        local_58 = puVar8;
        if (*(undefined8 **)(this_02 + 8) < *(undefined8 **)(this_02 + 0x10)) {
          **(undefined8 **)(this_02 + 8) = puVar8;
          *(long *)(this_02 + 8) = *(long *)(this_02 + 8) + 8;
        }
        else {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                    (this_02,&local_58);
        }
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        uVar7 = Parser::ExpressionListToExpression((Parser *)this,param_1);
        return uVar7;
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar2,uVar3,0x140,0x185396f);
      lVar9 = *(long *)(this + 0x158);
      if (*(char *)(lVar9 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar9 + 0x30) = 1;
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
      goto LAB_01165a50;
    }
    uVar7 = 0x118;
  }
  ReportMessage(this,uVar7);
LAB_01165a50:
  return *(undefined8 *)(this + 0x88);
}

