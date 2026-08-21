
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseSuperExpression(bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseSuperExpression
          (ParserBase<v8::internal::PreParser> *this,bool param_1)

{
  Zone *pZVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  Scanner *this_00;
  Scope *pSVar7;
  Scope *pSVar8;
  VariableProxy *pVVar9;
  undefined8 uVar10;
  long lVar11;
  
  Scanner::Next(*(Scanner **)(this + 200));
  uVar2 = *(undefined4 *)**(undefined8 **)(this + 200);
  lVar6 = Scope::GetReceiverScope(*(Scope **)this);
  bVar3 = *(byte *)(lVar6 + 0x85);
  if ((0x12 < bVar3) || ((1 << (ulong)(bVar3 & 0x1f) & 0x731f8U) == 0)) {
    this_00 = *(Scanner **)(this + 200);
LAB_0117a4fc:
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),**(undefined4 **)this_00,
               (*(undefined4 **)this_00)[1],0x13d,0);
    lVar6 = *(long *)(this + 200);
    lVar11 = *(long *)(lVar6 + 0x18);
    if (*(char *)(lVar11 + 0x30) == '\0') {
      *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x30) = 1;
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined1 *)(lVar6 + 0x60) = 0x6d;
      *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar6 + 0x100) = 0x6d;
    }
    return 1;
  }
  this_00 = *(Scanner **)(this + 200);
  bVar4 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
  if ((bVar4 & 0xfe) != 2) {
    if (((bVar3 - 5 < 2) && (bVar4 == 5)) && (!param_1)) {
      lVar6 = *(long *)(this + 0x90);
      do {
        if (*(byte *)(lVar6 + 0x10) - 1 < 2) {
          *(undefined1 *)(lVar6 + 0x59) = 1;
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
      pSVar7 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
      pSVar8 = (Scope *)Scope::GetReceiverScope(pSVar7);
      lVar6 = *(long *)(pSVar8 + 0xb0);
      *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x800;
      if (pSVar7 == pSVar8) {
        lVar6 = *(long *)(this + 0x90);
        do {
          if (*(byte *)(lVar6 + 0x10) - 1 < 2) {
            *(undefined1 *)(lVar6 + 0x59) = 1;
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while (lVar6 != 0);
      }
      else {
        *(ushort *)(pSVar7 + 0x83) = *(ushort *)(pSVar7 + 0x83) | 0x800;
        *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x400;
      }
      pZVar1 = *(Zone **)(this + 0x30);
      pSVar7 = *(Scope **)this;
      pVVar9 = *(VariableProxy **)(pZVar1 + 0x10);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x1e0);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pVVar9) < 0x18) {
        pVVar9 = (VariableProxy *)Zone::NewExpand(pZVar1,0x18);
      }
      else {
        *(VariableProxy **)(pZVar1 + 0x10) = pVVar9 + 0x18;
      }
      *(undefined8 *)(pVVar9 + 8) = uVar10;
      *(undefined8 *)(pVVar9 + 0x10) = 0;
      *(undefined4 *)pVVar9 = uVar2;
      *(undefined4 *)(pVVar9 + 4) = 0x835;
      Scope::AddUnresolved(pSVar7,pVVar9);
      pZVar1 = *(Zone **)(this + 0x30);
      pSVar7 = *(Scope **)this;
      pVVar9 = *(VariableProxy **)(pZVar1 + 0x10);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x168);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pVVar9) < 0x18) {
        pVVar9 = (VariableProxy *)Zone::NewExpand(pZVar1,0x18);
      }
      else {
        *(VariableProxy **)(pZVar1 + 0x10) = pVVar9 + 0x18;
      }
      *(undefined8 *)(pVVar9 + 8) = uVar10;
      *(undefined8 *)(pVVar9 + 0x10) = 0;
      *(undefined4 *)pVVar9 = uVar2;
      *(undefined4 *)(pVVar9 + 4) = 0x835;
      Scope::AddUnresolved(pSVar7,pVVar9);
      return 0x82;
    }
    goto LAB_0117a4fc;
  }
  if (bVar4 == 2) {
    cVar5 = Scanner::PeekAhead(this_00);
    this_00 = *(Scanner **)(this + 200);
    if (cVar5 == 'l') {
      Scanner::Next(this_00);
      Scanner::Next(*(Scanner **)(this + 200));
      uVar10 = 0x13a;
      goto LAB_0117a3ec;
    }
    bVar4 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
  }
  if (bVar4 != 4) {
    *(ushort *)(lVar6 + 0x83) = *(ushort *)(lVar6 + 0x83) | 0x20;
    pSVar7 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
    pSVar8 = (Scope *)Scope::GetReceiverScope(pSVar7);
    lVar6 = *(long *)(pSVar8 + 0xb0);
    *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x800;
    if (pSVar7 == pSVar8) {
      lVar6 = *(long *)(this + 0x90);
      do {
        if (*(byte *)(lVar6 + 0x10) - 1 < 2) {
          *(undefined1 *)(lVar6 + 0x59) = 1;
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
    }
    else {
      *(ushort *)(pSVar7 + 0x83) = *(ushort *)(pSVar7 + 0x83) | 0x800;
      *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x400;
    }
    pZVar1 = *(Zone **)(this + 0x30);
    pSVar7 = *(Scope **)this;
    pVVar9 = *(VariableProxy **)(pZVar1 + 0x10);
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x1e0);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pVVar9) < 0x18) {
      pVVar9 = (VariableProxy *)Zone::NewExpand(pZVar1,0x18);
    }
    else {
      *(VariableProxy **)(pZVar1 + 0x10) = pVVar9 + 0x18;
    }
    *(undefined8 *)(pVVar9 + 8) = uVar10;
    *(undefined8 *)(pVVar9 + 0x10) = 0;
    *(undefined4 *)pVVar9 = uVar2;
    *(undefined4 *)(pVVar9 + 4) = 0x835;
    Scope::AddUnresolved(pSVar7,pVVar9);
    return 2;
  }
  Scanner::Next(this_00);
  uVar10 = 0x179;
LAB_0117a3ec:
  ReportMessage(this,uVar10);
  return 1;
}

