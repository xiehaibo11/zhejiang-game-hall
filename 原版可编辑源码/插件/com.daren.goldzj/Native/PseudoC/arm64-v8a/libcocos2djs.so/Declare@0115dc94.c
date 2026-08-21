
/* v8::internal::VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>
   >::Declare(v8::internal::AstRawString const*, int) */

Variable * __thiscall
v8::internal::VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
Declare(VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *this,
       AstRawString *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Variable *this_00;
  Zone *this_01;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  char local_34 [4];
  
  this_00 = (Variable *)
            Parser::DeclareVariable
                      (*(Parser **)this,param_1,0,this[0x13],
                       this[0x13] ==
                       (VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>
                        )0x2,*(undefined8 *)*(Parser **)this,local_34,param_2,0xffffffff);
  if (local_34[0] != '\0') {
    if (0x7fffff < *(int *)(*(long *)*(ParserBase<v8::internal::Parser> **)this + 0x2c)) {
      ParserBase<v8::internal::Parser>::ReportMessage
                (*(ParserBase<v8::internal::Parser> **)this,0x136);
    }
  }
  puVar10 = *(undefined8 **)(this + 0x18);
  if (puVar10 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(puVar10 + 1);
    uVar6 = *(uint *)((long)puVar10 + 0xc);
    if ((int)uVar6 < (int)uVar3) {
      pvVar9 = (void *)*puVar10;
    }
    else {
      uVar1 = uVar3 << 1 | 1;
      uVar5 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      this_01 = *(Zone **)(*(long *)this + 0xb8);
      pvVar9 = *(void **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)pvVar9) < uVar5) {
        pvVar9 = (void *)Zone::NewExpand(this_01,uVar5);
      }
      else {
        *(ulong *)(this_01 + 0x10) = (long)pvVar9 + uVar5;
      }
      uVar6 = *(uint *)((long)puVar10 + 0xc);
      if (0 < (int)uVar6) {
        MemCopy(pvVar9,(void *)*puVar10,(ulong)uVar6 << 3);
        uVar6 = *(uint *)((long)puVar10 + 0xc);
      }
      *puVar10 = pvVar9;
      *(uint *)(puVar10 + 1) = uVar1;
    }
    *(uint *)((long)puVar10 + 0xc) = uVar6 + 1;
    *(AstRawString **)((long)pvVar9 + (long)(int)uVar6 * 8) = param_1;
  }
  lVar8 = *(long *)this;
  if (this[0x10] ==
      (VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>)0x5) {
    if (*(AstRawString **)(*(long *)(*(long *)(lVar8 + 0x60) + 0x38) + 0x148) == param_1) {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = iVar4 + 1;
      }
      iVar2 = iVar2 >> 1;
      if (param_1[0x1c] != (AstRawString)0x0) {
        iVar2 = iVar4;
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar8 + 0xb0),param_2,iVar2 + param_2,0xd0,0);
      lVar7 = *(long *)(lVar8 + 0x158);
      if (*(char *)(lVar7 + 0x30) == '\0') {
        *(undefined4 *)(lVar8 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar7 + 0x30) = 1;
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
        *(undefined1 *)(lVar8 + 0x1a0) = 0x6d;
        *(undefined1 *)(lVar8 + 0x1f0) = 0x6d;
        *(undefined1 *)(lVar8 + 0x240) = 0x6d;
      }
    }
  }
  else if (0 < *(int *)(*(long *)(lVar8 + 0x10) + 0x18)) {
    Variable::SetMaybeAssigned(this_00);
  }
  return this_00;
}

