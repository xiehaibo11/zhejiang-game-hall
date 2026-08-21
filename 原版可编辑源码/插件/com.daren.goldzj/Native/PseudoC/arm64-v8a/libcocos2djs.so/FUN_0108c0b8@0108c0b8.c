
undefined8 FUN_0108c0b8(ulong *param_1,long *param_2,KeyAccumulator *param_3)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  Factory *this;
  int iVar7;
  ulong uVar8;
  
  uVar5 = *param_1;
  lVar4 = *param_2;
  piVar1 = (int *)(uVar5 + 0xb);
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
    piVar1 = (int *)(lVar4 + 3);
  }
  iVar2 = *piVar1;
  if (iVar2 >> 1 != 0) {
    this = *(Factory **)param_3;
    iVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    while( true ) {
      piVar1 = (int *)(uVar5 + 0xb);
      if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
        piVar1 = (int *)(lVar4 + 3);
      }
      if ((uVar8 < (uint)(*piVar1 >> 1)) &&
         ((((ulong)(this + *(uint *)(lVar4 + iVar7 + 7)) & 1) == 0 ||
          ((int)(this + *(uint *)(lVar4 + iVar7 + 7)) != *(int *)(this + 0xa8))))) {
        if (uVar8 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)(this + 0x95a0);
            if (puVar3 == *(ulong **)(this + 0x95a8)) {
              puVar3 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar3 + 1;
            *puVar3 = uVar6;
          }
          else {
            puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
          }
        }
        else {
          puVar3 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                      (this);
          *(double *)(*puVar3 + 3) = (double)uVar8;
        }
        uVar5 = v8::internal::KeyAccumulator::AddKey(param_3,puVar3,0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if ((ulong)(uint)(iVar2 >> 1) - 1 == uVar8) break;
      uVar5 = *param_1;
      lVar4 = *param_2;
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + 2;
      iVar7 = iVar7 + 4;
    }
  }
  return 1;
}

