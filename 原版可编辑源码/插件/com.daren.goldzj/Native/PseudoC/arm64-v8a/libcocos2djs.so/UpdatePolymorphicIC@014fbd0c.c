
/* v8::internal::IC::UpdatePolymorphicIC(v8::internal::Handle<v8::internal::Name>,
   v8::internal::MaybeObjectHandle const&) */

undefined4 __thiscall
v8::internal::IC::UpdatePolymorphicIC(IC *this,int *param_2,MaybeObjectHandle *param_3)

{
  FeedbackNexus *this_00;
  IC *pIVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  long *local_68;
  
  if ((((*(uint *)(this + 0x1c) < 0xf) &&
       ((1 << (ulong)(*(uint *)(this + 0x1c) & 0x1f) & 0x6308U) != 0)) &&
      (*(int *)(this + 0x18) != 3)) &&
     (iVar2 = FeedbackNexus::GetName((FeedbackNexus *)(this + 0x50)), iVar2 != *param_2)) {
    return 0;
  }
  local_68 = *(long **)(this + 0x20);
  this_00 = (FeedbackNexus *)(this + 0x50);
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  FeedbackNexus::ExtractMapsAndHandlers(this_00,(vector *)&local_80,(vector *)&local_98);
  uVar8 = (long)local_78 - (long)local_80;
  iVar2 = (int)(uVar8 >> 3);
  if (0 < iVar2) {
    if (local_78 != local_80) {
      lVar13 = 0;
      iVar12 = 0;
      uVar15 = 0;
      uVar16 = 0xffffffff;
      do {
        plVar9 = (long *)local_80[uVar15];
        lVar5 = *plVar9;
        if ((*(uint *)(lVar5 + 0xb) >> 0x18 & 1) == 0) {
          uVar14 = (uint)uVar15;
          if ((local_68 == plVar9) ||
             (((plVar9 != (long *)0x0 && (local_68 != (long *)0x0)) && (*local_68 == lVar5)))) {
            uVar16 = uVar14;
            if (*(int *)param_3 == *(int *)((long)local_98 + lVar13)) {
              plVar10 = *(long **)((long)local_98 + lVar13 + 8);
              plVar9 = *(long **)(param_3 + 8);
              if (plVar10 == (long *)0x0) {
                if (plVar9 == (long *)0x0) goto LAB_014fbec0;
              }
              else if ((plVar9 != (long *)0x0) &&
                      ((plVar9 == plVar10 ||
                       (((plVar9 != (long *)0x0 && (plVar10 != (long *)0x0)) &&
                        (*plVar9 == *plVar10)))))) {
LAB_014fbec0:
                if (*(int *)(this + 0x18) != 3) goto LAB_014fbfb4;
              }
            }
          }
          else if ((uVar16 == 0xffffffff) &&
                  (uVar3 = IsTransitionOfMonomorphicTarget(this,lVar5,*local_68), uVar16 = uVar14,
                  (uVar3 & 1) == 0)) {
            uVar16 = 0xffffffff;
          }
        }
        else {
          iVar12 = iVar12 + 1;
        }
        if ((uVar8 >> 3 & 0xffffffff) - 1 == uVar15) goto LAB_014fbee4;
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 0x10;
      } while (uVar15 < (ulong)((long)local_78 - (long)local_80 >> 3));
    }
LAB_014fc174:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar12 = 0;
  uVar16 = 0xffffffff;
LAB_014fbee4:
  if ((FLAG_max_polymorphic_map_count <= (int)((iVar2 - iVar12) - (uint)(uVar16 != 0xffffffff))) ||
     (((iVar2 == 0 && (*(int *)(this + 0x18) != 4)) && (*(int *)(this + 0x18) != 2)))) {
LAB_014fbfb4:
    uVar11 = 0;
    goto joined_r0x014fbfbc;
  }
  if (iVar2 - iVar12 == (uint)(uVar16 != 0xffffffff)) {
    uVar16 = *(uint *)(this + 0x1c);
    if ((uVar16 | 1) == 7) {
LAB_014fc00c:
      FeedbackNexus::ConfigureHandlerMode(this_00,param_3);
    }
    else {
      piVar6 = (int *)0x0;
      if (((uVar16 < 0xf) &&
          (uVar16 = 1 << (ulong)(uVar16 & 0x1f), piVar6 = param_2, (uVar16 & 0x6308) == 0)) &&
         (piVar6 = (int *)0x0, (uVar16 & 0x402) != 0)) goto LAB_014fc00c;
      FeedbackNexus::ConfigureMonomorphic(this_00,piVar6,*(undefined8 *)(this + 0x20),param_3);
    }
    this[0x10] = (IC)0x1;
    pIVar1 = this + 0x58;
    if (*(IC **)(this + 0x50) != (IC *)0x0) {
      pIVar1 = *(IC **)(this + 0x50);
    }
    uVar7 = *(undefined8 *)pIVar1;
    uVar4 = *(undefined8 *)(this + 8);
  }
  else {
    if (((*(uint *)(this + 0x1c) < 0xf) &&
        ((1 << (ulong)(*(uint *)(this + 0x1c) & 0x1f) & 0x6308U) != 0)) &&
       (iVar2 = FeedbackNexus::GetName(this_00), iVar2 != *param_2)) goto LAB_014fbfb4;
    if ((int)uVar16 < 0) {
      if (local_78 == puStack_70) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)&local_80,(Handle *)&local_68);
      }
      else {
        *local_78 = local_68;
        local_78 = local_78 + 1;
      }
      if (local_90 == local_88) {
        std::__ndk1::
        vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
        ::__push_back_slow_path<v8::internal::MaybeObjectHandle_const&>
                  ((vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
                    *)&local_98,param_3);
      }
      else {
        uVar4 = *(undefined8 *)param_3;
        local_90[1] = *(undefined8 *)(param_3 + 8);
        *local_90 = uVar4;
        local_90 = local_90 + 2;
      }
    }
    else {
      uVar4 = *(undefined8 *)param_3;
      uVar8 = (ulong)uVar16;
      (local_98 + (ulong)uVar16 * 2)[1] = *(undefined8 *)(param_3 + 8);
      local_98[(ulong)uVar16 * 2] = uVar4;
      if ((ulong)((long)local_78 - (long)local_80 >> 3) <= uVar8) goto LAB_014fc174;
      plVar9 = (long *)local_80[uVar8];
      if ((local_68 != plVar9) &&
         (((plVar9 == (long *)0x0 || (local_68 == (long *)0x0)) || (*local_68 != *plVar9)))) {
        local_80[uVar8] = local_68;
      }
    }
    piVar6 = (int *)0x0;
    if ((*(uint *)(this + 0x1c) < 0xf) &&
       ((1 << (ulong)(*(uint *)(this + 0x1c) & 0x1f) & 0x6308U) != 0)) {
      piVar6 = param_2;
    }
    FeedbackNexus::ConfigurePolymorphic(this_00,piVar6,&local_80,&local_98);
    this[0x10] = (IC)0x1;
    pIVar1 = this + 0x58;
    if (*(IC **)(this + 0x50) != (IC *)0x0) {
      pIVar1 = *(IC **)(this + 0x50);
    }
    uVar7 = *(undefined8 *)pIVar1;
    uVar4 = *(undefined8 *)(this + 8);
  }
  uVar11 = 1;
  OnFeedbackChanged(uVar4,uVar7);
joined_r0x014fbfbc:
  if (local_98 != (undefined8 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_80 != (undefined8 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  return uVar11;
}

