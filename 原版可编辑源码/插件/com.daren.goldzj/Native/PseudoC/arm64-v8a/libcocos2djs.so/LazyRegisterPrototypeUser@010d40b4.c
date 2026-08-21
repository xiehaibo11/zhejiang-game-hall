
/* v8::internal::JSObject::LazyRegisterPrototypeUser(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Isolate*) */

void v8::internal::JSObject::LazyRegisterPrototypeUser(ulong *param_1,Isolate *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong local_98;
  Isolate *local_90;
  undefined8 uStack_88;
  ulong *local_80;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar1 = param_2 + 0x95a0;
  puVar5 = (ulong *)Map::GetOrCreatePrototypeInfo();
  uStack_88 = 0;
  local_98 = *param_1;
  local_90 = param_2;
  uVar6 = Map::GetPrototypeChainRootMap((Map *)&local_98,param_2);
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xf);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_80 = *(ulong **)pIVar1;
    if (local_80 == *(ulong **)(param_2 + 0x95a8)) {
      local_80 = (ulong *)HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = local_80 + 1;
    *local_80 = uVar6;
  }
  else {
    local_80 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar6);
  }
  local_78 = 0;
  local_70 = 0;
  local_74 = (int)*local_80 == *(int *)(local_90 + 0xb0);
  if (!(bool)local_74) {
    do {
      puVar4 = local_80;
      if ((*(uint *)(*puVar5 + 0xb) < 0xfffffffe) ||
         ((uVar6 = *local_80, (uVar6 & 1) != 0 &&
          (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa9))))
      break;
      puVar7 = (ulong *)Map::GetOrCreatePrototypeInfo(local_80,param_2);
      uVar2 = *(uint *)(*puVar7 + 7);
      uVar6 = *puVar7 & 0xffffffff00000000 | (ulong)uVar2;
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar6;
        puVar11 = puVar8;
        if ((uVar2 & 1) == 0) goto LAB_010d4250;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar6);
        puVar11 = puVar8;
        if ((*puVar8 & 1) == 0) {
LAB_010d4250:
          uVar6 = *(ulong *)(param_2 + 0x428);
          if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar1;
            if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(param_2);
            }
            *(ulong **)pIVar1 = puVar8 + 1;
            *puVar8 = uVar6;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar6);
          }
        }
      }
      local_98 = local_98 & 0xffffffff00000000;
      puVar8 = (ulong *)PrototypeUsers::Add(param_2,puVar8,param_1,&local_98);
      *(int *)(*puVar5 + 0xb) = (int)local_98 << 1;
      if (puVar11 != puVar8) {
        if ((puVar11 == (ulong *)0x0) || (puVar8 == (ulong *)0x0)) {
          uVar6 = *puVar8;
        }
        else {
          uVar6 = *puVar8;
          if (*puVar11 == uVar6) goto LAB_010d4348;
        }
        uVar10 = *puVar7;
        *(int *)(uVar10 + 7) = (int)uVar6;
        if ((uVar6 & 1) != 0) {
          uVar9 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar6);
            uVar9 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar6);
          }
        }
      }
LAB_010d4348:
      if (FLAG_trace_prototype_users != '\0') {
        uVar6 = *puVar4;
        PrintF("Registering %p as a user of prototype %p (map=%p).\n",*param_1,uVar6,
               uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1));
      }
      uVar6 = *puVar4;
      uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1);
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_1 = *(ulong **)pIVar1;
        if (param_1 == *(ulong **)(param_2 + 0x95a8)) {
          param_1 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = param_1 + 1;
        *param_1 = uVar6;
      }
      else {
        param_1 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar6);
      }
      PrototypeIterator::Advance((PrototypeIterator *)&local_90);
      puVar5 = puVar7;
    } while (local_74 == '\0');
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

