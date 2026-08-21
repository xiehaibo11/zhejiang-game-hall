
/* v8::internal::TranslatedState::EnsureJSObjectAllocated(v8::internal::TranslatedValue*,
   v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::TranslatedState::EnsureJSObjectAllocated
          (TranslatedState *this,char *param_1,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  Isolate *pIVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  Representation local_28 [8];
  
  if (*param_1 == '\b') {
    if ((uint)*(byte *)(*param_3 + 3) << 2 == *(int *)(param_1 + 0x1c) * 4) {
LAB_00f24250:
      if (*param_1 == '\b') {
        iVar6 = *(int *)(param_1 + 0x1c) * 4 + -8;
      }
      else {
        iVar6 = -8;
      }
      plVar3 = (long *)Factory::NewByteArray(*(Factory **)(this + 0x18),iVar6,1);
      lVar7 = *plVar3;
      if (1 < *(int *)(lVar7 + 3)) {
        lVar9 = 0;
        do {
          *(undefined1 *)(lVar7 + lVar9 + 7) = 0;
          lVar7 = *plVar3;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar7 + 3) >> 1);
      }
      pIVar8 = *(Isolate **)(this + 0x18);
      uVar12 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x17);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar12;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
      }
      uVar11 = *param_3;
      uVar12 = (ulong)(*(uint *)(uVar11 + 0xb) >> 10) & 0x3ff;
      if ((int)uVar12 != 0) {
        lVar7 = 0xc;
        while( true ) {
          uVar1 = *(int *)((uVar11 & 0xffffffff00000000 | lVar7 + 7U) +
                          (ulong)*(uint *)(uVar11 + 0x17)) >> 1;
          uVar2 = uVar1 >> 0x13 & 0x3ff;
          iVar6 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4);
          if ((int)uVar2 < iVar6) {
            uVar10 = (uVar2 + *(byte *)(uVar11 + 4)) * 4;
          }
          else {
            uVar10 = (uVar2 - iVar6) * 4 + 8;
          }
          uVar1 = uVar1 >> 6 & 7;
          local_28[0] = SUB41(uVar1,0);
          if (4 < uVar1) {
            uVar5 = Representation::Mnemonic(local_28);
            PrintF("%s\n",uVar5);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          if (((uVar10 & 0x2000) != 0 || (int)uVar2 < iVar6) &&
             ((*(uint *)(lVar7 + *puVar4 + 7) & 0x380) == 0x100)) {
            uVar1 = uVar10 >> 2 & 0x7ff;
            if (uVar1 < 2) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","index.index() >= FixedArray::kHeaderSize / kTaggedSize")
              ;
            }
            *(undefined1 *)((ulong)(uVar1 << 2) + *plVar3 + -1) = 2;
          }
          if (uVar12 * 0xc - lVar7 == 0) break;
          uVar11 = *param_3;
          lVar7 = lVar7 + 0xc;
        }
      }
      *(long **)(param_1 + 0x10) = plVar3;
      return;
    }
  }
  else if (*(byte *)(*param_3 + 3) == 0) goto LAB_00f24250;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","map->instance_size() == slot->GetChildrenCount() * kTaggedSize");
}

