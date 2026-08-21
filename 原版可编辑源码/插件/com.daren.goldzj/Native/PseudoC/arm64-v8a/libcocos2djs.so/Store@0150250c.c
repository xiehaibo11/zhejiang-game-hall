
/* v8::internal::StoreInArrayLiteralIC::Store(v8::internal::Handle<v8::internal::JSArray>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::StoreInArrayLiteralIC::Store
          (StoreInArrayLiteralIC *this,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  StoreInArrayLiteralIC *pSVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  LookupIterator aLStack_b0 [92];
  undefined1 local_54 [4];
  
  if ((FLAG_use_ic != '\0') && (*(int *)(this + 0x18) != 0)) {
    uVar10 = *param_2;
    pIVar9 = *(Isolate **)(this + 8);
    if (((uVar10 & 1) == 0) ||
       ((*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xaa ||
        ((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 0xb) >> 0x18 & 1)
         == 0)))) {
      if ((*param_3 & 1) == 0) {
        uVar5 = FUN_015023a4(param_2,(int)*param_3 >> 1);
        uVar10 = *param_2;
        pIVar9 = *(Isolate **)(this + 8);
      }
      else {
        uVar5 = 0;
      }
      uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1);
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
      }
      local_54[0] = 0;
      LookupIterator::PropertyOrElement
                (aLStack_b0,*(undefined8 *)(this + 8),param_2,param_3,local_54,1);
      uVar4 = JSObject::DefineOwnPropertyIgnoreAttributes(aLStack_b0,param_4,0,1,1);
      if ((uVar4 & 0xff) == 0) {
        v8::V8::FromJustIsNothing();
      }
      if (uVar4 < 0x100) goto LAB_01502858;
      if ((*param_3 & 1) == 0) {
        pIVar9 = *(Isolate **)(this + 8);
        uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar10;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
        }
        KeyedStoreIC::UpdateStoreElement((KeyedStoreIC *)this,puVar7,uVar5,puVar8);
        iVar2 = *(int *)(this + 0x18);
      }
      else {
        *(char **)(this + 0x48) = "index out of Smi range";
        iVar2 = *(int *)(this + 0x18);
      }
      if ((iVar2 != 0) && (this[0x10] == (StoreInArrayLiteralIC)0x0)) {
        if (iVar2 == 5) {
          pSVar1 = this + 0x58;
          if (*(StoreInArrayLiteralIC **)(this + 0x50) != (StoreInArrayLiteralIC *)0x0) {
            pSVar1 = *(StoreInArrayLiteralIC **)(this + 0x50);
          }
          if (*(uint *)(*(long *)pSVar1 + (long)(*(int *)(this + 0x60) * 4 + 4) + 0x1f) < 2)
          goto LAB_01502794;
        }
        uVar10 = *param_3;
        if ((uVar10 & 1) == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) <
                  0x41;
        }
        FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)(this + 0x50),bVar3);
        this[0x10] = (StoreInArrayLiteralIC)0x1;
        pSVar1 = this + 0x58;
        if (*(StoreInArrayLiteralIC **)(this + 0x50) != (StoreInArrayLiteralIC *)0x0) {
          pSVar1 = *(StoreInArrayLiteralIC **)(this + 0x50);
        }
        IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pSVar1);
      }
      goto LAB_01502794;
    }
    JSObject::MigrateInstance(pIVar9,param_2);
  }
  local_54[0] = 0;
  LookupIterator::PropertyOrElement(aLStack_b0,*(undefined8 *)(this + 8),param_2,param_3,local_54,1)
  ;
  uVar4 = JSObject::DefineOwnPropertyIgnoreAttributes(aLStack_b0,param_4,0,1,1);
  if ((uVar4 & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  if (uVar4 < 0x100) {
LAB_01502858:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "JSObject::DefineOwnPropertyIgnoreAttributes( &it, value, NONE, Just(ShouldThrow::kThrowOnError)) .FromJust()"
            );
  }
LAB_01502794:
  if (TracingFlags::ic_stats != 0) {
    if (*(int *)(this + 0x18) == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
      uVar5 = *(undefined4 *)(this + 0x18);
    }
    IC::TraceIC((IC *)this,"StoreInArrayLiteralIC",param_3,uVar5,uVar6);
  }
  return;
}

