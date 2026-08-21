
/* v8::internal::ParserBase<v8::internal::Parser>::CheckPossibleEvalCall(v8::internal::Expression*,
   v8::internal::Scope*) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::CheckPossibleEvalCall
          (ParserBase<v8::internal::Parser> *this,Expression *param_1,Scope *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  Expression *pEVar4;
  
  uVar3 = 1;
  if ((param_1 != (Expression *)0x0) && ((*(uint *)(param_1 + 4) & 0x43f) == 0x35)) {
    pEVar4 = param_1 + 8;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      pEVar4 = (Expression *)(*(long *)pEVar4 + 8);
    }
    uVar3 = 1;
    if (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *(long *)pEVar4) {
      *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
      *(ushort *)(param_2 + 0x81) = *(ushort *)(param_2 + 0x81) | 2;
      lVar2 = Scope::GetDeclarationScope(param_2);
      uVar1 = *(ushort *)(lVar2 + 0x81);
      *(ushort *)(lVar2 + 0x81) = uVar1 | 2;
      if ((((uVar1 & 1) == 0) && (*(char *)(lVar2 + 0x80) != '\x01')) &&
         (*(char *)(lVar2 + 0x80) != '\x04')) {
        *(ushort *)(lVar2 + 0x81) = uVar1 | 6;
        *(undefined4 *)(lVar2 + 0x7c) = 3;
      }
      lVar2 = *(long *)(param_2 + 8);
      *(ushort *)(param_2 + 0x81) = *(ushort *)(param_2 + 0x81) | 0x40;
      uVar3 = 0;
      if (lVar2 != 0) {
        do {
          if ((*(ushort *)(lVar2 + 0x81) >> 6 & 1) != 0) {
            return 0;
          }
          *(ushort *)(lVar2 + 0x81) = *(ushort *)(lVar2 + 0x81) | 0x40;
          lVar2 = *(long *)(lVar2 + 8);
        } while (lVar2 != 0);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

