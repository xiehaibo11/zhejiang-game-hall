
ulong * FUN_01081674(undefined8 param_1,undefined8 param_2,ulong *param_3,int param_4)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  Isolate *extraout_x1;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  FUN_01084298();
  pIVar2 = extraout_x1 + 0x95a0;
  puVar3 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)extraout_x1,param_4,0);
  uVar8 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(extraout_x1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar2;
    if (puVar4 == *(ulong **)(extraout_x1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(extraout_x1);
    }
    *(ulong **)pIVar2 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(extraout_x1 + 0x95b8),uVar8);
  }
  if (param_4 != 0) {
    iVar10 = 0;
    do {
      uVar8 = *puVar4;
      lVar1 = (long)iVar10 + 7;
      if ((((ulong)(extraout_x1 + *(uint *)(lVar1 + uVar8)) & 1) == 0) ||
         ((int)(extraout_x1 + *(uint *)(lVar1 + uVar8)) != *(int *)(extraout_x1 + 0xa8))) {
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + lVar1);
        if (*(CanonicalHandleScope **)(extraout_x1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar2;
          if (puVar5 == *(ulong **)(extraout_x1 + 0x95a8)) {
            puVar5 = (ulong *)v8::internal::HandleScope::Extend(extraout_x1);
          }
          *(ulong **)pIVar2 = puVar5 + 1;
          *puVar5 = uVar8;
          uVar8 = *puVar5;
        }
        else {
          puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(extraout_x1 + 0x95b8),uVar8);
          uVar8 = *puVar5;
        }
        if ((uVar8 & 1) == 0) {
          *(int *)(*puVar3 + lVar1) = (int)uVar8;
        }
        else {
          uVar6 = uVar8 & 0xffffffff00000000 | 7;
          if ((*(ushort *)(uVar6 + *(uint *)(uVar8 - 1)) < 0x41) &&
             ((*(ushort *)(uVar6 + *(uint *)(uVar8 - 1)) & 0xffe0) == 0x20)) {
            puVar5 = (ulong *)v8::internal::StringTable::LookupString(extraout_x1);
            uVar6 = *puVar3;
            uVar8 = *puVar5;
            puVar9 = (undefined4 *)(uVar6 + lVar1);
            *puVar9 = (int)uVar8;
            if ((uVar8 & 1) == 0) goto LAB_0108172c;
          }
          else {
            uVar6 = *puVar3;
            puVar9 = (undefined4 *)(uVar6 + lVar1);
            *puVar9 = (int)uVar8;
          }
          uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar6,puVar9,uVar8);
            uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar6,puVar9,uVar8);
          }
        }
      }
LAB_0108172c:
      param_4 = param_4 + -1;
      iVar10 = iVar10 + 4;
    } while (param_4 != 0);
  }
  return puVar3;
}

