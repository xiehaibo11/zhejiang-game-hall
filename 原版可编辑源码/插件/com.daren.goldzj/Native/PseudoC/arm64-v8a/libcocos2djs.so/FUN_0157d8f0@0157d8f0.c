
ulong FUN_0157d8f0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  vector<int,std::__ndk1::allocator<int>> *this;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_7c;
  long *local_78;
  long *local_70;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x1e4);
  }
  if (DAT_01d47248 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47248 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar7 = DAT_01d47248;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d47248 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar7,"V8.Runtime_Runtime_StringSplit",0,0,0,0,0,0,0,&local_78,0
                      );
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_78;
    local_78 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_StringSplit";
    local_c8 = pbVar7;
    local_b8 = uVar9;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar16 = *param_2;
  if (((uVar16 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar12 = param_2 + -1;
  uVar17 = *puVar12;
  if (((uVar17 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar19 = param_2[-2];
  if ((uVar19 & 1) == 0) {
    uVar2 = (int)uVar19 >> 1;
  }
  else {
    if (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    dVar28 = *(double *)(uVar19 + 3);
    if ((((dVar28 < -2147483648.0) || (2147483647.0 < dVar28)) || (ABS(dVar28) == INFINITY)) ||
       ((NAN(ABS(dVar28)) || (uVar2 = (int)dVar28, dVar28 != (double)(int)dVar28)))) {
      uVar2 = 0xfffffbce;
      if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
        uVar2 = ((uint)((ulong)dVar28 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar2 < 0) {
        if ((int)uVar2 < -0x34) goto LAB_0157e084;
        uVar19 = (ulong)dVar28 & 0xfffffffffffff;
        if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
          uVar19 = (ulong)dVar28 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar22 = (uint)(uVar19 >> ((ulong)-uVar2 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar2) goto LAB_0157e084;
        uVar19 = (ulong)dVar28 & 0xfffffffffffff;
        if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
          uVar19 = (ulong)dVar28 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar22 = (uint)(uVar19 << ((ulong)uVar2 & 0x3f));
      }
      uVar2 = -uVar22;
      if (-1 < (long)dVar28) {
        uVar2 = uVar22;
      }
    }
  }
  if (uVar2 == 0) {
LAB_0157e084:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 < limit");
  }
  local_7c = *(int *)(uVar16 + 7);
  iVar6 = *(int *)(uVar17 + 7);
  if (iVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 < pattern_length");
  }
  if (uVar2 == 0xffffffff) {
    local_78 = (long *)0x0;
    uVar16 = v8::internal::RegExpResultsCache::Lookup(param_3 + 0x8850,uVar16,*puVar12,&local_78,1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(param_3 + 0x95a0);
      if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar16;
      iVar23 = (int)uVar16;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
      uVar16 = *puVar10;
      iVar23 = (int)uVar16;
    }
    if (iVar23 != 0) {
      puVar12 = (ulong *)v8::internal::Factory::NewJSArrayWithElements
                                   (param_3,puVar10,3,*(int *)(uVar16 + 3) >> 1,0);
      uVar16 = *puVar12;
      goto LAB_0157dfa0;
    }
  }
  this = (vector<int,std::__ndk1::allocator<int>> *)(param_3 + 0xb620);
  puVar10 = (ulong *)v8::internal::String::Flatten(param_3,param_2,0);
  puVar11 = (undefined8 *)v8::internal::String::Flatten(param_3,puVar12,0);
  *(undefined8 *)(param_3 + 0xb628) = *(undefined8 *)this;
  v8::internal::FindStringIndicesDispatch(param_3,*puVar10,*puVar11,this,uVar2);
  piVar18 = *(int **)(param_3 + 0xb628);
  if ((uint)((ulong)((long)piVar18 - *(long *)this) >> 2) < uVar2) {
    if (*(int **)(param_3 + 0xb630) == piVar18) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                (this,&local_7c);
      piVar18 = *(int **)(param_3 + 0xb628);
    }
    else {
      *piVar18 = local_7c;
      piVar18 = (int *)(*(long *)(param_3 + 0xb628) + 4);
      *(int **)(param_3 + 0xb628) = piVar18;
    }
  }
  lVar20 = *(long *)this;
  uVar16 = (ulong)((long)piVar18 - lVar20) >> 2;
  puVar12 = (ulong *)v8::internal::Factory::NewJSArray
                               ((Factory *)param_3,2,uVar16,uVar16 & 0xffffffff,1,0);
  uVar17 = *puVar12 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar12 + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)(param_3 + 0x95a0);
    if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
      puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
    *puVar13 = uVar17;
  }
  else {
    puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
  }
  iVar23 = (int)uVar16;
  if (iVar23 == 1) {
    if (*(int **)(param_3 + 0xb628) == *(int **)this) {
LAB_0157e058:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (**(int **)this == local_7c) {
      uVar16 = *puVar13;
      uVar17 = *puVar10;
      *(int *)(uVar16 + 7) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar19 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar19 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar16,uVar16 + 7,uVar17);
          uVar19 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar19 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar16,uVar16 + 7,uVar17);
        }
      }
    }
    else {
LAB_0157dd78:
      lVar24 = 0;
      iVar27 = 0;
      uVar16 = 0;
      do {
        while( true ) {
          iVar25 = *(int *)(param_3 + 0x95b0);
          uVar3 = *(undefined8 *)(param_3 + 0x95a0);
          lVar5 = *(long *)(param_3 + 0x95a8);
          lVar24 = lVar24 + 0x400;
          iVar26 = (int)uVar16;
          *(int *)(param_3 + 0x95b0) = iVar25 + 1;
          if ((iVar23 <= iVar26) || (lVar24 <= iVar26)) break;
          iVar25 = iVar26 << 2;
          uVar16 = (long)iVar26;
          do {
            if ((ulong)(*(long *)(param_3 + 0xb628) - *(long *)this >> 2) <= uVar16)
            goto LAB_0157e058;
            iVar26 = *(int *)(*(long *)this + uVar16 * 4);
            puVar14 = (ulong *)v8::internal::Factory::NewProperSubString
                                         ((Factory *)param_3,puVar10,iVar27,iVar26);
            uVar17 = *puVar13;
            uVar19 = *puVar14;
            *(int *)(uVar17 + (long)iVar25 + 7) = (int)uVar19;
            if ((uVar19 & 1) != 0) {
              uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
              lVar1 = uVar17 + (long)iVar25 + 7;
              if (((uint)uVar21 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar17,lVar1,uVar19);
                uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar21 & 0x18) != 0) &&
                 ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar17,lVar1,uVar19);
              }
            }
            uVar16 = uVar16 + 1;
            iVar27 = iVar26 + iVar6;
          } while (((long)uVar16 < ((long)piVar18 - lVar20) * 0x40000000 >> 0x20) &&
                  (iVar25 = iVar25 + 4, (long)uVar16 < lVar24));
          *(undefined8 *)(param_3 + 0x95a0) = uVar3;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar5) {
            *(long *)(param_3 + 0x95a8) = lVar5;
            v8::internal::HandleScope::DeleteExtensions(param_3);
          }
          if (iVar23 <= (int)uVar16) goto LAB_0157ded4;
        }
        *(int *)(param_3 + 0x95b0) = iVar25;
      } while (iVar26 < iVar23);
    }
  }
  else if (0 < iVar23) goto LAB_0157dd78;
LAB_0157ded4:
  if ((uVar2 == 0xffffffff) &&
     ((*(byte *)((*puVar12 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*puVar12 - 1)) & 0xf0) ==
      0x10)) {
    v8::internal::RegExpResultsCache::Enter(param_3,puVar10,puVar11,puVar13,param_3 + 0x168,1);
  }
  pvVar15 = *(void **)this;
  if ((0x2000 < (ulong)((long)*(void **)(param_3 + 0xb630) - (long)pvVar15 >> 2)) &&
     (*(void **)(param_3 + 0xb628) = pvVar15, *(void **)(param_3 + 0xb630) != pvVar15)) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(param_3 + 0xb628) = 0;
    *(undefined8 *)(param_3 + 0xb630) = 0;
    if (pvVar15 != (void *)0x0) {
      operator_delete(pvVar15);
    }
  }
  uVar16 = *puVar12;
LAB_0157dfa0:
  *(undefined8 *)(param_3 + 0x95a0) = uVar9;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_c8,local_c0,local_b8);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  return uVar16;
}

