
/* v8::internal::PreParser::DeclareVariableName(v8::internal::AstRawString const*,
   v8::internal::VariableMode, v8::internal::Scope*, bool*, int, v8::internal::VariableKind) */

long * __thiscall
v8::internal::PreParser::DeclareVariableName
          (PreParser *this,AstRawString *param_1,uint param_3,Scope *param_4,undefined8 param_5,
          undefined4 param_6,undefined4 param_7)

{
  long *plVar1;
  undefined4 *puVar2;
  Zone *this_00;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  plVar1 = (long *)Scope::DeclareVariableName(param_4,param_1,param_3,param_5,param_7);
  if (plVar1 != (long *)0x0) {
    if ((Scope *)*plVar1 != param_4) {
      this_00 = *(Zone **)(this + 0x30);
      puVar2 = *(undefined4 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x20) {
        puVar2 = (undefined4 *)Zone::NewExpand(this_00,0x20);
      }
      else {
        *(undefined4 **)(this_00 + 0x10) = puVar2 + 8;
      }
      *(undefined8 *)(puVar2 + 4) = 0;
      *puVar2 = param_6;
      puVar2[1] = 0x40;
      *(Scope **)(puVar2 + 6) = param_4;
      *(long **)(puVar2 + 2) = plVar1;
      lVar3 = *plVar1;
      **(long **)(lVar3 + 0x60) = (long)puVar2;
      *(undefined4 **)(lVar3 + 0x60) = puVar2 + 4;
    }
    return plVar1;
  }
  puVar4 = *(undefined1 **)(this + 0x80);
  *puVar4 = 1;
  puVar4[2] = 1;
  lVar3 = *(long *)(this + 200);
  lVar5 = *(long *)(lVar3 + 0x18);
  if (*(char *)(lVar5 + 0x30) == '\0') {
    *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
    *(undefined1 *)(lVar3 + 0x60) = 0x6d;
    *(undefined1 *)(lVar3 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar3 + 0x100) = 0x6d;
  }
  if (1 < (param_3 & 0xff)) {
    param_4 = (Scope *)Scope::GetDeclarationScope(param_4);
  }
  plVar1 = (long *)VariableMap::Lookup((VariableMap *)(param_4 + 0x20),param_1);
  return plVar1;
}

