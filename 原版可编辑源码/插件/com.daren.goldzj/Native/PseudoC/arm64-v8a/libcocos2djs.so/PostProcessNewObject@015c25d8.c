
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Deserializer::PostProcessNewObject(v8::internal::HeapObject,
   v8::internal::SnapshotSpace) */

undefined ** __thiscall
v8::internal::Deserializer::PostProcessNewObject(Deserializer *this,undefined **param_2,int param_3)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  Deserializer DVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined **ppuVar11;
  int iVar12;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  Isolate *pIVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  __shared_weak_count *this_00;
  long lVar21;
  Logger *pLVar22;
  uint *puVar23;
  undefined **ppuVar24;
  uint uVar25;
  uint uVar26;
  long local_98;
  __shared_weak_count *local_90;
  undefined **local_88;
  uint local_80;
  int local_7c;
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  
  local_70 = param_2;
  if (((FLAG_rehash_snapshot != '\0') && (this[0x251] != (Deserializer)0x0)) ||
     (this[0x250] != (Deserializer)0x0)) {
    if (*(ushort *)
         (((ulong)param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)param_2 + -1)) < 0x40)
    {
      *(undefined4 *)((long)param_2 + 3) = 7;
      if (param_3 == 0) {
LAB_015c27b4:
        if (*(undefined8 **)(this + 0x260) == *(undefined8 **)(this + 0x268)) {
          std::__ndk1::
          vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>::
          __push_back_slow_path<v8::internal::HeapObject_const&>
                    ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                      *)(this + 600),(HeapObject *)&local_70);
          DVar6 = this[0x250];
          ppuVar11 = local_70;
        }
        else {
          **(undefined8 **)(this + 0x260) = local_70;
          *(long *)(this + 0x260) = *(long *)(this + 0x260) + 8;
          DVar6 = this[0x250];
          ppuVar11 = local_70;
        }
        goto joined_r0x015c27dc;
      }
    }
    else {
      uVar16 = HeapObject::NeedsRehashing((HeapObject *)&local_70);
      if ((uVar16 & 1) != 0) goto LAB_015c27b4;
    }
  }
  DVar6 = this[0x250];
  ppuVar11 = local_70;
joined_r0x015c27dc:
  local_70 = ppuVar11;
  if (DVar6 != (Deserializer)0x0) {
    uVar16 = (ulong)ppuVar11 & 0xffffffff00000000 | 7;
    uVar7 = *(ushort *)(uVar16 + *(uint *)((long)ppuVar11 - 1));
    if (*(ushort *)(uVar16 + *(uint *)((long)ppuVar11 - 1)) < 0x40) {
      if (uVar7 < 0x20) {
        local_80 = *(uint *)((long)ppuVar11 + 3);
        if ((local_80 & 1) != 0) {
          local_88 = &PTR__StringTableKey_01cc94c8;
          local_68 = ppuVar11;
          String::ComputeAndSetHash((String *)&local_68);
          local_80 = *(uint *)((long)ppuVar11 + 3);
        }
        local_7c = *(int *)((long)ppuVar11 + 7);
        lVar21 = *(long *)(this + 0x50);
        uVar16 = *(ulong *)(lVar21 + 0xfd0);
        uVar5 = *(uint *)(lVar21 + 0xa0);
        lVar18 = uVar16 + 7;
        uVar10 = (*(int *)(uVar16 + 0xf) >> 1) - 1;
        uVar26 = uVar10 & local_80 >> 3;
        uVar15 = *(uint *)(lVar18 + (int)(uVar26 * 4 + 0xc));
        local_88 = &PTR__StringTableKey_01cc94c8;
        local_78 = ppuVar11;
        if (uVar15 != uVar5) {
          iVar12 = 1;
          uVar25 = (uint)*(undefined8 *)(lVar21 + 0xa8);
          if (uVar15 != uVar25) goto LAB_015c2724;
          do {
            do {
              uVar26 = uVar26 + iVar12 & uVar10;
              uVar15 = *(uint *)(lVar18 + (int)(uVar26 * 4 + 0xc));
              iVar12 = iVar12 + 1;
              if (uVar15 == uVar5) goto LAB_015c278c;
            } while (uVar15 == uVar25);
LAB_015c2724:
            uVar14 = uVar16 & 0xffffffff00000000 | (ulong)uVar15;
          } while (((*(uint *)(uVar14 + 3) != local_80) || (*(int *)(uVar14 + 7) != local_7c)) ||
                  (uVar14 = (*(code *)local_88[3])(&local_88), (uVar14 & 1) == 0));
          uVar26 = *(uint *)(lVar18 + (int)(uVar26 * 4 + 0xc));
          ppuVar24 = (undefined **)(uVar16 & 0xffffffff00000000 | (ulong)uVar26);
          local_68 = local_78;
          String::MakeThin((String *)&local_68,lVar21,ppuVar24);
          if (uVar26 != 0) {
            return ppuVar24;
          }
        }
LAB_015c278c:
        pIVar17 = *(Isolate **)(this + 0x50);
        if (*(CanonicalHandleScope **)(pIVar17 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          ppuVar24 = *(undefined ***)(pIVar17 + 0x95a0);
          if (ppuVar24 == *(undefined ***)(pIVar17 + 0x95a8)) {
            ppuVar24 = (undefined **)HandleScope::Extend(pIVar17);
          }
          *(undefined ***)(pIVar17 + 0x95a0) = ppuVar24 + 1;
          *ppuVar24 = (undefined *)ppuVar11;
        }
        else {
          ppuVar24 = (undefined **)
                     CanonicalHandleScope::Lookup
                               (*(CanonicalHandleScope **)(pIVar17 + 0x95b8),(ulong)ppuVar11);
        }
        if (*(undefined8 **)(this + 0x108) < *(undefined8 **)(this + 0x110)) {
          **(undefined8 **)(this + 0x108) = ppuVar24;
          *(long *)(this + 0x108) = *(long *)(this + 0x108) + 8;
          return ppuVar11;
        }
        local_68 = ppuVar24;
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::String>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::String>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::String>>
                  ((vector<v8::internal::Handle<v8::internal::String>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::String>>>
                    *)(this + 0x100),(Handle *)&local_68);
        return ppuVar11;
      }
    }
    else if (uVar7 == 0x65) {
      pIVar17 = *(Isolate **)(this + 0x50);
      if (*(CanonicalHandleScope **)(pIVar17 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_88 = *(undefined ***)(pIVar17 + 0x95a0);
        if (local_88 == *(undefined ***)(pIVar17 + 0x95a8)) {
          local_88 = (undefined **)HandleScope::Extend(pIVar17);
        }
        *(undefined ***)(pIVar17 + 0x95a0) = local_88 + 1;
        *local_88 = (undefined *)ppuVar11;
      }
      else {
        local_88 = (undefined **)
                   CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(pIVar17 + 0x95b8),(ulong)ppuVar11);
      }
      if (*(undefined8 **)(this + 0x120) < *(undefined8 **)(this + 0x128)) {
        **(undefined8 **)(this + 0x120) = local_88;
        *(long *)(this + 0x120) = *(long *)(this + 0x120) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Script>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Script>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Script>>
                  ((vector<v8::internal::Handle<v8::internal::Script>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Script>>>
                    *)(this + 0x118),(Handle *)&local_88);
      }
    }
    else if (*(short *)(uVar16 + *(uint *)((long)ppuVar11 - 1)) == 0x55) {
      local_88 = ppuVar11;
      if (*(ulong **)(this + 0xa8) < *(ulong **)(this + 0xb0)) {
        **(ulong **)(this + 0xa8) = (ulong)ppuVar11;
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::AllocationSite,std::__ndk1::allocator<v8::internal::AllocationSite>>::
        __push_back_slow_path<v8::internal::AllocationSite>
                  ((vector<v8::internal::AllocationSite,std::__ndk1::allocator<v8::internal::AllocationSite>>
                    *)(this + 0xa0),(AllocationSite *)&local_88);
      }
    }
  }
  ppuVar11 = local_70;
  uVar14 = (ulong)local_70 & 0xffffffff00000000;
  uVar16 = uVar14 | 7;
  if (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) == 0x65) {
    pLVar22 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar16 = Logger::is_logging(pLVar22);
    if ((uVar16 & 1) != 0) {
      Logger::ScriptEvent(pLVar22,2,*(int *)((long)ppuVar11 + 0x1f) >> 1);
    }
    pLVar22 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar16 = Logger::is_logging(pLVar22);
    if ((uVar16 & 1) != 0) {
      Logger::ScriptDetails(pLVar22,ppuVar11);
    }
  }
  else if (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) == 0x9a) {
    if ((param_3 == 5) || (this[0x250] != (Deserializer)0x0)) {
      local_88 = local_70;
      if (*(undefined8 **)(this + 0xc0) < *(undefined8 **)(this + 200)) {
        **(undefined8 **)(this + 0xc0) = local_70;
        *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 8;
      }
      else {
        std::__ndk1::vector<v8::internal::Code,std::__ndk1::allocator<v8::internal::Code>>::
        __push_back_slow_path<v8::internal::Code>
                  ((vector<v8::internal::Code,std::__ndk1::allocator<v8::internal::Code>> *)
                   (this + 0xb8),(Code *)&local_88);
      }
    }
  }
  else if ((FLAG_trace_maps == '\0') ||
          (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) != 0xa2)) {
    if ((*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) != 0x51) &&
       (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) != 0x59)) {
      if ((*(ushort *)(uVar16 + *(uint *)((long)local_70 + -1)) < 0x40) &&
         ((*(ushort *)(uVar16 + *(uint *)((long)local_70 + -1)) & 7) == 2)) {
        local_68 = local_70;
        ExternalString::set_address_as_resource
                  ((ExternalString *)&local_68,
                   *(ulong *)(*(long *)(*(long *)(this + 0x50) + 0xb7a8) +
                             (ulong)*(uint *)((long)local_70 + 0xb) * 8));
        ppuVar11 = local_68;
        lVar18 = *(long *)(this + 0x50);
        iVar12 = ExternalString::ExternalPayloadSize((ExternalString *)&local_68);
        Heap::UpdateExternalString((Heap *)(lVar18 + 0x8850),ppuVar11,0,(long)iVar12);
        lVar18 = *(long *)(this + 0x50);
        local_88 = local_70;
        plVar3 = (long *)(lVar18 + 0x9340);
        if ((*(byte *)(((ulong)local_70 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
          if (*(undefined8 **)(lVar18 + 0x9358) != *(undefined8 **)(lVar18 + 0x9360)) {
            **(undefined8 **)(lVar18 + 0x9358) = local_70;
            *(long *)(lVar18 + 0x9358) = *(long *)(lVar18 + 0x9358) + 8;
            return local_70;
          }
          lVar21 = 0x9350;
        }
        else {
          if ((undefined8 *)*plVar3 != *(undefined8 **)(lVar18 + 0x9348)) {
            *(undefined8 *)*plVar3 = local_70;
            *plVar3 = *plVar3 + 8;
            return local_70;
          }
          lVar21 = 0x9338;
        }
        std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
        __push_back_slow_path<v8::internal::Object_const&>
                  ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
                   (lVar18 + lVar21),(Object *)&local_88);
      }
      else if (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) == 0x41a) {
        *(long *)((long)local_70 + 0x1f) =
             *(long *)((uVar14 | *(uint *)((long)local_70 + 0xb)) + 0x13) +
             *(long *)((long)local_70 + 0xf);
      }
      else {
        if (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) == 0x41b) {
          puVar23 = (uint *)((long)local_70 + 0x2f);
          uVar26 = *puVar23;
          uVar16 = (ulong)uVar26;
          if (uVar26 == *(uint *)((long)local_70 + 7)) {
            lVar18 = *(long *)((long)local_70 + 0x27);
            *(uint *)((long)local_70 + 0x2f) = uVar26;
            if ((uVar26 & 1) != 0) {
              uVar20 = uVar14 | uVar16 & 0xfffffffffffc0000;
              uVar19 = *(ulong *)(uVar20 + 8);
              if (((uint)uVar19 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(local_70,puVar23,uVar14 | uVar16);
                uVar19 = *(ulong *)(uVar20 | 8);
              }
              if (((uVar19 & 0x18) != 0) &&
                 ((*(byte *)(((ulong)ppuVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(ppuVar11,puVar23,uVar14 | uVar16);
              }
            }
            *(ulong *)((long)ppuVar11 + 0x27) = lVar18 + uVar14;
            return local_70;
          }
          plVar3 = (long *)(*(long *)(this + 0x130) +
                           (*(long *)((long)local_70 + 0x27) + uVar16) * 0x10);
          plVar4 = (long *)*plVar3;
          this_00 = (__shared_weak_count *)plVar3[1];
          if (this_00 != (__shared_weak_count *)0x0) {
            p_Var1 = this_00 + 8;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar9) {
                *(long *)p_Var1 = *(long *)p_Var1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          lVar18 = 0;
          if (plVar4 != (long *)0x0) {
            lVar18 = *plVar4;
          }
          *(undefined4 *)((long)local_70 + 0x2f) = 0;
          *(long *)((long)local_70 + 0x27) = *(long *)((long)local_70 + 0xf) + lVar18;
          if (this_00 == (__shared_weak_count *)0x0) {
            return local_70;
          }
          p_Var1 = this_00 + 8;
          do {
            lVar18 = *(long *)p_Var1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar9) {
              *(long *)p_Var1 = lVar18 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        else {
          if (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) != 0x424) {
            if (*(short *)(uVar16 + *(uint *)((long)local_70 + -1)) != 0x86) {
              return local_70;
            }
            *(undefined1 *)((long)local_70 + 0x1f) = 0;
            return local_70;
          }
          local_88 = local_70;
          if (*(long *)((long)local_70 + 0x13) == 0) {
            return local_70;
          }
          plVar3 = (long *)(*(long *)(this + 0x130) + *(long *)((long)local_70 + 0x13) * 0x10);
          local_98 = *plVar3;
          this_00 = (__shared_weak_count *)plVar3[1];
          if (this_00 != (__shared_weak_count *)0x0) {
            p_Var1 = this_00 + 8;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar9) {
                *(long *)p_Var1 = *(long *)p_Var1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (local_98 == 0) {
            bVar13 = 0;
          }
          else {
            bVar13 = *(byte *)(local_98 + 0x28) & 1;
          }
          if (this_00 != (__shared_weak_count *)0x0) {
            p_Var1 = this_00 + 8;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar9) {
                *(long *)p_Var1 = *(long *)p_Var1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_90 = this_00;
          JSArrayBuffer::Setup((JSArrayBuffer *)&local_88,bVar13,&local_98);
          p_Var1 = local_90;
          if (local_90 != (__shared_weak_count *)0x0) {
            p_Var2 = local_90 + 8;
            do {
              lVar18 = *(long *)p_Var2;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
              if (bVar9) {
                *(long *)p_Var2 = lVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*(long *)local_90 + 0x10))(local_90);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
            }
          }
          if (this_00 == (__shared_weak_count *)0x0) {
            return local_70;
          }
          p_Var1 = this_00 + 8;
          do {
            lVar18 = *(long *)p_Var1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar9) {
              *(long *)p_Var1 = lVar18 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (lVar18 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
    }
  }
  else {
    local_88 = local_70;
    if (*(undefined8 **)(this + 0x90) < *(undefined8 **)(this + 0x98)) {
      **(undefined8 **)(this + 0x90) = local_70;
      *(long *)(this + 0x90) = *(long *)(this + 0x90) + 8;
    }
    else {
      std::__ndk1::vector<v8::internal::Map,std::__ndk1::allocator<v8::internal::Map>>::
      __push_back_slow_path<v8::internal::Map>
                ((vector<v8::internal::Map,std::__ndk1::allocator<v8::internal::Map>> *)
                 (this + 0x88),(Map *)&local_88);
    }
  }
  return local_70;
}

