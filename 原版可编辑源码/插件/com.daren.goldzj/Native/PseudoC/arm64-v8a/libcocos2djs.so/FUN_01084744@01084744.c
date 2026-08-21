
undefined8 FUN_01084744(undefined8 param_1,ulong *param_2,long *param_3,KeyAccumulator *param_4)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  Factory *this;
  ulong uVar6;
  
  if (((byte)param_4[0x24] >> 5 & 1) == 0) {
    uVar5 = *param_2;
    lVar4 = *param_3;
    piVar1 = (int *)(uVar5 + 0xb);
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
      piVar1 = (int *)(lVar4 + 3);
    }
    iVar2 = *piVar1;
    if (iVar2 >> 1 != 0) {
      this = *(Factory **)param_4;
      uVar6 = 0;
      while( true ) {
        piVar1 = (int *)(uVar5 + 0xb);
        if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
          piVar1 = (int *)(lVar4 + 3);
        }
        if ((uVar6 < (uint)(*piVar1 >> 1)) &&
           ((((ulong)(this + *(uint *)(lVar4 + ((int)uVar6 << 2) + 7)) & 1) == 0 ||
            ((int)(this + *(uint *)(lVar4 + ((int)uVar6 << 2) + 7)) != *(int *)(this + 0xa8))))) {
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
          uVar5 = v8::internal::KeyAccumulator::AddKey(param_4,puVar3,0);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == (uint)(iVar2 >> 1)) break;
        uVar5 = *param_2;
        lVar4 = *param_3;
      }
    }
  }
  return 1;
}

