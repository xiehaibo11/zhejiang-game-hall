
/* v8::internal::Parser::AddTemplateExpression(v8::internal::Parser::TemplateLiteral**,
   v8::internal::Expression*) */

void __thiscall
v8::internal::Parser::AddTemplateExpression
          (Parser *this,TemplateLiteral **param_1,Expression *param_2)

{
  uint uVar1;
  uint uVar2;
  Zone *this_00;
  ulong uVar3;
  uint uVar4;
  void *pvVar5;
  TemplateLiteral *pTVar6;
  
  pTVar6 = *param_1;
  uVar2 = *(uint *)(pTVar6 + 0x28);
  uVar4 = *(uint *)(pTVar6 + 0x2c);
  if ((int)uVar4 < (int)uVar2) {
    pvVar5 = *(void **)(pTVar6 + 0x20);
  }
  else {
    this_00 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar3 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar5 = *(void **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pvVar5) < uVar3) {
      pvVar5 = (void *)Zone::NewExpand(this_00,uVar3);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)pvVar5 + uVar3;
    }
    uVar4 = *(uint *)(pTVar6 + 0x2c);
    if (0 < (int)uVar4) {
      MemCopy(pvVar5,*(void **)(pTVar6 + 0x20),(ulong)uVar4 << 3);
      uVar4 = *(uint *)(pTVar6 + 0x2c);
    }
    *(void **)(pTVar6 + 0x20) = pvVar5;
    *(uint *)(pTVar6 + 0x28) = uVar1;
  }
  *(uint *)(pTVar6 + 0x2c) = uVar4 + 1;
  *(Expression **)((long)pvVar5 + (long)(int)uVar4 * 8) = param_2;
  return;
}

