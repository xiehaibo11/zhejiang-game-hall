
void FUN_010abd60(ulong *param_1,uint param_2)

{
  ushort uVar1;
  CanonicalHandleScope *pCVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *this;
  ulong uVar5;
  uint local_50;
  uint local_4c;
  ulong local_48;
  
  this = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar2 = *(CanonicalHandleScope **)((ulong)this | 0x95b8);
  uVar5 = (ulong)this | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar2 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar2,uVar5);
    uVar5 = *puVar3;
  }
  if (param_2 < *(uint *)(uVar5 + 7)) {
    puVar3 = (ulong *)v8::internal::String::Flatten(this,puVar3,0);
    local_48 = *puVar3;
    local_50 = (uint)*(ushort *)
                      ((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)) + 7);
    local_4c = param_2;
    uVar1 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_50,&local_48,&local_4c);
    v8::internal::Factory::LookupSingleCharacterStringFromCode((Factory *)this,uVar1);
  }
  else {
    uVar4 = *param_1 & 0xffffffff00000000;
    pCVar2 = *(CanonicalHandleScope **)((ulong)this | 0x95b8);
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*param_1 + 7)) +
                              (long)(int)((param_2 - *(uint *)(uVar5 + 7)) * 4) + 7);
    if (pCVar2 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(this + 0x95a0);
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      v8::internal::CanonicalHandleScope::Lookup(pCVar2,uVar4);
    }
  }
  return;
}

