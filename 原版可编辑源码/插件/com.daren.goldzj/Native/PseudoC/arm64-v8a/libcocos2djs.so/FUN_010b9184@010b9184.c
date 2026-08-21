
undefined8
FUN_010b9184(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
            undefined4 *param_6,uint param_7)

{
  long lVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((param_7 >> 2 & 1) == 0) {
    uVar9 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_2 + 0x95a0);
      if (puVar2 == *(ulong **)(param_2 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)(param_2 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar9;
    }
    else {
      v8::internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar9)
      ;
    }
    uVar9 = *param_3;
    if (((*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1)
         == 0) && (lVar6 = *(long *)(uVar9 + 0x1f), lVar6 != 0)) {
      iVar8 = 0;
      uVar10 = 0;
      while( true ) {
        puVar2 = (ulong *)v8::internal::Factory::NewNumberFromInt
                                    ((Factory *)(uVar9 & 0xffffffff00000000),
                                     *(int *)(*(long *)(uVar9 + 0x27) +
                                              (ulong)*(uint *)(uVar9 + 0x2f) + uVar10 * 4));
        if ((param_5 & 1) != 0) {
          puVar3 = (undefined4 *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar10,true)
          ;
          plVar4 = (long *)v8::internal::Factory::NewUninitializedFixedArray((Factory *)param_2,2);
          *(undefined4 *)(*plVar4 + 7) = *puVar3;
          *(int *)(*plVar4 + 0xb) = (int)*puVar2;
          puVar2 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar4,2,2,0);
        }
        uVar11 = *param_4;
        uVar9 = *puVar2;
        *(int *)(uVar11 + (long)iVar8 + 7) = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          lVar1 = uVar11 + (long)iVar8 + 7;
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar11,lVar1,uVar9);
            uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar11,lVar1,uVar9);
          }
        }
        if (lVar6 - 1U == uVar10) break;
        uVar9 = *param_3;
        uVar10 = uVar10 + 1;
        iVar8 = iVar8 + 4;
      }
      uVar5 = (undefined4)lVar6;
      goto LAB_010b9334;
    }
  }
  uVar5 = 0;
LAB_010b9334:
  *param_6 = uVar5;
  return 0x101;
}

