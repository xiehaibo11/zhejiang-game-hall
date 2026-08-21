
/* v8::internal::JsonStringifier::SerializeJSPrimitiveWrapper(v8::internal::Handle<v8::internal::JSPrimitiveWrapper>,
   v8::internal::Handle<v8::internal::Object>) */

int v8::internal::JsonStringifier::SerializeJSPrimitiveWrapper
              (JsonStringifier *param_1,ulong *param_2)

{
  IncrementalStringBuilder *this;
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ushort uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  short *psVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  Factory *pFVar21;
  byte bVar22;
  byte *pbVar23;
  Isolate *pIVar24;
  LookupIterator local_b8 [88];
  
  uVar13 = *param_2;
  uVar2 = *(uint *)(uVar13 + 0xb);
  uVar19 = uVar13 & 0xffffffff00000000;
  if ((uVar2 & 1) == 0) {
LAB_0104cca8:
    if (((uVar13 & 1) != 0) && (*(short *)((uVar19 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42)) {
      param_2 = (ulong *)Object::ConvertToNumberOrNumeric(*(undefined8 *)param_1,param_2,0);
    }
    if (param_2 == (ulong *)0x0) {
      return 2;
    }
    if ((*param_2 & 1) == 0) {
      SerializeSmi(param_1);
      return 1;
    }
    SerializeDouble(param_1,*(double *)(*param_2 + 3));
    return 1;
  }
  uVar17 = uVar19 | uVar2;
  uVar18 = uVar19 | 7;
  if (*(ushort *)(uVar18 + *(uint *)(uVar17 - 1)) < 0x40) {
    if (((uVar13 & 1) == 0) || (0x3f < *(ushort *)(uVar18 + *(uint *)(uVar13 - 1)))) {
      param_2 = (ulong *)Object::ConvertToString(*(undefined8 *)param_1,param_2);
    }
    if (param_2 == (ulong *)0x0) {
      return 2;
    }
    SerializeString(param_1,param_2);
    return 1;
  }
  if (*(short *)(uVar18 + *(uint *)(uVar17 - 1)) == 0x42) goto LAB_0104cca8;
  if (*(short *)(uVar18 + *(uint *)(uVar17 - 1)) == 0x41) {
    pFVar21 = *(Factory **)param_1;
    puVar6 = (undefined8 *)Factory::NewTypeError(pFVar21,0x15,0,0,0);
    Isolate::Throw((Isolate *)pFVar21,*puVar6,0);
    return 2;
  }
  if ((*(short *)(uVar18 + *(uint *)(uVar17 - 1)) == 0x43) &&
     ((*(uint *)(uVar17 + 0x17) >> 1 & 0xff) < 2)) {
    pbVar23 = (byte *)0x199971a;
    if (uVar2 != *(uint *)(*(long *)param_1 + 0xb8)) {
      pbVar23 = (byte *)0x1a03b06;
    }
    uVar12 = (ushort)*pbVar23;
    if (*(int *)(param_1 + 0x10) == 0) {
      if (uVar12 != 0) {
        do {
          pbVar23 = pbVar23 + 1;
          iVar5 = *(int *)(param_1 + 0x1c);
          lVar14 = **(long **)(param_1 + 0x28);
          *(int *)(param_1 + 0x1c) = iVar5 + 1;
          *(char *)(lVar14 + iVar5 + 0xb) = (char)uVar12;
          if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(param_1 + 8));
          }
          uVar12 = (ushort)*pbVar23;
        } while (uVar12 != 0);
        return 1;
      }
    }
    else if (uVar12 != 0) {
      do {
        pbVar23 = pbVar23 + 1;
        iVar5 = *(int *)(param_1 + 0x1c);
        lVar14 = **(long **)(param_1 + 0x28);
        *(int *)(param_1 + 0x1c) = iVar5 + 1;
        *(ushort *)(lVar14 + (long)iVar5 * 2 + 0xb) = uVar12;
        if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(param_1 + 8));
        }
        uVar12 = (ushort)*pbVar23;
      } while (*pbVar23 != 0);
      return 1;
    }
    return 1;
  }
  pIVar24 = *(Isolate **)param_1;
  uVar11 = *(undefined8 *)(pIVar24 + 0x95a0);
  lVar14 = *(long *)(pIVar24 + 0x95a8);
  *(int *)(pIVar24 + 0x95b0) = *(int *)(pIVar24 + 0x95b0) + 1;
  iVar5 = StackPush(param_1,param_2);
  if (iVar5 != 1) goto joined_r0x0104d2e8;
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar13 = *param_2;
    uVar19 = uVar13 & 0xffffffff00000000;
    if ((0x411 < *(ushort *)((uVar19 | *(uint *)(uVar13 - 1)) + 7)) &&
       ((*(uint *)((uVar19 | 0xb) + (ulong)*(uint *)(uVar13 - 1)) >> 0x15 & 1) == 0)) {
      pIVar7 = *(Isolate **)param_1;
      if ((*(int *)(uVar13 + 7) == *(int *)(pIVar7 + 0x168)) ||
         (*(int *)(uVar13 + 7) == *(int *)(pIVar7 + 1000))) {
        uVar19 = uVar19 | *(uint *)(uVar13 - 1);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar19;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar19);
        }
        iVar5 = *(int *)(param_1 + 0x1c);
        this = (IncrementalStringBuilder *)(param_1 + 8);
        lVar15 = **(long **)(param_1 + 0x28);
        *(int *)(param_1 + 0x1c) = iVar5 + 1;
        if (*(int *)(param_1 + 0x10) == 0) {
          *(undefined1 *)(lVar15 + iVar5 + 0xb) = 0x7b;
        }
        else {
          *(undefined2 *)(lVar15 + (long)iVar5 * 2 + 0xb) = 0x7b;
        }
        if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
          IncrementalStringBuilder::Extend(this);
        }
        iVar5 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar5 + 1;
        uVar13 = *puVar8;
        uVar19 = (ulong)(*(uint *)(uVar13 + 0xb) >> 10) & 0x3ff;
        if ((int)uVar19 != 0) {
          bVar22 = 0;
          lVar15 = 0xc;
          do {
            pIVar7 = *(Isolate **)param_1;
            uVar13 = uVar13 & 0xffffffff00000000 |
                     (ulong)*(uint *)(lVar15 + (uVar13 & 0xffffffff00000000 |
                                               (ulong)*(uint *)(uVar13 + 0x17)) + 3);
            if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = *(ulong **)(pIVar7 + 0x95a0);
              if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                puVar9 = (ulong *)HandleScope::Extend(pIVar7);
              }
              *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
              *puVar9 = uVar13;
            }
            else {
              puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar13);
              uVar13 = *puVar9;
            }
            if (*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0x40
               ) {
              uVar13 = *puVar8;
              uVar2 = *(uint *)(lVar15 + (uVar13 & 0xffffffff00000000 |
                                         (ulong)*(uint *)(uVar13 + 0x17)) + 7);
              if ((uVar2 >> 5 & 1) == 0) {
                if (((uVar2 >> 2 & 1) == 0) && (*(int *)(*param_2 - 1) == (int)uVar13)) {
                  uVar1 = *(int *)((uVar13 & 0xffffffff00000000 | lVar15 + 7U) +
                                  (ulong)*(uint *)(uVar13 + 0x17)) >> 1;
                  uVar4 = uVar1 >> 0x13 & 0x3ff;
                  iVar5 = (uint)*(byte *)(uVar13 + 3) - (uint)*(byte *)(uVar13 + 4);
                  if ((int)uVar4 < iVar5) {
                    uVar17 = (ulong)*(byte *)(uVar13 + 4) << 0x1c;
                    iVar20 = (uVar4 + *(byte *)(uVar13 + 4)) * 4;
                  }
                  else {
                    iVar20 = (uVar4 - iVar5) * 4 + 8;
                    uVar17 = 0x20000000;
                  }
                  uVar1 = uVar1 >> 6 & 7;
                  local_b8[0] = SUB41(uVar1,0);
                  if (4 < uVar1) {
                    uVar11 = Representation::Mnemonic((Representation *)local_b8);
                    PrintF("%s\n",uVar11);
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  }
                  lVar10 = JSObject::FastPropertyAt
                                     (param_2,uVar2 >> 7 & 7,
                                      (ulong)((int)uVar4 < iVar5) << 0xd | (long)iVar5 << 0x10 |
                                      (long)iVar20 | uVar17 |
                                      *(ulong *)(&DAT_019cca38 + (ulong)uVar1 * 8));
LAB_0104d204:
                  iVar5 = Serialize_<true>(param_1,lVar10,bVar22,puVar9);
                  if (iVar5 != 2) {
                    bVar22 = bVar22 | iVar5 == 1;
                    goto LAB_0104d228;
                  }
                }
                else {
                  LookupIterator::PropertyOrElement
                            (local_b8,*(undefined8 *)param_1,param_2,puVar9,3);
                  lVar10 = Object::GetProperty(local_b8,false);
                  if (lVar10 != 0) goto LAB_0104d204;
                }
                iVar5 = 2;
                goto joined_r0x0104d2e8;
              }
            }
LAB_0104d228:
            if (uVar19 * 0xc == lVar15) goto LAB_0104d240;
            uVar13 = *puVar8;
            lVar15 = lVar15 + 0xc;
          } while( true );
        }
        *(int *)(param_1 + 0x50) = iVar5;
        goto LAB_0104d290;
      }
    }
  }
  iVar5 = SerializeJSReceiverSlow(param_1,param_2);
  if (iVar5 != 1) goto joined_r0x0104d2e8;
  goto LAB_0104cf40;
LAB_0104d240:
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  if ((bVar22 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    iVar5 = *(int *)(param_1 + 0x1c);
    lVar15 = **(long **)(param_1 + 0x28);
    *(int *)(param_1 + 0x1c) = iVar5 + 1;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined1 *)(lVar15 + iVar5 + 0xb) = 10;
    }
    else {
      *(undefined2 *)(lVar15 + (long)iVar5 * 2 + 0xb) = 10;
    }
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
      IncrementalStringBuilder::Extend(this);
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar5 = 0;
      do {
        psVar16 = *(short **)(param_1 + 0x48);
        sVar3 = *psVar16;
        if (*(int *)(param_1 + 0x10) == 0) {
          while (sVar3 != 0) {
            psVar16 = psVar16 + 1;
            iVar20 = *(int *)(param_1 + 0x1c);
            lVar15 = **(long **)(param_1 + 0x28);
            *(int *)(param_1 + 0x1c) = iVar20 + 1;
            *(char *)(lVar15 + iVar20 + 0xb) = (char)sVar3;
            if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
              IncrementalStringBuilder::Extend(this);
            }
            sVar3 = *psVar16;
          }
        }
        else {
          while (sVar3 != 0) {
            psVar16 = psVar16 + 1;
            iVar20 = *(int *)(param_1 + 0x1c);
            lVar15 = **(long **)(param_1 + 0x28);
            *(int *)(param_1 + 0x1c) = iVar20 + 1;
            *(short *)(lVar15 + (long)iVar20 * 2 + 0xb) = sVar3;
            if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
              IncrementalStringBuilder::Extend(this);
            }
            sVar3 = *psVar16;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x50));
    }
  }
LAB_0104d290:
  iVar5 = *(int *)(param_1 + 0x1c);
  lVar15 = **(long **)(param_1 + 0x28);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined1 *)(lVar15 + iVar5 + 0xb) = 0x7d;
  }
  else {
    *(undefined2 *)(lVar15 + (long)iVar5 * 2 + 0xb) = 0x7d;
  }
  if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
    IncrementalStringBuilder::Extend(this);
  }
LAB_0104cf40:
  iVar5 = 1;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -0x10;
joined_r0x0104d2e8:
  if (pIVar24 == (Isolate *)0x0) {
    return iVar5;
  }
  *(undefined8 *)(pIVar24 + 0x95a0) = uVar11;
  *(int *)(pIVar24 + 0x95b0) = *(int *)(pIVar24 + 0x95b0) + -1;
  if (*(long *)(pIVar24 + 0x95a8) == lVar14) {
    return iVar5;
  }
  *(long *)(pIVar24 + 0x95a8) = lVar14;
  HandleScope::DeleteExtensions(pIVar24);
  return iVar5;
}

