
/* v8::internal::RegExpImpl::IrregexpExecRaw(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, int,
   int*, int) */

undefined8
v8::internal::RegExpImpl::IrregexpExecRaw
          (Isolate *param_1,ulong *param_2,ulong *param_3,undefined4 param_4,void *param_5,
          undefined4 param_6)

{
  void *pvVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  ulong local_68;
  
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_1 + 0x95a0);
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  uVar10 = *param_3;
  while( true ) {
    uVar4 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7);
    if ((uVar4 & 9) == 0) break;
    if ((uVar4 & 9) == 8) {
      bVar11 = true;
      goto LAB_011bc874;
    }
    uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
  }
  bVar11 = false;
LAB_011bc874:
  local_68 = *param_2;
  uVar10 = JSRegExp::ShouldProduceBytecode((JSRegExp *)&local_68);
  if ((uVar10 & 1) == 0) {
LAB_011bca14:
    local_68 = *param_2;
    iVar6 = JSRegExp::Code((JSRegExp *)&local_68,bVar11);
    local_68 = *param_2;
    uVar10 = JSRegExp::Bytecode((JSRegExp *)&local_68,bVar11);
    local_68 = *param_2;
    uVar9 = JSRegExp::MarkedForTierUp((JSRegExp *)&local_68);
    if (((uVar10 & 1) == 0) || ((uVar9 & 1) == 0)) {
      bVar5 = false;
LAB_011bcaa8:
      if (iVar6 == -2) goto LAB_011bcab4;
LAB_011bcab0:
      if (bVar5) goto LAB_011bcab4;
    }
    else {
      sVar3 = *(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
      bVar5 = sVar3 == 0x85;
      if ((FLAG_trace_regexp_tier_up == '\0') || (sVar3 != 0x85)) goto LAB_011bcaa8;
      PrintF("JSRegExp object %p needs tier-up compilation\n",*param_2);
      if (iVar6 != -2) goto LAB_011bcab0;
LAB_011bcab4:
      CompileIrregexp(param_1,param_2,param_3,bVar11);
    }
    uVar8 = NativeRegExpMacroAssembler::Match(param_2,param_3,param_5,param_6,param_4,param_1);
    if ((int)uVar8 == -2) {
      uVar10 = *param_3;
      while( true ) {
        uVar4 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7);
        if ((uVar4 & 9) == 0) break;
        if ((uVar4 & 9) == 8) {
          bVar11 = true;
          goto LAB_011bca14;
        }
        uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
      }
      bVar11 = false;
      goto LAB_011bca14;
    }
  }
  else {
    uVar2 = *(int *)(*puVar7 + 0x27) + 2U & 0xfffffffe;
    pvVar1 = (void *)((long)param_5 + (long)(int)uVar2 * 4);
    do {
      while( true ) {
        uVar8 = IrregexpInterpreter::MatchForCallFromRuntime
                          (param_1,param_2,param_3,pvVar1,uVar2,param_4);
        iVar6 = (int)uVar8;
        if (iVar6 != -2) break;
        if (FLAG_regexp_tier_up != '\0') {
          local_68 = *param_2;
          JSRegExp::ResetLastTierUpTick((JSRegExp *)&local_68);
        }
        uVar10 = *param_3;
        while( true ) {
          uVar4 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7);
          if ((uVar4 & 9) == 0) break;
          if ((uVar4 & 9) == 8) {
            bVar11 = true;
            goto LAB_011bc958;
          }
          uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
        }
        bVar11 = false;
LAB_011bc958:
        local_68 = *param_2;
        iVar6 = JSRegExp::Code((JSRegExp *)&local_68,bVar11);
        local_68 = *param_2;
        uVar10 = JSRegExp::Bytecode((JSRegExp *)&local_68,bVar11);
        local_68 = *param_2;
        uVar9 = JSRegExp::MarkedForTierUp((JSRegExp *)&local_68);
        if (((uVar10 & 1) == 0) || ((uVar9 & 1) == 0)) {
          bVar5 = false;
        }
        else {
          sVar3 = *(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
          bVar5 = sVar3 == 0x85;
          if ((FLAG_trace_regexp_tier_up != '\0') && (sVar3 == 0x85)) {
            PrintF("JSRegExp object %p needs tier-up compilation\n",*param_2);
          }
        }
        if ((iVar6 == -2) || (bVar5)) {
          CompileIrregexp(param_1,param_2,param_3,bVar11);
        }
      }
      if (iVar6 + 1U < 2) {
        return uVar8;
      }
    } while (iVar6 != 1);
    MemCopy(param_5,pvVar1,(long)(int)uVar2 << 2);
    uVar8 = 1;
  }
  return uVar8;
}

