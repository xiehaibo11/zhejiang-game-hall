
/* v8::internal::Runtime_ArrayIndexOf(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_ArrayIndexOf(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  double dVar21;
  undefined1 auVar22 [16];
  ulong local_e0;
  ulong local_d0;
  LookupIterator aLStack_c8 [88];
  undefined1 auStack_64 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar13 = FUN_01551974(param_1,param_2,param_3);
    return uVar13;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar7 = param_2 + -2;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (puVar6 = param_2,
     *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9)) {
    puVar6 = (ulong *)Object::ToObjectImpl(param_3,param_2,"Array.prototype.indexOf");
  }
  if (puVar6 != (ulong *)0x0) {
    uVar17 = *puVar6;
    uVar13 = uVar17 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar13 + *(uint *)(uVar17 - 1)) == 0x423) {
      uVar15 = *(uint *)(uVar17 + 0xb);
      if ((uVar15 & 1) == 0) {
        uVar2 = 0;
        if (-1 < (int)uVar15) {
          uVar2 = uVar15 >> 1;
        }
        uVar13 = (ulong)uVar2;
joined_r0x0155153c:
        if (uVar13 != 0) {
          if ((*puVar7 & 1) != 0) {
            puVar7 = (ulong *)Object::ConvertToInteger(param_3,puVar7);
          }
          if (puVar7 == (ulong *)0x0) goto LAB_015518a8;
          uVar17 = *puVar7;
          if ((uVar17 & 1) == 0) {
            dVar21 = (double)((int)uVar17 >> 1);
          }
          else {
            dVar21 = *(double *)(uVar17 + 3);
          }
          if (dVar21 <= (double)(long)uVar13) {
            if (dVar21 < -9.223372036854776e+18) {
              uVar17 = 0;
            }
            else {
              uVar17 = (ulong)dVar21;
              if ((long)uVar17 < 0) {
                uVar17 = uVar13 + uVar17 & ((long)(uVar13 + uVar17) >> 0x3f ^ 0xffffffffffffffffU);
              }
            }
            uVar14 = *puVar6;
            if (((long)uVar13 < 0x100000000) &&
               (uVar16 = uVar14 & 0xffffffff00000000,
               0x410 < *(ushort *)((uVar16 | *(uint *)(uVar14 - 1)) + 7))) {
              uVar15 = *(uint *)((uVar16 | *(uint *)(uVar14 - 1)) + 0xf);
              if (uVar15 != *(uint *)(param_3 + 0xb0)) {
                uVar19 = uVar16 | uVar15;
                do {
                  uVar18 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 - 1);
                  if ((*(ushort *)(uVar18 + 7) < 0x412) ||
                     ((*(int *)(uVar19 + 7) != *(int *)(param_3 + 0x168) &&
                      (*(int *)(uVar19 + 7) != *(int *)(param_3 + 1000))))) goto LAB_0155165c;
                  uVar15 = *(uint *)(uVar18 + 0xf);
                  uVar19 = uVar19 & 0xffffffff00000000 | (ulong)uVar15;
                } while (uVar15 != *(uint *)(param_3 + 0xb0));
              }
              plVar11 = *(long **)(ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)((uVar16 | 10) + (ulong)*(uint *)(uVar14 - 1)) &
                                  0xf8));
              auVar22 = (**(code **)(*plVar11 + 0xd0))
                                  (plVar11,param_3,puVar6,param_2 + -1,uVar17 & 0xffffffff,
                                   uVar13 & 0xffffffff);
              lVar12 = auVar22._8_8_;
              if ((auVar22._0_8_ & 0xff) == 0) goto LAB_015518a8;
              if ((lVar12 == auVar22._8_4_) && (lVar12 + 0x40000000U >> 0x1f == 0)) {
                if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar7 = *(ulong **)pIVar1;
                  if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
                    puVar7 = (ulong *)HandleScope::Extend(param_3);
                  }
                  *(ulong **)pIVar1 = puVar7 + 1;
                  *puVar7 = lVar12 << 1;
                }
                else {
                  puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                               lVar12 << 1);
                }
              }
              else {
                puVar7 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                            ((Factory *)param_3);
                *(double *)(*puVar7 + 3) = (double)lVar12;
              }
              uVar16 = *puVar7;
            }
            else {
LAB_0155165c:
              if ((long)uVar17 < (long)uVar13) {
                uVar14 = uVar17 << 1;
                do {
                  puVar7 = *(ulong **)pIVar1;
                  puVar8 = *(ulong **)(param_3 + 0x95a8);
                  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
                  if ((uVar17 == (long)(int)uVar17) && (uVar17 + 0x40000000 >> 0x1f == 0)) {
                    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = puVar7;
                      if (puVar8 == puVar7) {
                        puVar9 = (ulong *)HandleScope::Extend(param_3);
                      }
                      *(ulong **)pIVar1 = puVar9 + 1;
                      *puVar9 = uVar14;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                                   uVar14);
                    }
                  }
                  else {
                    puVar9 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                                ((Factory *)param_3);
                    *(double *)(*puVar9 + 3) = (double)(long)uVar17;
                  }
                  LookupIterator::PropertyOrElement(aLStack_c8,param_3,puVar6,puVar9,auStack_64,3);
                  uVar5 = JSReceiver::HasProperty(aLStack_c8);
                  if ((uVar5 & 0xff) == 0) {
LAB_01551778:
                    local_e0 = *(ulong *)(param_3 + 0x180);
LAB_0155177c:
                    iVar20 = 1;
                  }
                  else {
                    if (0xff < uVar5) {
                      puVar10 = (undefined8 *)Object::GetProperty(aLStack_c8,false);
                      if (puVar10 == (undefined8 *)0x0) goto LAB_01551778;
                      local_d0 = param_2[-1];
                      uVar16 = Object::StrictEquals((Object *)&local_d0,*puVar10);
                      if ((uVar16 & 1) == 0) {
                        iVar20 = 0;
                        goto LAB_01551794;
                      }
                      local_e0 = *puVar9;
                      goto LAB_0155177c;
                    }
                    iVar20 = 0x1c;
                  }
LAB_01551794:
                  *(ulong **)pIVar1 = puVar7;
                  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
                  if (*(ulong **)(param_3 + 0x95a8) != puVar8) {
                    *(ulong **)(param_3 + 0x95a8) = puVar8;
                    HandleScope::DeleteExtensions(param_3);
                  }
                  if ((iVar20 != 0x1c) && (uVar16 = local_e0, iVar20 != 0)) break;
                  uVar17 = uVar17 + 1;
                  uVar14 = uVar14 + 2;
                  uVar16 = 0xfffffffffffffffe;
                } while (uVar13 != uVar17);
                goto LAB_015518ac;
              }
              uVar16 = 0xfffffffffffffffe;
            }
            if (param_3 == (Isolate *)0x0) {
              return uVar16;
            }
            goto LAB_015518ac;
          }
        }
      }
      else {
        uVar17 = uVar17 & 0xffffffff00000000 | (ulong)uVar15;
        if (*(short *)(uVar13 + *(uint *)(uVar17 - 1)) == 0x42) {
          dVar21 = *(double *)(uVar17 + 3) + 4503599627370496.0;
          uVar15 = SUB84(dVar21,0);
          if ((ulong)dVar21 >> 0x20 != 0x43300000) {
            uVar15 = 0;
          }
          uVar13 = (ulong)uVar15;
          goto joined_r0x0155153c;
        }
      }
      uVar16 = 0xfffffffffffffffe;
      goto LAB_015518ac;
    }
    puVar8 = (ulong *)Object::GetProperty(param_3,puVar6,param_3 + 0x7b8);
    if (puVar8 != (ulong *)0x0) {
      uVar13 = *puVar8;
      if ((uVar13 & 1) == 0) {
        uVar13 = (ulong)(((uint)(uVar13 >> 1) & 0x7fffffff & ((int)uVar13 >> 0x1f ^ 0xffffffffU)) <<
                        1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pIVar1;
          if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar8 + 1;
          *puVar8 = uVar13;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
        }
      }
      else {
        puVar8 = (ulong *)Object::ConvertToLength(param_3,puVar8);
      }
      if (puVar8 != (ulong *)0x0) {
        uVar13 = *puVar8;
        if ((uVar13 & 1) == 0) {
          uVar13 = (ulong)(double)((int)uVar13 >> 1);
        }
        else {
          uVar13 = (ulong)*(double *)(uVar13 + 3);
        }
        goto joined_r0x0155153c;
      }
    }
  }
LAB_015518a8:
  uVar16 = *(ulong *)(param_3 + 0x180);
LAB_015518ac:
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar16;
}

