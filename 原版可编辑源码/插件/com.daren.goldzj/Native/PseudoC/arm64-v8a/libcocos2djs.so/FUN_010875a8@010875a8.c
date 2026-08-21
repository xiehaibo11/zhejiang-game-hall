
undefined8 FUN_010875a8(undefined8 param_1,ulong *param_2,long *param_3,KeyAccumulator *param_4)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  Factory *this;
  ulong uVar6;
  
  if (((byte)param_4[0x24] >> 5 & 1) == 0) {
    uVar4 = *param_2;
    lVar5 = *param_3;
    piVar1 = (int *)(uVar4 + 0xb);
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x423) {
      piVar1 = (int *)(lVar5 + 3);
    }
    iVar2 = *piVar1;
    if (iVar2 >> 1 != 0) {
      this = *(Factory **)param_4;
      uVar6 = 0;
      while( true ) {
        piVar1 = (int *)(uVar4 + 0xb);
        if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x423) {
          piVar1 = (int *)(lVar5 + 3);
        }
        if (uVar6 < (uint)(*piVar1 >> 1)) {
          if (uVar6 >> 0x1e == 0) {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar3 = *(ulong **)(this + 0x95a0);
              if (puVar3 == *(ulong **)(this + 0x95a8)) {
                puVar3 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
              }
              *(ulong **)(this + 0x95a0) = puVar3 + 1;
              *puVar3 = uVar6 << 1;
            }
            else {
              puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this + 0x95b8),uVar6 << 1);
            }
          }
          else {
            puVar3 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                        (this);
            *(double *)(*puVar3 + 3) = (double)uVar6;
          }
          uVar4 = v8::internal::KeyAccumulator::AddKey(param_4,puVar3,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == (uint)(iVar2 >> 1)) break;
        uVar4 = *param_2;
        lVar5 = *param_3;
      }
    }
  }
  return 1;
}

