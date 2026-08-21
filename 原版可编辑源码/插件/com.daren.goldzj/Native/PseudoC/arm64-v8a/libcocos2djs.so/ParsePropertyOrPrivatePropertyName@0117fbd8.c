
/* v8::internal::ParserBase<v8::internal::PreParser>::ParsePropertyOrPrivatePropertyName() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParsePropertyOrPrivatePropertyName
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  Zone *this_00;
  VariableProxy *pVVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  PrivateNameScopeIterator aPStack_48 [16];
  long local_38;
  
  iVar2 = **(int **)*(Scanner **)(this + 200);
  bVar4 = Scanner::Next(*(Scanner **)(this + 200));
  if (((byte)Token::token_flags[bVar4] >> 1 & 1) == 0) {
    if (bVar4 == 0x6c) {
      PrivateNameScopeIterator::PrivateNameScopeIterator(aPStack_48,*(Scope **)this);
      lVar5 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
      piVar7 = (int *)**(undefined8 **)(this + 200);
      cVar3 = (char)piVar7[0xe];
      if (cVar3 == 'l') {
        uVar9 = 0x83;
      }
      else if (cVar3 == '`') {
        uVar9 = 0x53;
      }
      else if (cVar3 == '_') {
        uVar9 = 99;
      }
      else {
        lVar8 = *(long *)(*(long *)(this + 0x28) + 0x38);
        if (*(long *)(lVar8 + 0xb0) == lVar5) {
          uVar9 = 0x43;
        }
        else if (*(long *)(lVar8 + 0x158) == lVar5) {
          uVar9 = 0x73;
        }
        else {
          iVar1 = (piVar7[1] - *piVar7) + -2;
          if (cVar3 != 'Z') {
            iVar1 = piVar7[1] - *piVar7;
          }
          if (piVar7[6] >> ((*(byte *)(piVar7 + 7) ^ 1) & 0x1f) == iVar1) {
            if (*(long *)(lVar8 + 0x118) == lVar5) {
              uVar9 = 0x23;
            }
            else {
              uVar9 = 0x33;
              if (*(long *)(lVar8 + 0x70) != lVar5) {
                uVar9 = 0x13;
              }
            }
          }
          else {
            uVar9 = 0x13;
          }
        }
      }
      if (local_38 != 0) {
        this_00 = *(Zone **)(this + 0x30);
        pVVar6 = *(VariableProxy **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)pVVar6) < 0x18) {
          pVVar6 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
        }
        else {
          *(VariableProxy **)(this_00 + 0x10) = pVVar6 + 0x18;
        }
        *(long *)(pVVar6 + 8) = lVar5;
        *(undefined8 *)(pVVar6 + 0x10) = 0;
        *(int *)pVVar6 = iVar2;
        *(undefined4 *)(pVVar6 + 4) = 0x835;
        PrivateNameScopeIterator::AddUnresolvedPrivateName(aPStack_48,pVVar6);
        return uVar9;
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0x80),iVar2,iVar2 + 1,0x103);
      lVar5 = *(long *)(this + 200);
      lVar8 = *(long *)(lVar5 + 0x18);
      if (*(char *)(lVar8 + 0x30) == '\0') {
        *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar8 + 0x30) = 1;
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
        *(undefined1 *)(lVar5 + 0x60) = 0x6d;
        *(undefined1 *)(lVar5 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar5 + 0x100) = 0x6d;
      }
    }
    else {
      ReportUnexpectedToken(this);
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 2;
  }
  return uVar9;
}

