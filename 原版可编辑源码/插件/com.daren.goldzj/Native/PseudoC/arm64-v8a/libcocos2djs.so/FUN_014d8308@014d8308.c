
undefined8 FUN_014d8308(int param_1,long param_2,Isolate *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  Isolate *pIVar17;
  Isolate *pIVar18;
  Isolate *pIVar19;
  Isolate *pIVar20;
  Isolate *pIVar21;
  long lVar22;
  double dVar23;
  Isolate *local_170;
  undefined1 local_164 [4];
  undefined8 local_160 [14];
  void *local_f0;
  Isolate *local_e8;
  long *local_e0;
  void *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  param_1 = param_1 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 < 2) {
    pIVar20 = param_3 + 0xa0;
LAB_014d839c:
    pIVar19 = param_3 + 0xa0;
LAB_014d83a0:
    pIVar17 = param_3 + 0xa0;
LAB_014d83a4:
    pIVar21 = param_3 + 0xa0;
LAB_014d83a8:
    pIVar18 = param_3 + 0xa0;
  }
  else {
    pIVar20 = (Isolate *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014d839c;
    pIVar19 = (Isolate *)(param_2 + -0x10);
    if (param_1 < 4) goto LAB_014d83a0;
    pIVar17 = (Isolate *)(param_2 + -0x18);
    if (param_1 == 4) goto LAB_014d83a4;
    pIVar21 = (Isolate *)(param_2 + -0x20);
    if (param_1 < 6) goto LAB_014d83a8;
    pIVar18 = (Isolate *)(param_2 + -0x28);
  }
  FUN_014d8880(&local_e8,param_3,pIVar19);
  plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
  pcVar7 = (char *)(**(code **)(*plVar6 + 0x10))(plVar6,local_e8);
  pvVar5 = local_78;
  local_78 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (*pcVar7 == '\0') {
    uVar16 = *(undefined8 *)(param_3 + 0xc0);
    goto LAB_014d8538;
  }
  uVar10 = *(ulong *)pIVar20;
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x42)) {
    uVar10 = *(ulong *)pIVar19;
    if (((uVar10 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
      uVar16 = 0x16e;
    }
    else {
      uVar10 = *(ulong *)pIVar17;
      if (((uVar10 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
        uVar16 = 0x16f;
      }
      else {
        uVar14 = *(ulong *)pIVar21;
        iVar11 = (int)uVar14;
        if ((uVar14 & 1) == 0) {
          dVar23 = (double)(iVar11 >> 1);
LAB_014d845c:
          if ((((dVar23 < -2147483648.0) || (2147483647.0 < dVar23)) || (ABS(dVar23) == INFINITY))
             || ((NAN(ABS(dVar23)) || (iVar11 = (int)dVar23, dVar23 != (double)(int)dVar23)))) {
            uVar1 = 0xfffffbce;
            if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
              uVar1 = ((uint)((ulong)dVar23 >> 0x34) & 0x7ff) - 0x433;
            }
            if ((int)uVar1 < 0) {
              if ((int)uVar1 < -0x34) goto LAB_014d85d0;
              uVar14 = (ulong)dVar23 & 0xfffffffffffff;
              if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
                uVar14 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
              }
              iVar15 = (int)(uVar14 >> ((ulong)-uVar1 & 0x3f));
            }
            else {
              if (0x1f < (int)uVar1) {
LAB_014d85d0:
                iVar11 = 0;
                goto LAB_014d861c;
              }
              uVar14 = (ulong)dVar23 & 0xfffffffffffff;
              if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
                uVar14 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
              }
              iVar15 = (int)(uVar14 << ((ulong)uVar1 & 0x3f));
            }
            iVar11 = -iVar15;
            if (-1 < (long)dVar23) {
              iVar11 = iVar15;
            }
          }
LAB_014d861c:
          lVar22 = (long)iVar11;
          uVar12 = 3;
          iVar11 = *(int *)(uVar10 + 7);
        }
        else {
          if ((iVar11 != *(int *)(param_3 + 0xb0)) && (iVar11 != *(int *)(param_3 + 0xa0))) {
            if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x42
               ) {
              uVar16 = 0x172;
              goto LAB_014d8510;
            }
            dVar23 = *(double *)(uVar14 + 3);
            goto LAB_014d845c;
          }
          lVar22 = 0;
          uVar12 = 1;
          iVar11 = *(int *)(uVar10 + 7);
        }
        if (iVar11 != 0) {
          FUN_014d8880(local_160,param_3,pIVar17);
          if (((*(ulong *)pIVar18 & 1) == 0) || ((int)*(ulong *)pIVar18 != *(int *)(param_3 + 0xa0))
             ) {
            lVar9 = v8::internal::JsonStringify(param_3,pIVar18,param_3 + 0xa0,param_3 + 0xa0);
            if (lVar9 != 0) {
              pIVar17 = operator_new(0x20);
              *(undefined8 *)(pIVar17 + 0x10) = 0;
              *(undefined8 *)(pIVar17 + 0x18) = 0;
              *(undefined ***)pIVar17 = &PTR_FUN_01cc43a8;
              *(undefined8 *)(pIVar17 + 8) = 0;
              FUN_014d8880(&local_e8,param_3,lVar9);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(pIVar17 + 8),(char *)local_e8);
              pvVar5 = local_78;
              local_78 = (void *)0x0;
              if (pvVar5 != (void *)0x0) {
                operator_delete(pvVar5);
              }
              iVar11 = 1;
              local_164[0] = 8;
              uVar10 = *(ulong *)pIVar20;
              local_170 = pIVar17;
              uVar16 = local_160[0];
              goto joined_r0x014d86e8;
            }
            pIVar20 = param_3 + 0x180;
          }
          else {
            iVar11 = 0;
            uVar10 = *(ulong *)pIVar20;
            uVar16 = local_160[0];
joined_r0x014d86e8:
            if ((uVar10 & 1) == 0) {
              dVar23 = (double)((int)uVar10 >> 1);
            }
            else {
              dVar23 = *(double *)(uVar10 + 3);
            }
            if ((((dVar23 < -2147483648.0) || (2147483647.0 < dVar23)) || (ABS(dVar23) == INFINITY))
               || ((NAN(ABS(dVar23)) || (iVar15 = (int)dVar23, dVar23 != (double)(int)dVar23)))) {
              uVar1 = 0xfffffbce;
              if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
                uVar1 = ((uint)((ulong)dVar23 >> 0x34) & 0x7ff) - 0x433;
              }
              if ((int)uVar1 < 0) {
                if ((int)uVar1 < -0x34) goto LAB_014d879c;
                uVar10 = (ulong)dVar23 & 0xfffffffffffff;
                if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
                  uVar10 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
                }
                iVar13 = (int)(uVar10 >> ((ulong)-uVar1 & 0x3f));
              }
              else {
                if (0x1f < (int)uVar1) {
LAB_014d879c:
                  iVar15 = 0;
                  goto LAB_014d87c8;
                }
                uVar10 = (ulong)dVar23 & 0xfffffffffffff;
                if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
                  uVar10 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
                }
                iVar13 = (int)(uVar10 << ((ulong)uVar1 & 0x3f));
              }
              iVar15 = -iVar13;
              if (-1 < (long)dVar23) {
                iVar15 = iVar13;
              }
            }
LAB_014d87c8:
            local_e8 = (Isolate *)0x0;
            local_e0 = (long *)0x0;
            if (iVar11 != 0) {
              local_e8 = pIVar17;
            }
            plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
            (**(code **)(*plVar6 + 0x18))
                      (plVar6,iVar15,pcVar7,uVar16,0,lVar22,0,iVar11,
                       &PTR_s_data_01896610_0x13_01d358f0,local_164,&local_170,&local_e8,uVar12);
            plVar6 = local_e0;
            local_e0 = (long *)0x0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
            pIVar20 = local_e8;
            local_e8 = (Isolate *)0x0;
            if (pIVar20 != (Isolate *)0x0) {
              (**(code **)(*(long *)pIVar20 + 8))();
            }
            pIVar20 = param_3 + 0xb8;
          }
          pvVar5 = local_f0;
          uVar16 = *(undefined8 *)pIVar20;
          local_f0 = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
          goto LAB_014d8538;
        }
        uVar16 = 0x170;
      }
    }
  }
  else {
    uVar16 = 0x171;
  }
LAB_014d8510:
  puVar8 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,uVar16,0,0,0);
  uVar16 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
LAB_014d8538:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}

