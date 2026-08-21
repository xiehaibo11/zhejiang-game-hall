
undefined8
FUN_010bceac(undefined8 param_1,ulong *param_2,undefined8 param_3,KeyAccumulator *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  Factory *this;
  ulong uVar5;
  
  if (((byte)param_4[0x24] >> 5 & 1) == 0) {
    uVar2 = *param_2;
    if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x423) {
      uVar3 = (ulong)(uint)((int)*(uint *)(uVar2 + 0xb) >> 1);
    }
    else {
      if ((*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 0x1b) >> 2 & 1)
          != 0) {
        return 1;
      }
      uVar3 = *(ulong *)(uVar2 + 0x1f);
    }
    if (uVar3 != 0) {
      this = *(Factory **)param_4;
      uVar4 = 0;
      uVar5 = 0;
      while( true ) {
        if (((*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 0x1b) >> 2 &
             1) == 0) && (uVar5 < *(ulong *)(uVar2 + 0x1f))) {
          if (uVar5 >> 0x1e == 0) {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar1 = *(ulong **)(this + 0x95a0);
              if (puVar1 == *(ulong **)(this + 0x95a8)) {
                puVar1 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
              }
              *(ulong **)(this + 0x95a0) = puVar1 + 1;
              *puVar1 = uVar4;
            }
            else {
              puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
            }
          }
          else {
            puVar1 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                        (this);
            *(double *)(*puVar1 + 3) = (double)uVar5;
          }
          uVar2 = v8::internal::KeyAccumulator::AddKey(param_4,puVar1,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
        }
        if (uVar3 - 1 == uVar5) break;
        uVar2 = *param_2;
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 + 2;
      }
    }
  }
  return 1;
}

