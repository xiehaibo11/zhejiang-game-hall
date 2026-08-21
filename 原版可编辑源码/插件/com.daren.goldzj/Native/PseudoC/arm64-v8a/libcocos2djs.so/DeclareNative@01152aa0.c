
/* v8::internal::Parser::DeclareNative(v8::internal::AstRawString const*, int) */

void __thiscall v8::internal::Parser::DeclareNative(Parser *this,AstRawString *param_1,int param_2)

{
  undefined4 uVar1;
  Scope *this_00;
  long lVar2;
  Zone *pZVar3;
  Variable *pVVar4;
  VariableProxy *this_01;
  undefined8 *puVar5;
  Assignment *pAVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auStack_44 [4];
  
  this_00 = *(Scope **)this;
  while( true ) {
    lVar2 = Scope::GetClosureScope(this_00);
    *(ushort *)(lVar2 + 0x83) = *(ushort *)(lVar2 + 0x83) | 4;
    if (*(char *)(lVar2 + 0x80) == '\x04') break;
    this_00 = *(Scope **)(lVar2 + 8);
  }
  pZVar3 = *(Zone **)(this + 0x68);
  this_01 = *(VariableProxy **)(pZVar3 + 0x10);
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_01) < 0x18) {
    this_01 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = this_01 + 0x18;
  }
  *(AstRawString **)(this_01 + 8) = param_1;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined4 *)this_01 = uVar1;
  *(undefined4 *)(this_01 + 4) = 0x835;
  pVVar4 = (Variable *)
           DeclareVariable(this,param_1,0,2,1,*(undefined8 *)this,auStack_44,param_2,
                           *(undefined4 *)(**(long **)(this + 0xf8) + 4));
  VariableProxy::BindTo(this_01,pVVar4);
  pZVar3 = *(Zone **)(this + 0x68);
  uVar8 = *(undefined8 *)(this + 0x18);
  puVar5 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x18) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 3;
  }
  puVar5[1] = param_1;
  puVar5[2] = uVar8;
  *puVar5 = 0x2affffffff;
  pZVar3 = *(Zone **)(this + 0x68);
  pAVar6 = *(Assignment **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar6) < 0x18) {
    pAVar6 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(Assignment **)(pZVar3 + 0x10) = pAVar6 + 0x18;
  }
  Assignment::Assignment(pAVar6,0x18,0x10,this_01,puVar5,0xffffffff);
  pZVar3 = *(Zone **)(this + 0x68);
  piVar7 = *(int **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)piVar7) < 0x10) {
    piVar7 = (int *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(int **)(pZVar3 + 0x10) = piVar7 + 4;
  }
  *piVar7 = param_2;
  piVar7[1] = 9;
  *(Assignment **)(piVar7 + 2) = pAVar6;
  return;
}

