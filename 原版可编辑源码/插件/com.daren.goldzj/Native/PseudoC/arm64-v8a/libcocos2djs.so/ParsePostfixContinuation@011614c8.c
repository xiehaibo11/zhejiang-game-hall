
/* v8::internal::ParserBase<v8::internal::Parser>::ParsePostfixContinuation(v8::internal::Expression*,
   int) */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParsePostfixContinuation
          (ParserBase<v8::internal::Parser> *this,Expression *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  Expression *pEVar5;
  Zone *this_00;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((param_1 != (Expression *)0x0) && ((uVar2 & 0x43f) == 0x35)) {
    if ((*(byte *)(*(long *)this + 0x81) & 1) == 0) goto joined_r0x01161638;
    pEVar5 = param_1 + 8;
    if ((uVar2 >> 8 & 1) != 0) {
      pEVar5 = (Expression *)(*(long *)pEVar5 + 8);
    }
    if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) != *(long *)pEVar5) &&
       (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) != *(long *)pEVar5))
    goto joined_r0x01161638;
  }
  if ((uVar2 & 0x3f) != 0x2c) {
    param_1 = (Expression *)
              RewriteInvalidReferenceExpression
                        (this,param_1,param_2,*(undefined4 *)(**(long **)(this + 0xf8) + 4),0xff);
    uVar2 = *(uint *)(param_1 + 4);
  }
joined_r0x01161638:
  if (((param_1 != (Expression *)0x0) && ((uVar2 & 0x43f) == 0x35)) &&
     (lVar4 = *(long *)(this + 0xc0), *(byte *)(lVar4 + 0x10) < 3)) {
    iVar6 = (int)*(undefined8 *)(lVar4 + 0x28) - (int)*(long *)(lVar4 + 0x20);
    if (iVar6 != 0) {
      lVar4 = *(long *)(**(long **)(lVar4 + 0x18) +
                       (*(long *)(lVar4 + 0x20) + (long)(iVar6 + -1)) * 0x10);
      uVar2 = *(uint *)(lVar4 + 4);
      *(uint *)(lVar4 + 4) = uVar2 | 0x80;
      if ((uVar2 >> 8 & 1) != 0) {
        Variable::SetMaybeAssigned(*(Variable **)(lVar4 + 8));
      }
    }
  }
  uVar2 = Scanner::Next(*(Scanner **)(this + 0xf8));
  this_00 = *(Zone **)(this + 0x68);
  puVar3 = *(undefined4 **)(this_00 + 0x10);
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x10) {
    puVar3 = (undefined4 *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puVar3 + 4;
  }
  *(Expression **)(puVar3 + 2) = param_1;
  *puVar3 = uVar1;
  puVar3[1] = (uVar2 & 0xff) << 8 | 0x23;
  return puVar3;
}

