
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::KeyedStoreIC::UpdateStoreElement(v8::internal::Handle<v8::internal::Map>,
   v8::internal::KeyedAccessStoreMode, v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::KeyedStoreIC::UpdateStoreElement
          (KeyedStoreIC *this,MaybeObjectHandle *param_2,int param_3,MaybeObjectHandle *param_4)

{
  FeedbackNexus *this_00;
  ulong uVar1;
  KeyedStoreIC *pKVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  MaybeObjectHandle *pMVar20;
  undefined8 local_90;
  MaybeObjectHandle *pMStack_88;
  MaybeObjectHandle *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  if (this[0x40] == (KeyedStoreIC)0x0) {
    this[0x40] = (KeyedStoreIC)0x1;
    FeedbackNexus::ExtractMaps((FeedbackNexus *)(this + 0x50),(vector *)(this + 0x28));
  }
  plVar18 = *(long **)(this + 0x28);
  plVar13 = *(long **)(this + 0x30);
  if (plVar18 == plVar13) {
LAB_01500f64:
    uVar6 = IC::IsTransitionOfMonomorphicTarget((IC *)this,*(long *)param_2,*(long *)param_4);
    if ((uVar6 & 1) == 0) {
      param_4 = param_2;
    }
    pMStack_88 = (MaybeObjectHandle *)StoreElementHandler(this,param_4,param_3);
    local_90 = (MaybeObjectHandle *)CONCAT44(local_90._4_4_,1);
    uVar3 = *(uint *)(this + 0x1c);
    if ((uVar3 | 1) == 7) goto LAB_01500fc0;
joined_r0x01501160:
    if ((uVar3 == 10) || (uVar3 == 1)) goto LAB_01500fc0;
    FeedbackNexus::ConfigureMonomorphic((FeedbackNexus *)(this + 0x50),0,param_4,&local_90);
  }
  else {
    plVar12 = (long *)0x0;
    plVar9 = (long *)0x0;
    while( true ) {
      local_90 = (MaybeObjectHandle *)*plVar18;
      if (plVar9 == plVar12) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)&local_78,(Handle *)&local_90);
        plVar9 = local_70;
        plVar12 = local_68;
      }
      else {
        *plVar9 = (long)local_90;
        plVar9 = local_70 + 1;
        plVar12 = local_68;
      }
      local_70 = plVar9;
      local_68 = plVar12;
      if (plVar13 + -1 == plVar18) break;
      plVar18 = plVar18 + 1;
    }
    plVar18 = local_78;
    if (local_78 == plVar9) goto LAB_01500f64;
    for (; plVar18 != plVar9; plVar18 = plVar18 + 1) {
      if (((long *)*plVar18 != (long *)0x0) && (*(short *)(*(long *)*plVar18 + 7) == 0x411)) {
        pcVar10 = "JSPrimitiveWrapper";
        goto LAB_01501258;
      }
    }
    this_00 = (FeedbackNexus *)(this + 0x50);
    iVar5 = FeedbackNexus::GetKeyedAccessStoreMode(this_00);
    if (local_70 == local_78) goto LAB_01501558;
    plVar18 = local_78;
    if (*(int *)(this + 0x18) != 2) {
joined_r0x01501184:
      for (; local_90 = param_2, plVar18 != local_70; plVar18 = plVar18 + 1) {
        pMVar20 = (MaybeObjectHandle *)*plVar18;
        if ((pMVar20 != (MaybeObjectHandle *)0x0) &&
           ((pMVar20 == param_2 ||
            ((param_2 != (MaybeObjectHandle *)0x0 && (*(long *)pMVar20 == *(long *)param_2)))))) {
          bVar4 = false;
          goto LAB_015011f4;
        }
      }
      if (local_70 == local_68) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)&local_78,(Handle *)&local_90);
      }
      else {
        *local_70 = (long)param_2;
        local_70 = local_70 + 1;
      }
      bVar4 = true;
LAB_015011f4:
      uVar6 = IC::IsTransitionOfMonomorphicTarget((IC *)this,*(long *)param_2,*(long *)param_4);
      plVar18 = local_78;
      if ((uVar6 & 1) == 0) {
LAB_0150124c:
        if (bVar4) goto LAB_01501294;
        pcVar10 = "same map added twice";
LAB_01501258:
        *(char **)(this + 0x48) = pcVar10;
        goto joined_r0x01501260;
      }
      for (; local_90 = param_4, plVar18 != local_70; plVar18 = plVar18 + 1) {
        pMVar20 = (MaybeObjectHandle *)*plVar18;
        if ((pMVar20 != (MaybeObjectHandle *)0x0) &&
           ((pMVar20 == param_4 ||
            ((param_4 != (MaybeObjectHandle *)0x0 && (*(long *)pMVar20 == *(long *)param_4))))))
        goto LAB_0150124c;
      }
      if (local_70 == local_68) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)&local_78,(Handle *)&local_90);
      }
      else {
        *local_70 = (long)param_4;
        local_70 = local_70 + 1;
      }
LAB_01501294:
      lVar11 = (long)local_70 - (long)local_78;
      uVar6 = lVar11 >> 3;
      if (FLAG_max_polymorphic_map_count < (int)uVar6) goto joined_r0x01501260;
      if (iVar5 == 0) {
        iVar19 = param_3;
        if (param_3 != 0) goto LAB_015012dc;
      }
      else {
        iVar19 = iVar5;
        if ((param_3 != 0) && (iVar19 = param_3, iVar5 != param_3)) {
          pcVar10 = "store mode mismatch";
          goto LAB_01501258;
        }
LAB_015012dc:
        param_3 = iVar19;
        if (local_78 != local_70) {
          uVar1 = (lVar11 - 8U >> 3) + 1;
          if (uVar1 < 2) {
            uVar14 = 0;
            plVar13 = local_78;
LAB_01501370:
            do {
              plVar18 = plVar13 + 1;
              if ((byte)((*(byte *)(*(long *)*plVar13 + 10) >> 3) - 0x11) < 0xb) {
                uVar14 = uVar14 + 1;
              }
              plVar13 = plVar18;
            } while (local_70 != plVar18);
          }
          else {
            uVar17 = uVar1 & 0x3ffffffffffffffe;
            lVar15 = 0;
            lVar16 = 0;
            plVar13 = local_78 + uVar17;
            plVar18 = local_78 + 1;
            uVar14 = uVar17;
            do {
              plVar9 = plVar18 + -1;
              plVar12 = (long *)*plVar18;
              plVar18 = plVar18 + 2;
              if ((byte)((*(byte *)(*(long *)*plVar9 + 10) >> 3) - 0x11) < 0xb) {
                lVar15 = lVar15 + 1;
              }
              if ((byte)((*(byte *)(*plVar12 + 10) >> 3) - 0x11) < 0xb) {
                lVar16 = lVar16 + 1;
              }
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            uVar14 = lVar16 + lVar15;
            if (uVar1 != uVar17) goto LAB_01501370;
          }
          if (uVar14 != 0 && uVar14 != uVar6) {
            pcVar10 = "unsupported combination of external and normal arrays";
            goto LAB_01501258;
          }
        }
      }
      pMStack_88 = (MaybeObjectHandle *)0x0;
      local_80 = (MaybeObjectHandle *)0x0;
      local_90 = (MaybeObjectHandle *)0x0;
      if (lVar11 != 0) {
        if (uVar6 >> 0x3c != 0) {
LAB_01501558:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pMStack_88 = operator_new(lVar11 * 2);
        local_80 = pMStack_88 + uVar6 * 0x10;
      }
      local_90 = pMStack_88;
      StoreElementPolymorphicHandlers(this,&local_78,&local_90,param_3);
      lVar11 = (long)local_70 - (long)local_78 >> 3;
      if (lVar11 == 1) {
        uVar3 = *(uint *)(this + 0x1c);
        if ((((uVar3 | 1) == 7) || (uVar3 == 10)) || (uVar3 == 1)) {
          FeedbackNexus::ConfigureHandlerMode(this_00,local_90);
        }
        else {
          param_2 = (MaybeObjectHandle *)*local_78;
          pMVar20 = local_90;
LAB_015014f4:
          FeedbackNexus::ConfigureMonomorphic(this_00,0,param_2,pMVar20);
        }
LAB_015014f8:
        this[0x10] = (KeyedStoreIC)0x1;
        pKVar2 = this + 0x58;
        if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
          pKVar2 = *(KeyedStoreIC **)(this + 0x50);
        }
        uVar8 = *(undefined8 *)pKVar2;
        uVar7 = *(undefined8 *)(this + 8);
      }
      else {
        if (lVar11 == 0) {
          local_58 = StoreElementHandler(this,param_2,param_3);
          local_60[0] = 1;
          uVar3 = *(uint *)(this + 0x1c);
          if ((((uVar3 | 1) != 7) && (uVar3 != 10)) && (uVar3 != 1)) {
            pMVar20 = (MaybeObjectHandle *)local_60;
            goto LAB_015014f4;
          }
          FeedbackNexus::ConfigureHandlerMode(this_00,(MaybeObjectHandle *)local_60);
          goto LAB_015014f8;
        }
        FeedbackNexus::ConfigurePolymorphic(this_00,0,&local_78,&local_90);
        this[0x10] = (KeyedStoreIC)0x1;
        pKVar2 = this + 0x58;
        if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
          pKVar2 = *(KeyedStoreIC **)(this + 0x50);
        }
        uVar8 = *(undefined8 *)pKVar2;
        uVar7 = *(undefined8 *)(this + 8);
      }
      IC::OnFeedbackChanged(uVar7,uVar8);
      if (local_90 != (MaybeObjectHandle *)0x0) {
        pMStack_88 = local_90;
        operator_delete(local_90);
      }
      goto joined_r0x01501260;
    }
    pMVar20 = (MaybeObjectHandle *)*local_78;
    uVar6 = IC::IsTransitionOfMonomorphicTarget((IC *)this,*(long *)pMVar20,*(long *)param_4);
    if ((uVar6 & 1) == 0) {
      plVar18 = local_78;
      if ((param_2 == pMVar20) ||
         (((param_2 != (MaybeObjectHandle *)0x0 && (pMVar20 != (MaybeObjectHandle *)0x0)) &&
          (*(long *)param_2 == *(long *)pMVar20)))) {
        if (param_4 == param_2) {
          bVar4 = true;
        }
        else {
          if (param_2 == (MaybeObjectHandle *)0x0) goto joined_r0x01501184;
          bVar4 = *(long *)param_4 == *(long *)param_2;
        }
        if (((param_3 != 0) && (iVar5 == 0)) && (bVar4)) {
          pMStack_88 = (MaybeObjectHandle *)StoreElementHandler(this,param_2,param_3);
          uVar3 = *(uint *)(this + 0x1c);
          param_4 = param_2;
          goto joined_r0x01501158;
        }
      }
      goto joined_r0x01501184;
    }
    pMStack_88 = (MaybeObjectHandle *)StoreElementHandler(this,param_4,param_3);
    uVar3 = *(uint *)(this + 0x1c);
joined_r0x01501158:
    local_90 = (MaybeObjectHandle *)CONCAT44(local_90._4_4_,1);
    if ((uVar3 | 1) != 7) goto joined_r0x01501160;
LAB_01500fc0:
    FeedbackNexus::ConfigureHandlerMode
              ((FeedbackNexus *)(this + 0x50),(MaybeObjectHandle *)&local_90);
  }
  this[0x10] = (KeyedStoreIC)0x1;
  pKVar2 = this + 0x58;
  if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
    pKVar2 = *(KeyedStoreIC **)(this + 0x50);
  }
  IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pKVar2);
joined_r0x01501260:
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return;
}

