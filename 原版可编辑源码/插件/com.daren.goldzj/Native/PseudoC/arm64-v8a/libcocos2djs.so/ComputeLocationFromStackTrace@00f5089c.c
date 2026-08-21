
/* v8::internal::Isolate::ComputeLocationFromStackTrace(v8::internal::MessageLocation*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::Isolate::ComputeLocationFromStackTrace(Isolate *this,ulong *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong uStack_a0;
  Isolate *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    uStack_a0 = uVar5 & 0xffffffff00000000;
    if (0xa9 < *(ushort *)((uStack_a0 | 7) + (ulong)*(uint *)(uVar5 - 1))) {
      uVar5 = *(ulong *)(this + 0xbe8);
      local_98 = this + 0xbe8;
      uVar6 = 2;
      if (*(short *)((uStack_a0 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x40) {
        uVar6 = (*(int *)(uVar5 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_b8 = CONCAT44(local_b8._4_4_,uVar6);
      uStack_ac = 0;
      uStack_a8 = 0xc0;
      if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0) ==
          0x20) {
        local_98 = (Isolate *)StringTable::LookupString();
      }
      uStack_90 = 0;
      uStack_80 = 0;
      local_68 = 0xffffffffffffffff;
      uStack_70 = 0xffffffffffffffff;
      local_88 = param_3;
      local_78 = param_3;
      LookupIterator::Start<false>((LookupIterator *)&local_b8);
      if (local_b8._4_4_ == 4) {
        uVar5 = *(ulong *)(uStack_a0 + 0xa0);
      }
      else {
        puVar3 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_b8);
        uVar5 = *puVar3;
      }
      if (((uVar5 & 1) != 0) &&
         (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x76 < 0xf))
      {
        puVar3 = (ulong *)GetFrameArrayFromStackTrace(this);
        uVar5 = *puVar3;
        uVar6 = *(uint *)(uVar5 + 7);
        if (1 < (int)uVar6) {
          pIVar1 = this + 0x95a0;
          uVar12 = 4;
          if ((*(uint *)(uVar5 + 0x1b) >> 1 & 1) == 0) {
            uVar9 = 0;
            puVar7 = (uint *)(uVar5 + 0x1b);
            lVar11 = 0x1b;
            iVar2 = 0x2c;
            do {
              iVar10 = iVar2;
              if ((*puVar7 >> 2 & 1) != 0) goto LAB_00f50b9c;
              if ((*puVar7 >> 3 & 1) != 0) {
                uVar12 = iVar10 - 0x28;
                goto LAB_00f50b9c;
              }
              uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + (long)(iVar10 + -0x1d));
              if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar4 = *(ulong **)pIVar1;
                if (puVar4 == *(ulong **)(this + 0x95a8)) {
                  puVar4 = (ulong *)HandleScope::Extend(this);
                }
                *(ulong **)pIVar1 = puVar4 + 1;
                *puVar4 = uVar5;
              }
              else {
                puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
                uVar5 = *puVar4;
              }
              uVar8 = uVar5 & 0xffffffff00000000;
              uVar13 = uVar8 | *(uint *)(uVar5 + 0xb);
              uVar5 = uVar8 | *(uint *)(uVar13 + 0xf);
              if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
                uVar5 = uVar8 | *(uint *)(uVar5 + 0xb);
              }
              if (((((uVar5 & 1) == 0) ||
                   ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0))) &&
                  (local_b8 = uVar5, uVar5 = Script::IsUserJavaScript((Script *)&local_b8),
                  (uVar5 & 1) != 0)) &&
                 ((uVar12 = *(uint *)(uVar13 + 3), (uVar12 & 1) == 0 ||
                  (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar12) - 1)) != 0x57)))) {
                uVar8 = *puVar4;
                uVar5 = uVar8 & 0xffffffff00000000;
                uVar13 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar8 + 0xb)) + 0xf);
                if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x5b) {
                  uVar13 = uVar5 | *(uint *)(uVar13 + 0xb);
                }
                if ((((uVar13 & 1) != 0) &&
                    (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) ==
                     0x65)) &&
                   (((*(uint *)(uVar13 + 3) & 1) == 0 ||
                    (*(uint *)(uVar13 + 3) != *(uint *)(this + 0xa0))))) {
                  uVar5 = uVar5 | *(uint *)(uVar8 + 0xb);
                  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar4 = *(ulong **)pIVar1;
                    if (puVar4 == *(ulong **)(this + 0x95a8)) {
                      puVar4 = (ulong *)HandleScope::Extend(this);
                    }
                    *(ulong **)pIVar1 = puVar4 + 1;
                    *puVar4 = uVar5;
                  }
                  else {
                    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
                  }
                  local_c0 = *puVar3 & 0xffffffff00000000 |
                             (ulong)*(uint *)(*puVar3 + (long)(iVar10 + -0x20) + 7);
                  iVar2 = *(int *)(*puVar3 + (long)(iVar10 + -0x15)) >> 1;
                  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar3 = *(ulong **)pIVar1;
                    if (puVar3 == *(ulong **)(this + 0x95a8)) {
                      puVar3 = (ulong *)HandleScope::Extend(this);
                    }
                    *(ulong **)pIVar1 = puVar3 + 1;
                    *puVar3 = uVar13;
                  }
                  else {
                    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar13);
                  }
                  puVar7 = (uint *)(*puVar4 + 3);
                  uVar6 = *puVar7;
                  uVar5 = *puVar4 & 0xffffffff00000000;
                  if ((((uVar6 & 1) != 0) &&
                      (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar6) - 1)) == 0x86)) ||
                     ((uVar6 = *puVar7, (uVar6 & 1) != 0 &&
                      (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar6) - 1)) == 0x61)))) {
                    uVar9 = *puVar4;
                    uVar5 = uVar9 & 0xffffffff00000000;
                    uVar13 = uVar5 | *(uint *)(uVar9 + 0xf);
                    uVar8 = uVar5 | 7;
                    if ((*(short *)(uVar8 + *(uint *)(uVar13 - 1)) == 0x5b) &&
                       (*(short *)(uVar8 + *(uint *)((uVar5 | *(uint *)(uVar13 + 0x13)) - 1)) ==
                        0x86)) {
                      uVar6 = *(uint *)(uVar13 + 0xf);
                    }
                    else {
                      uVar6 = *(uint *)(uVar9 + 3);
                      if (((uVar6 & 1) == 0) ||
                         (*(short *)(uVar8 + *(uint *)((uVar5 | uVar6) - 1)) != 0x86)) {
                        uVar6 = *(uint *)((uVar5 | *(uint *)(uVar9 + 3)) + 3);
                      }
                      else {
                        uVar6 = *(uint *)(uVar9 + 3);
                      }
                    }
                    uVar6 = *(uint *)((uVar5 | uVar6) + 0xf);
                    if (((uVar6 & 1) == 0) ||
                       ((uVar6 != *(uint *)(uVar5 + 0xa0) && (uVar6 != *(uint *)(uVar5 + 0x180)))))
                    {
                      iVar2 = AbstractCode::SourcePosition((AbstractCode *)&local_c0,iVar2);
                      MessageLocation::MessageLocation
                                ((MessageLocation *)&local_b8,puVar3,iVar2,iVar2 + 1,puVar4);
                      goto LAB_00f50d20;
                    }
                  }
                  MessageLocation::MessageLocation((MessageLocation *)&local_b8,puVar3,puVar4,iVar2)
                  ;
                  goto LAB_00f50d20;
                }
              }
              uVar9 = uVar9 + 1;
              if (uVar6 >> 1 <= uVar9) {
                return 0;
              }
              uVar5 = *puVar3;
              lVar11 = (long)iVar10 + 7;
              puVar7 = (uint *)(uVar5 + lVar11);
              uVar12 = (int)uVar9 * 0x18 | 4;
              iVar2 = iVar10 + 0x18;
            } while ((*puVar7 >> 1 & 1) == 0);
            uVar12 = iVar10 - 0x10;
          }
          else {
            lVar11 = 0x1b;
          }
LAB_00f50b9c:
          uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + (long)(int)uVar12 + 7);
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)pIVar1;
            if (puVar4 == *(ulong **)(this + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)pIVar1 = puVar4 + 1;
            *puVar4 = uVar5;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
          }
          uVar5 = *puVar3;
          iVar10 = *(int *)(uVar5 + ((long)(int)(uVar12 + 4) | 7U));
          iVar2 = *(int *)(uVar5 + ((long)(int)(uVar12 + 0xc) | 7U)) >> 1;
          if ((*(uint *)(uVar5 + lVar11) >> 3 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(uint *)(lVar11 + uVar5) >> 6 & 1;
          }
          if ((*(uint *)(lVar11 + uVar5) >> 1 & 1) != 0) {
            iVar2 = FrameSummary::WasmCompiledFrameSummary::GetWasmSourcePosition
                              (*(WasmCode **)
                                **(undefined8 **)
                                  (*(long *)((uVar5 & 0xffffffff00000000 |
                                             (ulong)*(uint *)(uVar5 + (long)(int)(uVar12 + 8) + 7))
                                            + 3) + 0x18),iVar2);
          }
          uVar5 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x6f);
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)pIVar1;
            if (puVar3 == *(ulong **)(this + 0x95a8)) {
              puVar3 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)pIVar1 = puVar3 + 1;
            *puVar3 = uVar5;
          }
          else {
            puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
          }
          iVar2 = WasmModuleObject::GetSourcePosition(puVar3,iVar10 >> 1,iVar2,uVar6);
          uVar5 = *puVar4 & 0xffffffff00000000;
          uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*puVar4 + 0x6f)) + 0x13);
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)pIVar1;
            if (puVar3 == *(ulong **)(this + 0x95a8)) {
              puVar3 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)pIVar1 = puVar3 + 1;
            *puVar3 = uVar5;
          }
          else {
            puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
          }
          MessageLocation::MessageLocation((MessageLocation *)&local_b8,puVar3,iVar2,iVar2 + 1);
LAB_00f50d20:
          param_1[1] = CONCAT44(uStack_ac,uStack_b0);
          *param_1 = local_b8;
          param_1[3] = uStack_a0;
          param_1[2] = CONCAT44(uStack_a4,uStack_a8);
          return 1;
        }
      }
    }
  }
  return 0;
}

