
/* v8::internal::CacheInitialJSArrayMaps(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::Map>) */

ulong * v8::internal::CacheInitialJSArrayMaps(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *local_90;
  undefined8 uStack_88;
  ulong local_80;
  Isolate *local_78;
  int local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = *param_3;
  uVar9 = *param_2;
  uVar8 = (ulong)(*(byte *)(uVar7 + 10) >> 3);
  puVar1 = (undefined4 *)(uVar9 + uVar8 * 4 + 0x15f);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
    }
  }
  iVar4 = GetSequenceIndexFromFastElementsKind(uVar8);
  iVar4 = iVar4 + 1;
  if (iVar4 < 6) {
    puVar5 = param_3;
    do {
      uVar7 = GetFastElementsKindFromSequenceIndex(iVar4);
      local_80 = *puVar5;
      uStack_88 = 0;
      local_78 = param_1 + *(uint *)(local_80 + 0x23);
      iVar3 = 1;
      local_90 = param_1;
      if ((((ulong)local_78 & 1) != 0) && ((int)local_78 != 3)) {
        uVar8 = (ulong)local_78 & 3;
        iVar3 = (int)uVar8;
        if (uVar8 != 3) {
          if (uVar8 != 1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar8 = (ulong)local_78 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar8 + *(uint *)(local_78 + -1)) == 0x98) {
            iVar3 = 4;
          }
          else {
            iVar3 = (uint)(*(short *)(uVar8 + *(uint *)(local_78 + -1)) != 100) << 1;
          }
        }
      }
      local_70 = iVar3;
      uVar8 = TransitionsAccessor::SearchSpecial
                        ((TransitionsAccessor *)&local_90,*(undefined8 *)(param_1 + 0xb48));
      if ((int)uVar8 == 0) {
        puVar5 = (ulong *)Map::CopyAsElementsKind(param_1,puVar5,uVar7 & 0xffffffff,0);
      }
      else if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(param_1 + 0x95a0);
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar8;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      }
      uVar8 = *param_2;
      uVar9 = *puVar5;
      puVar1 = (undefined4 *)(uVar8 + (uVar7 & 0xff) * 4 + 0x15f);
      *puVar1 = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar1,uVar9);
          uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar9);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 6);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}

