
/* v8::internal::KeyedLoadIC::UpdateLoadElement(v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::KeyedAccessLoadMode) */

void __thiscall
v8::internal::KeyedLoadIC::UpdateLoadElement(KeyedLoadIC *this,ulong *param_2,int param_3)

{
  KeyedLoadIC *pKVar1;
  uint uVar2;
  int iVar3;
  Isolate *pIVar4;
  MaybeObjectHandle *pMVar5;
  ulong *extraout_x1;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  MaybeObjectHandle *pMVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  MaybeObjectHandle *local_70;
  MaybeObjectHandle *pMStack_68;
  MaybeObjectHandle *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  pIVar4 = *(Isolate **)(this + 8);
  uVar14 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    pMVar5 = *(MaybeObjectHandle **)(pIVar4 + 0x95a0);
    if (pMVar5 == *(MaybeObjectHandle **)(pIVar4 + 0x95a8)) {
      pMVar5 = (MaybeObjectHandle *)HandleScope::Extend(pIVar4);
    }
    *(MaybeObjectHandle **)(pIVar4 + 0x95a0) = pMVar5 + 8;
    *(ulong *)pMVar5 = uVar14;
  }
  else {
    pMVar5 = (MaybeObjectHandle *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar14);
  }
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  local_58 = (long *)0x0;
  if (this[0x40] == (KeyedLoadIC)0x0) {
    this[0x40] = (KeyedLoadIC)0x1;
    FeedbackNexus::ExtractMaps((FeedbackNexus *)(this + 0x50),(vector *)(this + 0x28));
  }
  plVar10 = *(long **)(this + 0x28);
  plVar12 = *(long **)(this + 0x30);
  if (plVar10 != plVar12) {
    plVar9 = (long *)0x0;
    plVar6 = (long *)0x0;
    while( true ) {
      local_70 = (MaybeObjectHandle *)*plVar10;
      if (plVar6 == plVar9) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)&local_58,(Handle *)&local_70);
        plVar6 = local_50;
        plVar9 = local_48;
      }
      else {
        *plVar6 = (long)local_70;
        plVar6 = local_50 + 1;
        plVar9 = local_48;
      }
      local_50 = plVar6;
      local_48 = plVar9;
      if (plVar12 + -1 == plVar10) break;
      plVar10 = plVar10 + 1;
    }
    if (local_58 != plVar6) {
      plVar12 = (long *)*local_58;
      plVar10 = local_58;
      if (plVar12 != (long *)0x0) goto LAB_014fdc50;
      do {
        do {
          plVar10 = plVar10 + 1;
          if (plVar6 == plVar10) {
            plVar10 = local_58;
            if (*(int *)(this + 0x18) != 2) goto joined_r0x014fdda8;
            uVar14 = *param_2;
            uVar13 = uVar14 & 0xffffffff00000000 | 7;
            if ((*(ushort *)(uVar13 + *(uint *)(uVar14 - 1)) < 0x40) ||
               (*(short *)(uVar13 + *(uint *)(uVar14 - 1)) == 0xa9)) goto joined_r0x014fdda8;
            if (plVar6 == local_58) goto LAB_014fdfb8;
            uVar14 = IsMoreGeneralElementsKindTransition
                               (*(byte *)(*(long *)*local_58 + 10) >> 3,
                                *(byte *)((uVar14 & 0xffffffff00000000 | 10) +
                                         (ulong)*(uint *)(uVar14 - 1)) >> 3);
            plVar10 = local_58;
            if ((uVar14 & 1) == 0) goto joined_r0x014fdda8;
            goto LAB_014fdc7c;
          }
          plVar12 = (long *)*plVar10;
        } while (plVar12 == (long *)0x0);
LAB_014fdc50:
        if (*(short *)(*plVar12 + 7) == 0xa9) {
          pcVar8 = "JSProxy";
          goto LAB_014fde94;
        }
      } while (*(short *)(*plVar12 + 7) != 0x411);
      pcVar8 = "JSPrimitiveWrapper";
      goto LAB_014fde94;
    }
  }
LAB_014fdc7c:
  pMStack_68 = (MaybeObjectHandle *)LoadElementHandler(this,pMVar5,param_3);
  local_70 = (MaybeObjectHandle *)CONCAT44(local_70._4_4_,1);
  uVar2 = *(uint *)(this + 0x1c);
  if ((((uVar2 | 1) == 7) || (uVar2 == 10)) || (uVar2 == 1)) {
    FeedbackNexus::ConfigureHandlerMode
              ((FeedbackNexus *)(this + 0x50),(MaybeObjectHandle *)&local_70);
  }
  else {
    FeedbackNexus::ConfigureMonomorphic((FeedbackNexus *)(this + 0x50),0,pMVar5,&local_70);
  }
  this[0x10] = (KeyedLoadIC)0x1;
  pKVar1 = this + 0x58;
  if (*(KeyedLoadIC **)(this + 0x50) != (KeyedLoadIC *)0x0) {
    pKVar1 = *(KeyedLoadIC **)(this + 0x50);
  }
  IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pKVar1);
  goto joined_r0x014fdf9c;
joined_r0x014fdda8:
  local_70 = pMVar5;
  if (plVar10 == local_50) goto LAB_014fde1c;
  pMVar11 = (MaybeObjectHandle *)*plVar10;
  if ((pMVar11 != (MaybeObjectHandle *)0x0) &&
     ((pMVar11 == pMVar5 ||
      ((pMVar5 != (MaybeObjectHandle *)0x0 && (*(ulong *)pMVar11 == *(ulong *)pMVar5)))))) {
    if ((param_3 == 1) &&
       (iVar3 = FeedbackNexus::FindHandlerForMap((FeedbackNexus *)(this + 0x50),pMVar5),
       extraout_x1 != (ulong *)0x0)) {
      uVar14 = *extraout_x1 | 2;
      if (iVar3 != 0) {
        uVar14 = *extraout_x1;
      }
      iVar3 = LoadHandler::GetKeyedAccessLoadMode(uVar14);
      if (iVar3 == 0) goto LAB_014fde6c;
    }
    pcVar8 = "same map added twice";
    goto LAB_014fde94;
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x014fdda8;
LAB_014fde1c:
  if (local_50 == local_48) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
    ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
              ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                *)&local_58,(Handle *)&local_70);
  }
  else {
    *local_50 = (long)pMVar5;
    local_50 = local_50 + 1;
  }
LAB_014fde6c:
  lVar7 = (long)local_50 - (long)local_58;
  uVar14 = lVar7 >> 3;
  if ((int)uVar14 <= FLAG_max_polymorphic_map_count) {
    pMStack_68 = (MaybeObjectHandle *)0x0;
    local_60 = (MaybeObjectHandle *)0x0;
    local_70 = (MaybeObjectHandle *)0x0;
    if (lVar7 != 0) {
      if (uVar14 >> 0x3c != 0) {
LAB_014fdfb8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pMStack_68 = operator_new(lVar7 * 2);
      local_60 = pMStack_68 + uVar14 * 0x10;
    }
    local_70 = pMStack_68;
    LoadElementPolymorphicHandlers(this,&local_58,&local_70,param_3);
    if ((long)local_50 - (long)local_58 == 8) {
      uVar2 = *(uint *)(this + 0x1c);
      if ((((uVar2 | 1) == 7) || (uVar2 == 10)) || (uVar2 == 1)) {
        FeedbackNexus::ConfigureHandlerMode((FeedbackNexus *)(this + 0x50),local_70);
      }
      else {
        FeedbackNexus::ConfigureMonomorphic((FeedbackNexus *)(this + 0x50),0,*local_58);
      }
    }
    else {
      FeedbackNexus::ConfigurePolymorphic((FeedbackNexus *)(this + 0x50),0,&local_58,&local_70);
    }
    this[0x10] = (KeyedLoadIC)0x1;
    pKVar1 = this + 0x58;
    if (*(KeyedLoadIC **)(this + 0x50) != (KeyedLoadIC *)0x0) {
      pKVar1 = *(KeyedLoadIC **)(this + 0x50);
    }
    IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pKVar1);
    if (local_70 != (MaybeObjectHandle *)0x0) {
      pMStack_68 = local_70;
      operator_delete(local_70);
    }
    goto joined_r0x014fdf9c;
  }
  pcVar8 = "max polymorph exceeded";
LAB_014fde94:
  *(char **)(this + 0x48) = pcVar8;
joined_r0x014fdf9c:
  if (local_58 != (long *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return;
}

