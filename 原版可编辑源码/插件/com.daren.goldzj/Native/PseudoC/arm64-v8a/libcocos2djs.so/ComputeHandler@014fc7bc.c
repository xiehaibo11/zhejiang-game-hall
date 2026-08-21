
/* v8::internal::LoadIC::ComputeHandler(v8::internal::LookupIterator*) */

ulong * __thiscall v8::internal::LoadIC::ComputeHandler(LoadIC *this,LookupIterator *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  Builtins *this_00;
  CanonicalHandleScope *pCVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  int iVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  Isolate *pIVar19;
  ulong *puVar20;
  Isolate *pIVar21;
  LoadIC *pLVar22;
  ulong *puVar23;
  ulong local_90;
  ulong *local_88;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  
  puVar23 = *(ulong **)(param_1 + 0x30);
  pLVar22 = this + 8;
  pIVar21 = *(Isolate **)pLVar22;
  pIVar8 = pIVar21 + 0x9520;
  if (((*(int *)(this + 0x1c) != 9) && (*(long *)(param_1 + 0x48) == -1)) &&
     (uVar14 = *puVar23, (uVar14 & 1) != 0)) {
    uVar16 = uVar14 & 0xffffffff00000000;
    uVar17 = uVar16 | 7;
    if ((*(ushort *)(uVar17 + *(uint *)(uVar14 - 1)) < 0x40) &&
       (**(int **)(param_1 + 0x20) == *(int *)(pIVar21 + 0x7b8))) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)pIVar8 + 0x58a0),0x41c,0);
        pIVar21 = *(Isolate **)pLVar22;
      }
      this_00 = (Builtins *)(pIVar21 + 0x9e00);
      iVar9 = 0x77;
LAB_014fc860:
      puVar23 = (ulong *)Builtins::builtin_handle(this_00,iVar9);
      return puVar23;
    }
    if (((*(short *)(uVar17 + *(uint *)(uVar14 - 1)) == 0x411) &&
        ((*(uint *)(uVar14 + 0xb) & 1) != 0)) &&
       ((*(ushort *)(uVar17 + *(uint *)((uVar16 | *(uint *)(uVar14 + 0xb)) - 1)) < 0x40 &&
        (**(int **)(param_1 + 0x20) == *(int *)(pIVar21 + 0x7b8))))) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)pIVar8 + 0x58a0),0x41d,0);
        pIVar21 = *(Isolate **)pLVar22;
      }
      this_00 = (Builtins *)(pIVar21 + 0x9e00);
      iVar9 = 0x78;
      goto LAB_014fc860;
    }
    if (((*(short *)(uVar17 + *(uint *)(uVar14 - 1)) == 0x439) &&
        (**(int **)(param_1 + 0x20) == *(int *)(pIVar21 + 0x908))) &&
       ((((uVar17 = uVar16 | 9, *(char *)(uVar17 + *(uint *)(uVar14 - 1)) < '\0' &&
          ((*(byte *)(uVar17 + *(uint *)(uVar14 - 1)) >> 6 & 1) != 0)) ||
         (((*(uint *)((uVar16 | *(uint *)(uVar14 + 0xb)) + 0x1b) & 0x1f) - 0xd & 0xff) < 4)) &&
        ((*(byte *)(uVar17 + *(uint *)(uVar14 - 1)) & 1) == 0)))) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)pIVar8 + 0x58a0),0x405,0);
        pIVar21 = *(Isolate **)pLVar22;
      }
      this_00 = (Builtins *)(pIVar21 + 0x9e00);
      iVar9 = 0x76;
      goto LAB_014fc860;
    }
  }
  uVar18 = *(undefined8 *)(this + 0x20);
  puVar20 = *(ulong **)(param_1 + 0x38);
  if (*(int *)(param_1 + 4) == 3) {
    if (puVar23 == puVar20) {
      bVar4 = true;
      pCVar6 = *(CanonicalHandleScope **)(pIVar21 + 0x95b8);
    }
    else {
      bVar4 = false;
      if ((puVar23 != (ulong *)0x0) && (puVar20 != (ulong *)0x0)) {
        bVar4 = *puVar23 == *puVar20;
      }
      pCVar6 = *(CanonicalHandleScope **)(pIVar21 + 0x95b8);
    }
    if (pCVar6 == (CanonicalHandleScope *)0x0) {
      puVar23 = *(ulong **)(pIVar21 + 0x95a0);
      if (puVar23 == *(ulong **)(pIVar21 + 0x95a8)) {
        puVar23 = (ulong *)HandleScope::Extend(pIVar21);
      }
      *(ulong **)(pIVar21 + 0x95a0) = puVar23 + 1;
      *puVar23 = 0x18;
    }
    else {
      puVar23 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,0x18);
    }
    if (bVar4) {
      return puVar23;
    }
    goto LAB_014fca28;
  }
  if (puVar23 == puVar20) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if ((puVar23 != (ulong *)0x0) && (puVar20 != (ulong *)0x0)) {
      bVar4 = *puVar23 == *puVar20;
    }
  }
  puVar11 = (ulong *)0x0;
  switch(*(int *)(param_1 + 4)) {
  case 0:
  case 4:
  case 7:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)pIVar8 + 0x58a0),0x411,0);
      pIVar21 = *(Isolate **)pLVar22;
    }
    pCVar6 = *(CanonicalHandleScope **)(pIVar21 + 0x95b8);
    if (pCVar6 == (CanonicalHandleScope *)0x0) {
      pIVar19 = pIVar21 + 0x95a0;
      puVar23 = *(ulong **)pIVar19;
      if (puVar23 == *(ulong **)(pIVar21 + 0x95a8)) {
        puVar23 = (ulong *)HandleScope::Extend(pIVar21);
      }
      uVar14 = 0x1a;
      goto LAB_014fcc74;
    }
    uVar14 = 0x1a;
    break;
  case 2:
    if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar23 = *(ulong **)(pIVar21 + 0x95a0);
      if (puVar23 == *(ulong **)(pIVar21 + 0x95a8)) {
        puVar23 = (ulong *)HandleScope::Extend(pIVar21);
      }
      *(ulong **)(pIVar21 + 0x95a0) = puVar23 + 1;
      *puVar23 = 0x14;
    }
    else {
      puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),0x14);
    }
    uVar14 = *puVar20 & 0xffffffff00000000;
    uVar5 = *(uint *)((uVar14 | 0x13) + (ulong)*(uint *)(*puVar20 - 1));
    uVar16 = uVar14 | uVar5;
    if ((uVar5 & 1) != 0) {
      do {
        if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0xa2) {
          if (((uVar16 & 1) != 0) &&
             (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x439)) {
            uVar16 = uVar16 & 0xffffffff00000000 |
                     (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb))
                                     + 3);
          }
          break;
        }
        puVar1 = (uint *)(uVar16 + 0x13);
        uVar16 = uVar14 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar17 = *(ulong *)(uVar14 + 0xa0);
    if (*(uint *)(uVar16 + 0x23) != (uint)uVar17) {
      uVar17 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar16 + 0x23)) + 0xf);
    }
    if ((*(byte *)(uVar17 + 0x23) >> 3 & 1) != 0) {
      lVar15 = *(long *)pLVar22;
      local_90 = CONCAT44(local_90._4_4_,1);
      if ((!bVar4) || (local_88 = (ulong *)(lVar15 + 0xb0), (*(uint *)(this + 0x1c) | 1) == 7)) {
        local_90 = 0;
        local_88 = puVar20;
      }
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(lVar15 + 0x9520) + 0x58a0),0x417,0);
        lVar15 = *(long *)pLVar22;
      }
      puVar23 = (ulong *)LoadHandler::LoadFullChain(lVar15,uVar18,&local_90,puVar23);
      return puVar23;
    }
    if (bVar4) {
      if (TracingFlags::runtime_stats == 0) {
        return puVar23;
      }
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x412,0);
      return puVar23;
    }
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x413,0);
    }
    goto LAB_014fca28;
  default:
    goto switchD_014fca90_caseD_3;
  case 5:
    local_68 = 0;
    uVar14 = Accessors::IsJSObjectFieldAccessor
                       (pIVar21,uVar18,*(undefined8 *)(param_1 + 0x20),&local_68);
    if ((uVar14 & 1) == 0) {
      uVar14 = *puVar20;
      uVar16 = uVar14 & 0xffffffff00000000;
      if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xac) {
        puVar11 = (ulong *)LookupIterator::GetAccessors();
        uVar14 = *puVar11;
        if (((uVar14 & 1) == 0) ||
           (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x52)) {
          if (((*(uint *)(uVar14 + 0x13) == 0) ||
              (((*(long *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x13)) + 3) == 0
                || (uVar14 = AccessorInfo::IsCompatibleReceiverMap(puVar11,uVar18),
                   (uVar14 & 1) == 0)) ||
               ((*(uint *)((*puVar20 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(*puVar20 - 1))
                 >> 0x15 & 1) != 0)))) ||
             (((*(byte *)(*puVar11 + 7) >> 4 & 1) != 0 &&
              ((uVar14 = *puVar23, (uVar14 & 1) == 0 ||
               (*(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9
               )))))) goto LAB_014fd384;
          pIVar8 = *(Isolate **)pLVar22;
          uVar5 = LookupIterator::GetAccessorIndex(param_1);
          uVar14 = -(ulong)((uVar5 & 0x3ffffff) >> 0x19) & 0xfffffffe00000000 |
                   (ulong)(uVar5 << 6 | 7) << 1;
          if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar23 = *(ulong **)(pIVar8 + 0x95a0);
            if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
              puVar23 = (ulong *)HandleScope::Extend(pIVar8);
            }
            *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
            *puVar23 = uVar14;
          }
          else {
            puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
          }
          if (TracingFlags::runtime_stats != 0) {
            RuntimeCallStats::CorrectCurrentCounterId
                      ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x414,0);
          }
          if (bVar4) {
            return puVar23;
          }
          if (TracingFlags::runtime_stats != 0) {
            RuntimeCallStats::CorrectCurrentCounterId
                      ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x415,0);
          }
          goto LAB_014fd548;
        }
        uVar14 = LookupIterator::TryLookupCachedProperty(param_1);
        if ((uVar14 & 1) != 0) {
          puVar23 = (ulong *)ComputeHandler(this,param_1);
          return puVar23;
        }
        pIVar8 = *(Isolate **)pLVar22;
        uVar5 = *(uint *)(*puVar11 + 3);
        uVar14 = *puVar11 & 0xffffffff00000000 | (ulong)uVar5;
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar23 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar23 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
          *puVar23 = uVar14;
          if ((uVar5 & 1) != 0) goto LAB_014fd25c;
        }
        else {
          puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
          uVar14 = *puVar23;
          if ((uVar14 & 1) != 0) {
LAB_014fd25c:
            uVar16 = uVar14 & 0xffffffff00000000 | 7;
            if ((*(short *)(uVar16 + *(uint *)(uVar14 - 1)) == 0x439) ||
               (*(short *)(uVar16 + *(uint *)(uVar14 - 1)) == 0x4e)) {
              if ((*(short *)(uVar16 + *(uint *)(uVar14 - 1)) == 0x4e) &&
                 (((*(uint *)(uVar14 + 0x27) & 1) != 0 &&
                  (uVar17 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x27),
                  *(short *)(uVar16 + *(uint *)(uVar17 - 1)) == 0xa6)))) {
                local_90 = uVar17;
                uVar14 = SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_90);
                if ((uVar14 & 1) != 0) goto LAB_014fd384;
                uVar14 = *puVar23;
                if ((uVar14 & 1) != 0) goto LAB_014fd2c8;
              }
              else {
LAB_014fd2c8:
                if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) ==
                    0x439) {
                  local_70 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
                  uVar14 = SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_70);
                  if ((uVar14 & 1) != 0) goto LAB_014fd384;
                }
              }
              CallOptimization::CallOptimization
                        ((CallOptimization *)&local_90,*(undefined8 *)pLVar22,puVar23);
              if ((char)local_88 == '\0') {
                uVar14 = *puVar20;
                if ((*(uint *)((uVar14 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(uVar14 - 1))
                     >> 0x15 & 1) == 0) {
                  pIVar8 = *(Isolate **)pLVar22;
                  uVar5 = LookupIterator::GetAccessorIndex(param_1);
                  uVar14 = -(ulong)((uVar5 & 0x3ffffff) >> 0x19) & 0xfffffffe00000000 |
                           (ulong)(uVar5 << 6 | 6) << 1;
                  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar23 = *(ulong **)(pIVar8 + 0x95a0);
                    if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
                      puVar23 = (ulong *)HandleScope::Extend(pIVar8);
                    }
                    *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
                    *puVar23 = uVar14;
                  }
                  else {
                    puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                                 (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14
                                                 );
                  }
                  if (TracingFlags::runtime_stats != 0) {
                    RuntimeCallStats::CorrectCurrentCounterId
                              ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),
                               0x407,0);
                  }
                  if (bVar4) {
                    return puVar23;
                  }
                  if (TracingFlags::runtime_stats != 0) {
                    lVar15 = *(long *)pLVar22;
                    uVar7 = 0x408;
LAB_014fd81c:
                    RuntimeCallStats::CorrectCurrentCounterId
                              ((RuntimeCallStats *)(*(long *)(lVar15 + 0x9520) + 0x58a0),uVar7,0);
                  }
LAB_014fd548:
                  uVar7 = *(undefined8 *)pLVar22;
                  uVar10 = 1;
                  local_78 = 0;
                }
                else {
                  if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1))
                      != 0xaa) {
                    pIVar8 = *(Isolate **)pLVar22;
                    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar23 = *(ulong **)(pIVar8 + 0x95a0);
                      if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
                        puVar23 = (ulong *)HandleScope::Extend(pIVar8);
                      }
                      *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
                      *puVar23 = 4;
                    }
                    else {
                      puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),4);
                    }
                    if (TracingFlags::runtime_stats != 0) {
                      RuntimeCallStats::CorrectCurrentCounterId
                                ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0)
                                 ,0x418,0);
                    }
                    if (bVar4) {
                      return puVar23;
                    }
                    if (TracingFlags::runtime_stats != 0) {
                      lVar15 = *(long *)pLVar22;
                      uVar7 = 0x419;
                      goto LAB_014fd81c;
                    }
                    goto LAB_014fd548;
                  }
                  if (TracingFlags::runtime_stats != 0) {
                    RuntimeCallStats::CorrectCurrentCounterId
                              ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),
                               0x410,0);
                  }
                  pIVar8 = *(Isolate **)pLVar22;
                  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar23 = *(ulong **)(pIVar8 + 0x95a0);
                    if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
                      puVar23 = (ulong *)HandleScope::Extend(pIVar8);
                    }
                    *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
                    *puVar23 = 6;
                  }
                  else {
                    puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                                 (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),6);
                  }
                  uVar7 = *(undefined8 *)pLVar22;
                  local_78 = LookupIterator::GetPropertyCell(param_1);
                  uVar10 = 0;
                }
                uVar12 = 1;
                puVar11 = (ulong *)0x0;
LAB_014fd568:
                puVar23 = (ulong *)LoadHandler::LoadFromPrototype
                                             (uVar7,uVar18,puVar20,puVar23,uVar10,local_78,uVar12,
                                              puVar11);
                return puVar23;
              }
              uVar14 = CallOptimization::IsCompatibleReceiverMap
                                 ((CallOptimization *)&local_90,uVar18,puVar20);
              if (((uVar14 & 1) != 0) &&
                 ((*(uint *)((*puVar20 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(*puVar20 - 1))
                   >> 0x15 & 1) == 0)) {
                CallOptimization::LookupHolderOfExpectedType
                          ((CallOptimization *)&local_90,uVar18,&local_70);
                pIVar8 = *(Isolate **)pLVar22;
                uVar14 = 0x10;
                if ((int)local_70 != 1) {
                  uVar14 = 0x12;
                }
                if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar23 = *(ulong **)(pIVar8 + 0x95a0);
                  if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
                    puVar23 = (ulong *)HandleScope::Extend(pIVar8);
                  }
                  *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
                  *puVar23 = uVar14;
                }
                else {
                  puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
                }
                uVar14 = CallOptimization::GetAccessorContext
                                   ((CallOptimization *)&local_90,
                                    *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 - 1));
                pIVar8 = *(Isolate **)pLVar22;
                if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar11 = *(ulong **)(pIVar8 + 0x95a0);
                  if (puVar11 == *(ulong **)(pIVar8 + 0x95a8)) {
                    puVar11 = (ulong *)HandleScope::Extend(pIVar8);
                  }
                  *(ulong **)(pIVar8 + 0x95a0) = puVar11 + 1;
                  *puVar11 = uVar14;
                }
                else {
                  puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
                }
                if (TracingFlags::runtime_stats != 0) {
                  RuntimeCallStats::CorrectCurrentCounterId
                            ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),
                             0x409,0);
                }
                uVar7 = *(undefined8 *)pLVar22;
                uVar10 = 0;
                uVar12 = 0;
                goto LAB_014fd568;
              }
            }
          }
        }
LAB_014fd384:
        if (TracingFlags::runtime_stats != 0) {
          RuntimeCallStats::CorrectCurrentCounterId
                    ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x41b,0);
        }
        pIVar8 = *(Isolate **)pLVar22;
        pCVar6 = *(CanonicalHandleScope **)(pIVar8 + 0x95b8);
        if (pCVar6 == (CanonicalHandleScope *)0x0) {
          pIVar19 = pIVar8 + 0x95a0;
          puVar23 = *(ulong **)pIVar19;
          if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar23 = (ulong *)HandleScope::Extend(pIVar8);
          }
          uVar14 = 0x16;
LAB_014fcc74:
          *(ulong **)pIVar19 = puVar23 + 1;
          *puVar23 = uVar14;
          return puVar23;
        }
        uVar14 = 0x16;
        break;
      }
      pIVar8 = *(Isolate **)pLVar22;
      uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)(uVar14 + 0xb)) + 3);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar23 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar23 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
        *puVar23 = uVar16;
      }
      else {
        puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar16);
        uVar16 = *puVar23;
      }
      puVar23 = *(ulong **)(param_1 + 0x20);
      uVar14 = *puVar23;
      uVar5 = Object::GetSimpleHash(uVar14);
      if ((uVar5 & 1) != 0) {
        local_90 = uVar14;
        uVar5 = JSReceiver::GetIdentityHash((JSReceiver *)&local_90);
      }
      uVar2 = *(uint *)(pIVar21 + 0xa0);
      uVar3 = (*(int *)(uVar16 + 0xf) >> 1) - 1;
      uVar5 = uVar3 & (int)uVar5 >> 1;
      uVar13 = *(uint *)(uVar16 + 7 + (long)(int)(uVar5 * 8 + 0xc));
      if (uVar13 != uVar2) {
        iVar9 = 1;
        do {
          local_90 = *puVar23;
          uVar14 = Object::SameValue((Object *)&local_90,uVar16 & 0xffffffff00000000 | (ulong)uVar13
                                    );
          if ((uVar14 & 1) != 0) goto LAB_014fd000;
          uVar5 = uVar5 + iVar9 & uVar3;
          uVar13 = *(uint *)(uVar16 + 7 + (long)(int)(uVar5 * 8 + 0xc));
          iVar9 = iVar9 + 1;
        } while (uVar13 != uVar2);
      }
      uVar5 = 0xffffffff;
LAB_014fd000:
      pIVar8 = *(Isolate **)pLVar22;
      uVar5 = uVar5 * 0x80 + 0x10e;
      pCVar6 = *(CanonicalHandleScope **)(pIVar8 + 0x95b8);
      uVar14 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
    }
    else {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x40d,0);
      }
      pIVar8 = *(Isolate **)pLVar22;
      pCVar6 = *(CanonicalHandleScope **)(pIVar8 + 0x95b8);
      uVar14 = (((ulong)(uint)((int)local_68 << 6) & 0x7ff00 |
                local_68 >> 7 & 0x40 | (ulong)((local_68 & 0xc000) == 0x4000) << 7) >> 6) << 7 | 8;
    }
    if (pCVar6 == (CanonicalHandleScope *)0x0) {
      puVar23 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar23 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
      *puVar23 = uVar14;
      return puVar23;
    }
    break;
  case 6:
    uVar14 = *puVar20;
    if ((*(uint *)((*(ulong *)(param_1 + 0x18) | 0xb) + (ulong)*(uint *)(uVar14 - 1)) >> 0x15 & 1)
        == 0) {
      uVar14 = LookupIterator::GetFieldIndex(param_1);
      pIVar8 = *(Isolate **)pLVar22;
      uVar14 = (((ulong)(uint)((int)uVar14 << 6) & 0x7ff00 |
                uVar14 >> 7 & 0x40 | (ulong)((uVar14 & 0xc000) == 0x4000) << 7) >> 6) << 7 | 8;
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar23 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar23 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
        *puVar23 = uVar14;
      }
      else {
        puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
      }
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x40d,0);
      }
      if (bVar4) {
        return puVar23;
      }
      if (TracingFlags::runtime_stats != 0) {
        lVar15 = *(long *)pLVar22;
        uVar7 = 0x40e;
LAB_014fd960:
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(lVar15 + 0x9520) + 0x58a0),uVar7,0);
      }
    }
    else {
      if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0xaa) {
        if (TracingFlags::runtime_stats != 0) {
          RuntimeCallStats::CorrectCurrentCounterId
                    ((RuntimeCallStats *)(*(long *)pIVar8 + 0x58a0),0x40f,0);
          pIVar21 = *(Isolate **)pLVar22;
        }
        if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar23 = *(ulong **)(pIVar21 + 0x95a0);
          if (puVar23 == *(ulong **)(pIVar21 + 0x95a8)) {
            puVar23 = (ulong *)HandleScope::Extend(pIVar21);
          }
          *(ulong **)(pIVar21 + 0x95a0) = puVar23 + 1;
          *puVar23 = 6;
        }
        else {
          puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),6);
        }
        uVar7 = *(undefined8 *)pLVar22;
        puVar11 = (ulong *)LookupIterator::GetPropertyCell(param_1);
        uVar10 = 0;
        goto LAB_014fca44;
      }
      if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar23 = *(ulong **)(pIVar21 + 0x95a0);
        if (puVar23 == *(ulong **)(pIVar21 + 0x95a8)) {
          puVar23 = (ulong *)HandleScope::Extend(pIVar21);
        }
        *(ulong **)(pIVar21 + 0x95a0) = puVar23 + 1;
        *puVar23 = 4;
      }
      else {
        puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),4);
      }
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x418,0);
      }
      if (bVar4) {
        return puVar23;
      }
      if (TracingFlags::runtime_stats != 0) {
        lVar15 = *(long *)pLVar22;
        uVar7 = 0x419;
        goto LAB_014fd960;
      }
    }
    if (!bVar4 && ((byte)param_1[0x10] & 4) != 0) {
      puVar11 = (ulong *)LookupIterator::GetDataValue();
      uVar14 = *puVar11;
      if ((uVar14 & 1) == 0) {
LAB_014fd428:
        if ((uVar14 & 1) != 0) goto LAB_014fd164;
LAB_014fd42c:
        pIVar8 = *(Isolate **)pLVar22;
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar14;
          uVar10 = 1;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
          uVar10 = 1;
        }
      }
      else {
        uVar16 = uVar14 & 0xffffffff00000000 | 7;
        if ((0x3f < *(ushort *)(uVar16 + *(uint *)(uVar14 - 1))) ||
           ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) & 7) != 5)) goto LAB_014fd428;
        pIVar8 = *(Isolate **)pLVar22;
        uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar14;
          goto LAB_014fd428;
        }
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
        uVar14 = *puVar11;
        if ((uVar14 & 1) == 0) goto LAB_014fd42c;
LAB_014fd164:
        uVar16 = uVar14 & 0xffffffff00000000 | 7;
        if ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) < 0x40) &&
           ((0x3f < *(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) ||
            (0x1f < *(ushort *)(uVar16 + *(uint *)(uVar14 - 1)))))) goto LAB_014fca28;
        pIVar8 = *(Isolate **)pLVar22;
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar8);
          }
          uVar10 = 0;
          *(ulong **)(pIVar8 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar14;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
          uVar10 = 0;
        }
      }
      pIVar8 = *(Isolate **)pLVar22;
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar23 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar23 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar23 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar23 + 1;
        *puVar23 = 10;
      }
      else {
        puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),10);
      }
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)pLVar22 + 0x9520) + 0x58a0),0x40c,0);
      }
      uVar7 = *(undefined8 *)pLVar22;
      goto LAB_014fca44;
    }
LAB_014fca28:
    uVar7 = *(undefined8 *)pLVar22;
    uVar10 = 1;
    puVar11 = (ulong *)0x0;
LAB_014fca44:
    puVar23 = (ulong *)LoadHandler::LoadFromPrototype
                                 (uVar7,uVar18,puVar20,puVar23,uVar10,puVar11,1,0);
    return puVar23;
  }
  puVar11 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,uVar14);
switchD_014fca90_caseD_3:
  return puVar11;
}

