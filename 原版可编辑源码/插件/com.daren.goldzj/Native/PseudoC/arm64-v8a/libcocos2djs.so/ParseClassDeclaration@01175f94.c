
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseClassDeclaration(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseClassDeclaration
          (ParserBase<v8::internal::PreParser> *this,ZoneList *param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ParserBase<v8::internal::PreParser> *pPVar6;
  byte bVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_9c [4];
  ParserBase<v8::internal::PreParser> *local_98;
  long lStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  ParserBase<v8::internal::PreParser> *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar2 = *(undefined4 *)**(undefined8 **)(this + 200);
  cVar3 = *(char *)((*(undefined8 **)(this + 200))[1] + 0x38);
  if (param_2) {
    lVar13 = 0;
    if (cVar3 == '\b') {
      uVar8 = 0;
      goto LAB_011760e8;
    }
    uVar8 = 0;
    if (cVar3 == 'j') goto LAB_011760e8;
  }
  lVar13 = Scope::AsDeclarationScope();
  cVar4 = *(char *)(lVar13 + 0x85);
  bVar7 = Scanner::Next(*(Scanner **)(this + 200));
  if ((bVar7 & 0xfc) == 0x5c) {
LAB_0117600c:
    lVar13 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar9 = (int *)**(undefined8 **)(this + 200);
    cVar4 = (char)piVar9[0xe];
    if (cVar4 == 'l') {
      uVar8 = 8;
    }
    else if (cVar4 == '`') {
      uVar8 = 5;
    }
    else if (cVar4 == '_') {
      uVar8 = 6;
    }
    else {
      lVar10 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar10 + 0xb0) == lVar13) {
        uVar8 = 4;
      }
      else if (*(long *)(lVar10 + 0x158) == lVar13) {
        uVar8 = 7;
      }
      else {
        iVar1 = (piVar9[1] - *piVar9) + -2;
        if (cVar4 != 'Z') {
          iVar1 = piVar9[1] - *piVar9;
        }
        if (piVar9[6] >> ((*(byte *)(piVar9 + 7) ^ 1) & 0x1f) == iVar1) {
          if (*(long *)(lVar10 + 0x118) == lVar13) {
            uVar8 = 2;
          }
          else {
            uVar8 = 3;
            if (*(long *)(lVar10 + 0x70) != lVar13) {
              uVar8 = 1;
            }
          }
        }
        else {
          uVar8 = 1;
        }
      }
    }
  }
  else {
    if (bVar7 == 0x61) {
      if (3 < (byte)(cVar4 - 0xdU)) {
LAB_011762d4:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0117600c;
      }
    }
    else if (bVar7 == 0x60) {
      if ((4 < (byte)(cVar4 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_0117600c;
    }
    else if ((byte)(bVar7 + 0x9f) < 5) goto LAB_011762d4;
    ReportUnexpectedToken(this);
    uVar8 = 1;
    lVar13 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
  }
LAB_011760e8:
  lStack_90 = *(long *)(this + 0x90);
  local_88 = 0;
  if (lStack_90 == 0) {
    local_86 = 0;
    local_87 = 0;
  }
  else {
    local_87 = *(undefined1 *)(lStack_90 + 0x11);
    local_86 = *(undefined1 *)(lStack_90 + 0x12);
  }
  local_80 = this + 0xb0;
  *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_98;
  local_78 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
  local_50 = 0;
  if (lStack_90 != 0) {
    if (*(byte *)(lStack_90 + 0x10) < 3) {
      local_50 = *(undefined1 *)(lStack_90 + 0x48);
    }
    else {
      local_50 = 0;
    }
  }
  local_68 = 0;
  uStack_58 = 0xffffffff;
  local_60 = 0xffffffff;
  local_98 = this;
  local_70 = local_78;
  ParseClassLiteral(this,lVar13,uVar8,*(undefined8 *)**(undefined8 **)(this + 200),
                    (byte)(cVar3 + 0x9fU) < 5,uVar2);
  pPVar6 = local_98;
  if ((uint)local_60 <= local_60._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
               local_60._4_4_,local_68 & 0xffffffff,0);
    lVar10 = *(long *)(pPVar6 + 200);
    lVar11 = *(long *)(lVar10 + 0x18);
    if (*(char *)(lVar11 + 0x30) == '\0') {
      *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x30) = 1;
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined1 *)(lVar10 + 0x60) = 0x6d;
      *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar10 + 0x100) = 0x6d;
    }
  }
  PreParser::DeclareVariableName
            ((PreParser *)this,lVar13,0,*(undefined8 *)this,auStack_9c,0xffffffff,0);
  uVar12 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
  if (local_78 < uVar12 || local_78 - uVar12 == 0) {
    if (local_78 < uVar12) {
      *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_80,local_78 - uVar12);
  }
  local_70 = local_78;
  *(long *)(local_98 + 0x90) = lStack_90;
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

