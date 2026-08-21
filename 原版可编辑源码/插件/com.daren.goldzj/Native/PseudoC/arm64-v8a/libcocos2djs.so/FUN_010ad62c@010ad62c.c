
uint FUN_010ad62c(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  Isolate *this;
  ulong uVar6;
  int iVar7;
  uint local_58;
  int local_54;
  ulong local_38;
  
  this = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar6 = (ulong)this | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)((ulong)this | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)this | 0x95b8),uVar6);
  }
  puVar4 = (ulong *)v8::internal::String::Flatten(this,puVar4,0);
  uVar6 = *puVar4;
  iVar1 = *(int *)(uVar6 + 7);
  if (iVar1 == 0) {
LAB_010ad734:
    uVar3 = FUN_010a3e2c(param_2,param_3,param_4);
  }
  else {
    iVar7 = 0;
    while( true ) {
      local_58 = (uint)*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7);
      local_54 = iVar7;
      local_38 = uVar6;
      uVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_58,&local_38,&local_54);
      uVar5 = v8::internal::Factory::LookupSingleCharacterStringFromCode((Factory *)this,uVar2);
      uVar6 = v8::internal::KeyAccumulator::AddKey(param_3,uVar5,param_4);
      if ((uVar6 & 1) == 0) break;
      if (iVar1 + -1 == iVar7) goto LAB_010ad734;
      uVar6 = *puVar4;
      iVar7 = iVar7 + 1;
    }
    uVar3 = 0;
  }
  return uVar3 & 1;
}

