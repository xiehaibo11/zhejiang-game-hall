
/* v8::internal::StoreIC::LookupForWrite(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::StoreOrigin) */

byte __thiscall
v8::internal::StoreIC::LookupForWrite
          (StoreIC *this,LookupIterator *param_1,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  Isolate *pIVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong local_90;
  ulong local_88;
  ulong *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar11 = *(ulong **)(param_1 + 0x30);
  uVar8 = *puVar11;
  if ((uVar8 & 1) != 0) {
    uVar9 = uVar8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0xa9) {
LAB_014feea4:
      bVar5 = 1;
      goto switchD_014fef90_caseD_3;
    }
    if (0xa9 < *(ushort *)(uVar9 + *(uint *)(uVar8 - 1))) {
      iVar6 = *(int *)(param_1 + 4);
      if (iVar6 != 7) {
        do {
          bVar5 = 1;
          switch(iVar6) {
          case 0:
            uVar8 = **(ulong **)(param_1 + 0x38);
            uVar9 = uVar8 & 0xffffffff00000000;
            if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xab) {
              local_90 = *(undefined8 *)(uVar9 + 0x2bc8);
              iVar6 = Context::global_object((Context *)&local_90);
              local_80 = (ulong *)0x0;
              local_78 = 0;
              local_74 = 0;
              local_70 = 0;
              local_90 = uVar9;
              local_88 = uVar8;
              PrototypeIterator::Advance((PrototypeIterator *)&local_90);
              if ((int)local_88 != iVar6) goto switchD_014fef90_caseD_1;
            }
            else if ((*(byte *)((uVar9 | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 5 & 1) != 0)
            goto switchD_014fef90_caseD_1;
            break;
          case 1:
            goto switchD_014fef90_caseD_1;
          case 2:
            uVar8 = **(ulong **)(param_1 + 0x38) & 0xffffffff00000000;
            uVar3 = *(uint *)((uVar8 | 0x13) + (ulong)*(uint *)(**(ulong **)(param_1 + 0x38) - 1));
            uVar9 = uVar8 | uVar3;
            if ((uVar3 & 1) != 0) {
              do {
                if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xa2) {
                  if (((uVar9 & 1) != 0) &&
                     (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x439)) {
                    uVar9 = uVar9 & 0xffffffff00000000 |
                            (ulong)*(uint *)((uVar9 & 0xffffffff00000000 |
                                             (ulong)*(uint *)(uVar9 + 0xb)) + 3);
                  }
                  break;
                }
                puVar1 = (uint *)(uVar9 + 0x13);
                uVar9 = uVar8 | *puVar1;
              } while ((*puVar1 & 1) != 0);
            }
            uVar12 = *(ulong *)(uVar8 + 0xa0);
            if (*(uint *)(uVar9 + 0x23) != (uint)uVar12) {
              uVar12 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar9 + 0x23)) + 0xf);
            }
            uVar8 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1);
            if ((((uVar8 & 1) != 0) || (uVar3 = *(uint *)(uVar12 + 3), (uVar3 & 1) == 0)) ||
               (uVar3 != *(uint *)(*(long *)(this + 8) + 0xa0))) goto LAB_014feea4;
            bVar5 = 1;
            if (((*(uint *)(uVar12 + 0xb) & 1) == 0) || (*(uint *)(uVar12 + 0xb) != uVar3))
            goto switchD_014fef90_caseD_3;
            break;
          case 3:
            goto switchD_014fef90_caseD_3;
          case 4:
            puVar11 = *(ulong **)(param_1 + 0x30);
            uVar8 = *puVar11;
            if ((uVar8 & 1) == 0) goto LAB_014ff180;
            goto LAB_014fef08;
          case 5:
            bVar5 = ((byte)param_1[0x10] & 8) == 0;
            goto switchD_014fef90_caseD_3;
          case 6:
            if (((byte)param_1[0x10] >> 3 & 1) == 0) {
              puVar10 = *(ulong **)(param_1 + 0x38);
              if ((puVar11 == puVar10) ||
                 (((uVar8 = *puVar11, puVar11 != (ulong *)0x0 && (puVar10 != (ulong *)0x0)) &&
                  (uVar8 == *puVar10)))) {
                LookupIterator::PrepareForDataProperty(param_1,param_3);
                uVar8 = *puVar11;
                if ((uVar8 & 1) == 0) {
                  bVar5 = 1;
                  *(long *)(this + 0x20) = *(long *)(this + 8) + 0x140;
                  goto switchD_014fef90_caseD_3;
                }
                pIVar7 = *(Isolate **)(this + 8);
                uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1);
                if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar11 = *(ulong **)(pIVar7 + 0x95a0);
                  if (puVar11 == *(ulong **)(pIVar7 + 0x95a8)) {
                    puVar11 = (ulong *)HandleScope::Extend(pIVar7);
                  }
                  *(ulong **)(pIVar7 + 0x95a0) = puVar11 + 1;
                  *puVar11 = uVar8;
                }
                else {
                  puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
                }
                *(ulong **)(this + 0x20) = puVar11;
                goto LAB_014feea4;
              }
              if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xab
                 ) {
                local_90 = *(ulong *)(this + 8);
                local_88 = 0;
                local_78 = 0;
                local_74 = 0;
                local_70 = 0;
                local_80 = puVar11;
                if (puVar11 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","!handle_.is_null()");
                }
                PrototypeIterator::Advance((PrototypeIterator *)&local_90);
                puVar11 = *(ulong **)(param_1 + 0x38);
                if (puVar11 == local_80) goto LAB_014feea4;
                bVar5 = 0;
                if ((puVar11 != (ulong *)0x0) && (local_80 != (ulong *)0x0)) {
                  bVar5 = *puVar11 == *local_80;
                }
                goto switchD_014fef90_caseD_3;
              }
              uVar8 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1);
              if ((uVar8 & 1) == 0) {
                uVar9 = *puVar11;
                uVar8 = *(ulong *)(param_1 + 0x18);
                goto LAB_014ff188;
              }
            }
            goto switchD_014fef90_caseD_1;
          case 7:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          LookupIterator::Next(param_1);
          iVar6 = *(int *)(param_1 + 4);
        } while( true );
      }
LAB_014fef08:
      pIVar7 = *(Isolate **)(param_1 + 0x18);
      if ((*(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xab) &&
         (pIVar2 = pIVar7 + *(uint *)(((ulong)pIVar7 | 0xf) + (ulong)*(uint *)(uVar8 - 1)),
         *(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(pIVar2 + -1)) == 0xaa)) {
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar11 + 1;
          *puVar11 = (ulong)pIVar2;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),(ulong)pIVar2);
        }
      }
LAB_014ff180:
      uVar9 = *puVar11;
      uVar8 = *(ulong *)(param_1 + 0x18);
LAB_014ff188:
      if (((*(uint *)((uVar8 | 0xb) + (ulong)*(uint *)(uVar9 - 1)) >> 0x1b & 1) != 0) ||
         (((*(long *)(param_1 + 0x48) == -1 &&
           (*(short *)((uVar8 | 7) + (ulong)*(uint *)(**(long **)(param_1 + 0x20) + -1)) == 0x40))
          && ((*(byte *)(**(long **)(param_1 + 0x20) + 7) & 1) != 0)))) {
        LookupIterator::PrepareTransitionToDataProperty(param_1,puVar11,param_3,0,param_4);
        bVar5 = LookupIterator::IsCacheableTransition(param_1);
        goto switchD_014fef90_caseD_3;
      }
    }
  }
switchD_014fef90_caseD_1:
  bVar5 = 0;
switchD_014fef90_caseD_3:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5 & 1;
}

