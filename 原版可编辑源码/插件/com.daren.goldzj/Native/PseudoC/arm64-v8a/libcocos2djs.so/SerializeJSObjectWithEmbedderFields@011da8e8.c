
/* v8::internal::PartialSerializer::SerializeJSObjectWithEmbedderFields(v8::internal::Object) */

void __thiscall
v8::internal::PartialSerializer::SerializeJSObjectWithEmbedderFields
          (PartialSerializer *this,ulong param_2)

{
  undefined4 *puVar1;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  void *pvVar20;
  ulong uVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  char *local_e8;
  undefined1 (*local_d8) [16];
  undefined1 (*local_d0) [16];
  undefined1 (*local_c8) [16];
  ulong *local_c0;
  ulong *local_b8;
  ulong *puStack_b0;
  undefined1 local_a8 [16];
  ulong local_98;
  PartialSerializer *pPStack_90;
  undefined4 local_88;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_80 [16];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (((param_2 & 1) != 0) &&
     (uVar21 = param_2 & 0xffffffff00000000,
     0xa9 < *(ushort *)((uVar21 | 7) + (ulong)*(uint *)(param_2 - 1)))) {
    puVar22 = (uint *)(param_2 - 1);
    uVar16 = uVar21 | *puVar22;
    bVar4 = *(byte *)(uVar16 + 3);
    if (bVar4 != 0) {
      if (*(short *)(uVar16 + 7) == 0x421) {
        iVar7 = 0xc;
      }
      else {
        iVar7 = JSObject::GetHeaderSize(*(short *)(uVar16 + 7),*(char *)(uVar16 + 9) < '\0');
      }
      iVar7 = (((int)((uint)bVar4 * 4 - iVar7) >> 2) - (uint)*(byte *)(uVar16 + 3)) +
              (uint)*(byte *)(uVar16 + 4);
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = iVar7 + 1;
      }
      if (2 < iVar7 + 1U) {
        if (iVar7 < 2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","embedder_fields_count > 0");
        }
        uVar2 = iVar8 >> 1;
        PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
                  (aPStack_80,*(Isolate **)(this + 0x68));
        pIVar12 = *(Isolate **)(this + 0x68);
        uVar9 = *(undefined8 *)(pIVar12 + 0x95a0);
        *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
        pIVar10 = *(Isolate **)(this + 0x68);
        lVar14 = *(long *)(pIVar12 + 0x95a8);
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
          *puVar11 = param_2;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),param_2);
        }
        iVar7 = 0;
        uVar19 = 0;
        local_b8 = (ulong *)0x0;
        puStack_b0 = (ulong *)0x0;
        local_c8 = (undefined1 (*) [16])0x0;
        local_c0 = (ulong *)0x0;
        local_d8 = (undefined1 (*) [16])0x0;
        local_d0 = (undefined1 (*) [16])0x0;
        do {
          sVar5 = *(short *)((uVar21 | *puVar22) + 7);
          if (sVar5 == 0x421) {
            iVar8 = 0xc;
          }
          else {
            iVar8 = JSObject::GetHeaderSize(sVar5,*(char *)((uVar21 | *puVar22) + 9) < '\0');
          }
          lVar17 = (long)(iVar8 + iVar7);
          local_a8._0_8_ = *(ulong *)((long)puVar22 + lVar17);
          if (local_b8 < puStack_b0) {
            *local_b8 = local_a8._0_8_;
            local_b8 = local_b8 + 1;
            uVar13 = *(uint *)(lVar17 + (long)puVar22);
            if ((uVar13 & 1) != 0) goto LAB_011dab54;
LAB_011dab30:
            if ((uVar13 == 0) && (*(code **)(this + 0x1d0) == (code *)0x0)) goto LAB_011dab54;
            auVar23 = (**(code **)(this + 0x1d0))(puVar11,uVar19,*(undefined8 *)(this + 0x1d8));
            if (local_d0 != local_c8) goto LAB_011daaa4;
            local_a8 = auVar23;
            std::__ndk1::vector<v8::StartupData,std::__ndk1::allocator<v8::StartupData>>::
            __push_back_slow_path<v8::StartupData_const&>
                      ((vector<v8::StartupData,std::__ndk1::allocator<v8::StartupData>> *)&local_d8,
                       (StartupData *)local_a8);
          }
          else {
            std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
            __emplace_back_slow_path<unsigned_long>
                      ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)&local_c0,
                       (ulong *)local_a8);
            uVar13 = *(uint *)(lVar17 + (long)puVar22);
            if ((uVar13 & 1) == 0) goto LAB_011dab30;
LAB_011dab54:
            local_a8._0_8_ = 0;
            local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = local_a8._8_8_;
            auVar23 = auVar23 << 0x40;
            if (local_d0 < local_c8) {
LAB_011daaa4:
              *local_d0 = auVar23;
              local_d0 = local_d0 + 1;
              local_a8 = auVar23;
            }
            else {
              std::__ndk1::vector<v8::StartupData,std::__ndk1::allocator<v8::StartupData>>::
              __push_back_slow_path<v8::StartupData>
                        ((vector<v8::StartupData,std::__ndk1::allocator<v8::StartupData>> *)
                         &local_d8,(StartupData *)local_a8);
            }
          }
          uVar19 = uVar19 + 1;
          iVar7 = iVar7 + 8;
        } while (uVar2 != uVar19);
        iVar7 = 0;
        lVar17 = 8;
        pcVar18 = (char *)(ulong)uVar2;
        do {
          if (*(int *)(*local_d8 + lVar17) != 0) {
            sVar5 = *(short *)((uVar21 | *puVar22) + 7);
            if (sVar5 == 0x421) {
              iVar8 = 0xc;
            }
            else {
              iVar8 = JSObject::GetHeaderSize(sVar5,*(char *)((uVar21 | *puVar22) + 9) < '\0');
            }
            puVar1 = (undefined4 *)((long)puVar22 + (long)(iVar8 + iVar7));
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          iVar7 = iVar7 + 8;
          pcVar18 = pcVar18 + -1;
          lVar17 = lVar17 + 0x10;
        } while (pcVar18 != (char *)0x0);
        pPStack_90 = this + 0x50;
        local_a8._0_8_ = &PTR__ObjectVisitor_01cbba18;
        local_88 = 0;
        local_a8._8_8_ = this;
        local_98 = param_2;
        Serializer::ObjectSerializer::Serialize((ObjectSerializer *)local_a8);
        lVar17 = *(long *)(this + 0x70);
        uVar16 = (ulong)(*(int *)(this + 0x78) - 1U & (uint)param_2);
        lVar15 = lVar17 + uVar16 * 0x18;
        if ((*(char *)(lVar15 + 0x14) != '\0') && (*(ulong *)(lVar17 + uVar16 * 0x18) != param_2)) {
          do {
            uVar16 = (ulong)((int)uVar16 + 1U & *(int *)(this + 0x78) - 1U);
            if (*(char *)(lVar17 + uVar16 * 0x18 + 0x14) == '\0') break;
          } while (*(ulong *)(lVar17 + uVar16 * 0x18) != param_2);
          lVar15 = lVar17 + uVar16 * 0x18;
        }
        uVar16 = 6;
        local_e8 = (char *)0x0;
        if ((lVar15 != 0) && (*(char *)(lVar15 + 0x14) != '\0')) {
          uVar16 = *(ulong *)(lVar15 + 8);
          local_e8 = (char *)(uVar16 >> 0x20);
        }
        lVar17 = 0;
        iVar7 = 0;
        pcVar18 = (char *)0x0;
        this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x1f0);
        do {
          uVar19 = *(uint *)((long)(*local_d8 + lVar17) + 8);
          if (uVar19 != 0) {
            pvVar20 = *(void **)(*local_d8 + lVar17);
            sVar5 = *(short *)((uVar21 | *puVar22) + 7);
            if (sVar5 == 0x421) {
              iVar8 = 0xc;
            }
            else {
              iVar8 = JSObject::GetHeaderSize(sVar5,*(char *)((uVar21 | *puVar22) + 9) < '\0');
            }
            puVar1 = (undefined4 *)((long)puVar22 + (long)(iVar8 + iVar7));
            uVar3 = *(undefined4 *)((long)(local_c0 + (long)pcVar18) + 4);
            *puVar1 = (int)local_c0[(long)pcVar18];
            puVar1[1] = uVar3;
            local_a8._0_8_ = CONCAT71(local_a8._1_7_,(byte)uVar16) & 0xffffffffffffff0f;
            if (*(byte **)(this + 0x1f8) == *(byte **)(this + 0x200)) {
              std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
              __push_back_slow_path<unsigned_char_const&>(this_00,local_a8);
            }
            else {
              **(byte **)(this + 0x1f8) = (byte)uVar16 & 0xf;
              *(long *)(this + 0x1f8) = *(long *)(this + 0x1f8) + 1;
            }
            SnapshotByteSink::PutInt((ulong)this_00,(char *)(uVar16 >> 4 & 0xfffffff));
            SnapshotByteSink::PutInt((ulong)this_00,local_e8);
            SnapshotByteSink::PutInt((ulong)this_00,pcVar18);
            SnapshotByteSink::PutInt((ulong)this_00,(char *)(long)(int)uVar19);
            SnapshotByteSink::PutRaw((uchar *)this_00,(int)pvVar20,(char *)(ulong)uVar19);
            if (pvVar20 != (void *)0x0) {
              operator_delete__(pvVar20);
            }
          }
          pcVar18 = pcVar18 + 1;
          iVar7 = iVar7 + 8;
          lVar17 = lVar17 + 0x10;
        } while ((char *)(ulong)uVar2 != pcVar18);
        if (local_d8 != (undefined1 (*) [16])0x0) {
          local_d0 = local_d8;
          operator_delete(local_d8);
        }
        if (local_c0 != (ulong *)0x0) {
          local_b8 = local_c0;
          operator_delete(local_c0);
        }
        if (pIVar12 != (Isolate *)0x0) {
          *(undefined8 *)(pIVar12 + 0x95a0) = uVar9;
          *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
          if (*(long *)(pIVar12 + 0x95a8) != lVar14) {
            *(long *)(pIVar12 + 0x95a8) = lVar14;
            HandleScope::DeleteExtensions(pIVar12);
          }
        }
        PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
                  (aPStack_80);
        uVar9 = 1;
        goto LAB_011da9ac;
      }
    }
  }
  uVar9 = 0;
LAB_011da9ac:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

