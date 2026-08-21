
/* v8::internal::ParserBase<v8::internal::Parser>::ParseV8Intrinsic() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseV8Intrinsic
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  AstRawString *pAVar5;
  ulong uVar6;
  undefined8 uVar7;
  ParserBase<v8::internal::Parser> *local_48;
  ulong local_40;
  ulong uStack_38;
  char local_14 [4];
  
  iVar1 = **(int **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar4 = Scope::AsDeclarationScope();
  cVar2 = *(char *)(lVar4 + 0x85);
  bVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((bVar3 & 0xfc) == 0x5c) {
LAB_01164e08:
    pAVar5 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  else {
    if (bVar3 == 0x61) {
      if (3 < (byte)(cVar2 - 0xdU)) {
LAB_01164f54:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01164e08;
      }
    }
    else if (bVar3 == 0x60) {
      if ((4 < (byte)(cVar2 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
      goto LAB_01164e08;
    }
    else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_01164f54;
    ReportUnexpectedToken(this);
    pAVar5 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
  if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == '\x05') {
    local_48 = this + 200;
    local_40 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
    uStack_38 = local_40;
    ParseArguments(this,&local_48,local_14,0);
    if (local_14[0] == '\0') {
      uVar7 = Parser::NewV8Intrinsic((Parser *)this,pAVar5,(ScopedList *)&local_48,iVar1);
    }
    else {
      ReportMessageAt(this,CONCAT44(*(undefined4 *)**(undefined8 **)(this + 0xf8),iVar1),0xf5);
      uVar7 = *(undefined8 *)(this + 0x88);
    }
    uVar6 = *(long *)(local_48 + 8) - *(long *)local_48 >> 3;
    if (local_40 < uVar6 || local_40 - uVar6 == 0) {
      if (local_40 < uVar6) {
        *(ulong *)(local_48 + 8) = *(long *)local_48 + local_40 * 8;
      }
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_48,local_40 - uVar6);
    }
  }
  else {
    ReportUnexpectedToken(this);
    uVar7 = *(undefined8 *)(this + 0x88);
  }
  return uVar7;
}

