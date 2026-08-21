
/* v8::internal::ParserBase<v8::internal::PreParser>::ParsePostfixContinuation(v8::internal::PreParserExpression,
   int) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParsePostfixContinuation
          (ParserBase<v8::internal::PreParser> *this,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if ((param_2 & 7) == 2) {
    if ((param_2 >> 4 & 0xf) - 1 < 4) goto LAB_0117dc30;
  }
  else if (((param_2 & 7) == 3) &&
          (((param_2 & 0xfe0) != 0x20 || ((*(ushort *)(*(long *)this + 0x81) & 1) == 0))))
  goto LAB_0117dc30;
  param_2 = RewriteInvalidReferenceExpression
                      (this,param_2,param_3,*(undefined4 *)(**(long **)(this + 200) + 4),0xff);
LAB_0117dc30:
  if (((param_2 & 7) == 3) && (lVar2 = *(long *)(this + 0x90), *(byte *)(lVar2 + 0x10) < 3)) {
    iVar3 = (int)*(undefined8 *)(lVar2 + 0x28) - (int)*(long *)(lVar2 + 0x20);
    if (iVar3 != 0) {
      lVar2 = *(long *)(**(long **)(lVar2 + 0x18) +
                       (*(long *)(lVar2 + 0x20) + (long)(iVar3 + -1)) * 0x10);
      uVar1 = *(uint *)(lVar2 + 4);
      *(uint *)(lVar2 + 4) = uVar1 | 0x80;
      if ((uVar1 >> 8 & 1) != 0) {
        Variable::SetMaybeAssigned(*(Variable **)(lVar2 + 8));
      }
    }
  }
  Scanner::Next(*(Scanner **)(this + 200));
  return 2;
}

