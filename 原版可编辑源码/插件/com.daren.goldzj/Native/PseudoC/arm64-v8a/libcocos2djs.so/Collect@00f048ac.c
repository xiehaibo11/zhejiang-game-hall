
/* v8::internal::TypeProfile::Collect(v8::internal::Isolate*) */

void __thiscall v8::internal::TypeProfile::Collect(TypeProfile *this,Isolate *param_1)

{
  int *piVar1;
  TypeProfile *pTVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  void *pvVar10;
  undefined8 *in_x8;
  ulong uVar11;
  vector<v8::internal::TypeProfileScript,std::__ndk1::allocator<v8::internal::TypeProfileScript>>
  *this_00;
  long lVar12;
  void *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  int local_c4;
  int *local_c0;
  int *local_b8;
  ulong local_a8;
  int *piStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulong local_90;
  int *local_88;
  ulong *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  Iterator aIStack_60 [16];
  ulong local_38;
  
  puVar7 = operator_new(0x18);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  *in_x8 = puVar7;
  Script::Iterator::Iterator(aIStack_60,(Isolate *)this);
  local_38 = Script::Iterator::Next(aIStack_60);
  if ((int)local_38 == 0) {
    return;
  }
  pTVar2 = this + 0x95a0;
LAB_00f04930:
  uVar8 = Script::IsUserJavaScript((Script *)&local_38);
  uVar11 = local_38;
  if ((uVar8 & 1) != 0) {
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pTVar2;
      if (puVar9 == *(ulong **)(this + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pTVar2 = puVar9 + 1;
      *puVar9 = uVar11;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),local_38);
    }
    lVar12 = 0;
    local_78 = (int *)0x0;
    local_70 = (int *)0x0;
    local_68 = (int *)0x0;
    local_80 = puVar9;
    do {
      uVar11 = *(ulong *)(this + 0xf80);
      if (*(uint *)(uVar11 + 3) < 2) {
        if (-1 < lVar12) goto LAB_00f04b7c;
      }
      else if (*(int *)(uVar11 + 7) >> 1 <= lVar12) goto LAB_00f04b7c;
      uVar8 = uVar11 & 0xffffffff00000000;
      local_88 = (int *)(uVar8 | *(uint *)(uVar11 + (long)((int)lVar12 * 4 + 4) + 7));
      local_90 = uVar8 | *(uint *)((long)local_88 + 3);
      uVar11 = uVar8 | *(uint *)(local_90 + 0xf);
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
        uVar11 = (ulong)*(uint *)(uVar11 + 0xb);
      }
      if (((((int)local_38 == (int)uVar11) &&
           (uVar11 = uVar8 | *(uint *)(local_90 + 0xb),
           *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x9e)) &&
          (*(int *)(uVar11 + 3) != 0)) &&
         (local_a8 = uVar11,
         uVar11 = FeedbackMetadata::HasTypeProfileSlot((FeedbackMetadata *)&local_a8),
         (uVar11 & 1) != 0)) {
        local_98 = FeedbackVector::GetTypeProfileSlot();
        local_c0 = local_88;
        local_a8 = 0;
        piStack_a0 = local_88;
        if ((int)local_88 == 0) {
          local_94 = 0;
        }
        else {
          local_94 = FeedbackVector::GetKind((FeedbackVector *)&local_c0,local_98);
        }
        uVar11 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_90);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pTVar2;
          if (puVar9 == *(ulong **)(this + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pTVar2 = puVar9 + 1;
          *puVar9 = uVar11;
        }
        else {
          CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar11);
        }
        FeedbackNexus::GetSourcePositions();
        piVar6 = local_b8;
        for (piVar1 = local_c0; piVar1 != piVar6; piVar1 = piVar1 + 1) {
          local_c4 = *piVar1;
          FeedbackNexus::GetTypesForSourcePositions((uint)&local_a8);
          uVar5 = local_d0;
          pvVar4 = pvStack_d8;
          pvVar10 = local_e0;
          if (local_70 < local_68) {
            local_e0 = (void *)0x0;
            pvStack_d8 = (void *)0x0;
            local_d0 = 0;
            *local_70 = local_c4;
            *(void **)(local_70 + 4) = pvVar4;
            *(void **)(local_70 + 2) = pvVar10;
            *(undefined8 *)(local_70 + 6) = uVar5;
            local_70 = local_70 + 8;
          }
          else {
            std::__ndk1::
            vector<v8::internal::TypeProfileEntry,std::__ndk1::allocator<v8::internal::TypeProfileEntry>>
            ::
            __emplace_back_slow_path<int&,std::__ndk1::vector<v8::internal::Handle<v8::internal::String>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::String>>>>
                      ((vector<v8::internal::TypeProfileEntry,std::__ndk1::allocator<v8::internal::TypeProfileEntry>>
                        *)&local_78,&local_c4,(vector *)&local_e0);
            if (local_e0 != (void *)0x0) {
              pvStack_d8 = local_e0;
              operator_delete(local_e0);
            }
          }
        }
        FeedbackNexus::ResetTypeProfile((FeedbackNexus *)&local_a8);
        if (local_c0 != (int *)0x0) {
          local_b8 = local_c0;
          operator_delete(local_c0);
        }
      }
      lVar12 = lVar12 + 1;
    } while( true );
  }
  goto LAB_00f04920;
LAB_00f04b7c:
  if (local_78 != local_70) {
    this_00 = (vector<v8::internal::TypeProfileScript,std::__ndk1::allocator<v8::internal::TypeProfileScript>>
               *)*in_x8;
    if (*(TypeProfileScript **)(this_00 + 8) < *(TypeProfileScript **)(this_00 + 0x10)) {
      std::__ndk1::allocator_traits<std::__ndk1::allocator<v8::internal::TypeProfileScript>>::
      construct<v8::internal::TypeProfileScript,v8::internal::TypeProfileScript&>
                ((allocator *)(this_00 + 0x10),*(TypeProfileScript **)(this_00 + 8),
                 (TypeProfileScript *)&local_80);
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x20;
    }
    else {
      std::__ndk1::
      vector<v8::internal::TypeProfileScript,std::__ndk1::allocator<v8::internal::TypeProfileScript>>
      ::__emplace_back_slow_path<v8::internal::TypeProfileScript&>
                (this_00,(TypeProfileScript *)&local_80);
    }
  }
  piVar1 = local_78;
  piVar6 = local_70;
  if (local_78 != (int *)0x0) {
    while (piVar3 = piVar6, piVar3 != piVar1) {
      pvVar10 = *(void **)(piVar3 + -6);
      piVar6 = piVar3 + -8;
      if (pvVar10 != (void *)0x0) {
        *(void **)(piVar3 + -4) = pvVar10;
        operator_delete(pvVar10);
      }
    }
    local_70 = piVar1;
    operator_delete(local_78);
  }
LAB_00f04920:
  local_38 = Script::Iterator::Next(aIStack_60);
  if ((int)local_38 == 0) {
    return;
  }
  goto LAB_00f04930;
}

