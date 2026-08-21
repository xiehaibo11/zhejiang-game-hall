
undefined8
FUN_010c215c(undefined8 param_1,ulong *param_2,undefined8 param_3,KeyAccumulator *param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *extraout_x1;
  CanonicalHandleScope *this;
  CanonicalHandleScope *extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  Factory *this_00;
  ulong uVar6;
  
  pIVar1 = (Isolate *)(*param_2 & 0xffffffff00000000);
  this = *(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8);
  uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(*param_2 + 7);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
    FUN_010c3790();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar4);
  FUN_010c3790();
  if (((byte)param_4[0x24] >> 5 & 1) == 0) {
    uVar4 = *extraout_x1;
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x423) {
      uVar3 = (ulong)(uint)((int)*(uint *)(uVar4 + 0xb) >> 1);
    }
    else {
      if ((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 2 & 1)
          != 0) {
        return 1;
      }
      uVar3 = *(ulong *)(uVar4 + 0x1f);
    }
    if (uVar3 != 0) {
      this_00 = *(Factory **)param_4;
      uVar5 = 0;
      uVar6 = 0;
      while( true ) {
        if (((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 2 &
             1) == 0) && (uVar6 < *(ulong *)(uVar4 + 0x1f))) {
          if (uVar6 >> 0x1e == 0) {
            if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar2 = *(ulong **)(this_00 + 0x95a0);
              if (puVar2 == *(ulong **)(this_00 + 0x95a8)) {
                puVar2 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
              }
              *(ulong **)(this_00 + 0x95a0) = puVar2 + 1;
              *puVar2 = uVar5;
            }
            else {
              puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar5);
            }
          }
          else {
            puVar2 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                        (this_00);
            *(double *)(*puVar2 + 3) = (double)uVar6;
          }
          uVar4 = v8::internal::KeyAccumulator::AddKey(param_4,puVar2,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
        }
        if (uVar3 - 1 == uVar6) break;
        uVar4 = *extraout_x1;
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + 2;
      }
    }
  }
  return 1;
}

