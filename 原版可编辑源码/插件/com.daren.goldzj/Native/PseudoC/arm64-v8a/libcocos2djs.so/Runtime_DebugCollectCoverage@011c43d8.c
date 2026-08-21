
/* v8::internal::Runtime_DebugCollectCoverage(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DebugCollectCoverage(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  void *pvVar20;
  long *plVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  void *pvVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  void *pvVar31;
  int iVar32;
  long lVar33;
  void *pvVar34;
  long *plVar35;
  void *pvVar36;
  ulong uVar37;
  long *local_88;
  long *local_80;
  long *plStack_78;
  char *local_70;
  undefined8 uStack_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar14 = FUN_011c4a64(param_1,param_2,param_3);
    return uVar14;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar7 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (*(int *)(param_3 + 0xb810) == 0) {
    Coverage::CollectBestEffort(param_3);
  }
  else {
    Coverage::CollectPrecise(param_3);
  }
  plVar11 = local_88;
  lVar4 = *local_88;
  lVar8 = local_88[1];
  uVar28 = (ulong)(lVar8 - lVar4) >> 5;
  puVar12 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar28 & 0xffffffff,0);
  if (0 < (int)uVar28) {
    uVar28 = 0;
    do {
      lVar5 = *plVar11;
      if ((ulong)(plVar11[1] - lVar5 >> 5) <= uVar28) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *(long *)pIVar1;
      lVar9 = *(long *)(param_3 + 0x95a8);
      lVar22 = lVar5 + uVar28 * 0x20;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
      local_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      local_88 = (long *)0x0;
      plVar26 = (long *)(lVar22 + 8);
      lVar33 = *plVar26;
      uVar25 = (*(long *)(lVar22 + 0x10) - lVar33 >> 3) * 0xb6db6db7;
      if (0 < (int)uVar25) {
        uVar29 = 0;
        while( true ) {
          plVar21 = (long *)(lVar33 + uVar29 * 0x38);
          if (local_80 < plStack_78) {
            uVar10 = *(uint *)(plVar21 + 1);
            *local_80 = *plVar21;
            *(uint *)(local_80 + 1) = uVar10;
            local_80 = (long *)((long)local_80 + 0xc);
          }
          else {
            std::__ndk1::
            vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
            ::__emplace_back_slow_path<int_const&,int_const&,unsigned_int_const&>
                      ((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                        *)&local_88,(int *)plVar21,(int *)(lVar33 + uVar29 * 0x38 + 4),
                       (uint *)(plVar21 + 1));
          }
          lVar33 = lVar33 + uVar29 * 0x38;
          plVar21 = (long *)(lVar33 + 0x18);
          lVar22 = *plVar21;
          plVar35 = (long *)(lVar33 + 0x20);
          if (*plVar35 != lVar22) {
            lVar33 = 0;
            uVar37 = 0;
            do {
              piVar2 = (int *)(lVar22 + lVar33);
              if (local_80 < plStack_78) {
                uVar10 = piVar2[2];
                *local_80 = *(long *)(lVar22 + lVar33);
                *(uint *)(local_80 + 1) = uVar10;
                local_80 = (long *)((long)local_80 + 0xc);
              }
              else {
                std::__ndk1::
                vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                ::__emplace_back_slow_path<int_const&,int_const&,unsigned_int_const&>
                          ((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                            *)&local_88,piVar2,piVar2 + 1,(uint *)(piVar2 + 2));
              }
              lVar22 = *plVar21;
              uVar37 = uVar37 + 1;
              lVar33 = lVar33 + 0xc;
            } while (uVar37 < (ulong)((*plVar35 - lVar22 >> 2) * -0x5555555555555555));
          }
          uVar29 = uVar29 + 1;
          if (uVar29 == (uVar25 & 0xffffffff)) break;
          lVar33 = *plVar26;
        }
      }
      uVar25 = ((long)local_80 - (long)local_88 >> 2) * -0x5555555555555555;
      puVar13 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar25 & 0xffffffff,0);
      if (0 < (int)uVar25) {
        iVar32 = 0;
        lVar22 = 0;
        do {
          plVar26 = local_88;
          uStack_68 = __strlen_chk("start",6);
          local_70 = "start";
          uVar14 = Factory::InternalizeUtf8String((Factory *)param_3,(Vector *)&local_70);
          uStack_68 = __strlen_chk("end",4);
          local_70 = "end";
          uVar15 = Factory::InternalizeUtf8String((Factory *)param_3,(Vector *)&local_70);
          uStack_68 = __strlen_chk("count",6);
          local_70 = "count";
          uVar16 = Factory::InternalizeUtf8String((Factory *)param_3,(Vector *)&local_70);
          puVar17 = (ulong *)Factory::NewJSObjectWithNullProto((Factory *)param_3);
          piVar2 = (int *)((long)plVar26 + lVar22);
          uVar18 = Factory::NewNumberFromInt((Factory *)param_3,*piVar2);
          JSObject::AddProperty(param_3,puVar17,uVar14,uVar18,0);
          uVar14 = Factory::NewNumberFromInt((Factory *)param_3,piVar2[1]);
          JSObject::AddProperty(param_3,puVar17,uVar15,uVar14,0);
          uVar14 = Factory::NewNumberFromUint((Factory *)param_3,piVar2[2]);
          JSObject::AddProperty(param_3,puVar17,uVar16,uVar14,0);
          uVar37 = *puVar13;
          uVar29 = *puVar17;
          *(int *)(uVar37 + (long)iVar32 + 7) = (int)uVar29;
          if ((uVar29 & 1) != 0) {
            uVar24 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
            lVar33 = uVar37 + (long)iVar32 + 7;
            if (((uint)uVar24 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar37,lVar33,uVar29);
              uVar24 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar24 & 0x18) != 0) &&
               ((*(byte *)((uVar37 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar37,lVar33,uVar29);
            }
          }
          lVar22 = lVar22 + 0xc;
          iVar32 = iVar32 + 4;
        } while (((uVar25 & 0xffffffff) + (uVar25 & 0xffffffff) * 2) * 4 != lVar22);
      }
      puVar13 = (ulong *)Factory::NewJSArrayWithElements
                                   (param_3,puVar13,2,*(int *)(*puVar13 + 3) >> 1,0);
      uVar25 = **(ulong **)(lVar5 + uVar28 * 0x20);
      uVar25 = uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)pIVar1;
        if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
          puVar17 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar17 + 1;
        *puVar17 = uVar25;
      }
      else {
        puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar25);
      }
      JSObject::AddProperty(param_3,puVar13,param_3 + 0x988,puVar17,0);
      uVar25 = *puVar13;
      uVar29 = *puVar12;
      lVar5 = uVar29 + (long)((int)uVar28 << 2);
      *(int *)(lVar5 + 7) = (int)uVar25;
      if ((uVar25 & 1) != 0) {
        uVar37 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
        lVar5 = lVar5 + 7;
        if (((uint)uVar37 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar29,lVar5,uVar25);
          uVar37 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar37 & 0x18) != 0) && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar29,lVar5,uVar25);
        }
      }
      if (local_88 != (long *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
      *(long *)pIVar1 = lVar6;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar9) {
        *(long *)(param_3 + 0x95a8) = lVar9;
        HandleScope::DeleteExtensions(param_3);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != ((ulong)(lVar8 - lVar4) >> 5 & 0xffffffff));
  }
  puVar19 = (undefined8 *)
            Factory::NewJSArrayWithElements(param_3,puVar12,2,*(int *)(*puVar12 + 3) >> 1,0);
  uVar14 = *puVar19;
  if (plVar11 != (long *)0x0) {
    pvVar27 = (void *)*plVar11;
    if (pvVar27 == (void *)0x0) {
      operator_delete(plVar11);
    }
    else {
      pvVar30 = (void *)plVar11[1];
      pvVar31 = pvVar27;
      if (pvVar30 != pvVar27) {
        do {
          pvVar34 = *(void **)((long)pvVar30 + -0x18);
          pvVar31 = (void *)((long)pvVar30 + -0x20);
          if (pvVar34 != (void *)0x0) {
            pvVar20 = pvVar34;
            pvVar23 = *(void **)((long)pvVar30 + -0x10);
            if (*(void **)((long)pvVar30 + -0x10) != pvVar34) {
              do {
                pvVar20 = *(void **)((long)pvVar23 + -0x20);
                pvVar36 = (void *)((long)pvVar23 + -0x38);
                if (pvVar20 != (void *)0x0) {
                  *(void **)((long)pvVar23 + -0x18) = pvVar20;
                  operator_delete(pvVar20);
                }
                pvVar23 = pvVar36;
              } while (pvVar34 != pvVar36);
              pvVar20 = *(void **)((long)pvVar30 + -0x18);
            }
            *(void **)((long)pvVar30 + -0x10) = pvVar34;
            operator_delete(pvVar20);
          }
          pvVar30 = pvVar31;
        } while (pvVar31 != pvVar27);
        pvVar31 = (void *)*plVar11;
      }
      plVar11[1] = (long)pvVar27;
      operator_delete(pvVar31);
      operator_delete(plVar11);
      if (param_3 == (Isolate *)0x0) {
        return uVar14;
      }
    }
  }
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar7) {
    *(long *)(param_3 + 0x95a8) = lVar7;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar14;
}

