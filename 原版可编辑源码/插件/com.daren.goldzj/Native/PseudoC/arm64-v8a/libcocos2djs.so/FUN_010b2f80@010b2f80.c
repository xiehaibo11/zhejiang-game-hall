
undefined8
FUN_010b2f80(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,uint param_5,
            undefined4 *param_6,uint param_7)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((param_7 >> 2 & 1) == 0) {
    uVar10 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_2 + 0x95a0);
      if (puVar3 == *(ulong **)(param_2 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)(param_2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar10;
    }
    else {
      v8::internal::CanonicalHandleScope::Lookup
                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar10);
    }
    uVar10 = *param_3;
    if (((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x1b) >> 2 & 1)
         == 0) && (lVar7 = *(long *)(uVar10 + 0x1f), lVar7 != 0)) {
      iVar9 = 0;
      uVar11 = 0;
      while( true ) {
        pIVar2 = (Isolate *)(uVar10 & 0xffffffff00000000);
        uVar10 = (ulong)*(ushort *)
                         (*(long *)(uVar10 + 0x27) + (ulong)*(uint *)(uVar10 + 0x2f) + uVar11 * 2)
                 << 1;
        if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar2 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
            puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
          }
          *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar10;
        }
        else {
          puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar10);
        }
        if ((param_5 & 1) != 0) {
          puVar4 = (undefined4 *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar11,true)
          ;
          plVar5 = (long *)v8::internal::Factory::NewUninitializedFixedArray((Factory *)param_2,2);
          *(undefined4 *)(*plVar5 + 7) = *puVar4;
          *(int *)(*plVar5 + 0xb) = (int)*puVar3;
          puVar3 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar5,2,2,0);
        }
        uVar12 = *param_4;
        uVar10 = *puVar3;
        *(int *)(uVar12 + (long)iVar9 + 7) = (int)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          lVar1 = uVar12 + (long)iVar9 + 7;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
            uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
          }
        }
        if (lVar7 - 1U == uVar11) break;
        uVar10 = *param_3;
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 4;
      }
      uVar6 = (undefined4)lVar7;
      goto LAB_010b317c;
    }
  }
  uVar6 = 0;
LAB_010b317c:
  *param_6 = uVar6;
  return 0x101;
}

