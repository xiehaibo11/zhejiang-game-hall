
undefined8
FUN_01090ab4(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  Isolate *this;
  ulong uVar7;
  long lVar8;
  
  this = *(Isolate **)param_3;
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    uVar7 = *puVar3;
  }
  uVar5 = *param_2;
  piVar1 = (int *)(uVar5 + 0xb);
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
    piVar1 = (int *)(uVar7 + 3);
  }
  iVar2 = *piVar1;
  if (iVar2 >> 1 != 0) {
    lVar8 = 8;
    while( true ) {
      lVar6 = (long)((int)lVar8 + -1);
      if (*(long *)(uVar7 + lVar6) != -0x8000000080001) {
        uVar4 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                          ((Factory *)this,*(double *)(lVar6 + uVar7));
        uVar7 = v8::internal::KeyAccumulator::AddKey(param_3,uVar4,param_4);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
      }
      if ((ulong)(uint)(iVar2 >> 1) * 8 - lVar8 == 0) break;
      uVar7 = *puVar3;
      lVar8 = lVar8 + 8;
    }
  }
  return 1;
}

