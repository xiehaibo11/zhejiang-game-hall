
undefined8
FUN_0108d630(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
            int *param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  
  uVar11 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_2 + 0x95a0);
    if (puVar4 == *(ulong **)(param_2 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar11;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar11);
    uVar11 = *puVar4;
  }
  uVar3 = *(int *)(uVar11 + 3) >> 1;
  if (uVar3 == 0) {
    iVar13 = 0;
  }
  else {
    uVar10 = 0;
    iVar13 = 0;
    iVar8 = 7;
    while( true ) {
      if (*(long *)(uVar11 + (long)iVar8) != -0x8000000080001) {
        puVar5 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                    ((Factory *)param_2,*(double *)((long)iVar8 + uVar11));
        if ((param_5 & 1) != 0) {
          puVar6 = (undefined4 *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar10,true)
          ;
          plVar7 = (long *)v8::internal::Factory::NewUninitializedFixedArray((Factory *)param_2,2);
          *(undefined4 *)(*plVar7 + 7) = *puVar6;
          *(int *)(*plVar7 + 0xb) = (int)*puVar5;
          puVar5 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar7,2,2,0);
        }
        uVar12 = *puVar5;
        iVar2 = iVar13 + 1;
        uVar11 = *param_4;
        lVar1 = uVar11 + (long)(iVar13 << 2);
        *(int *)(lVar1 + 7) = (int)uVar12;
        iVar13 = iVar2;
        if ((uVar12 & 1) != 0) {
          uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar11,lVar1,uVar12);
            uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar11,lVar1,uVar12);
          }
        }
      }
      if ((ulong)uVar3 - 1 == uVar10) break;
      uVar11 = *puVar4;
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 8;
    }
  }
  *param_6 = iVar13;
  return 0x101;
}

