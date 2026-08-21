
long * FUN_01572554(long *param_1,ulong *param_2)

{
  long lVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  Isolate *pIVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  Isolate *this;
  undefined8 *puVar29;
  int iVar30;
  long local_68;
  
  lVar21 = param_1[1];
  this = *(Isolate **)*param_1;
  if (((int)lVar21 != 1) &&
     (uVar11 = v8::internal::GetCurrentStackPosition(), uVar11 < *(ulong *)(this + 0x58))) {
    v8::internal::Isolate::StackOverflow(this);
    return (long *)0x0;
  }
  uVar11 = (ulong)this | 0xb;
  if ((*(uint *)(uVar11 + *(uint *)(*param_2 - 1)) >> 0x18 & 1) != 0) {
    v8::internal::JSObject::MigrateInstance(this,param_2);
  }
  lVar20 = *param_1;
  if (*(char *)(lVar20 + 0x20) == '\0') {
LAB_01572680:
    uVar19 = 0;
  }
  else {
    uVar18 = *param_2;
    uVar23 = uVar18 & 0xffffffff00000000;
    uVar9 = *(ushort *)((uVar23 | *(uint *)(uVar18 - 1)) + 7);
    if (v8::internal::FLAG_allocation_site_pretenuring != '\0') {
      uVar9 = uVar9 | 2;
    }
    if ((uVar9 != 0x423) ||
       ((v8::internal::FLAG_allocation_site_pretenuring == '\0' &&
        (0xf < *(byte *)((uVar23 | 10) + (ulong)*(uint *)(uVar18 - 1)))))) goto LAB_01572680;
    if (v8::internal::FLAG_trace_creation_allocation_sites != '\0') {
      pcVar4 = "JSArray";
      if (*(short *)((uVar23 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0x423) {
        pcVar4 = "JSObject";
      }
      v8::internal::PrintF("*** Creating Memento for %s %p\n",pcVar4);
      lVar20 = *param_1;
    }
    uVar19 = *(undefined8 *)(lVar20 + 0x10);
  }
  plVar12 = (long *)v8::internal::Factory::CopyJSObjectWithAllocationSite
                              ((Factory *)this,param_2,uVar19);
  if ((int)lVar21 == 1) {
    return plVar12;
  }
  pIVar2 = this + 0x95a0;
  puVar5 = *(ulong **)pIVar2;
  puVar6 = *(ulong **)(this + 0x95a8);
  uVar18 = (ulong)this | 7;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  lVar21 = *plVar12;
  if (*(short *)(uVar18 + *(uint *)(lVar21 + -1)) != 0x423) {
    if ((*(uint *)(uVar11 + *(uint *)(lVar21 + -1)) >> 0x15 & 1) == 0) {
      uVar8 = *(uint *)(((ulong)this | 0x17) + (ulong)*(uint *)(lVar21 + -1));
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = puVar5;
        if (puVar6 == puVar5) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(this);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = (ulong)(this + uVar8);
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),
                                      (ulong)(this + uVar8));
      }
      lVar21 = *plVar12;
      uVar11 = (ulong)(*(uint *)(uVar11 + *(uint *)(lVar21 + -1)) >> 10) & 0x3ff;
      if ((int)uVar11 != 0) {
        uVar23 = 0x1000000000;
        do {
          uVar11 = uVar11 - 1;
          uVar7 = *(uint *)(lVar21 + -1);
          uVar8 = *(int *)(*puVar13 + (uVar23 >> 0x20 | 3)) >> 1;
          uVar10 = uVar8 >> 0x13 & 0x3ff;
          uVar8 = uVar8 >> 6 & 7;
          iVar30 = (uint)(byte)this[(ulong)uVar7 + 3] - (uint)(byte)this[(ulong)uVar7 + 4];
          if ((int)uVar10 < iVar30) {
            uVar25 = (ulong)(byte)this[(ulong)uVar7 + 4] << 0x1c;
            iVar26 = (uVar10 + (byte)this[(ulong)uVar7 + 4]) * 4;
          }
          else {
            iVar26 = (uVar10 - iVar30) * 4 + 8;
            uVar25 = 0x20000000;
          }
          local_68 = CONCAT71(local_68._1_7_,(char)uVar8);
          if (4 < uVar8) {
            uVar19 = v8::internal::Representation::Mnemonic((Representation *)&local_68);
            v8::internal::PrintF("%s\n",uVar19);
            goto switchD_01572c60_caseD_f;
          }
          uVar24 = (ulong)iVar26;
          uVar28 = *(ulong *)(&DAT_01a4d668 + (ulong)uVar8 * 8);
          uVar27 = (ulong)((int)uVar10 < iVar30) << 0xd | (long)iVar30 << 0x10 | uVar24;
          uVar25 = uVar27 | uVar25;
          if (((uint)uVar27 >> 0xd & 1) == 0) {
            pIVar22 = this + *(uint *)(lVar21 + 3);
            if ((((ulong)pIVar22 & 1) == 0) || ((int)pIVar22 == *(int *)(this + 0x168))) {
              pIVar22 = *(Isolate **)(this + 0x3b8);
            }
            pIVar22 = this + *(uint *)(pIVar22 + ((uVar24 & 0x1ffc) - (uVar25 >> 0x1a & 0x7c)) + 7);
            if (((ulong)pIVar22 & 1) == 0) goto LAB_015728a0;
LAB_01572870:
            if (*(ushort *)(uVar18 + *(uint *)(pIVar22 + -1)) < 0xaa) goto LAB_015728a0;
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar14 = *(undefined8 **)pIVar2;
              if (puVar14 == *(undefined8 **)(this + 0x95a8)) {
                puVar14 = (undefined8 *)v8::internal::HandleScope::Extend(this);
              }
              *(undefined8 **)pIVar2 = puVar14 + 1;
              *puVar14 = pIVar22;
            }
            else {
              puVar14 = (undefined8 *)
                        v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22);
              pIVar22 = (Isolate *)*puVar14;
            }
            if (*(short *)(((ulong)pIVar22 & 0xffffffff00000000 | 7) +
                          (ulong)*(uint *)(pIVar22 + -1)) == 0x423) {
              puVar29 = (undefined8 *)*param_1;
              if (puVar29[1] == 0) {
                pIVar22 = (Isolate *)*puVar29;
                puVar29[1] = (ulong *)puVar29[3];
                puVar16 = *(ulong **)(pIVar22 + 0x95a0);
                uVar24 = *(ulong *)puVar29[3];
                if (puVar16 == *(ulong **)(pIVar22 + 0x95a8)) {
                  puVar16 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
                }
                *(ulong **)(pIVar22 + 0x95a0) = puVar16 + 1;
                *puVar16 = uVar24;
                puVar29[2] = puVar16;
              }
              else {
                *(undefined4 *)puVar29[2] = *(undefined4 *)(*(long *)puVar29[2] + 7);
                puVar16 = (ulong *)puVar29[2];
              }
              pIVar22 = (Isolate *)*puVar29;
              uVar24 = *puVar16;
              if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar16 = *(ulong **)(pIVar22 + 0x95a0);
                if (puVar16 == *(ulong **)(pIVar22 + 0x95a8)) {
                  puVar16 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
                }
                *(ulong **)(pIVar22 + 0x95a0) = puVar16 + 1;
                *puVar16 = uVar24;
              }
              else {
                v8::internal::CanonicalHandleScope::Lookup
                          (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),uVar24);
              }
            }
            plVar15 = (long *)FUN_01572554(param_1,puVar14);
            if (plVar15 == (long *)0x0) goto LAB_015730e4;
LAB_015729d4:
            local_68 = *plVar12;
            v8::internal::JSObject::RawFastPropertyAtPut
                      ((JSObject *)&local_68,uVar28 | uVar25,*plVar15,4);
          }
          else {
            pIVar22 = this + *(uint *)(lVar21 + -1 + (uVar24 & 0x1fff));
            if (((ulong)pIVar22 & 1) != 0) goto LAB_01572870;
LAB_015728a0:
            if (uVar8 == 2) {
              uVar19 = *(undefined8 *)(pIVar22 + 3);
              plVar15 = (long *)v8::internal::Factory::
                                NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)this);
              *(undefined8 *)(*plVar15 + 3) = uVar19;
              goto LAB_015729d4;
            }
          }
          if (uVar11 == 0) break;
          lVar21 = *plVar12;
          uVar23 = uVar23 + 0xc00000000;
        } while( true );
      }
    }
    else {
      pIVar22 = this + *(uint *)(lVar21 + 3);
      if (((ulong)pIVar22 & 1) == 0) {
        pIVar22 = *(Isolate **)(this + 0x410);
      }
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = puVar5;
        if (puVar6 == puVar5) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(this);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = (ulong)pIVar22;
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22);
        pIVar22 = (Isolate *)*puVar13;
      }
      if ((int)*(uint *)(pIVar22 + 0xf) >> 1 != 0) {
        lVar20 = (long)((ulong)*(uint *)(pIVar22 + 0xf) << 0x20) >> 0x21;
        lVar21 = 0x1800000000;
        while( true ) {
          lVar20 = lVar20 + -1;
          lVar1 = (lVar21 >> 0x20) + 7;
          pIVar22 = this + *(uint *)(pIVar22 + lVar1);
          if ((((ulong)pIVar22 & 1) != 0) && (0xa9 < *(ushort *)(uVar18 + *(uint *)(pIVar22 + -1))))
          {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar16 = *(ulong **)pIVar2;
              if (puVar16 == *(ulong **)(this + 0x95a8)) {
                puVar16 = (ulong *)v8::internal::HandleScope::Extend(this);
              }
              *(ulong **)pIVar2 = puVar16 + 1;
              *puVar16 = (ulong)pIVar22;
            }
            else {
              puVar16 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22
                                           );
              pIVar22 = (Isolate *)*puVar16;
            }
            if (*(short *)(((ulong)pIVar22 & 0xffffffff00000000 | 7) +
                          (ulong)*(uint *)(pIVar22 + -1)) == 0x423) {
              puVar14 = (undefined8 *)*param_1;
              if (puVar14[1] == 0) {
                pIVar22 = (Isolate *)*puVar14;
                puVar14[1] = (ulong *)puVar14[3];
                puVar17 = *(ulong **)(pIVar22 + 0x95a0);
                uVar11 = *(ulong *)puVar14[3];
                if (puVar17 == *(ulong **)(pIVar22 + 0x95a8)) {
                  puVar17 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
                }
                *(ulong **)(pIVar22 + 0x95a0) = puVar17 + 1;
                *puVar17 = uVar11;
                puVar14[2] = puVar17;
              }
              else {
                *(undefined4 *)puVar14[2] = *(undefined4 *)(*(long *)puVar14[2] + 7);
                puVar17 = (ulong *)puVar14[2];
              }
              pIVar22 = (Isolate *)*puVar14;
              uVar11 = *puVar17;
              if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar17 = *(ulong **)(pIVar22 + 0x95a0);
                if (puVar17 == *(ulong **)(pIVar22 + 0x95a8)) {
                  puVar17 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
                }
                *(ulong **)(pIVar22 + 0x95a0) = puVar17 + 1;
                *puVar17 = uVar11;
              }
              else {
                v8::internal::CanonicalHandleScope::Lookup
                          (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),uVar11);
              }
            }
            puVar16 = (ulong *)FUN_01572554(param_1,puVar16);
            if (puVar16 == (ulong *)0x0) goto LAB_015730e4;
            uVar23 = *puVar13;
            uVar11 = *puVar16;
            puVar3 = (undefined4 *)(uVar23 + lVar1);
            *puVar3 = (int)uVar11;
            if ((uVar11 & 1) != 0) {
              uVar25 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar25 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar23,puVar3,uVar11);
                uVar25 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar25 & 0x18) != 0) &&
                 ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar23,puVar3,uVar11);
              }
            }
          }
          if (lVar20 == 0) break;
          pIVar22 = (Isolate *)*puVar13;
          lVar21 = lVar21 + 0xc00000000;
        }
      }
    }
    lVar21 = *plVar12;
    if (1 < *(uint *)(((ulong)this | 3) + (ulong)*(uint *)(lVar21 + 7))) goto LAB_01572c2c;
    goto switchD_01572c60_caseD_4;
  }
LAB_01572c2c:
  switch(*(byte *)(((ulong)this | 10) + (ulong)*(uint *)(lVar21 + -1)) >> 3) {
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    pIVar22 = this + *(uint *)(lVar21 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar2;
      if (puVar13 == *(ulong **)(this + 0x95a8)) {
        puVar13 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar2 = puVar13 + 1;
      *puVar13 = (ulong)pIVar22;
    }
    else {
      puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22);
      pIVar22 = (Isolate *)*puVar13;
    }
    if ((*(int *)(pIVar22 + -1) + (int)this != *(int *)(this + 0xe8)) && (1 < *(int *)(pIVar22 + 3))
       ) {
      iVar30 = 0;
      lVar21 = 0;
      do {
        pIVar22 = this + *(uint *)(pIVar22 + (long)iVar30 + 7);
        if ((((ulong)pIVar22 & 1) != 0) && (0xa9 < *(ushort *)(uVar18 + *(uint *)(pIVar22 + -1)))) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar16 = *(ulong **)pIVar2;
            if (puVar16 == *(ulong **)(this + 0x95a8)) {
              puVar16 = (ulong *)v8::internal::HandleScope::Extend(this);
            }
            *(ulong **)pIVar2 = puVar16 + 1;
            *puVar16 = (ulong)pIVar22;
          }
          else {
            puVar16 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22);
            pIVar22 = (Isolate *)*puVar16;
          }
          if (*(short *)(((ulong)pIVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pIVar22 + -1))
              == 0x423) {
            puVar14 = (undefined8 *)*param_1;
            if (puVar14[1] == 0) {
              pIVar22 = (Isolate *)*puVar14;
              puVar14[1] = (ulong *)puVar14[3];
              puVar17 = *(ulong **)(pIVar22 + 0x95a0);
              uVar11 = *(ulong *)puVar14[3];
              if (puVar17 == *(ulong **)(pIVar22 + 0x95a8)) {
                puVar17 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
              }
              *(ulong **)(pIVar22 + 0x95a0) = puVar17 + 1;
              *puVar17 = uVar11;
              puVar14[2] = puVar17;
            }
            else {
              *(undefined4 *)puVar14[2] = *(undefined4 *)(*(long *)puVar14[2] + 7);
              puVar17 = (ulong *)puVar14[2];
            }
            pIVar22 = (Isolate *)*puVar14;
            uVar11 = *puVar17;
            if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar17 = *(ulong **)(pIVar22 + 0x95a0);
              if (puVar17 == *(ulong **)(pIVar22 + 0x95a8)) {
                puVar17 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
              }
              *(ulong **)(pIVar22 + 0x95a0) = puVar17 + 1;
              *puVar17 = uVar11;
            }
            else {
              v8::internal::CanonicalHandleScope::Lookup
                        (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),uVar11);
            }
          }
          puVar16 = (ulong *)FUN_01572554(param_1,puVar16);
          if (puVar16 == (ulong *)0x0) goto LAB_015730e4;
          uVar23 = *puVar13;
          uVar11 = *puVar16;
          puVar3 = (undefined4 *)(uVar23 + (long)iVar30 + 7);
          *puVar3 = (int)uVar11;
          if ((uVar11 & 1) != 0) {
            uVar25 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar25 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar23,puVar3,uVar11);
              uVar25 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar25 & 0x18) != 0) &&
               ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar23,puVar3,uVar11);
            }
          }
        }
        pIVar22 = (Isolate *)*puVar13;
        lVar21 = lVar21 + 1;
        iVar30 = iVar30 + 4;
      } while (lVar21 < *(int *)(pIVar22 + 3) >> 1);
      break;
    }
    goto LAB_015730e8;
  case 0xc:
    pIVar22 = this + *(uint *)(lVar21 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar2;
      if (puVar13 == *(ulong **)(this + 0x95a8)) {
        puVar13 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar2 = puVar13 + 1;
      *puVar13 = (ulong)pIVar22;
    }
    else {
      puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22);
      pIVar22 = (Isolate *)*puVar13;
    }
    if ((int)*(uint *)(pIVar22 + 0xf) >> 1 == 0) goto LAB_015730e8;
    lVar20 = (long)((ulong)*(uint *)(pIVar22 + 0xf) << 0x20) >> 0x21;
    lVar21 = 0x1400000000;
    while( true ) {
      lVar20 = lVar20 + -1;
      lVar1 = (lVar21 >> 0x20) + 7;
      pIVar22 = this + *(uint *)(pIVar22 + lVar1);
      if ((((ulong)pIVar22 & 1) != 0) && (0xa9 < *(ushort *)(uVar18 + *(uint *)(pIVar22 + -1)))) {
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar16 = *(ulong **)pIVar2;
          if (puVar16 == *(ulong **)(this + 0x95a8)) {
            puVar16 = (ulong *)v8::internal::HandleScope::Extend(this);
          }
          *(ulong **)pIVar2 = puVar16 + 1;
          *puVar16 = (ulong)pIVar22;
        }
        else {
          puVar16 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar22);
          pIVar22 = (Isolate *)*puVar16;
        }
        if (*(short *)(((ulong)pIVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pIVar22 + -1))
            == 0x423) {
          puVar14 = (undefined8 *)*param_1;
          if (puVar14[1] == 0) {
            pIVar22 = (Isolate *)*puVar14;
            puVar14[1] = (ulong *)puVar14[3];
            puVar17 = *(ulong **)(pIVar22 + 0x95a0);
            uVar11 = *(ulong *)puVar14[3];
            if (puVar17 == *(ulong **)(pIVar22 + 0x95a8)) {
              puVar17 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
            }
            *(ulong **)(pIVar22 + 0x95a0) = puVar17 + 1;
            *puVar17 = uVar11;
            puVar14[2] = puVar17;
          }
          else {
            *(undefined4 *)puVar14[2] = *(undefined4 *)(*(long *)puVar14[2] + 7);
            puVar17 = (ulong *)puVar14[2];
          }
          pIVar22 = (Isolate *)*puVar14;
          uVar11 = *puVar17;
          if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar17 = *(ulong **)(pIVar22 + 0x95a0);
            if (puVar17 == *(ulong **)(pIVar22 + 0x95a8)) {
              puVar17 = (ulong *)v8::internal::HandleScope::Extend(pIVar22);
            }
            *(ulong **)(pIVar22 + 0x95a0) = puVar17 + 1;
            *puVar17 = uVar11;
          }
          else {
            v8::internal::CanonicalHandleScope::Lookup
                      (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),uVar11);
          }
        }
        puVar16 = (ulong *)FUN_01572554(param_1,puVar16);
        if (puVar16 == (ulong *)0x0) goto LAB_015730e4;
        uVar23 = *puVar13;
        uVar11 = *puVar16;
        puVar3 = (undefined4 *)(uVar23 + lVar1);
        *puVar3 = (int)uVar11;
        if ((uVar11 & 1) != 0) {
          uVar25 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar25 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar23,puVar3,uVar11);
            uVar25 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar25 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar23,puVar3,uVar11);
          }
        }
      }
      if (lVar20 == 0) break;
      pIVar22 = (Isolate *)*puVar13;
      lVar21 = lVar21 + 0xc00000000;
    }
    break;
  case 0xd:
  case 0xe:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented code");
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_01572c60_caseD_f:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
switchD_01572c60_caseD_4:
  if (this != (Isolate *)0x0) {
LAB_015730e8:
    *(ulong **)pIVar2 = puVar5;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(ulong **)(this + 0x95a8) != puVar6) {
      *(ulong **)(this + 0x95a8) = puVar6;
      v8::internal::HandleScope::DeleteExtensions(this);
    }
  }
  return plVar12;
LAB_015730e4:
  plVar12 = (long *)0x0;
  goto LAB_015730e8;
}

