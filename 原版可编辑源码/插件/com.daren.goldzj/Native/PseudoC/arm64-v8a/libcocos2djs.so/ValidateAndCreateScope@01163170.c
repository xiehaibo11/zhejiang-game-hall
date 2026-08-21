
/* v8::internal::ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>
   >::ValidateAndCreateScope() */

Scope * __thiscall
v8::internal::ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
ValidateAndCreateScope(ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> AVar5;
  bool bVar6;
  Variable *pVVar7;
  Scope *this_00;
  undefined4 uVar8;
  long lVar9;
  VariableProxy *pVVar10;
  long lVar11;
  Zone *this_01;
  long lVar12;
  undefined8 *puVar13;
  VariableProxy *this_02;
  long lVar14;
  VariableProxy *pVVar15;
  char local_64 [4];
  
  puVar13 = *(undefined8 **)this;
  this_01 = (Zone *)puVar13[0x17];
  uVar8 = 9;
  if (this[0x10] == (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>)0x2) {
    uVar8 = 10;
  }
  this_00 = *(Scope **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0xe0) {
    this_00 = (Scope *)Zone::NewExpand(this_01,0xe0);
  }
  else {
    *(Scope **)(this_01 + 0x10) = this_00 + 0xe0;
  }
  DeclarationScope::DeclarationScope((DeclarationScope *)this_00,this_01,*puVar13,2,uVar8);
  *(undefined1 *)(puVar13[2] + 0x3b) = 1;
  if (*(uint *)(this + 0x4c) <= *(uint *)(this + 0x50)) {
    lVar12 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar12 + 0xb0),*(undefined4 *)(this + 0x4c),
               *(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54),0);
    lVar9 = *(long *)(lVar12 + 0x158);
    if (*(char *)(lVar9 + 0x30) == '\0') {
      *(undefined4 *)(lVar12 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar12 + 0x1a0) = 0x6d;
      *(undefined1 *)(lVar12 + 0x1f0) = 0x6d;
      *(undefined1 *)(lVar12 + 0x240) = 0x6d;
      return this_00;
    }
    return this_00;
  }
  if (*(uint *)(this + 0x40) <= *(uint *)(this + 0x44)) {
    lVar12 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar12 + 0xb0),*(undefined4 *)(this + 0x40),
               *(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x34),0);
    lVar9 = *(long *)(lVar12 + 0x158);
    if (*(char *)(lVar9 + 0x30) == '\0') {
      *(undefined4 *)(lVar12 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar12 + 0x1a0) = 0x6d;
      *(undefined1 *)(lVar12 + 0x1f0) = 0x6d;
      *(undefined1 *)(lVar12 + 0x240) = 0x6d;
      AVar5 = this[0x58];
      goto joined_r0x01163228;
    }
  }
  AVar5 = this[0x58];
joined_r0x01163228:
  if (AVar5 == (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>)0x0) {
    *(ushort *)(this_00 + 0x83) = *(ushort *)(this_00 + 0x83) & 0xfffe;
    bVar6 = this[0x58] ==
            (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>)0x0;
  }
  else {
    bVar6 = false;
  }
  lVar9 = *(long *)(this + 0x28);
  uVar8 = 0;
  if (bVar6 == false) {
    uVar8 = 2;
  }
  if (*(long *)(this + 0x20) != lVar9) {
    lVar12 = **(long **)(this + 0x18);
    puVar13 = (undefined8 *)(lVar12 + *(long *)(this + 0x20) * 0x10);
    do {
      this_02 = (VariableProxy *)*puVar13;
      uVar2 = *(undefined4 *)(puVar13 + 1);
      uVar3 = *(uint *)(this_02 + 4);
      pVVar15 = this_02 + 8;
      *(uint *)(this_02 + 4) = uVar3 & 0xffffff7f;
      pVVar10 = pVVar15;
      if ((uVar3 >> 8 & 1) != 0) {
        pVVar10 = (VariableProxy *)(*(long *)pVVar15 + 8);
      }
      pVVar7 = (Variable *)
               Parser::DeclareVariable
                         (*(Parser **)this,*(long *)pVVar10,1,uVar8,bVar6 ^ 1,this_00,local_64,
                          *(undefined4 *)this_02,0xffffffff);
      *(undefined4 *)(pVVar7 + 0x24) = uVar2;
      VariableProxy::BindTo(this_02,pVVar7);
      if (local_64[0] == '\0') {
        if (((byte)this_02[5] & 1) != 0) {
          pVVar15 = (VariableProxy *)(*(long *)pVVar15 + 8);
        }
        lVar14 = *(long *)this;
        iVar4 = *(int *)(*(long *)pVVar15 + 0x10);
        iVar1 = iVar4;
        if (iVar4 < 0) {
          iVar1 = iVar4 + 1;
        }
        iVar1 = iVar1 >> 1;
        if (*(char *)(*(long *)pVVar15 + 0x1c) != '\0') {
          iVar1 = iVar4;
        }
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar14 + 0xb0),*(int *)this_02,
                   iVar1 + *(int *)this_02,0x11d,0);
        lVar11 = *(long *)(lVar14 + 0x158);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(lVar14 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar14 + 0x1a0) = 0x6d;
          *(undefined1 *)(lVar14 + 0x1f0) = 0x6d;
          *(undefined1 *)(lVar14 + 0x240) = 0x6d;
        }
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != (undefined8 *)(lVar12 + lVar9 * 0x10));
  }
  if (this[0x59] != (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>)0x0) {
    *(ushort *)(this_00 + 0x83) = *(ushort *)(this_00 + 0x83) | 0x800;
    lVar9 = Scope::GetReceiverScope(this_00);
    *(ushort *)(*(long *)(lVar9 + 0xb0) + 0x28) =
         *(ushort *)(*(long *)(lVar9 + 0xb0) + 0x28) | 0x400;
  }
  return this_00;
}

