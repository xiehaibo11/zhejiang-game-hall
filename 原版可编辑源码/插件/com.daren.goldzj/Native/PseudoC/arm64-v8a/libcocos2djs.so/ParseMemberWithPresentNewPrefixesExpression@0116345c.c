
/* v8::internal::ParserBase<v8::internal::Parser>::ParseMemberWithPresentNewPrefixesExpression() */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseMemberWithPresentNewPrefixesExpression
          (ParserBase<v8::internal::Parser> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  Scanner *this_00;
  Expression *pEVar6;
  Expression *pEVar7;
  PendingCompilationErrorHandler *pPVar8;
  Zone *pZVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  char local_4c [4];
  ParserBase<v8::internal::Parser> *local_48;
  ulong local_40;
  ulong uStack_38;
  
  Scanner::Next(*(Scanner **)(this + 0xf8));
  iVar3 = *(int *)**(undefined8 **)(this + 0xf8);
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(this + 0xa8)) {
    lVar11 = *(long *)(this + 0xf8);
    lVar13 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  this_00 = *(Scanner **)(this + 0xf8);
  cVar4 = *(char *)(*(long *)(this_00 + 8) + 0x38);
  if (cVar4 == '[') {
    pEVar6 = (Expression *)ParseSuperExpression(this,true);
  }
  else {
    if ((cVar4 == 'k') && (this[0x132] != (ParserBase<v8::internal::Parser>)0x0)) {
      if (this[0x133] != (ParserBase<v8::internal::Parser>)0x0) {
        cVar4 = Scanner::PeekAhead(this_00);
        this_00 = *(Scanner **)(this + 0xf8);
        if (cVar4 != '\x05') {
          cVar4 = *(char *)(*(long *)(this_00 + 8) + 0x38);
          goto LAB_01163724;
        }
      }
      pPVar8 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar10 = 0x39;
      uVar1 = **(undefined4 **)(this_00 + 8);
      uVar2 = (*(undefined4 **)(this_00 + 8))[1];
      goto LAB_011635c4;
    }
LAB_01163724:
    if (cVar4 == '\x02') {
      pEVar6 = (Expression *)ParseNewTargetExpression(this);
      if (3 < *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38)) {
        return pEVar6;
      }
      pEVar6 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar6);
      return pEVar6;
    }
    pEVar6 = (Expression *)ParsePrimaryExpression(this);
    if (*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) < 4) {
      pEVar6 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar6);
    }
  }
  puVar12 = *(undefined4 **)(*(long *)(this + 0xf8) + 8);
  if (*(char *)(puVar12 + 0xe) != '\x04') {
    local_48 = this + 200;
    if (*(char *)(puVar12 + 0xe) != '\x05') {
      local_40 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
      pZVar9 = *(Zone **)(this + 0x68);
      pEVar7 = *(Expression **)(pZVar9 + 0x10);
      uStack_38 = local_40;
      if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pEVar7) < 0x20) {
        pEVar7 = (Expression *)Zone::NewExpand(pZVar9,0x20);
      }
      else {
        *(Expression **)(pZVar9 + 0x10) = pEVar7 + 0x20;
      }
      pZVar9 = *(Zone **)(this + 0x68);
      *(int *)pEVar7 = iVar3;
      *(int *)(pEVar7 + 4) = 0x1d;
      *(Expression **)(pEVar7 + 8) = pEVar6;
      *(undefined8 *)(pEVar7 + 0x10) = 0;
      *(undefined8 *)(pEVar7 + 0x18) = 0;
      ScopedList<v8::internal::Expression*,void*>::CopyTo
                ((ScopedList<v8::internal::Expression*,void*> *)&local_48,
                 (ZoneList *)(pEVar7 + 0x10),pZVar9);
      uVar5 = *(long *)(local_48 + 8) - *(long *)local_48 >> 3;
      if (uVar5 <= local_40 && local_40 - uVar5 != 0) {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_48,local_40 - uVar5);
        return pEVar7;
      }
      if (uVar5 <= local_40) {
        return pEVar7;
      }
      *(ulong *)(local_48 + 8) = *(long *)local_48 + local_40 * 8;
      return pEVar7;
    }
    local_40 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
    uStack_38 = local_40;
    ParseArguments(this,&local_48,local_4c,0);
    if (local_4c[0] == '\0') {
      pZVar9 = *(Zone **)(this + 0x68);
      pEVar7 = *(Expression **)(pZVar9 + 0x10);
      if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pEVar7) < 0x20) {
        pEVar7 = (Expression *)Zone::NewExpand(pZVar9,0x20);
      }
      else {
        *(Expression **)(pZVar9 + 0x10) = pEVar7 + 0x20;
      }
      pZVar9 = *(Zone **)(this + 0x68);
      *(int *)pEVar7 = iVar3;
      *(int *)(pEVar7 + 4) = 0x1d;
      *(Expression **)(pEVar7 + 8) = pEVar6;
      *(undefined8 *)(pEVar7 + 0x10) = 0;
      *(undefined8 *)(pEVar7 + 0x18) = 0;
      ScopedList<v8::internal::Expression*,void*>::CopyTo
                ((ScopedList<v8::internal::Expression*,void*> *)&local_48,
                 (ZoneList *)(pEVar7 + 0x10),pZVar9);
    }
    else {
      pEVar7 = (Expression *)
               Parser::SpreadCallNew((Parser *)this,pEVar6,(ScopedList *)&local_48,iVar3);
    }
    uVar5 = *(long *)(local_48 + 8) - *(long *)local_48 >> 3;
    if (local_40 < uVar5 || local_40 - uVar5 == 0) {
      if (local_40 < uVar5) {
        *(ulong *)(local_48 + 8) = *(long *)local_48 + local_40 * 8;
      }
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_48,local_40 - uVar5);
    }
    if (3 < *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38)) {
      return pEVar7;
    }
    pEVar6 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar7);
    return pEVar6;
  }
  uVar1 = *puVar12;
  uVar2 = puVar12[1];
  pPVar8 = *(PendingCompilationErrorHandler **)(this + 0xb0);
  uVar10 = 0x178;
LAB_011635c4:
  PendingCompilationErrorHandler::ReportMessageAt(pPVar8,uVar1,uVar2,uVar10,0);
  lVar11 = *(long *)(this + 0x158);
  if (*(char *)(lVar11 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar11 + 0x30) = 1;
    *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
  }
  return *(Expression **)(this + 0x88);
}

