
undefined8 FUN_0109f618(undefined8 param_1,ulong *param_2,long *param_3,KeyAccumulator *param_4)

{
  int *piVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *extraout_x1;
  CanonicalHandleScope *this;
  CanonicalHandleScope *extraout_x8;
  long lVar5;
  ulong uVar6;
  Factory *this_00;
  ulong uVar7;
  
  pIVar3 = (Isolate *)(*param_2 & 0xffffffff00000000);
  this = *(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8);
  uVar6 = (ulong)pIVar3 | (ulong)*(uint *)(*param_2 + 7);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
    FUN_010a11a8();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar6);
  FUN_010a11a8();
  if (((byte)param_4[0x24] >> 5 & 1) == 0) {
    uVar6 = *extraout_x1;
    lVar5 = *param_3;
    piVar1 = (int *)(uVar6 + 0xb);
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x423) {
      piVar1 = (int *)(lVar5 + 3);
    }
    iVar2 = *piVar1;
    if (iVar2 >> 1 != 0) {
      this_00 = *(Factory **)param_4;
      uVar7 = 0;
      while( true ) {
        piVar1 = (int *)(uVar6 + 0xb);
        if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x423) {
          piVar1 = (int *)(lVar5 + 3);
        }
        if ((uVar7 < (uint)(*piVar1 >> 1)) &&
           ((((ulong)(this_00 + *(uint *)(lVar5 + ((int)uVar7 << 2) + 7)) & 1) == 0 ||
            ((int)(this_00 + *(uint *)(lVar5 + ((int)uVar7 << 2) + 7)) != *(int *)(this_00 + 0xa8)))
           )) {
          if (uVar7 >> 0x1e == 0) {
            if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar4 = *(ulong **)(this_00 + 0x95a0);
              if (puVar4 == *(ulong **)(this_00 + 0x95a8)) {
                puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
              }
              *(ulong **)(this_00 + 0x95a0) = puVar4 + 1;
              *puVar4 = uVar7 << 1;
            }
            else {
              puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar7 << 1);
            }
          }
          else {
            puVar4 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                        (this_00);
            *(double *)(*puVar4 + 3) = (double)uVar7;
          }
          uVar6 = v8::internal::KeyAccumulator::AddKey(param_4,puVar4,0);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
        }
        uVar7 = uVar7 + 1;
        if (uVar7 == (uint)(iVar2 >> 1)) break;
        uVar6 = *extraout_x1;
        lVar5 = *param_3;
      }
    }
  }
  return 1;
}

