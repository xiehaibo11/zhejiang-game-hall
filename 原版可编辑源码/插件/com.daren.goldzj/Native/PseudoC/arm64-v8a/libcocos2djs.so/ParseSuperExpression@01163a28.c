
/* v8::internal::ParserBase<v8::internal::Parser>::ParseSuperExpression(bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseSuperExpression
          (ParserBase<v8::internal::Parser> *this,bool param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  Scanner *this_00;
  Scope *pSVar6;
  Scope *pSVar7;
  undefined8 uVar8;
  
  Scanner::Next(*(Scanner **)(this + 0xf8));
  iVar1 = *(int *)**(undefined8 **)(this + 0xf8);
  lVar5 = Scope::GetReceiverScope(*(Scope **)this);
  bVar2 = *(byte *)(lVar5 + 0x85);
  if ((bVar2 < 0x13) && ((1 << (ulong)(bVar2 & 0x1f) & 0x731f8U) != 0)) {
    this_00 = *(Scanner **)(this + 0xf8);
    bVar3 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
    if ((bVar3 & 0xfe) == 2) {
      if (bVar3 == 2) {
        cVar4 = Scanner::PeekAhead(this_00);
        this_00 = *(Scanner **)(this + 0xf8);
        if (cVar4 != 'l') {
          bVar3 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
          goto LAB_01163b60;
        }
        Scanner::Next(this_00);
        Scanner::Next(*(Scanner **)(this + 0xf8));
        uVar8 = 0x13a;
      }
      else {
LAB_01163b60:
        if (bVar3 != 4) {
          *(ushort *)(lVar5 + 0x83) = *(ushort *)(lVar5 + 0x83) | 0x20;
          pSVar6 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
          pSVar7 = (Scope *)Scope::GetReceiverScope(pSVar6);
          lVar5 = *(long *)(pSVar7 + 0xb0);
          *(ushort *)(lVar5 + 0x28) = *(ushort *)(lVar5 + 0x28) | 0x800;
          if (pSVar6 == pSVar7) {
            lVar5 = *(long *)(this + 0xc0);
            do {
              if (*(byte *)(lVar5 + 0x10) - 1 < 2) {
                *(undefined1 *)(lVar5 + 0x59) = 1;
              }
              lVar5 = *(long *)(lVar5 + 8);
            } while (lVar5 != 0);
          }
          else {
            *(ushort *)(pSVar6 + 0x83) = *(ushort *)(pSVar6 + 0x83) | 0x800;
            *(ushort *)(lVar5 + 0x28) = *(ushort *)(lVar5 + 0x28) | 0x400;
          }
          uVar8 = Parser::NewSuperPropertyReference((Parser *)this,iVar1);
          return uVar8;
        }
        Scanner::Next(this_00);
        uVar8 = 0x179;
      }
      ReportMessage(this,uVar8);
      goto LAB_01163c1c;
    }
    if (((bVar2 - 5 < 2) && (bVar3 == 5)) && (!param_1)) {
      lVar5 = *(long *)(this + 0xc0);
      do {
        if (*(byte *)(lVar5 + 0x10) - 1 < 2) {
          *(undefined1 *)(lVar5 + 0x59) = 1;
        }
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
      pSVar6 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
      pSVar7 = (Scope *)Scope::GetReceiverScope(pSVar6);
      lVar5 = *(long *)(pSVar7 + 0xb0);
      *(ushort *)(lVar5 + 0x28) = *(ushort *)(lVar5 + 0x28) | 0x800;
      if (pSVar6 == pSVar7) {
        lVar5 = *(long *)(this + 0xc0);
        do {
          if (*(byte *)(lVar5 + 0x10) - 1 < 2) {
            *(undefined1 *)(lVar5 + 0x59) = 1;
          }
          lVar5 = *(long *)(lVar5 + 8);
        } while (lVar5 != 0);
      }
      else {
        *(ushort *)(pSVar6 + 0x83) = *(ushort *)(pSVar6 + 0x83) | 0x800;
        *(ushort *)(lVar5 + 0x28) = *(ushort *)(lVar5 + 0x28) | 0x400;
      }
      uVar8 = Parser::NewSuperCallReference((Parser *)this,iVar1);
      return uVar8;
    }
  }
  else {
    this_00 = *(Scanner **)(this + 0xf8);
  }
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0xb0),**(undefined4 **)this_00,
             (*(undefined4 **)this_00)[1],0x13d,0);
  lVar5 = *(long *)(this + 0x158);
  if (*(char *)(lVar5 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
  }
LAB_01163c1c:
  return *(undefined8 *)(this + 0x88);
}

