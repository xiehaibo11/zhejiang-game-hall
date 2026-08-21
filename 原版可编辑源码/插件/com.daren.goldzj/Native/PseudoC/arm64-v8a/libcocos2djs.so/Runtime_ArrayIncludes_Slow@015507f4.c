
/* v8::internal::Runtime_ArrayIncludes_Slow(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ArrayIncludes_Slow(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  bool bVar6;
  ushort uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 unaff_x24;
  double dVar21;
  ulong local_c8 [11];
  undefined1 auStack_64 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar14 = FUN_01550d60(param_1,param_2,param_3);
    return uVar14;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar10 = param_2 + -2;
  uVar20 = *param_2;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = puVar3;
    if (puVar4 == puVar3) {
      puVar8 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar20;
    if ((uVar20 & 1) != 0) goto LAB_01550898;
LAB_015508b0:
    puVar8 = (ulong *)Object::ToObjectImpl(param_3,puVar8,0);
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar20);
    uVar20 = *puVar8;
    if ((uVar20 & 1) == 0) goto LAB_015508b0;
LAB_01550898:
    if (*(ushort *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) < 0xa9)
    goto LAB_015508b0;
  }
  if (puVar8 == (ulong *)0x0) goto LAB_01550c7c;
  uVar16 = *puVar8;
  uVar20 = uVar16 & 0xffffffff00000000;
  if (*(short *)((uVar20 | *(uint *)(uVar16 - 1)) + 7) != 0x423) {
    puVar9 = (ulong *)Object::GetProperty(param_3,puVar8,param_3 + 0x7b8);
    if (puVar9 != (ulong *)0x0) {
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        uVar20 = (ulong)(((uint)(uVar20 >> 1) & 0x7fffffff & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) <<
                        1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar1;
          if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar9 + 1;
          *puVar9 = uVar20;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar20);
        }
      }
      else {
        puVar9 = (ulong *)Object::ConvertToLength(param_3,puVar9);
      }
      if (puVar9 != (ulong *)0x0) {
        uVar20 = *puVar9;
        if ((uVar20 & 1) != 0) {
          uVar20 = (ulong)*(double *)(uVar20 + 3);
          goto joined_r0x015509b8;
        }
        uVar20 = (ulong)(double)((int)uVar20 >> 1);
        if (uVar20 == 0) goto LAB_015509dc;
        goto LAB_01550900;
      }
    }
LAB_01550c7c:
    unaff_x24 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_01550c80;
  }
  uVar5 = *(uint *)(uVar16 + 0xb);
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
    if (-1 < (int)uVar5) {
      uVar2 = uVar5 >> 1;
    }
joined_r0x015509b8:
    uVar20 = (ulong)uVar2;
joined_r0x015509b8:
    if (uVar20 != 0) {
LAB_01550900:
      if ((*puVar10 & 1) != 0) {
        if ((int)*puVar10 != *(int *)(param_3 + 0xa0)) {
          puVar10 = (ulong *)Object::ConvertToInteger(param_3,puVar10);
          goto LAB_015509f4;
        }
        uVar16 = 0;
        goto LAB_01550a14;
      }
LAB_015509f4:
      if (puVar10 == (ulong *)0x0) goto LAB_01550c7c;
      uVar15 = *puVar10;
      if ((uVar15 & 1) == 0) {
        uVar5 = (int)uVar15 >> 1;
        uVar16 = (ulong)uVar5;
        if ((int)uVar15 < 0) {
          uVar16 = uVar20 + (long)(int)uVar5;
          uVar16 = uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU);
        }
LAB_01550a14:
        uVar15 = *puVar8;
        if (((long)uVar20 < 0x100000000) &&
           (uVar17 = uVar15 & 0xffffffff00000000,
           0x410 < *(ushort *)((uVar17 | *(uint *)(uVar15 - 1)) + 7))) {
          uVar5 = *(uint *)((uVar17 | *(uint *)(uVar15 - 1)) + 0xf);
          if (uVar5 != *(uint *)(param_3 + 0xb0)) {
            uVar19 = uVar17 | uVar5;
            do {
              uVar18 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 - 1);
              if ((*(ushort *)(uVar18 + 7) < 0x412) ||
                 ((*(int *)(uVar19 + 7) != *(int *)(param_3 + 0x168) &&
                  (*(int *)(uVar19 + 7) != *(int *)(param_3 + 1000))))) goto LAB_01550aa8;
              uVar5 = *(uint *)(uVar18 + 0xf);
              uVar19 = uVar19 & 0xffffffff00000000 | (ulong)uVar5;
            } while (uVar5 != *(uint *)(param_3 + 0xb0));
          }
          plVar13 = *(long **)(ElementsAccessor::elements_accessors_ +
                              ((ulong)*(byte *)((uVar17 | 10) + (ulong)*(uint *)(uVar15 - 1)) & 0xf8
                              ));
          uVar7 = (**(code **)(*plVar13 + 200))(plVar13,param_3,puVar8,param_2 + -1,uVar16,uVar20);
          if ((uVar7 & 0xff) == 0) {
            unaff_x24 = *(undefined8 *)(param_3 + 0x180);
          }
          else {
            puVar12 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,0xff < uVar7);
            unaff_x24 = *puVar12;
            if (param_3 == (Isolate *)0x0) {
              return unaff_x24;
            }
          }
          goto LAB_01550c80;
        }
LAB_01550aa8:
        if ((long)uVar16 < (long)uVar20) {
          uVar15 = uVar16 << 1;
          do {
            puVar10 = *(ulong **)pIVar1;
            puVar9 = *(ulong **)(param_3 + 0x95a8);
            *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
            if ((uVar16 == (long)(int)uVar16) && (uVar16 + 0x40000000 >> 0x1f == 0)) {
              if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar11 = puVar10;
                if (puVar9 == puVar10) {
                  puVar11 = (ulong *)HandleScope::Extend(param_3);
                }
                *(ulong **)pIVar1 = puVar11 + 1;
                *puVar11 = uVar15;
              }
              else {
                puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
              }
            }
            else {
              puVar11 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                           ((Factory *)param_3);
              *(double *)(*puVar11 + 3) = (double)(long)uVar16;
            }
            LookupIterator::PropertyOrElement
                      ((LookupIterator *)local_c8,param_3,puVar8,puVar11,auStack_64,3);
            puVar12 = (undefined8 *)Object::GetProperty((LookupIterator *)local_c8,false);
            if (puVar12 == (undefined8 *)0x0) {
              unaff_x24 = *(undefined8 *)(param_3 + 0x180);
LAB_01550b84:
              bVar6 = true;
            }
            else {
              local_c8[0] = param_2[-1];
              uVar17 = Object::SameValueZero((Object *)local_c8,*puVar12);
              if ((uVar17 & 1) != 0) {
                unaff_x24 = *(undefined8 *)(param_3 + 0xb8);
                goto LAB_01550b84;
              }
              bVar6 = false;
            }
            *(ulong **)pIVar1 = puVar10;
            *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
            if (*(ulong **)(param_3 + 0x95a8) != puVar9) {
              *(ulong **)(param_3 + 0x95a8) = puVar9;
              HandleScope::DeleteExtensions(param_3);
            }
            if (bVar6) goto LAB_01550c80;
            uVar16 = uVar16 + 1;
            uVar15 = uVar15 + 2;
          } while (uVar20 != uVar16);
        }
      }
      else {
        dVar21 = *(double *)(uVar15 + 3);
        if (dVar21 < (double)(long)uVar20) {
          uVar16 = 0;
          if ((ABS(dVar21) != INFINITY) && (!NAN(ABS(dVar21)))) {
            if ((dVar21 < 0.0) && (dVar21 = dVar21 + (double)(long)uVar20, dVar21 <= 0.0)) {
              dVar21 = 0.0;
            }
            uVar16 = (ulong)dVar21;
          }
          goto LAB_01550a14;
        }
      }
      unaff_x24 = *(undefined8 *)(param_3 + 0xc0);
      goto LAB_01550c80;
    }
  }
  else if (*(short *)((uVar20 | 7) + (ulong)*(uint *)((uVar20 | uVar5) - 1)) == 0x42) {
    dVar21 = *(double *)((uVar20 | uVar5) + 3) + 4503599627370496.0;
    uVar2 = SUB84(dVar21,0);
    if ((ulong)dVar21 >> 0x20 != 0x43300000) {
      uVar2 = 0;
    }
    goto joined_r0x015509b8;
  }
LAB_015509dc:
  unaff_x24 = *(undefined8 *)(param_3 + 0xc0);
LAB_01550c80:
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return unaff_x24;
}

