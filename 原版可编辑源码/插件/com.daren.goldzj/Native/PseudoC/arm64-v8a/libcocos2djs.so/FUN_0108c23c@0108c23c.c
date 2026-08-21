
ulong * FUN_0108c23c(Factory *param_1,ulong *param_2,long *param_3,int param_4,ulong *param_5,
                    int *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = *param_2;
  lVar4 = *param_3;
  piVar1 = (int *)(uVar5 + 0xb);
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
    piVar1 = (int *)(lVar4 + 3);
  }
  uVar7 = *(ulong *)(param_1 + 0x8890) >> 9;
  iVar2 = *piVar1;
  if (0x3fff < uVar7) {
    uVar7 = 0x4000;
  }
  if (uVar7 < 0x201) {
    uVar7 = 0x200;
  }
  if (iVar2 >> 1 == 0) {
LAB_0108c4a8:
    *param_6 = param_7;
    return param_5;
  }
  iVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  do {
    piVar1 = (int *)(uVar5 + 0xb);
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x423) {
      piVar1 = (int *)(lVar4 + 3);
    }
    if ((uVar10 < (uint)(*piVar1 >> 1)) &&
       ((((ulong)(param_1 + *(uint *)(lVar4 + iVar8 + 7)) & 1) == 0 ||
        ((int)(param_1 + *(uint *)(lVar4 + iVar8 + 7)) != *(int *)(param_1 + 0xa8))))) {
      if (param_4 == 0) {
        puVar3 = (ulong *)v8::internal::Factory::SizeToString(param_1,uVar10,uVar10 < uVar7 << 1);
        uVar5 = *param_5;
        uVar11 = *puVar3;
        lVar4 = uVar5 + (long)(param_7 << 2);
        *(int *)(lVar4 + 7) = (int)uVar11;
        if ((uVar11 & 1) != 0) {
          uVar6 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
          lVar4 = lVar4 + 7;
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar5,lVar4,uVar11);
            uVar6 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
          }
          goto joined_r0x0108c3cc;
        }
      }
      else {
        if (uVar10 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)(param_1 + 0x95a0);
            if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
              puVar3 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
            *puVar3 = uVar9;
          }
          else {
            puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
          }
        }
        else {
          puVar3 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                      (param_1);
          *(double *)(*puVar3 + 3) = (double)uVar10;
        }
        uVar5 = *param_5;
        uVar11 = *puVar3;
        lVar4 = uVar5 + (long)(param_7 << 2);
        *(int *)(lVar4 + 7) = (int)uVar11;
        if ((uVar11 & 1) != 0) {
          uVar6 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
          lVar4 = lVar4 + 7;
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar5,lVar4,uVar11);
            uVar6 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
          }
joined_r0x0108c3cc:
          if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar5,lVar4,uVar11);
          }
        }
      }
      param_7 = param_7 + 1;
    }
    if ((ulong)(uint)(iVar2 >> 1) - 1 == uVar10) goto LAB_0108c4a8;
    uVar5 = *param_2;
    lVar4 = *param_3;
    uVar10 = uVar10 + 1;
    uVar9 = uVar9 + 2;
    iVar8 = iVar8 + 4;
  } while( true );
}

