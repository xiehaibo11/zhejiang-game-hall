
ulong * FUN_0108e9b0(undefined8 param_1,Isolate *param_2,ulong *param_3,int param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  puVar2 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_2,param_4,0);
  uVar7 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_2 + 0x95a0);
    if (puVar3 == *(ulong **)(param_2 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
  }
  if (param_4 != 0) {
    iVar9 = 0;
    iVar5 = 7;
    do {
      if (*(long *)(*puVar3 + (long)iVar5) != -0x8000000080001) {
        puVar4 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                    ((Factory *)param_2,*(double *)((long)iVar5 + *puVar3));
        uVar7 = *puVar4;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar7 & 0xffffffff00000000 | 7;
          if ((*(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) < 0x41) &&
             ((*(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) & 0xffe0) == 0x20)) {
            puVar4 = (ulong *)v8::internal::StringTable::LookupString(param_2,puVar4);
            uVar7 = *puVar4;
            uVar6 = uVar7 & 1;
          }
          else {
            uVar6 = 1;
          }
        }
        uVar8 = *puVar2;
        *(int *)(uVar8 + (long)iVar9 + 7) = (int)uVar7;
        if (uVar6 != 0) {
          uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          lVar1 = uVar8 + (long)iVar9 + 7;
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar8,lVar1,uVar7);
            uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar7);
          }
        }
      }
      param_4 = param_4 + -1;
      iVar9 = iVar9 + 4;
      iVar5 = iVar5 + 8;
    } while (param_4 != 0);
  }
  return puVar2;
}

