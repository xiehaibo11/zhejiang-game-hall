
/* v8::internal::Runtime_StringSplit(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StringSplit(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  vector<int,std::__ndk1::allocator<int>> *this;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  void *pvVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  double dVar27;
  undefined8 local_70;
  int local_64;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar15 = FUN_0157d8f0(param_1,param_2,param_3);
    return uVar15;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar4 = *(long *)pIVar2;
  lVar6 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = *param_2;
  if (((uVar15 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar11 = param_2 + -1;
  uVar16 = *puVar11;
  if (((uVar16 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar18 = param_2[-2];
  if ((uVar18 & 1) == 0) {
    uVar3 = (int)uVar18 >> 1;
  }
  else {
    if (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    dVar27 = *(double *)(uVar18 + 3);
    if ((((dVar27 < -2147483648.0) || (2147483647.0 < dVar27)) || (ABS(dVar27) == INFINITY)) ||
       ((NAN(ABS(dVar27)) || (uVar3 = (int)dVar27, dVar27 != (double)(int)dVar27)))) {
      uVar3 = 0xfffffbce;
      if (((ulong)dVar27 & 0x7ff0000000000000) != 0) {
        uVar3 = ((uint)((ulong)dVar27 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar3 < 0) {
        if ((int)uVar3 < -0x34) goto LAB_0157d8b4;
        uVar18 = (ulong)dVar27 & 0xfffffffffffff;
        if (((ulong)dVar27 & 0x7ff0000000000000) != 0) {
          uVar18 = (ulong)dVar27 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar21 = (uint)(uVar18 >> ((ulong)-uVar3 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar3) goto LAB_0157d8b4;
        uVar18 = (ulong)dVar27 & 0xfffffffffffff;
        if (((ulong)dVar27 & 0x7ff0000000000000) != 0) {
          uVar18 = (ulong)dVar27 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar21 = (uint)(uVar18 << ((ulong)uVar3 & 0x3f));
      }
      uVar3 = -uVar21;
      if (-1 < (long)dVar27) {
        uVar3 = uVar21;
      }
    }
  }
  if (uVar3 == 0) {
LAB_0157d8b4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 < limit");
  }
  local_64 = *(int *)(uVar15 + 7);
  iVar8 = *(int *)(uVar16 + 7);
  if (iVar8 < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 < pattern_length");
  }
  if (uVar3 == 0xffffffff) {
    local_70 = 0;
    uVar15 = RegExpResultsCache::Lookup(param_3 + 0x8850,uVar15,*puVar11,&local_70,1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar2;
      if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar9 + 1;
      *puVar9 = uVar15;
      iVar23 = (int)uVar15;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
      uVar15 = *puVar9;
      iVar23 = (int)uVar15;
    }
    if (iVar23 != 0) {
      puVar11 = (ulong *)Factory::NewJSArrayWithElements
                                   (param_3,puVar9,3,*(int *)(uVar15 + 3) >> 1,0);
      uVar15 = *puVar11;
      goto LAB_0157d814;
    }
  }
  this = (vector<int,std::__ndk1::allocator<int>> *)(param_3 + 0xb620);
  puVar9 = (ulong *)String::Flatten(param_3,param_2,0);
  puVar10 = (undefined8 *)String::Flatten(param_3,puVar11,0);
  *(undefined8 *)(param_3 + 0xb628) = *(undefined8 *)this;
  FindStringIndicesDispatch(param_3,*puVar9,*puVar10,this,uVar3);
  piVar17 = *(int **)(param_3 + 0xb628);
  if ((uint)((ulong)((long)piVar17 - *(long *)this) >> 2) < uVar3) {
    if (*(int **)(param_3 + 0xb630) == piVar17) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                (this,&local_64);
      piVar17 = *(int **)(param_3 + 0xb628);
    }
    else {
      *piVar17 = local_64;
      piVar17 = (int *)(*(long *)(param_3 + 0xb628) + 4);
      *(int **)(param_3 + 0xb628) = piVar17;
    }
  }
  lVar19 = *(long *)this;
  uVar16 = (ulong)((long)piVar17 - lVar19) >> 2;
  puVar11 = (ulong *)Factory::NewJSArray((Factory *)param_3,2,uVar16 & 0xffffffff,
                                         uVar16 & 0xffffffff,1,0);
  uVar15 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar12 = *(ulong **)pIVar2;
    if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
      puVar12 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar12 + 1;
    *puVar12 = uVar15;
  }
  else {
    puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
  }
  iVar23 = (int)uVar16;
  if (iVar23 == 1) {
    if (*(int **)(param_3 + 0xb628) == *(int **)this) {
LAB_0157d888:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (**(int **)this == local_64) {
      uVar15 = *puVar12;
      uVar16 = *puVar9;
      *(int *)(uVar15 + 7) = (int)uVar16;
      if ((uVar16 & 1) != 0) {
        uVar18 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar18 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar15,uVar15 + 7,uVar16);
          uVar18 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar15,uVar15 + 7,uVar16);
        }
      }
    }
    else {
LAB_0157d5e4:
      lVar22 = 0;
      iVar26 = 0;
      uVar15 = 0;
      do {
        while( true ) {
          iVar24 = *(int *)(param_3 + 0x95b0);
          lVar5 = *(long *)pIVar2;
          lVar7 = *(long *)(param_3 + 0x95a8);
          lVar22 = lVar22 + 0x400;
          iVar25 = (int)uVar15;
          *(int *)(param_3 + 0x95b0) = iVar24 + 1;
          if ((iVar23 <= iVar25) || (lVar22 <= iVar25)) break;
          iVar24 = iVar25 << 2;
          uVar15 = (long)iVar25;
          do {
            if ((ulong)(*(long *)(param_3 + 0xb628) - *(long *)this >> 2) <= uVar15)
            goto LAB_0157d888;
            iVar25 = *(int *)(*(long *)this + uVar15 * 4);
            puVar13 = (ulong *)Factory::NewProperSubString((Factory *)param_3,puVar9,iVar26,iVar25);
            uVar18 = *puVar13;
            uVar16 = *puVar12;
            *(int *)(uVar16 + (long)iVar24 + 7) = (int)uVar18;
            if ((uVar18 & 1) != 0) {
              uVar20 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
              lVar1 = uVar16 + (long)iVar24 + 7;
              if (((uint)uVar20 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar16,lVar1,uVar18);
                uVar20 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar20 & 0x18) != 0) &&
                 ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar16,lVar1,uVar18);
              }
            }
            uVar15 = uVar15 + 1;
            iVar26 = iVar25 + iVar8;
          } while (((long)uVar15 < ((long)piVar17 - lVar19) * 0x40000000 >> 0x20) &&
                  (iVar24 = iVar24 + 4, (long)uVar15 < lVar22));
          *(long *)pIVar2 = lVar5;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar7) {
            *(long *)(param_3 + 0x95a8) = lVar7;
            HandleScope::DeleteExtensions(param_3);
          }
          if (iVar23 <= (int)uVar15) goto LAB_0157d748;
        }
        *(int *)(param_3 + 0x95b0) = iVar24;
      } while (iVar25 < iVar23);
    }
  }
  else if (0 < iVar23) goto LAB_0157d5e4;
LAB_0157d748:
  if ((uVar3 == 0xffffffff) &&
     ((*(byte *)((*puVar11 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*puVar11 - 1)) & 0xf0) ==
      0x10)) {
    RegExpResultsCache::Enter(param_3,puVar9,puVar10,puVar12,param_3 + 0x168,1);
  }
  pvVar14 = *(void **)this;
  if ((0x2000 < (ulong)((long)*(void **)(param_3 + 0xb630) - (long)pvVar14 >> 2)) &&
     (*(void **)(param_3 + 0xb628) = pvVar14, *(void **)(param_3 + 0xb630) != pvVar14)) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(param_3 + 0xb628) = 0;
    *(undefined8 *)(param_3 + 0xb630) = 0;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  uVar15 = *puVar11;
LAB_0157d814:
  *(long *)pIVar2 = lVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar6) {
    *(long *)(param_3 + 0x95a8) = lVar6;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar15;
}

