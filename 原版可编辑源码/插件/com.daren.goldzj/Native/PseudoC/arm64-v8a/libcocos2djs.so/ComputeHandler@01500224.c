
/* v8::internal::StoreIC::ComputeHandler(v8::internal::LookupIterator*) */

undefined1  [16] __thiscall
v8::internal::StoreIC::ComputeHandler(StoreIC *this,LookupIterator *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  CanonicalHandleScope *this_00;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  Isolate *pIVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong local_70;
  char local_68;
  undefined8 local_58;
  ulong local_38;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
    puVar17 = *(ulong **)(param_1 + 0x38);
    uVar12 = *puVar17 & 0xffffffff00000000;
    uVar4 = *(uint *)((uVar12 | 0x13) + (ulong)*(uint *)(*puVar17 - 1));
    uVar14 = uVar12 | uVar4;
    if ((uVar4 & 1) != 0) {
      do {
        if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa2) {
          if (((uVar14 & 1) != 0) &&
             (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x439)) {
            uVar14 = uVar14 & 0xffffffff00000000 |
                     (ulong)*(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb))
                                     + 3);
          }
          break;
        }
        puVar1 = (uint *)(uVar14 + 0x13);
        uVar14 = uVar12 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar15 = *(ulong *)(uVar12 + 0xa0);
    if (*(uint *)(uVar14 + 0x23) != (uint)uVar15) {
      uVar15 = uVar12 | *(uint *)((uVar12 | *(uint *)(uVar14 + 0x23)) + 0xf);
    }
    uVar12 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1);
    if (((uVar12 & 1) == 0) || ((*(byte *)(uVar15 + 0x23) >> 3 & 1) != 0)) {
      pIVar5 = *(Isolate **)(this + 8);
      uVar6 = *(undefined8 *)(this + 0x20);
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
        *puVar8 = 0x14;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),0x14);
      }
LAB_015005f4:
      uVar9 = 1;
      uVar10 = 0;
      goto LAB_01500828;
    }
    pIVar5 = *(Isolate **)(this + 8);
    pIVar16 = pIVar5 + 0x95a0;
    if (((*(uint *)(uVar15 + 7) & 1) != 0) && (*(uint *)(uVar15 + 7) == *(uint *)(pIVar5 + 0xa0))) {
      this_00 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
      if (this_00 != (CanonicalHandleScope *)0x0) goto LAB_015009bc;
      goto LAB_015009dc;
    }
    this_00 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
    if (this_00 != (CanonicalHandleScope *)0x0) {
      uVar12 = 0x12;
      goto LAB_015009c4;
    }
    puVar8 = *(ulong **)pIVar16;
    if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar5);
    }
    puVar17 = puVar8 + 1;
    uVar12 = 0x12;
LAB_015009fc:
    *(ulong **)pIVar16 = puVar17;
    *puVar8 = uVar12;
    break;
  case 3:
    puVar8 = (ulong *)StoreHandler::StoreProxy
                                (*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x20),
                                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
    break;
  case 5:
    puVar7 = *(ulong **)(param_1 + 0x30);
    puVar17 = *(ulong **)(param_1 + 0x38);
    if ((*(uint *)((*puVar17 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(*puVar17 - 1)) >> 0x15 &
        1) == 0) {
      puVar8 = (ulong *)LookupIterator::GetAccessors();
      uVar12 = *puVar8;
      if ((uVar12 & 1) != 0) {
        uVar14 = uVar12 & 0xffffffff00000000;
        if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x51) {
          if ((*(uint *)(uVar12 + 0xf) == 0) ||
             (*(long *)((uVar14 | *(uint *)(uVar12 + 0xf)) + 3) == 0)) {
            pcVar13 = "setter == kNullAddress";
          }
          else if (((*(byte *)(uVar12 + 7) >> 3 & 1) == 0) ||
                  (uVar12 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1),
                  (uVar12 & 1) != 0)) {
            uVar12 = AccessorInfo::IsCompatibleReceiverMap(puVar8,*(undefined8 *)(this + 0x20));
            if ((uVar12 & 1) != 0) {
              pIVar5 = *(Isolate **)(this + 8);
              uVar4 = LookupIterator::GetAccessorIndex(param_1);
              uVar12 = -(ulong)((uVar4 & 0x3ffffff) >> 0x19) & 0xfffffffe00000000 |
                       (ulong)(uVar4 << 6 | 4) << 1;
              if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar8 = *(ulong **)(pIVar5 + 0x95a0);
                if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
                  puVar8 = (ulong *)HandleScope::Extend(pIVar5);
                }
                *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
                *puVar8 = uVar12;
              }
              else {
                puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar12);
              }
              if (TracingFlags::runtime_stats != 0) {
                RuntimeCallStats::CorrectCurrentCounterId
                          ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),
                           0x42a,0);
              }
              if ((puVar7 != puVar17) &&
                 (((puVar7 == (ulong *)0x0 || (puVar17 == (ulong *)0x0)) || (*puVar7 != *puVar17))))
              {
                if (TracingFlags::runtime_stats != 0) {
                  RuntimeCallStats::CorrectCurrentCounterId
                            ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),
                             0x42b,0);
                }
                pIVar5 = *(Isolate **)(this + 8);
                uVar6 = *(undefined8 *)(this + 0x20);
                goto LAB_015005f4;
              }
              break;
            }
            pcVar13 = "incompatible receiver type";
          }
          else {
            pcVar13 = "special data property in prototype chain";
          }
        }
        else {
          if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x52) goto LAB_0150099c;
          pIVar5 = *(Isolate **)(this + 8);
          uVar4 = *(uint *)(uVar12 + 7);
          uVar14 = uVar14 | uVar4;
          if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar5 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar5);
            }
            *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar14;
            if ((uVar4 & 1) != 0) goto LAB_01500868;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar14);
            uVar14 = *puVar8;
            if ((uVar14 & 1) != 0) {
LAB_01500868:
              uVar12 = uVar14 & 0xffffffff00000000 | 7;
              if ((*(short *)(uVar12 + *(uint *)(uVar14 - 1)) == 0x439) ||
                 (*(short *)(uVar12 + *(uint *)(uVar14 - 1)) == 0x4e)) {
                if ((*(short *)(uVar12 + *(uint *)(uVar14 - 1)) == 0x4e) &&
                   (((*(uint *)(uVar14 + 0x27) & 1) != 0 &&
                    (uVar15 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x27),
                    *(short *)(uVar12 + *(uint *)(uVar15 - 1)) == 0xa6)))) {
                  local_70 = uVar15;
                  uVar12 = SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_70);
                  if ((uVar12 & 1) != 0) goto LAB_0150099c;
                  uVar14 = *puVar8;
                  if ((uVar14 & 1) != 0) goto LAB_015008d4;
                }
                else {
LAB_015008d4:
                  if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1))
                      == 0x439) {
                    local_38 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
                    uVar12 = SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_38);
                    if ((uVar12 & 1) != 0) goto LAB_0150099c;
                  }
                }
                CallOptimization::CallOptimization
                          ((CallOptimization *)&local_70,*(undefined8 *)(this + 8),puVar8);
                if (local_68 == '\0') {
                  uVar12 = *puVar8;
                  if (((uVar12 & 1) == 0) ||
                     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1))
                      != 0x4e)) {
                    pIVar5 = *(Isolate **)(this + 8);
                    uVar4 = LookupIterator::GetAccessorIndex(param_1);
                    uVar12 = -(ulong)((uVar4 & 0x3ffffff) >> 0x19) & 0xfffffffe00000000 |
                             (ulong)(uVar4 << 6 | 3) << 1;
                    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar5 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar5);
                      }
                      *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar12;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),
                                                   uVar12);
                    }
                    if (TracingFlags::runtime_stats != 0) {
                      RuntimeCallStats::CorrectCurrentCounterId
                                ((RuntimeCallStats *)
                                 (*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x423,0);
                    }
                    if ((puVar7 == puVar17) ||
                       (((puVar7 != (ulong *)0x0 && (puVar17 != (ulong *)0x0)) &&
                        (*puVar7 == *puVar17)))) break;
                    if (TracingFlags::runtime_stats != 0) {
                      RuntimeCallStats::CorrectCurrentCounterId
                                ((RuntimeCallStats *)
                                 (*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x424,0);
                    }
                    uVar6 = *(undefined8 *)(this + 8);
                    uVar9 = *(undefined8 *)(this + 0x20);
                    uVar10 = 1;
                    uVar11 = 1;
                    local_58 = 0;
                    puVar7 = (ulong *)0x0;
                    goto LAB_01500cd0;
                  }
                  pcVar13 = "setter non-simple template";
                }
                else {
                  uVar12 = CallOptimization::IsCompatibleReceiver
                                     ((CallOptimization *)&local_70,puVar7,puVar17);
                  if ((uVar12 & 1) != 0) {
                    CallOptimization::LookupHolderOfExpectedType
                              ((CallOptimization *)&local_70,*(undefined8 *)(this + 0x20),&local_38)
                    ;
                    pIVar5 = *(Isolate **)(this + 8);
                    uVar12 = 10;
                    if ((int)local_38 != 1) {
                      uVar12 = 0xc;
                    }
                    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar5 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar5);
                      }
                      *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar12;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),
                                                   uVar12);
                    }
                    uVar12 = CallOptimization::GetAccessorContext
                                       ((CallOptimization *)&local_70,
                                        *puVar17 & 0xffffffff00000000 |
                                        (ulong)*(uint *)(*puVar17 - 1));
                    pIVar5 = *(Isolate **)(this + 8);
                    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar7 = *(ulong **)(pIVar5 + 0x95a0);
                      if (puVar7 == *(ulong **)(pIVar5 + 0x95a8)) {
                        puVar7 = (ulong *)HandleScope::Extend(pIVar5);
                      }
                      *(ulong **)(pIVar5 + 0x95a0) = puVar7 + 1;
                      *puVar7 = uVar12;
                    }
                    else {
                      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),
                                                   uVar12);
                    }
                    if (TracingFlags::runtime_stats != 0) {
                      RuntimeCallStats::CorrectCurrentCounterId
                                ((RuntimeCallStats *)
                                 (*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x425,0);
                    }
                    uVar6 = *(undefined8 *)(this + 8);
                    uVar9 = *(undefined8 *)(this + 0x20);
                    uVar10 = 0;
                    uVar11 = 0;
LAB_01500cd0:
                    puVar8 = (ulong *)StoreHandler::StoreThroughPrototype
                                                (uVar6,uVar9,puVar17,puVar8,uVar10,local_58,uVar11,
                                                 puVar7);
                    break;
                  }
                  pcVar13 = "incompatible receiver";
                }
                *(char **)(this + 0x48) = pcVar13;
                if (TracingFlags::runtime_stats != 0) {
                  RuntimeCallStats::CorrectCurrentCounterId
                            ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),
                             0x422,0);
                }
                pIVar5 = *(Isolate **)(this + 8);
                if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar8 = *(ulong **)(pIVar5 + 0x95a0);
                  if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
                    puVar8 = (ulong *)HandleScope::Extend(pIVar5);
                  }
                  *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
                  *puVar8 = 0x14;
                }
                else {
                  puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),0x14);
                }
                break;
              }
            }
          }
          pcVar13 = "setter not a function";
        }
        goto LAB_01500998;
      }
    }
    else {
      pcVar13 = "accessor on slow map";
LAB_01500998:
      *(char **)(this + 0x48) = pcVar13;
    }
LAB_0150099c:
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x422,0);
    }
    pIVar5 = *(Isolate **)(this + 8);
    this_00 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
    if (this_00 == (CanonicalHandleScope *)0x0) {
      pIVar16 = pIVar5 + 0x95a0;
LAB_015009dc:
      puVar8 = *(ulong **)pIVar16;
      if (puVar8 == *(ulong **)(pIVar16 + 8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar5);
      }
      puVar17 = puVar8 + 1;
      uVar12 = 0x14;
      goto LAB_015009fc;
    }
LAB_015009bc:
    uVar12 = 0x14;
LAB_015009c4:
    puVar8 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar12);
    break;
  case 6:
    uVar12 = **(ulong **)(param_1 + 0x38);
    if ((*(uint *)((*(ulong *)(param_1 + 0x18) | 0xb) + (ulong)*(uint *)(uVar12 - 1)) >> 0x15 & 1)
        != 0) {
      if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0xaa) {
        if (TracingFlags::runtime_stats != 0) {
          RuntimeCallStats::CorrectCurrentCounterId
                    ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x427,0)
          ;
        }
        uVar6 = LookupIterator::GetPropertyCell(param_1);
LAB_01500798:
        auVar18 = StoreHandler::StoreGlobal(uVar6);
        goto LAB_015007ac;
      }
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x42c,0);
      }
      pIVar5 = *(Isolate **)(this + 8);
      this_00 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
      if (this_00 == (CanonicalHandleScope *)0x0) {
        pIVar16 = pIVar5 + 0x95a0;
        puVar8 = *(ulong **)pIVar16;
        if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar5);
        }
        puVar17 = puVar8 + 1;
        uVar12 = 0x10;
        goto LAB_015009fc;
      }
      uVar12 = 0x10;
      goto LAB_015009c4;
    }
    if (((byte)param_1[0x10] >> 1 & 1) != 0) {
      pcVar13 = "constant property";
      goto LAB_01500998;
    }
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x426,0);
    }
    uVar2 = LookupIterator::GetFieldDescriptorIndex(param_1);
    uVar3 = LookupIterator::GetFieldIndex(param_1);
    uVar4 = 1;
    if (((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) && (uVar4 = 1, *(int *)(this + 100) != 0xc)) {
      uVar4 = 2;
    }
    pIVar5 = *(Isolate **)(this + 8);
    this_00 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
    uVar12 = -(ulong)((uVar2 & 0x3ffffff) >> 0x19) & 0xfffffffe00000000 |
             (ulong)((uVar3 & 0x2000) << 3 | uVar2 << 6 | (uVar3 & 0x1ffc) << 0x12 |
                     (*(uint *)(param_1 + 0x10) & 0x1c0) << 0xb | uVar4) << 1;
    if (this_00 != (CanonicalHandleScope *)0x0) goto LAB_015009c4;
    puVar8 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar12;
    break;
  case 7:
    puVar17 = *(ulong **)(param_1 + 0x30);
    uVar12 = *puVar17;
    if ((uVar12 & 1) != 0) {
      pIVar5 = *(Isolate **)(param_1 + 0x18);
      if ((*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0xab) &&
         (pIVar16 = pIVar5 + *(uint *)(((ulong)pIVar5 | 0xf) + (ulong)*(uint *)(uVar12 - 1)),
         *(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(pIVar16 + -1)) == 0xaa)) {
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar17 = *(ulong **)(pIVar5 + 0x95a0);
          if (puVar17 == *(ulong **)(pIVar5 + 0x95a8)) {
            puVar17 = (ulong *)HandleScope::Extend(pIVar5);
          }
          *(ulong **)(pIVar5 + 0x95a0) = puVar17 + 1;
          *puVar17 = (ulong)pIVar16;
        }
        else {
          puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),(ulong)pIVar16);
        }
      }
    }
    if (*(short *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) != 0xaa) {
      auVar18 = StoreHandler::StoreTransition
                          (*(undefined8 *)(this + 8),*(undefined8 *)(param_1 + 0x28));
LAB_015007ac:
      uVar12 = auVar18._0_8_ & 0xffffffff00000000;
      goto LAB_01500a08;
    }
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x428,0);
    }
    if (*(short *)((**(ulong **)(this + 0x20) & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)(**(ulong **)(this + 0x20) - 1)) == 0xaa) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      goto LAB_01500798;
    }
    pIVar5 = *(Isolate **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar8 + 1;
      *puVar8 = 0xe;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),0xe);
    }
    pIVar5 = *(Isolate **)(this + 8);
    uVar6 = *(undefined8 *)(this + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = 0;
LAB_01500828:
    uVar6 = StoreHandler::StoreThroughPrototype(pIVar5,uVar6,puVar17,puVar8,uVar9,uVar10,1,0);
    auVar18._8_8_ = uVar6;
    auVar18._0_8_ = 1;
    uVar12 = 0;
    goto LAB_01500a08;
  default:
    puVar8 = (ulong *)0x0;
  }
  uVar12 = 0;
  auVar18._8_8_ = puVar8;
  auVar18._0_8_ = 1;
LAB_01500a08:
  auVar19._0_8_ = uVar12 | auVar18._0_8_ & 0xffffffff;
  auVar19._8_8_ = auVar18._8_8_;
  return auVar19;
}

