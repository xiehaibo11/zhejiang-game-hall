
/* v8::internal::Parser::DeclarePublicClassMethod(v8::internal::AstRawString const*,
   v8::internal::ClassLiteralProperty*, bool,
   v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*) */

Parser * __thiscall
v8::internal::Parser::DeclarePublicClassMethod
          (Parser *this,AstRawString *param_1,ClassLiteralProperty *param_2,bool param_3,
          ClassInfo *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  Parser *pPVar6;
  long *plVar7;
  
  if (param_3) {
    lVar5 = *(long *)(param_2 + 8);
    if ((*(uint *)(lVar5 + 4) & 0x3f) != 0x26) {
      lVar5 = 0;
    }
    *(long *)(param_4 + 0x28) = lVar5;
    if (param_1 == (AstRawString *)0x0) {
      this = (Parser *)0x0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
    else {
      this = (Parser *)AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),param_1);
      *(Parser **)(lVar5 + 0x20) = this;
    }
  }
  else {
    plVar7 = *(long **)(param_4 + 8);
    uVar4 = *(uint *)(plVar7 + 1);
    iVar2 = *(int *)((long)plVar7 + 0xc);
    if (iVar2 < (int)uVar4) {
      *(int *)((long)plVar7 + 0xc) = iVar2 + 1;
      *(ClassLiteralProperty **)(*plVar7 + (long)iVar2 * 8) = param_2;
    }
    else {
      this = *(Parser **)(this + 0xb8);
      uVar1 = uVar4 << 1 | 1;
      uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pPVar6 = *(Parser **)(this + 0x10);
      if ((ulong)(*(long *)(this + 0x18) - (long)pPVar6) < uVar3) {
        this = (Parser *)Zone::NewExpand((Zone *)this,uVar3);
        pPVar6 = this;
      }
      else {
        *(Parser **)(this + 0x10) = pPVar6 + uVar3;
      }
      uVar4 = *(uint *)((long)plVar7 + 0xc);
      if (0 < (int)uVar4) {
        this = (Parser *)MemCopy(pPVar6,(void *)*plVar7,(ulong)uVar4 << 3);
        uVar4 = *(uint *)((long)plVar7 + 0xc);
      }
      *plVar7 = (long)pPVar6;
      *(uint *)(plVar7 + 1) = uVar1;
      *(uint *)((long)plVar7 + 0xc) = uVar4 + 1;
      *(ClassLiteralProperty **)(pPVar6 + (long)(int)uVar4 * 8) = param_2;
    }
  }
  return this;
}

