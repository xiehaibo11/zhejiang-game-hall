
/* v8::internal::JsonStringifier::Result
   v8::internal::JsonStringifier::Serialize_<false>(v8::internal::Handle<v8::internal::Object>,
   bool, v8::internal::Handle<v8::internal::Object>) */

ulong __thiscall
v8::internal::JsonStringifier::Serialize_<false>
          (JsonStringifier *this,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  IncrementalStringBuilder *pIVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  short *psVar19;
  ulong uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  Factory *pFVar23;
  byte bVar24;
  uint uVar25;
  long lVar26;
  Isolate *pIVar27;
  int iVar28;
  Isolate *pIVar29;
  double dVar30;
  double dVar31;
  LookupIterator local_b8 [88];
  
  lVar26 = *(long *)this;
  uVar7 = GetCurrentStackPosition();
  if ((((uVar7 < *(ulong *)(lVar26 + 0x68)) &&
       (uVar4 = StackGuard::HandleInterrupts((StackGuard *)(*(long *)this + 0x48)), (uVar4 & 1) != 0
       )) && (uVar4 == *(uint *)(*(long *)this + 0x180))) ||
     ((((uVar7 = *param_2, puVar8 = param_2, (uVar7 & 1) != 0 &&
        ((uVar15 = uVar7 & 0xffffffff00000000 | 7, 0xa8 < *(ushort *)(uVar15 + *(uint *)(uVar7 - 1))
         || (*(short *)(uVar15 + *(uint *)(uVar7 - 1)) == 0x41)))) &&
       (puVar8 = (ulong *)ApplyToJsonFunction(this,param_2,param_4), puVar8 == (ulong *)0x0)) ||
      ((*(long *)(this + 0x40) != 0 &&
       (puVar8 = (ulong *)ApplyReplacerFunction(this,puVar8,param_4,param_2), puVar8 == (ulong *)0x0
       )))))) {
LAB_0104f348:
    uVar4 = 2;
    goto switchD_0104f318_caseD_40;
  }
  uVar7 = *puVar8;
  if ((uVar7 & 1) == 0) {
    SerializeSmi(this);
    uVar4 = 1;
    goto switchD_0104f318_caseD_40;
  }
  uVar15 = uVar7 & 0xffffffff00000000;
  sVar3 = *(short *)((uVar15 | *(uint *)(uVar7 - 1)) + 7);
  uVar4 = 0;
  switch(sVar3) {
  case 0x40:
    break;
  case 0x41:
    pFVar23 = *(Factory **)this;
    puVar9 = (undefined8 *)Factory::NewTypeError(pFVar23,0x15,0,0,0);
    Isolate::Throw((Isolate *)pFVar23,*puVar9,0);
    goto LAB_0104f348;
  case 0x42:
    SerializeDouble(this,*(double *)(uVar7 + 3));
    uVar4 = 1;
    break;
  case 0x43:
    uVar4 = *(uint *)(uVar7 + 0x17) >> 1 & 0xff;
    if (uVar4 == 3) {
      iVar6 = *(int *)(this + 0x1c);
      pIVar1 = (IncrementalStringBuilder *)(this + 8);
      lVar26 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      if (*(int *)(this + 0x10) == 0) {
        *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x6e;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x75;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x6c;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x6c;
      }
      else {
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x6e;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x75;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x6c;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x6c;
      }
    }
    else {
      if (uVar4 == 1) {
        iVar6 = *(int *)(this + 0x1c);
        pIVar1 = (IncrementalStringBuilder *)(this + 8);
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x74;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar26 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x72;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          plVar16 = *(long **)(this + 0x28);
          uVar21 = 0x75;
LAB_0104fac4:
          lVar26 = *plVar16;
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = uVar21;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar26 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x65;
          goto LAB_0104fb08;
        }
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x74;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x72;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        plVar16 = *(long **)(this + 0x28);
        uVar22 = 0x75;
      }
      else {
        if (uVar4 != 0) goto LAB_0104f564;
        iVar6 = *(int *)(this + 0x1c);
        pIVar1 = (IncrementalStringBuilder *)(this + 8);
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x66;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar26 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x61;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar26 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar26 + iVar6 + 0xb) = 0x6c;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          plVar16 = *(long **)(this + 0x28);
          uVar21 = 0x73;
          goto LAB_0104fac4;
        }
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x66;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x61;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar26 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x6c;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
          iVar6 = *(int *)(this + 0x1c);
        }
        plVar16 = *(long **)(this + 0x28);
        uVar22 = 0x73;
      }
      lVar26 = *plVar16;
      *(int *)(this + 0x1c) = iVar6 + 1;
      *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = uVar22;
      iVar6 = *(int *)(this + 0x1c);
      if (iVar6 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        iVar6 = *(int *)(this + 0x1c);
      }
      lVar26 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      *(undefined2 *)(lVar26 + (long)iVar6 * 2 + 0xb) = 0x65;
    }
LAB_0104fb08:
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
    }
    break;
  default:
    if (sVar3 == 0x411) {
      uVar7 = SerializeJSPrimitiveWrapper(this,puVar8,param_4);
      return uVar7;
    }
    if (sVar3 != 0x423) {
      if (*(ushort *)((uVar15 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40) {
        SerializeString(this,puVar8);
        uVar4 = 1;
        break;
      }
      if ((*(byte *)((uVar15 | 9) + (ulong)*(uint *)(uVar7 - 1)) >> 1 & 1) == 0) {
        if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa9) {
          uVar7 = SerializeJSProxy(this,puVar8,param_4);
          return uVar7;
        }
        pIVar27 = *(Isolate **)this;
        uVar14 = *(undefined8 *)(pIVar27 + 0x95a0);
        lVar26 = *(long *)(pIVar27 + 0x95a8);
        *(int *)(pIVar27 + 0x95b0) = *(int *)(pIVar27 + 0x95b0) + 1;
        uVar4 = StackPush(this,puVar8,param_4);
        if (uVar4 == 1) {
          if (*(long *)(this + 0x38) == 0) {
            uVar7 = *puVar8;
            uVar15 = uVar7 & 0xffffffff00000000;
            if ((0x411 < *(ushort *)((uVar15 | *(uint *)(uVar7 - 1)) + 7)) &&
               ((*(uint *)((uVar15 | 0xb) + (ulong)*(uint *)(uVar7 - 1)) >> 0x15 & 1) == 0)) {
              pIVar10 = *(Isolate **)this;
              if ((*(int *)(uVar7 + 7) == *(int *)(pIVar10 + 0x168)) ||
                 (*(int *)(uVar7 + 7) == *(int *)(pIVar10 + 1000))) {
                uVar15 = uVar15 | *(uint *)(uVar7 - 1);
                if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar11 = *(ulong **)(pIVar10 + 0x95a0);
                  if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                    puVar11 = (ulong *)HandleScope::Extend(pIVar10);
                  }
                  *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
                  *puVar11 = uVar15;
                }
                else {
                  puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15)
                  ;
                }
                iVar6 = *(int *)(this + 0x1c);
                pIVar1 = (IncrementalStringBuilder *)(this + 8);
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar6 + 1;
                if (*(int *)(this + 0x10) == 0) {
                  *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x7b;
                }
                else {
                  *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x7b;
                }
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                iVar6 = *(int *)(this + 0x50);
                *(int *)(this + 0x50) = iVar6 + 1;
                uVar7 = *puVar11;
                uVar15 = (ulong)(*(uint *)(uVar7 + 0xb) >> 10) & 0x3ff;
                if ((int)uVar15 != 0) {
                  bVar24 = 0;
                  lVar17 = 0xc;
                  do {
                    pIVar10 = *(Isolate **)this;
                    uVar7 = uVar7 & 0xffffffff00000000 |
                            (ulong)*(uint *)(lVar17 + (uVar7 & 0xffffffff00000000 |
                                                      (ulong)*(uint *)(uVar7 + 0x17)) + 3);
                    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar12 = *(ulong **)(pIVar10 + 0x95a0);
                      if (puVar12 == *(ulong **)(pIVar10 + 0x95a8)) {
                        puVar12 = (ulong *)HandleScope::Extend(pIVar10);
                      }
                      *(ulong **)(pIVar10 + 0x95a0) = puVar12 + 1;
                      *puVar12 = uVar7;
                    }
                    else {
                      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),
                                                    uVar7);
                      uVar7 = *puVar12;
                    }
                    if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1))
                        < 0x40) {
                      uVar7 = *puVar11;
                      uVar4 = *(uint *)(lVar17 + (uVar7 & 0xffffffff00000000 |
                                                 (ulong)*(uint *)(uVar7 + 0x17)) + 7);
                      if ((uVar4 >> 5 & 1) == 0) {
                        if (((uVar4 >> 2 & 1) == 0) && (*(int *)(*puVar8 - 1) == (int)uVar7)) {
                          uVar25 = *(int *)((uVar7 & 0xffffffff00000000 | lVar17 + 7U) +
                                           (ulong)*(uint *)(uVar7 + 0x17)) >> 1;
                          uVar5 = uVar25 >> 0x13 & 0x3ff;
                          iVar6 = (uint)*(byte *)(uVar7 + 3) - (uint)*(byte *)(uVar7 + 4);
                          if ((int)uVar5 < iVar6) {
                            uVar20 = (ulong)*(byte *)(uVar7 + 4) << 0x1c;
                            iVar28 = (uVar5 + *(byte *)(uVar7 + 4)) * 4;
                          }
                          else {
                            iVar28 = (uVar5 - iVar6) * 4 + 8;
                            uVar20 = 0x20000000;
                          }
                          uVar25 = uVar25 >> 6 & 7;
                          local_b8[0] = SUB41(uVar25,0);
                          if (4 < uVar25) {
                            uVar14 = Representation::Mnemonic((Representation *)local_b8);
                            PrintF("%s\n",uVar14);
                    /* WARNING: Subroutine does not return */
                            V8_Fatal("unreachable code");
                          }
                          lVar18 = JSObject::FastPropertyAt
                                             (puVar8,uVar4 >> 7 & 7,
                                              (ulong)((int)uVar5 < iVar6) << 0xd |
                                              (long)iVar6 << 0x10 | (long)iVar28 | uVar20 |
                                              *(ulong *)(&DAT_019cca38 + (ulong)uVar25 * 8));
LAB_0105080c:
                          iVar6 = Serialize_<true>(this,lVar18,bVar24,puVar12);
                          if (iVar6 != 2) {
                            bVar24 = bVar24 | iVar6 == 1;
                            goto LAB_01050830;
                          }
                        }
                        else {
                          LookupIterator::PropertyOrElement
                                    (local_b8,*(undefined8 *)this,puVar8,puVar12,3);
                          lVar18 = Object::GetProperty(local_b8,false);
                          if (lVar18 != 0) goto LAB_0105080c;
                        }
                        uVar4 = 2;
                        goto joined_r0x010508f8;
                      }
                    }
LAB_01050830:
                    if (uVar15 * 0xc == lVar17) goto LAB_01050848;
                    uVar7 = *puVar11;
                    lVar17 = lVar17 + 0xc;
                  } while( true );
                }
                *(int *)(this + 0x50) = iVar6;
                goto LAB_0105089c;
              }
            }
          }
          uVar4 = SerializeJSReceiverSlow(this,puVar8);
          if (uVar4 == 1) goto LAB_0104fb44;
        }
        goto joined_r0x010508f8;
      }
LAB_0104f564:
      uVar4 = 0;
      break;
    }
    pIVar27 = *(Isolate **)this;
    uVar14 = *(undefined8 *)(pIVar27 + 0x95a0);
    lVar26 = *(long *)(pIVar27 + 0x95a8);
    *(int *)(pIVar27 + 0x95b0) = *(int *)(pIVar27 + 0x95b0) + 1;
    uVar4 = StackPush(this,puVar8,param_4);
    if (uVar4 != 1) goto joined_r0x010505c8;
    uVar4 = *(uint *)(*puVar8 + 0xb);
    if ((uVar4 & 1) == 0) {
      if ((int)uVar4 < 0) goto LAB_010509e8;
      dVar31 = (double)(ulong)(uVar4 >> 1);
    }
    else {
      uVar15 = *puVar8 & 0xffffffff00000000;
      uVar7 = uVar15 | uVar4;
      if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
LAB_010509e8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","object->length().ToArrayLength(&length)");
      }
      dVar30 = *(double *)(uVar7 + 3);
      dVar31 = dVar30 + 4503599627370496.0;
      if (((ulong)dVar31 >> 0x20 != 0x43300000) || (dVar30 != (double)((ulong)dVar31 & 0xffffffff)))
      goto LAB_010509e8;
    }
    iVar6 = *(int *)(this + 0x1c);
    pIVar1 = (IncrementalStringBuilder *)(this + 8);
    lVar17 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar6 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x5b;
    }
    else {
      *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x5b;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(pIVar1);
    }
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
    uVar25 = SUB84(dVar31,0);
    if (*(long *)(this + 0x40) == 0) {
      uVar7 = *puVar8;
      uVar15 = uVar7 & 0xffffffff00000000;
      bVar24 = *(byte *)((uVar15 | 10) + (ulong)*(uint *)(uVar7 - 1)) >> 3;
      if (bVar24 != 4) {
        if (bVar24 != 2) {
          if (bVar24 == 0) {
            pIVar10 = *(Isolate **)this;
            uVar15 = uVar15 | *(uint *)(uVar7 + 7);
            if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar11 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar11 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
              *puVar11 = uVar15;
            }
            else {
              puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15);
            }
            if (uVar25 != 0) {
              lVar17 = *(long *)this;
              uVar4 = 0;
              do {
                uVar7 = GetCurrentStackPosition();
                if (((uVar7 < *(ulong *)(lVar17 + 0x68)) &&
                    (uVar5 = StackGuard::HandleInterrupts((StackGuard *)(*(long *)this + 0x48)),
                    (uVar5 & 1) != 0)) && (uVar5 == *(uint *)(*(long *)this + 0x180)))
                goto LAB_010505bc;
                if (uVar4 != 0) {
                  iVar6 = *(int *)(this + 0x1c);
                  lVar18 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar6 + 1;
                  if (*(int *)(this + 0x10) == 0) {
                    *(undefined1 *)(lVar18 + iVar6 + 0xb) = 0x2c;
                  }
                  else {
                    *(undefined2 *)(lVar18 + (long)iVar6 * 2 + 0xb) = 0x2c;
                  }
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                }
                if (*(long *)(this + 0x48) != 0) {
                  iVar6 = *(int *)(this + 0x1c);
                  lVar18 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar6 + 1;
                  if (*(int *)(this + 0x10) == 0) {
                    *(undefined1 *)(lVar18 + iVar6 + 0xb) = 10;
                  }
                  else {
                    *(undefined2 *)(lVar18 + (long)iVar6 * 2 + 0xb) = 10;
                  }
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  if (0 < *(int *)(this + 0x50)) {
                    iVar6 = 0;
                    do {
                      psVar19 = *(short **)(this + 0x48);
                      sVar3 = *psVar19;
                      if (*(int *)(this + 0x10) == 0) {
                        while (sVar3 != 0) {
                          psVar19 = psVar19 + 1;
                          iVar28 = *(int *)(this + 0x1c);
                          lVar18 = **(long **)(this + 0x28);
                          *(int *)(this + 0x1c) = iVar28 + 1;
                          *(char *)(lVar18 + iVar28 + 0xb) = (char)sVar3;
                          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                            IncrementalStringBuilder::Extend(pIVar1);
                          }
                          sVar3 = *psVar19;
                        }
                      }
                      else {
                        while (sVar3 != 0) {
                          psVar19 = psVar19 + 1;
                          iVar28 = *(int *)(this + 0x1c);
                          lVar18 = **(long **)(this + 0x28);
                          *(int *)(this + 0x1c) = iVar28 + 1;
                          *(short *)(lVar18 + (long)iVar28 * 2 + 0xb) = sVar3;
                          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                            IncrementalStringBuilder::Extend(pIVar1);
                          }
                          sVar3 = *psVar19;
                        }
                      }
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < *(int *)(this + 0x50));
                  }
                }
                SerializeSmi(this,*puVar11 & 0xffffffff00000000 |
                                  (ulong)*(uint *)(*puVar11 + (long)(int)(uVar4 << 2) + 7));
                uVar4 = uVar4 + 1;
              } while (uVar4 != uVar25);
              goto LAB_01050400;
            }
          }
          goto LAB_0104f7b0;
        }
        pIVar10 = *(Isolate **)this;
        uVar15 = uVar15 | *(uint *)(uVar7 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar15;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15);
        }
        uVar7 = 0;
        if (uVar25 != 0) {
          uVar7 = 0;
          do {
            uVar15 = *puVar8;
            if ((*(int *)(uVar15 + 0xb) != (int)*puVar11) ||
               ((*(byte *)((uVar15 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar15 - 1)) & 0xf8
                ) != 0x10)) goto LAB_0104f7b4;
            iVar6 = (int)uVar7;
            if (iVar6 != 0) {
              iVar28 = *(int *)(this + 0x1c);
              lVar17 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar28 + 1;
              if (*(int *)(this + 0x10) == 0) {
                *(undefined1 *)(lVar17 + iVar28 + 0xb) = 0x2c;
              }
              else {
                *(undefined2 *)(lVar17 + (long)iVar28 * 2 + 0xb) = 0x2c;
              }
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
            }
            if (*(long *)(this + 0x48) != 0) {
              iVar28 = *(int *)(this + 0x1c);
              lVar17 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar28 + 1;
              if (*(int *)(this + 0x10) == 0) {
                *(undefined1 *)(lVar17 + iVar28 + 0xb) = 10;
              }
              else {
                *(undefined2 *)(lVar17 + (long)iVar28 * 2 + 0xb) = 10;
              }
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
              if (0 < *(int *)(this + 0x50)) {
                iVar28 = 0;
                do {
                  psVar19 = *(short **)(this + 0x48);
                  sVar3 = *psVar19;
                  if (*(int *)(this + 0x10) == 0) {
                    while (sVar3 != 0) {
                      psVar19 = psVar19 + 1;
                      iVar2 = *(int *)(this + 0x1c);
                      lVar17 = **(long **)(this + 0x28);
                      *(int *)(this + 0x1c) = iVar2 + 1;
                      *(char *)(lVar17 + iVar2 + 0xb) = (char)sVar3;
                      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                        IncrementalStringBuilder::Extend(pIVar1);
                      }
                      sVar3 = *psVar19;
                    }
                  }
                  else {
                    while (sVar3 != 0) {
                      psVar19 = psVar19 + 1;
                      iVar2 = *(int *)(this + 0x1c);
                      lVar17 = **(long **)(this + 0x28);
                      *(int *)(this + 0x1c) = iVar2 + 1;
                      *(short *)(lVar17 + (long)iVar2 * 2 + 0xb) = sVar3;
                      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                        IncrementalStringBuilder::Extend(pIVar1);
                      }
                      sVar3 = *psVar19;
                    }
                  }
                  iVar28 = iVar28 + 1;
                } while (iVar28 < *(int *)(this + 0x50));
              }
            }
            pIVar29 = *(Isolate **)this;
            uVar15 = *puVar8 & 0xffffffff00000000;
            pIVar10 = pIVar29 + 0x95a0;
            uVar15 = uVar15 | *(uint *)((uVar15 | *(uint *)(*puVar8 + 7)) + (long)(iVar6 << 2) + 7);
            if (*(CanonicalHandleScope **)(pIVar29 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar12 = *(ulong **)pIVar10;
              if (puVar12 == *(ulong **)(pIVar29 + 0x95a8)) {
                puVar12 = (ulong *)HandleScope::Extend(pIVar29);
              }
              *(ulong **)pIVar10 = puVar12 + 1;
              *puVar12 = uVar15;
            }
            else {
              puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar29 + 0x95b8),uVar15);
            }
            uVar7 = -(uVar7 >> 0x1f) & 0xfffffffe00000000 | uVar7 << 1;
            if (*(CanonicalHandleScope **)(pIVar29 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar13 = *(ulong **)pIVar10;
              if (puVar13 == *(ulong **)(pIVar29 + 0x95a8)) {
                puVar13 = (ulong *)HandleScope::Extend(pIVar29);
              }
              *(ulong **)pIVar10 = puVar13 + 1;
              *puVar13 = uVar7;
            }
            else {
              puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar29 + 0x95b8),uVar7);
            }
            uVar4 = Serialize_<false>(this,puVar12,0,puVar13);
            if (uVar4 != 1) {
              if (uVar4 != 0) goto joined_r0x010505c8;
              iVar28 = *(int *)(this + 0x1c);
              lVar17 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar28 + 1;
              if (*(int *)(this + 0x10) == 0) {
                *(undefined1 *)(lVar17 + iVar28 + 0xb) = 0x6e;
                iVar28 = *(int *)(this + 0x1c);
                if (iVar28 == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                  iVar28 = *(int *)(this + 0x1c);
                }
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(undefined1 *)(lVar17 + iVar28 + 0xb) = 0x75;
                iVar28 = *(int *)(this + 0x1c);
                if (iVar28 == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                  iVar28 = *(int *)(this + 0x1c);
                }
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(undefined1 *)(lVar17 + iVar28 + 0xb) = 0x6c;
                iVar28 = *(int *)(this + 0x1c);
                if (iVar28 == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                  iVar28 = *(int *)(this + 0x1c);
                }
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(undefined1 *)(lVar17 + iVar28 + 0xb) = 0x6c;
              }
              else {
                *(undefined2 *)(lVar17 + (long)iVar28 * 2 + 0xb) = 0x6e;
                iVar28 = *(int *)(this + 0x1c);
                if (iVar28 == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                  iVar28 = *(int *)(this + 0x1c);
                }
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(undefined2 *)(lVar17 + (long)iVar28 * 2 + 0xb) = 0x75;
                iVar28 = *(int *)(this + 0x1c);
                if (iVar28 == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                  iVar28 = *(int *)(this + 0x1c);
                }
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(undefined2 *)(lVar17 + (long)iVar28 * 2 + 0xb) = 0x6c;
                iVar28 = *(int *)(this + 0x1c);
                if (iVar28 == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                  iVar28 = *(int *)(this + 0x1c);
                }
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(undefined2 *)(lVar17 + (long)iVar28 * 2 + 0xb) = 0x6c;
              }
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
            }
            uVar7 = (ulong)(iVar6 + 1U);
          } while (iVar6 + 1U != uVar25);
          goto LAB_01050400;
        }
        goto LAB_0104f7b4;
      }
      if (uVar25 == 0) goto LAB_0104f7b0;
      pIVar10 = *(Isolate **)this;
      uVar15 = uVar15 | *(uint *)(uVar7 + 7);
      if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar10 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar10 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar10);
        }
        *(ulong **)(pIVar10 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar15;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15);
      }
      lVar17 = *(long *)this;
      uVar4 = 0;
      do {
        uVar7 = GetCurrentStackPosition();
        if (((uVar7 < *(ulong *)(lVar17 + 0x68)) &&
            (uVar5 = StackGuard::HandleInterrupts((StackGuard *)(*(long *)this + 0x48)),
            (uVar5 & 1) != 0)) && (uVar5 == *(uint *)(*(long *)this + 0x180))) goto LAB_010505bc;
        if (uVar4 != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar18 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar18 + iVar6 + 0xb) = 0x2c;
          }
          else {
            *(undefined2 *)(lVar18 + (long)iVar6 * 2 + 0xb) = 0x2c;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar18 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar18 + iVar6 + 0xb) = 10;
          }
          else {
            *(undefined2 *)(lVar18 + (long)iVar6 * 2 + 0xb) = 10;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (0 < *(int *)(this + 0x50)) {
            iVar6 = 0;
            do {
              psVar19 = *(short **)(this + 0x48);
              sVar3 = *psVar19;
              if (*(int *)(this + 0x10) == 0) {
                while (sVar3 != 0) {
                  psVar19 = psVar19 + 1;
                  iVar28 = *(int *)(this + 0x1c);
                  lVar18 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar28 + 1;
                  *(char *)(lVar18 + iVar28 + 0xb) = (char)sVar3;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar3 = *psVar19;
                }
              }
              else {
                while (sVar3 != 0) {
                  psVar19 = psVar19 + 1;
                  iVar28 = *(int *)(this + 0x1c);
                  lVar18 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar28 + 1;
                  *(short *)(lVar18 + (long)iVar28 * 2 + 0xb) = sVar3;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar3 = *psVar19;
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(this + 0x50));
          }
        }
        SerializeDouble(this,*(double *)(*puVar8 + ((long)(int)(uVar4 << 3) | 7U)));
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar25);
LAB_01050400:
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
      if (uVar25 != 0) {
        lVar17 = *(long *)(this + 0x48);
        goto joined_r0x01050418;
      }
    }
    else {
LAB_0104f7b0:
      uVar7 = 0;
LAB_0104f7b4:
      if (uVar25 <= (uint)uVar7) goto LAB_01050400;
      uVar4 = SerializeArrayLikeSlow(this,puVar8,uVar7,(ulong)dVar31 & 0xffffffff);
      if (uVar4 != 1) goto joined_r0x010505c8;
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
      lVar17 = *(long *)(this + 0x48);
joined_r0x01050418:
      if (lVar17 != 0) {
        iVar6 = *(int *)(this + 0x1c);
        lVar17 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar17 + iVar6 + 0xb) = 10;
        }
        else {
          *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 10;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        if (0 < *(int *)(this + 0x50)) {
          iVar6 = 0;
          do {
            psVar19 = *(short **)(this + 0x48);
            sVar3 = *psVar19;
            if (*(int *)(this + 0x10) == 0) {
              while (sVar3 != 0) {
                psVar19 = psVar19 + 1;
                iVar28 = *(int *)(this + 0x1c);
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(char *)(lVar17 + iVar28 + 0xb) = (char)sVar3;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                sVar3 = *psVar19;
              }
            }
            else {
              while (sVar3 != 0) {
                psVar19 = psVar19 + 1;
                iVar28 = *(int *)(this + 0x1c);
                lVar17 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar28 + 1;
                *(short *)(lVar17 + (long)iVar28 * 2 + 0xb) = sVar3;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                sVar3 = *psVar19;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(this + 0x50));
        }
      }
    }
    iVar6 = *(int *)(this + 0x1c);
    lVar17 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar6 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x5d;
    }
    else {
      *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x5d;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(pIVar1);
    }
    uVar4 = 1;
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + -0x10;
    goto joined_r0x010505c8;
  }
  goto switchD_0104f318_caseD_40;
LAB_010505bc:
  uVar4 = 2;
joined_r0x010505c8:
  if (pIVar27 == (Isolate *)0x0) goto switchD_0104f318_caseD_40;
  *(undefined8 *)(pIVar27 + 0x95a0) = uVar14;
  *(int *)(pIVar27 + 0x95b0) = *(int *)(pIVar27 + 0x95b0) + -1;
  if (*(long *)(pIVar27 + 0x95a8) == lVar26) goto switchD_0104f318_caseD_40;
  *(long *)(pIVar27 + 0x95a8) = lVar26;
  goto LAB_010505b4;
LAB_01050848:
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
  if ((bVar24 != 0) && (*(long *)(this + 0x48) != 0)) {
    iVar6 = *(int *)(this + 0x1c);
    lVar17 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar6 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar17 + iVar6 + 0xb) = 10;
    }
    else {
      *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 10;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(pIVar1);
    }
    if (0 < *(int *)(this + 0x50)) {
      iVar6 = 0;
      do {
        psVar19 = *(short **)(this + 0x48);
        sVar3 = *psVar19;
        if (*(int *)(this + 0x10) == 0) {
          while (sVar3 != 0) {
            psVar19 = psVar19 + 1;
            iVar28 = *(int *)(this + 0x1c);
            lVar17 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar28 + 1;
            *(char *)(lVar17 + iVar28 + 0xb) = (char)sVar3;
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            sVar3 = *psVar19;
          }
        }
        else {
          while (sVar3 != 0) {
            psVar19 = psVar19 + 1;
            iVar28 = *(int *)(this + 0x1c);
            lVar17 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar28 + 1;
            *(short *)(lVar17 + (long)iVar28 * 2 + 0xb) = sVar3;
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            sVar3 = *psVar19;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this + 0x50));
    }
  }
LAB_0105089c:
  iVar6 = *(int *)(this + 0x1c);
  lVar17 = **(long **)(this + 0x28);
  *(int *)(this + 0x1c) = iVar6 + 1;
  if (*(int *)(this + 0x10) == 0) {
    *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x7d;
  }
  else {
    *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x7d;
  }
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
    IncrementalStringBuilder::Extend(pIVar1);
  }
LAB_0104fb44:
  uVar4 = 1;
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + -0x10;
joined_r0x010508f8:
  if (pIVar27 == (Isolate *)0x0) goto switchD_0104f318_caseD_40;
  *(undefined8 *)(pIVar27 + 0x95a0) = uVar14;
  *(int *)(pIVar27 + 0x95b0) = *(int *)(pIVar27 + 0x95b0) + -1;
  if (*(long *)(pIVar27 + 0x95a8) == lVar26) goto switchD_0104f318_caseD_40;
  *(long *)(pIVar27 + 0x95a8) = lVar26;
LAB_010505b4:
  HandleScope::DeleteExtensions(pIVar27);
switchD_0104f318_caseD_40:
  return (ulong)uVar4;
}

