
/* v8::internal::Parser::TemplateLiteral::AddTemplateSpan(v8::internal::AstRawString const*,
   v8::internal::AstRawString const*, int, v8::internal::Zone*) */

void __thiscall
v8::internal::Parser::TemplateLiteral::AddTemplateSpan
          (TemplateLiteral *this,AstRawString *param_1,AstRawString *param_2,int param_3,
          Zone *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  void *pvVar5;
  
  uVar2 = *(uint *)(this + 8);
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar4 < (int)uVar2) {
    pvVar5 = *(void **)this;
  }
  else {
    pvVar5 = *(void **)(param_4 + 0x10);
    uVar1 = uVar2 << 1 | 1;
    uVar3 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)pvVar5) < uVar3) {
      pvVar5 = (void *)Zone::NewExpand(param_4,uVar3);
    }
    else {
      *(ulong *)(param_4 + 0x10) = (long)pvVar5 + uVar3;
    }
    uVar4 = *(uint *)(this + 0xc);
    if (0 < (int)uVar4) {
      MemCopy(pvVar5,*(void **)this,(ulong)uVar4 << 3);
      uVar4 = *(uint *)(this + 0xc);
    }
    *(void **)this = pvVar5;
    *(uint *)(this + 8) = uVar1;
  }
  *(uint *)(this + 0xc) = uVar4 + 1;
  *(AstRawString **)((long)pvVar5 + (long)(int)uVar4 * 8) = param_1;
  uVar2 = *(uint *)(this + 0x18);
  uVar4 = *(uint *)(this + 0x1c);
  if ((int)uVar4 < (int)uVar2) {
    pvVar5 = *(void **)(this + 0x10);
  }
  else {
    pvVar5 = *(void **)(param_4 + 0x10);
    uVar1 = uVar2 << 1 | 1;
    uVar3 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)pvVar5) < uVar3) {
      pvVar5 = (void *)Zone::NewExpand(param_4,uVar3);
    }
    else {
      *(ulong *)(param_4 + 0x10) = (long)pvVar5 + uVar3;
    }
    uVar4 = *(uint *)(this + 0x1c);
    if (0 < (int)uVar4) {
      MemCopy(pvVar5,*(void **)(this + 0x10),(ulong)uVar4 << 3);
      uVar4 = *(uint *)(this + 0x1c);
    }
    *(void **)(this + 0x10) = pvVar5;
    *(uint *)(this + 0x18) = uVar1;
  }
  *(uint *)(this + 0x1c) = uVar4 + 1;
  *(AstRawString **)((long)pvVar5 + (long)(int)uVar4 * 8) = param_2;
  return;
}

