
Isolate * FUN_010926dc(ulong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  Isolate *this;
  ulong uVar5;
  
  this = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar5 = (ulong)this | (ulong)*(uint *)(*param_1 + 7);
  if (*(CanonicalHandleScope **)((ulong)this | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)this | 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  iVar2 = (*(int *)(*param_1 + 0xb) >> 1) + -1;
  uVar1 = 7;
  if (param_2 != 0) {
    uVar1 = iVar2 * 8 | 7;
  }
  if (*(long *)(uVar5 + (long)(int)uVar1) == -0x8000000080001) {
    pIVar4 = this + 0xa8;
  }
  else {
    pIVar4 = (Isolate *)
             v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                       ((Factory *)this,*(double *)((long)(int)uVar1 + uVar5));
  }
  if (param_2 == 0) {
    FUN_010925b0(this,param_1,puVar3,0,1,iVar2);
  }
  FUN_01091eb8(this,param_1,iVar2,puVar3);
  if (((*(ulong *)pIVar4 & 1) != 0) && ((int)*(ulong *)pIVar4 == *(int *)(this + 0xa8))) {
    pIVar4 = this + 0xa0;
  }
  return pIVar4;
}

