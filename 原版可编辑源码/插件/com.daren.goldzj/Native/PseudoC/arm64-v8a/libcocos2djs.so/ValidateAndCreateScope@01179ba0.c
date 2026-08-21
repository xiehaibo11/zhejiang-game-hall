
/* v8::internal::ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >::ValidateAndCreateScope() */

Scope * __thiscall
v8::internal::ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
ValidateAndCreateScope
          (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> AVar4;
  long lVar5;
  Scope *this_00;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  Zone *this_01;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  char local_64 [4];
  
  puVar12 = *(undefined8 **)this;
  this_01 = (Zone *)puVar12[0x11];
  uVar6 = 9;
  if (this[0x10] == (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>)0x2)
  {
    uVar6 = 10;
  }
  this_00 = *(Scope **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0xe0) {
    this_00 = (Scope *)Zone::NewExpand(this_01,0xe0);
  }
  else {
    *(Scope **)(this_01 + 0x10) = this_00 + 0xe0;
  }
  DeclarationScope::DeclarationScope((DeclarationScope *)this_00,this_01,*puVar12,2,uVar6);
  *(undefined1 *)(puVar12[2] + 0x3b) = 1;
  if (*(uint *)(this + 0x4c) <= *(uint *)(this + 0x50)) {
    lVar11 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar11 + 0x80),*(undefined4 *)(this + 0x4c),
               *(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54),0);
    lVar11 = *(long *)(lVar11 + 200);
    lVar8 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar8 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
      return this_00;
    }
    return this_00;
  }
  if (*(uint *)(this + 0x40) <= *(uint *)(this + 0x44)) {
    lVar11 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar11 + 0x80),*(undefined4 *)(this + 0x40),
               *(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x34),0);
    lVar11 = *(long *)(lVar11 + 200);
    lVar8 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar8 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
      AVar4 = this[0x58];
      goto joined_r0x01179c5c;
    }
  }
  AVar4 = this[0x58];
joined_r0x01179c5c:
  if (AVar4 == (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>)0x0) {
    *(ushort *)(this_00 + 0x83) = *(ushort *)(this_00 + 0x83) & 0xfffe;
    iVar10 = (uint)(byte)this[0x58] << 1;
  }
  else {
    iVar10 = 2;
  }
  lVar11 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x20) != lVar11) {
    lVar8 = **(long **)(this + 0x18);
    puVar12 = (undefined8 *)(lVar8 + *(long *)(this + 0x20) * 0x10);
    do {
      piVar14 = (int *)*puVar12;
      uVar6 = *(undefined4 *)(puVar12 + 1);
      uVar2 = piVar14[1];
      plVar13 = (long *)(piVar14 + 2);
      piVar14[1] = uVar2 & 0xffffff7f;
      plVar7 = plVar13;
      if ((uVar2 >> 8 & 1) != 0) {
        plVar7 = (long *)(*plVar13 + 8);
      }
      lVar5 = PreParser::DeclareVariableName
                        (*(PreParser **)this,*plVar7,iVar10,this_00,local_64,*piVar14,1);
      *(undefined4 *)(lVar5 + 0x24) = uVar6;
      if (local_64[0] == '\0') {
        if ((*(byte *)((long)piVar14 + 5) & 1) != 0) {
          plVar13 = (long *)(*plVar13 + 8);
        }
        lVar5 = *(long *)this;
        iVar3 = *(int *)(*plVar13 + 0x10);
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 1;
        }
        iVar1 = iVar1 >> 1;
        if (*(char *)(*plVar13 + 0x1c) != '\0') {
          iVar1 = iVar3;
        }
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar5 + 0x80),*piVar14,iVar1 + *piVar14,
                   0x11d,0);
        lVar5 = *(long *)(lVar5 + 200);
        lVar9 = *(long *)(lVar5 + 0x18);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined1 *)(lVar5 + 0x60) = 0x6d;
          *(undefined1 *)(lVar5 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar5 + 0x100) = 0x6d;
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != (undefined8 *)(lVar8 + lVar11 * 0x10));
  }
  if (this[0x59] != (ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>)0x0)
  {
    *(ushort *)(this_00 + 0x83) = *(ushort *)(this_00 + 0x83) | 0x800;
    lVar11 = Scope::GetReceiverScope(this_00);
    *(ushort *)(*(long *)(lVar11 + 0xb0) + 0x28) =
         *(ushort *)(*(long *)(lVar11 + 0xb0) + 0x28) | 0x400;
  }
  return this_00;
}

