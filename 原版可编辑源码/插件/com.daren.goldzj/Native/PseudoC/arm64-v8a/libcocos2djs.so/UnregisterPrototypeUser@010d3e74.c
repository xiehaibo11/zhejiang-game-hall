
/* v8::internal::JSObject::UnregisterPrototypeUser(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Isolate*) */

bool v8::internal::JSObject::UnregisterPrototypeUser(ulong *param_1,Isolate *param_2)

{
  uint *puVar1;
  Isolate *pIVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar12 = *param_1;
  if ((*(uint *)(uVar12 + 0x23) & 1) != 0) {
    uVar9 = uVar12 & 0xffffffff00000000;
    uVar11 = uVar9 | *(uint *)(uVar12 + 0x23);
    uVar10 = uVar9 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar11 - 1)) == 100) {
      uVar12 = uVar9 | *(uint *)(uVar12 + 0xf);
      if (*(ushort *)(uVar10 + *(uint *)(uVar12 - 1)) < 0xaa) {
        uVar4 = *(uint *)(uVar11 + 7);
        if ((uVar4 & 1) != 0) {
          return *(short *)(uVar10 + *(uint *)((uVar9 | uVar4) - 1)) == 0xa7;
        }
      }
      else {
        pIVar2 = param_2 + 0x95a0;
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar2;
          if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(param_2);
          }
          *(ulong **)pIVar2 = puVar6 + 1;
          *puVar6 = uVar12;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
        }
        plVar7 = (long *)Map::GetOrCreatePrototypeInfo(param_1,param_2);
        uVar4 = *(uint *)(*plVar7 + 0xb);
        iVar3 = (int)uVar4 >> 1;
        if (iVar3 != -1) {
          uVar12 = *puVar6 & 0xffffffff00000000;
          uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)(*puVar6 - 1)) + 0x23);
          if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar2;
            if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(param_2);
            }
            *(ulong **)pIVar2 = puVar8 + 1;
            *puVar8 = uVar12;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
            uVar12 = *puVar8;
          }
          uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 7);
          if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar2;
            if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(param_2);
            }
            *(ulong **)pIVar2 = puVar8 + 1;
            *puVar8 = uVar12;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
            uVar12 = *puVar8;
          }
          uVar5 = *(uint *)(uVar12 + 0xb);
          puVar1 = (uint *)((long)(uVar12 + 0xb) + (long)(iVar3 << 2));
          *puVar1 = uVar5;
          if ((uVar5 != 3) && ((uVar5 & 1) != 0)) {
            uVar10 = uVar12 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffc0000;
            uVar9 = *(ulong *)(uVar10 + 8);
            uVar11 = uVar12 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffffffd;
            if (((uint)uVar9 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar12,puVar1,uVar11);
              uVar9 = *(ulong *)(uVar10 | 8);
            }
            if (((uVar9 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar12,puVar1,uVar11);
            }
          }
          *(uint *)(uVar12 + 0xb) = uVar4 & 0xfffffffe;
          if (FLAG_trace_prototype_users != '\0') {
            PrintF("Unregistering %p as a user of prototype %p.\n",*param_1,*puVar6);
          }
          return true;
        }
      }
    }
  }
  return false;
}

