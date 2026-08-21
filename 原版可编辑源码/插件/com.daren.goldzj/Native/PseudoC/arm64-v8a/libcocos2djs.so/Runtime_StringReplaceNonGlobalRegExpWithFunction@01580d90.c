
/* v8::internal::Runtime_StringReplaceNonGlobalRegExpWithFunction(int, unsigned long*,
   v8::internal::Isolate*) */

ulong v8::internal::Runtime_StringReplaceNonGlobalRegExpWithFunction
                (int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  void *__s;
  long *plVar13;
  Isolate *pIVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  Isolate *pIVar17;
  int iVar18;
  ulong uVar19;
  code *pcVar20;
  uint uVar21;
  ulong uVar22;
  double dVar23;
  void *local_d8;
  ulong uStack_d0;
  IncrementalStringBuilder aIStack_c8 [40];
  undefined **local_a0;
  void **ppvStack_98;
  undefined ***local_80;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar19 = FUN_015814e0(param_1,param_2,param_3);
    if (*(long *)(lVar8 + 0x28) == local_70) {
      return uVar19;
    }
    goto LAB_01581494;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar19 = *param_2;
  if (((uVar19 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar12 = param_2 + -1;
  uVar19 = *puVar12;
  if (((uVar19 & 1) == 0) ||
     (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x42e)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSRegExp()");
  }
  uVar19 = param_2[-2];
  if (((uVar19 & 1) == 0) ||
     (*(ushort *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSReceiver()");
  }
  uVar19 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar19 = uVar19 | *(uint *)((uVar19 | *(uint *)((uVar19 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x247);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = puVar2;
    if (puVar3 == puVar2) {
      puVar10 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar19;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar19);
  }
  uVar19 = *puVar12;
  uVar4 = *(uint *)((uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + 0xb)) + 0xf);
  if ((uVar4 >> 4 & 1) == 0) {
    uVar21 = 0;
LAB_01580fd4:
    uVar19 = *(ulong *)(param_3 + 0xb0);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar19;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar19);
    }
    if ((*(uint *)(*param_2 + 7) < uVar21) ||
       (puVar11 = (ulong *)RegExp::Exec(param_3,puVar12,param_2,uVar21,puVar10),
       puVar11 != (ulong *)0x0)) {
      uVar19 = *puVar11;
      if (((uVar19 & 1) == 0) || ((int)uVar19 != *(int *)(param_3 + 0xb0))) {
        uVar5 = *(uint *)(uVar19 + 0x17);
        uVar21 = *(int *)(uVar19 + 0x13) >> 1;
        if ((uVar4 >> 4 & 1) != 0) {
          *(uint *)(*puVar12 + 0x17) = uVar5 & 0xfffffffe;
        }
        IncrementalStringBuilder::IncrementalStringBuilder(aIStack_c8,param_3);
        puVar10 = param_2;
        if (*(uint *)(*param_2 + 7) != uVar21) {
          puVar10 = (ulong *)Factory::NewProperSubString((Factory *)param_3,param_2,0,uVar21);
        }
        IncrementalStringBuilder::AppendString(aIStack_c8,puVar10);
        iVar6 = *(int *)(*puVar11 + 7);
        iVar18 = iVar6 >> 1;
        if (iVar18 < 0) {
          iVar18 = iVar18 + 1;
        }
        uVar4 = iVar18 >> 1;
        if (iVar6 < 8) {
LAB_01581140:
          bVar9 = false;
          puVar12 = (ulong *)0x0;
          iVar18 = 2;
        }
        else {
          uVar19 = *puVar12 & 0xffffffff00000000;
          uVar7 = *(uint *)((uVar19 | *(uint *)(*puVar12 + 0xb)) + 0x2b);
          if (((uVar7 & 1) == 0) ||
             (uVar22 = uVar19 | uVar7,
             0xe < *(ushort *)((uVar19 | 7) + (ulong)*(uint *)(uVar22 - 1)) - 0x76))
          goto LAB_01581140;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar12 = *(ulong **)pIVar1;
            if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
              puVar12 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar12 + 1;
            *puVar12 = uVar22;
          }
          else {
            puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
          }
          iVar18 = 3;
          bVar9 = true;
        }
        if ((uVar4 < 0xffff) && (uVar7 = iVar18 + uVar4, uVar7 < 0xffff)) {
          uVar19 = (ulong)uVar7;
          uVar22 = uVar19 << 3;
          __s = operator_new__(uVar22,(nothrow_t *)&std::nothrow);
          if (__s == (void *)0x0) {
            plVar13 = (long *)V8::GetCurrentPlatform();
            (**(code **)(*plVar13 + 0x18))();
            __s = operator_new__(uVar22,(nothrow_t *)&std::nothrow);
            if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
            }
          }
          if (uVar7 != 0) {
            memset(__s,0,uVar22);
          }
          local_d8 = __s;
          uStack_d0 = uVar19;
          if (iVar6 < 4) {
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            do {
              pIVar14 = (Isolate *)
                        RegExpUtils::GenericCaptureGetter
                                  (param_3,puVar11,uVar19 & 0xffffffff,&local_a0);
              pIVar17 = param_3 + 0xa0;
              if ((char)local_a0 != '\0') {
                pIVar17 = pIVar14;
              }
              *(Isolate **)((long)local_d8 + uVar19 * 8) = pIVar17;
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 < (int)uVar4);
          }
          uVar22 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar21 << 1;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)pIVar1;
            if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
              puVar10 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar10 + 1;
            *puVar10 = uVar22;
          }
          else {
            puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
          }
          *(ulong **)((long)local_d8 + (uVar19 & 0xffffffff) * 8) = puVar10;
          *(ulong **)((long)local_d8 + (ulong)((int)uVar19 + 1) * 8) = param_2;
          if (bVar9) {
            ppvStack_98 = &local_d8;
            local_a0 = &PTR_FUN_01cc91c8;
            local_80 = &local_a0;
            uVar16 = FUN_015870e0(param_3,puVar12,&local_a0);
            *(undefined8 *)((long)local_d8 + (ulong)((int)uVar19 + 2) * 8) = uVar16;
            if (&local_a0 == local_80) {
              pcVar20 = (code *)(*local_80)[4];
            }
            else {
              if (local_80 == (undefined ***)0x0) goto LAB_01581320;
              pcVar20 = (code *)(*local_80)[5];
            }
            (*pcVar20)();
          }
LAB_01581320:
          puVar12 = (ulong *)Execution::Call(param_3,param_2 + -2,param_3 + 0xa0,uVar7,local_d8);
          if ((puVar12 == (ulong *)0x0) ||
             (((uVar19 = *puVar12, (uVar19 & 1) == 0 ||
               (0x3f < *(ushort *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1))
               )) && (puVar12 = (ulong *)Object::ConvertToString(param_3,puVar12),
                     puVar12 == (ulong *)0x0)))) {
LAB_015813d8:
            pIVar17 = param_3 + 0x180;
          }
          else {
            iVar18 = (int)uVar5 >> 1;
            IncrementalStringBuilder::AppendString(aIStack_c8,puVar12);
            if (iVar18 != 0) {
              param_2 = (ulong *)Factory::NewProperSubString
                                           ((Factory *)param_3,param_2,iVar18,
                                            *(undefined4 *)(*param_2 + 7));
            }
            IncrementalStringBuilder::AppendString(aIStack_c8,param_2);
            pIVar17 = (Isolate *)IncrementalStringBuilder::Finish(aIStack_c8);
            if (pIVar17 == (Isolate *)0x0) goto LAB_015813d8;
          }
          uVar19 = *(ulong *)pIVar17;
          if (local_d8 != (void *)0x0) {
            operator_delete__(local_d8);
          }
        }
        else {
          puVar15 = (undefined8 *)Factory::NewRangeError((Factory *)param_3,0x132,0,0,0);
          uVar19 = Isolate::Throw(param_3,*puVar15,0);
        }
      }
      else {
        if ((uVar4 >> 4 & 1) != 0) {
          *(undefined4 *)(*puVar12 + 0x17) = 0;
        }
        uVar19 = *param_2;
      }
    }
    else {
      uVar19 = *(ulong *)(param_3 + 0x180);
    }
  }
  else {
    uVar21 = *(uint *)(uVar19 + 0x17);
    uVar19 = uVar19 & 0xffffffff00000000 | (ulong)uVar21;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar19;
      if ((uVar21 & 1) == 0) goto LAB_01580ef0;
LAB_01580f54:
      puVar11 = (ulong *)Object::ConvertToLength(param_3,puVar11);
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar19);
      uVar19 = *puVar11;
      if ((uVar19 & 1) != 0) goto LAB_01580f54;
LAB_01580ef0:
      uVar19 = (ulong)(((uint)(uVar19 >> 1) & 0x7fffffff & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) << 1
                      );
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)pIVar1;
        if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
          puVar11 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar11 + 1;
        *puVar11 = uVar19;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar19);
      }
    }
    if (puVar11 != (ulong *)0x0) {
      uVar19 = *puVar11;
      if ((uVar19 & 1) == 0) {
        uVar21 = 0;
        if (1 < (int)uVar19) {
          uVar21 = (int)uVar19 >> 1;
        }
      }
      else if (1.0 <= *(double *)(uVar19 + 3)) {
        dVar23 = (double)NEON_fminnm(*(double *)(uVar19 + 3),0x41efffffffe00000);
        uVar21 = (int)dVar23;
      }
      else {
        uVar21 = 0;
      }
      goto LAB_01580fd4;
    }
    uVar19 = *(ulong *)(param_3 + 0x180);
  }
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return uVar19;
  }
LAB_01581494:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

