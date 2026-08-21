
/* v8::internal::ParserBase<v8::internal::Parser>::ParseYieldExpression() */

Suspend * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseYieldExpression
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  Zone *pZVar6;
  undefined4 *puVar7;
  Suspend *pSVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ParserBase<v8::internal::Parser> *pPVar16;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *p_Var17;
  SuspendSourceRanges *local_40;
  Suspend *pSStack_38;
  
  plVar12 = *(long **)(this + 0xc0);
  puVar9 = *(undefined8 **)(*(long *)(this + 0xf8) + 8);
  uVar2 = *(undefined4 *)puVar9;
  plVar14 = plVar12;
  do {
    if (*(byte *)(plVar14 + 2) == 3) {
      lVar13 = *plVar12;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar13 + 0xb0),*(undefined4 *)puVar9,
                 *(undefined4 *)((long)puVar9 + 4),0x151,0);
      lVar11 = *(long *)(lVar13 + 0x158);
      if (*(char *)(lVar11 + 0x30) == '\0') {
        *(undefined4 *)(lVar13 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar11 + 0x30) = 1;
        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined1 *)(lVar13 + 0x1a0) = 0x6d;
        *(undefined1 *)(lVar13 + 0x1f0) = 0x6d;
        *(undefined1 *)(lVar13 + 0x240) = 0x6d;
      }
      break;
    }
    if (*(char *)((long)plVar12 + 0x11) == '\0') break;
    if (*(byte *)(plVar14 + 2) - 1 < 3) {
      uVar15 = *puVar9;
      *(undefined4 *)((long)plVar14 + 0x54) = 0x151;
      *(undefined8 *)((long)plVar14 + 0x4c) = uVar15;
    }
    plVar14 = (long *)plVar14[1];
  } while (plVar14 != (long *)0x0);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  piVar10 = (int *)**(undefined8 **)(this + 0xf8);
  iVar1 = (piVar10[1] - *piVar10) + -2;
  if ((char)piVar10[0xe] != 'Z') {
    iVar1 = piVar10[1] - *piVar10;
  }
  if (piVar10[6] >> ((*(byte *)(piVar10 + 7) ^ 1) & 0x1f) != iVar1) {
    ReportUnexpectedToken(this,0x6e);
  }
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(this + 0xa8)) {
    lVar11 = *(long *)(this + 0xf8);
    lVar13 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  lVar11 = *(long *)(*(Scanner **)(this + 0xf8) + 8);
  if (*(char *)(lVar11 + 0x4c) == '\0') {
    bVar3 = *(byte *)(lVar11 + 0x38);
    if (bVar3 == 0x28) {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      bVar4 = true;
      bVar3 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      if (0x3e < bVar3) goto LAB_0115fd48;
LAB_0115fb5c:
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x40000000400072c0U) == 0) goto LAB_0115fd48;
      if (!bVar4) goto LAB_0115fc68;
      puVar7 = (undefined4 *)ParseAssignmentExpressionCoverGrammar(this);
    }
    else {
      bVar4 = false;
      if (bVar3 < 0x3f) goto LAB_0115fb5c;
LAB_0115fd48:
      puVar7 = (undefined4 *)ParseAssignmentExpressionCoverGrammar(this);
      if (!bVar4) {
        if (puVar7 == (undefined4 *)0x0) goto LAB_0115fc68;
        goto LAB_0115fc8c;
      }
    }
    pZVar6 = *(Zone **)(this + 0x68);
    pSVar8 = *(Suspend **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pSVar8) < 0x10) {
      pSVar8 = (Suspend *)Zone::NewExpand(pZVar6,0x10);
    }
    else {
      *(Suspend **)(pZVar6 + 0x10) = pSVar8 + 0x10;
    }
    *(undefined4 **)(pSVar8 + 8) = puVar7;
    *(undefined4 *)pSVar8 = uVar2;
    *(undefined4 *)(pSVar8 + 4) = 0xb7;
    lVar11 = (*(long **)(this + 0xf8))[1];
    if (*(char *)(lVar11 + 0x38) != '\f') {
      lVar11 = **(long **)(this + 0xf8);
    }
    p_Var17 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                **)(this + 0x2f8);
    if (p_Var17 !=
        (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
         *)0x0) {
      pZVar6 = *(Zone **)(this + 0xb8);
      uVar2 = *(undefined4 *)(lVar11 + 4);
      local_40 = *(SuspendSourceRanges **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)local_40) < 0x10) {
        local_40 = (SuspendSourceRanges *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(SuspendSourceRanges **)(pZVar6 + 0x10) = local_40 + 0x10;
      }
      *(undefined4 *)(local_40 + 8) = uVar2;
      *(undefined ***)local_40 = &PTR__AstNodeSourceRanges_01cb51a0;
      pSStack_38 = pSVar8;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::__emplace_unique_impl<v8::internal::Suspend*&,v8::internal::SuspendSourceRanges*&>
                (p_Var17,&pSStack_38,&local_40);
    }
    pPVar16 = this + 0x10;
    *(int *)(*(long *)pPVar16 + 0x14) = *(int *)(*(long *)pPVar16 + 0x14) + 1;
    lVar11 = Scope::AsDeclarationScope();
    if (1 < *(byte *)(lVar11 + 0x85) - 0xd) {
      return pSVar8;
    }
    *(int *)(*(long *)pPVar16 + 0x14) = *(int *)(*(long *)pPVar16 + 0x14) + 1;
    *(int *)(*(long *)pPVar16 + 0x14) = *(int *)(*(long *)pPVar16 + 0x14) + 1;
  }
  else {
LAB_0115fc68:
    pZVar6 = *(Zone **)(this + 0x68);
    puVar7 = *(undefined4 **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar7) < 0x10) {
      puVar7 = (undefined4 *)Zone::NewExpand(pZVar6,0x10);
    }
    else {
      *(undefined4 **)(pZVar6 + 0x10) = puVar7 + 4;
    }
    *puVar7 = uVar2;
    puVar7[1] = 0x329;
LAB_0115fc8c:
    pZVar6 = *(Zone **)(this + 0x68);
    pSVar8 = *(Suspend **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pSVar8) < 0x10) {
      pSVar8 = (Suspend *)Zone::NewExpand(pZVar6,0x10);
    }
    else {
      *(Suspend **)(pZVar6 + 0x10) = pSVar8 + 0x10;
    }
    *(undefined4 **)(pSVar8 + 8) = puVar7;
    *(undefined4 *)pSVar8 = uVar2;
    *(undefined4 *)(pSVar8 + 4) = 0x36;
    lVar11 = (*(long **)(this + 0xf8))[1];
    if (*(char *)(lVar11 + 0x38) != '\f') {
      lVar11 = **(long **)(this + 0xf8);
    }
    p_Var17 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                **)(this + 0x2f8);
    if (p_Var17 !=
        (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
         *)0x0) {
      pZVar6 = *(Zone **)(this + 0xb8);
      uVar2 = *(undefined4 *)(lVar11 + 4);
      local_40 = *(SuspendSourceRanges **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)local_40) < 0x10) {
        local_40 = (SuspendSourceRanges *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(SuspendSourceRanges **)(pZVar6 + 0x10) = local_40 + 0x10;
      }
      *(undefined4 *)(local_40 + 8) = uVar2;
      *(undefined ***)local_40 = &PTR__AstNodeSourceRanges_01cb51a0;
      pSStack_38 = pSVar8;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::__emplace_unique_impl<v8::internal::Suspend*&,v8::internal::SuspendSourceRanges*&>
                (p_Var17,&pSStack_38,&local_40);
    }
  }
  *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
  return pSVar8;
}

