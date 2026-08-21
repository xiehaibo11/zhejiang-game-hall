
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseStandardForLoopWithLexicalDeclarations(int,
   v8::internal::PreParserStatement, v8::internal::ParserBase<v8::internal::PreParser>::ForInfo*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

undefined4
v8::internal::ParserBase<v8::internal::PreParser>::ParseStandardForLoopWithLexicalDeclarations
          (PreParser *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,ZoneList *param_5,
          PreParserExpression *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  Zone *this;
  Scope *this_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_58 [2];
  undefined4 local_38;
  undefined1 auStack_34 [4];
  
  this = *(Zone **)(param_1 + 0x88);
  uVar3 = *(undefined8 *)param_1;
  this_00 = *(Scope **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)this_00) < 0x88) {
    this_00 = (Scope *)Zone::NewExpand(this,0x88);
  }
  else {
    *(Scope **)(this + 0x10) = this_00 + 0x88;
  }
  Scope::Scope(this_00,*(undefined8 *)(param_1 + 0x88),uVar3,6);
  local_38 = 0;
  local_58[0] = 0;
  uVar5 = 0;
  lVar4 = *(long *)param_1;
  *(Scope **)param_1 = this_00;
  *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)**(undefined8 **)(param_1 + 200);
  uVar1 = ParseStandardForLoop
                    ((int)param_1,(ZoneList *)(ulong)param_2,param_5,param_6,
                     (PreParserStatement *)&local_38,(PreParserStatement *)local_58);
  if (*(char *)((*(long **)(param_1 + 200))[3] + 0x30) == '\0') {
    *(undefined4 *)(*(long *)param_1 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
    *(long *)param_1 = lVar4;
    *(undefined4 *)(lVar4 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
    if ((*(int *)((long)param_4 + 0xc) < 1) || (*(char *)(*(long *)(param_1 + 0x10) + 0x3b) == '\0')
       ) {
      Scope::FinalizeBlockScope(this_00);
      lVar4 = Scope::FinalizeBlockScope(*(Scope **)param_1);
      if (lVar4 != 0) {
        uVar1 = 2;
      }
    }
    else {
      *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 0x10;
      if (*(int *)((long)param_4 + 0xc) != 0) {
        lVar4 = (long)*(int *)((long)param_4 + 0xc) << 3;
        puVar2 = (undefined8 *)*param_4;
        do {
          PreParser::DeclareVariableName
                    (param_1,*puVar2,*(undefined1 *)(param_4 + 3),this_00,auStack_34,0xffffffff,0,
                     param_8,uVar5);
          lVar4 = lVar4 + -8;
          puVar2 = puVar2 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  else {
    uVar1 = 0;
    *(long *)param_1 = lVar4;
  }
  return uVar1;
}

