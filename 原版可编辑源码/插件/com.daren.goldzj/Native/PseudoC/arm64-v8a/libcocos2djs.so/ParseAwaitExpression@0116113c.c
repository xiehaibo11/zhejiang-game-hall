
/* v8::internal::ParserBase<v8::internal::Parser>::ParseAwaitExpression() */

Suspend * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseAwaitExpression
          (ParserBase<v8::internal::Parser> *this)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  Expression *pEVar6;
  Zone *pZVar7;
  Suspend *pSVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  SuspendSourceRanges *local_40;
  Suspend *pSStack_38;
  
  plVar13 = *(long **)(this + 0xc0);
  puVar9 = *(undefined8 **)(*(long *)(this + 0xf8) + 8);
  plVar15 = plVar13;
  do {
    if (*(byte *)(plVar15 + 2) == 3) {
      lVar14 = *plVar13;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar14 + 0xb0),*(undefined4 *)puVar9,
                 *(undefined4 *)((long)puVar9 + 4),0x131,0);
      lVar11 = *(long *)(lVar14 + 0x158);
      if (*(char *)(lVar11 + 0x30) == '\0') {
        *(undefined4 *)(lVar14 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar11 + 0x30) = 1;
        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined1 *)(lVar14 + 0x1a0) = 0x6d;
        *(undefined1 *)(lVar14 + 0x1f0) = 0x6d;
        *(undefined1 *)(lVar14 + 0x240) = 0x6d;
      }
      break;
    }
    if (*(char *)((long)plVar13 + 0x11) == '\0') break;
    if (*(byte *)(plVar15 + 2) - 1 < 3) {
      uVar16 = *puVar9;
      *(undefined4 *)((long)plVar15 + 0x54) = 0x131;
      *(undefined8 *)((long)plVar15 + 0x4c) = uVar16;
    }
    plVar15 = (long *)plVar15[1];
  } while (plVar15 != (long *)0x0);
  uVar1 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  piVar10 = (int *)**(undefined8 **)(this + 0xf8);
  iVar2 = (piVar10[1] - *piVar10) + -2;
  if ((char)piVar10[0xe] != 'Z') {
    iVar2 = piVar10[1] - *piVar10;
  }
  if (piVar10[6] >> ((*(byte *)(piVar10 + 7) ^ 1) & 0x1f) != iVar2) {
    ReportUnexpectedToken(this,0x6e);
  }
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(this + 0xa8)) {
    lVar11 = *(long *)(this + 0xf8);
    lVar14 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar14 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar14 + 0x30) = 1;
      *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  bVar3 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
  if (bVar3 - 0x2c < 9) {
    pEVar6 = (Expression *)ParseUnaryOrPrefixExpression(this);
    goto LAB_011612e8;
  }
  lVar11 = Scope::AsDeclarationScope();
  if (*(byte *)(lVar11 + 0x85) - 10 < 5) {
    bVar4 = true;
    if (bVar3 == 0x60) {
LAB_011612d8:
      if (bVar4) {
        pEVar6 = (Expression *)ParseAwaitExpression(this);
        goto LAB_011612e8;
      }
    }
  }
  else if (this[0x135] != (ParserBase<v8::internal::Parser>)0x0) {
    lVar11 = Scope::AsDeclarationScope();
    bVar4 = *(byte *)(lVar11 + 0x85) - 1 < 2;
    if (bVar3 == 0x60) goto LAB_011612d8;
  }
  iVar2 = **(int **)(*(long *)(this + 0xf8) + 8);
  pEVar6 = (Expression *)ParsePrimaryExpression(this);
  lVar11 = *(long *)(*(long *)(this + 0xf8) + 8);
  bVar3 = *(byte *)(lVar11 + 0x38);
  if (bVar3 < 4) {
    pEVar6 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar6);
    lVar11 = *(long *)(*(long *)(this + 0xf8) + 8);
    bVar3 = *(byte *)(lVar11 + 0x38);
  }
  uVar12 = (uint)bVar3;
  if (uVar12 < 6) {
    pEVar6 = (Expression *)ParseLeftHandSideContinuation(this,pEVar6);
    lVar11 = *(long *)(*(long *)(this + 0xf8) + 8);
    uVar12 = (uint)*(byte *)(lVar11 + 0x38);
  }
  if ((uVar12 - 0x33 < 2) && (*(char *)(lVar11 + 0x4c) == '\0')) {
    pEVar6 = (Expression *)ParsePostfixContinuation(this,pEVar6,iVar2);
  }
LAB_011612e8:
  if (pEVar6 == (Expression *)0x0) {
    pZVar7 = *(Zone **)(this + 0x68);
    pEVar6 = *(Expression **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pEVar6) < 0x10) {
      pEVar6 = (Expression *)Zone::NewExpand(pZVar7,0x10);
    }
    else {
      *(Expression **)(pZVar7 + 0x10) = pEVar6 + 0x10;
    }
    *(undefined4 *)pEVar6 = uVar1;
    *(undefined4 *)(pEVar6 + 4) = 0x329;
  }
  pZVar7 = *(Zone **)(this + 0x68);
  pSVar8 = *(Suspend **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pSVar8) < 0x10) {
    pSVar8 = (Suspend *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(Suspend **)(pZVar7 + 0x10) = pSVar8 + 0x10;
  }
  *(Expression **)(pSVar8 + 8) = pEVar6;
  *(undefined4 *)pSVar8 = uVar1;
  *(undefined4 *)(pSVar8 + 4) = 0x19;
  *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
  lVar11 = (*(long **)(this + 0xf8))[1];
  if (*(char *)(lVar11 + 0x38) != '\f') {
    lVar11 = **(long **)(this + 0xf8);
  }
  this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_00 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar7 = *(Zone **)(this + 0xb8);
    uVar1 = *(undefined4 *)(lVar11 + 4);
    local_40 = *(SuspendSourceRanges **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)local_40) < 0x10) {
      local_40 = (SuspendSourceRanges *)Zone::NewExpand(pZVar7,0x10);
    }
    else {
      *(SuspendSourceRanges **)(pZVar7 + 0x10) = local_40 + 0x10;
    }
    *(undefined4 *)(local_40 + 8) = uVar1;
    *(undefined ***)local_40 = &PTR__AstNodeSourceRanges_01cb51a0;
    pSStack_38 = pSVar8;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::__emplace_unique_impl<v8::internal::Suspend*&,v8::internal::SuspendSourceRanges*&>
              (this_00,&pSStack_38,&local_40);
  }
  return pSVar8;
}

