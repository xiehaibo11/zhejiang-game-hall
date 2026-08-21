
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseScopedStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseScopedStatement
          (ParserBase<v8::internal::PreParser> *this,ZoneList *param_1)

{
  undefined4 uVar1;
  Scope *pSVar2;
  Zone *this_00;
  undefined8 uVar3;
  
  if (((*(byte *)(*(long *)this + 0x81) & 1) == 0) &&
     (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == 'I')) {
    this_00 = *(Zone **)(this + 0x88);
    pSVar2 = *(Scope **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pSVar2) < 0x88) {
      pSVar2 = (Scope *)Zone::NewExpand(this_00,0x88);
    }
    else {
      *(Scope **)(this_00 + 0x10) = pSVar2 + 0x88;
    }
    Scope::Scope(pSVar2,this_00,*(undefined8 *)this,6);
    uVar3 = *(undefined8 *)this;
    *(Scope **)this = pSVar2;
    *(undefined4 *)(pSVar2 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
    ParseFunctionDeclaration(this);
    *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
    Scope::FinalizeBlockScope(*(Scope **)this);
    uVar1 = 2;
    *(undefined8 *)this = uVar3;
  }
  else {
    uVar1 = ParseStatement(this,param_1,0,1);
  }
  return uVar1;
}

