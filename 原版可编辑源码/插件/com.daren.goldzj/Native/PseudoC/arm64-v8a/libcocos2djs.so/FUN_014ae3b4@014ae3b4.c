
char * FUN_014ae3b4(int param_1,ulong *param_2,Isolate *param_3,char *param_4,uint param_5)

{
  Isolate *pIVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong *puVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  ulong *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  char *local_80;
  size_t sStack_78;
  
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar9 = param_2 + -1;
  uVar17 = *param_2;
  pIVar11 = (Isolate *)(param_2 + -2);
  if (param_1 < 7) {
    pIVar11 = param_3 + 0xa0;
  }
  if ((((uVar17 & 1) == 0) ||
      (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x424)) ||
     (((param_5 ^ *(uint *)(uVar17 + 0x1b) >> 4) & 1) != 0)) {
    sStack_78 = strlen(param_4);
    local_80 = param_4;
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar6 == 0) goto LAB_014ae8d0;
    uVar16 = 0x3d;
    puVar9 = param_2;
  }
  else {
    if (((param_5 & 1) != 0) || ((*(uint *)(uVar17 + 0x1b) >> 2 & 1) == 0)) {
      uVar21 = *(undefined8 *)(uVar17 + 0xb);
      if ((*puVar9 & 1) != 0) {
        puVar9 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
      }
      if (puVar9 != (ulong *)0x0) {
        uVar17 = *puVar9;
        iVar2 = (int)uVar17 >> 1;
        if ((uVar17 & 1) == 0) {
          dVar19 = (double)iVar2;
        }
        else {
          dVar19 = *(double *)(uVar17 + 3);
        }
        dVar22 = (double)NEON_ucvtf(uVar21);
        if (0.0 <= dVar19) {
          if ((uVar17 & 1) == 0) {
            dVar19 = (double)iVar2;
          }
          else {
            dVar19 = *(double *)(uVar17 + 3);
          }
          if (dVar22 <= dVar19) {
            dVar19 = dVar22;
          }
        }
        else {
          if ((uVar17 & 1) == 0) {
            dVar19 = (double)iVar2;
          }
          else {
            dVar19 = *(double *)(uVar17 + 3);
          }
          dVar19 = dVar19 + dVar22;
          if (dVar19 <= 0.0) {
            dVar19 = 0.0;
          }
        }
        puVar10 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                     ((Factory *)param_3,dVar19);
        if ((*(ulong *)pIVar11 & 1) != 0) {
          dVar20 = dVar22;
          if ((int)*(ulong *)pIVar11 != *(int *)(param_3 + 0xa0)) {
            pIVar11 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3,pIVar11);
            goto LAB_014ae59c;
          }
          goto LAB_014ae5d4;
        }
LAB_014ae59c:
        if (pIVar11 == (Isolate *)0x0) goto LAB_014ae744;
        uVar17 = *(ulong *)pIVar11;
        if ((uVar17 & 1) == 0) {
          dVar20 = (double)((int)uVar17 >> 1);
          if (0.0 <= dVar20) goto LAB_014ae5d4;
LAB_014ae5b8:
          dVar20 = dVar20 + dVar22;
          if (dVar20 <= 0.0) {
            dVar20 = 0.0;
          }
        }
        else {
          dVar20 = *(double *)(uVar17 + 3);
          if (dVar20 < 0.0) goto LAB_014ae5b8;
LAB_014ae5d4:
          if (dVar22 <= dVar20) {
            dVar20 = dVar22;
          }
        }
        dVar20 = dVar20 - dVar19;
        if (dVar20 <= 0.0) {
          dVar20 = 0.0;
        }
        puVar12 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                     ((Factory *)param_3,dVar20);
        uVar17 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
        uVar18 = uVar17 | *(uint *)((uVar17 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
        if ((param_5 & 1) == 0) {
          uVar5 = *(uint *)(uVar18 + 0x23);
        }
        else {
          uVar5 = *(uint *)(uVar18 + 0x28b);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar1;
          if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar9 + 1;
          *puVar9 = uVar17 | uVar5;
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17 | uVar5);
        }
        lVar6 = v8::internal::Object::SpeciesConstructor(param_3,param_2,puVar9);
        if (lVar6 != 0) {
          puVar7 = operator_new__(8,(nothrow_t *)&std::nothrow);
          if (puVar7 == (undefined8 *)0x0) {
            plVar13 = (long *)v8::internal::V8::GetCurrentPlatform();
            (**(code **)(*plVar13 + 0x18))();
            puVar7 = operator_new__(8,(nothrow_t *)&std::nothrow);
            if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
            }
          }
          *puVar7 = puVar12;
          puVar9 = (ulong *)v8::internal::Execution::New(param_3,lVar6,1,puVar7);
          if (puVar9 == (ulong *)0x0) {
            pcVar8 = *(char **)(param_3 + 0x180);
            operator_delete__(puVar7);
            goto LAB_014ae488;
          }
          operator_delete__(puVar7);
          pcVar8 = (char *)*puVar9;
          if ((*(short *)(((ulong)pcVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pcVar8 + -1))
               != 0x424) || (((param_5 ^ *(uint *)(pcVar8 + 0x1b) >> 4) & 1) != 0)) {
            sStack_78 = strlen(param_4);
            local_80 = param_4;
            lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
            if (lVar6 == 0) goto LAB_014ae8d0;
            uVar16 = 0x3d;
            goto LAB_014ae46c;
          }
          if ((param_5 & 1) == 0) {
            if ((*(uint *)(pcVar8 + 0x1b) >> 2 & 1) != 0) goto LAB_014ae7fc;
            local_80 = pcVar8;
            uVar17 = v8::internal::Object::SameValue((Object *)&local_80,*param_2);
            if ((uVar17 & 1) == 0) {
              pcVar8 = (char *)*puVar9;
              goto LAB_014ae7ac;
            }
            uVar16 = 0xe;
          }
          else if (*(long *)(pcVar8 + 0x13) == *(long *)(*param_2 + 0x13)) {
            uVar16 = 0xa1;
          }
          else {
LAB_014ae7ac:
            dVar19 = (double)NEON_ucvtf(*(undefined8 *)(pcVar8 + 0xb));
            if (dVar20 <= dVar19) {
              if (((param_5 & 1) != 0) || ((*(uint *)(*param_2 + 0x1b) >> 2 & 1) == 0)) {
                uVar17 = *puVar10;
                if ((uVar17 & 1) == 0) {
                  if ((int)uVar17 < 0) {
LAB_014ae8f0:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.","TryNumberToSize(*first_obj, &first_size)");
                  }
                  uVar17 = uVar17 >> 1 & 0x7fffffff;
                }
                else {
                  dVar19 = *(double *)(uVar17 + 3);
                  if ((dVar19 < 0.0) || (1.8446744073709552e+19 <= dVar19)) goto LAB_014ae8f0;
                  uVar17 = (ulong)dVar19;
                }
                uVar18 = *puVar12;
                if ((uVar18 & 1) == 0) {
                  if ((int)uVar18 < 0) {
LAB_014ae904:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.","TryNumberToSize(*new_len_obj, &new_len_size)");
                  }
                  uVar18 = uVar18 >> 1 & 0x7fffffff;
                }
                else {
                  dVar19 = *(double *)(uVar18 + 3);
                  if ((dVar19 < 0.0) || (1.8446744073709552e+19 <= dVar19)) goto LAB_014ae904;
                  uVar18 = (ulong)dVar19;
                }
                if (uVar18 != 0) {
                  puVar15 = (undefined1 *)(*(long *)(*param_2 + 0x13) + uVar17);
                  puVar14 = *(undefined1 **)(pcVar8 + 0x13);
                  if (uVar18 < 8) {
                    do {
                      uVar18 = uVar18 - 1;
                      *puVar14 = *puVar15;
                      puVar14 = puVar14 + 1;
                      puVar15 = puVar15 + 1;
                    } while (uVar18 != 0);
                    pcVar8 = (char *)*puVar9;
                    if (param_3 == (Isolate *)0x0) {
                      return pcVar8;
                    }
                  }
                  else {
                    v8::internal::MemCopy(*(undefined1 **)(pcVar8 + 0x13),puVar15,uVar18);
                    pcVar8 = (char *)*puVar9;
                  }
                }
                goto LAB_014ae488;
              }
              goto LAB_014ae7fc;
            }
            uVar16 = 0xa0;
            if ((param_5 & 1) == 0) {
              uVar16 = 0xd;
            }
          }
          lVar6 = 0;
          goto LAB_014ae828;
        }
      }
LAB_014ae744:
      pcVar8 = *(char **)(param_3 + 0x180);
      goto LAB_014ae488;
    }
LAB_014ae7fc:
    sStack_78 = strlen(param_4);
    local_80 = param_4;
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar6 == 0) {
LAB_014ae8d0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar16 = 0x31;
LAB_014ae828:
    puVar9 = (ulong *)0x0;
  }
LAB_014ae46c:
  puVar7 = (undefined8 *)
           v8::internal::Factory::NewTypeError((Factory *)param_3,uVar16,lVar6,puVar9,0);
  pcVar8 = (char *)v8::internal::Isolate::Throw(param_3,*puVar7,0);
LAB_014ae488:
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return pcVar8;
}

