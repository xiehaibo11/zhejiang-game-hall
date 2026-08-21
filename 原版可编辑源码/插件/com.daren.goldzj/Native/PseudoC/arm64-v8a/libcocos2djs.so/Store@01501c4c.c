
/* v8::internal::KeyedStoreIC::Store(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

long __thiscall
v8::internal::KeyedStoreIC::Store
          (KeyedStoreIC *this,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  KeyedStoreIC *pKVar1;
  short sVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  Isolate *pIVar11;
  ulong *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong *local_a8;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  if ((((uVar14 & 1) != 0) &&
      (0xa9 < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)))) &&
     ((*(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1)) + 0xb) >> 0x18 & 1) !=
      0)) {
    JSObject::MigrateInstance(*(undefined8 *)(this + 8),param_2);
    lVar10 = Runtime::SetObjectProperty(*(undefined8 *)(this + 8),param_2,param_3,param_4,0,0);
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return lVar10;
    }
    goto LAB_015023a0;
  }
  local_a0 = 0;
  iVar7 = FUN_014fed10(param_3,*(undefined8 *)(this + 8),&local_98,&local_a0);
  if (iVar7 == 1) {
    lVar10 = StoreIC::Store((StoreIC *)this,param_2,local_a0,param_4,0);
    if (((lVar10 != 0) && (*(int *)(this + 0x18) != 0)) && (this[0x10] == (KeyedStoreIC)0x0)) {
      if (*(int *)(this + 0x18) == 5) {
        pKVar1 = this + 0x58;
        if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
          pKVar1 = *(KeyedStoreIC **)(this + 0x50);
        }
        if (*(uint *)(*(long *)pKVar1 + (long)(*(int *)(this + 0x60) * 4 + 4) + 0x1f) < 2)
        goto LAB_0150218c;
      }
      uVar14 = *param_3;
      if ((uVar14 & 1) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0x41
        ;
      }
      uVar14 = FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)(this + 0x50),bVar5);
      this[0x10] = (KeyedStoreIC)0x1;
      pKVar1 = this + 0x58;
      if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
        pKVar1 = *(KeyedStoreIC **)(this + 0x50);
      }
      IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pKVar1);
      if (((uVar14 & 1) != 0) &&
         (*(char **)(this + 0x48) = "unhandled internalized string key", TracingFlags::ic_stats != 0
         )) {
        if (*(int *)(this + 0x18) == 0) goto LAB_01502380;
LAB_01502370:
        uVar9 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
        uVar13 = *(undefined4 *)(this + 0x18);
        goto LAB_01502388;
      }
    }
  }
  else {
    JSObject::MakePrototypesFast(param_2,1,*(undefined8 *)(this + 8));
    if ((*(int *)(this + 0x18) == 0) || (FLAG_use_ic == '\0')) goto LAB_01501ec0;
    uVar14 = *param_2;
    if ((uVar14 & 1) == 0) {
LAB_01501d88:
      bVar5 = iVar7 == 0;
      local_a8 = (ulong *)0x0;
      iVar8 = 0;
      bVar6 = false;
      bVar4 = true;
      goto LAB_01501ed8;
    }
    uVar17 = uVar14 & 0xffffffff00000000;
    uVar15 = uVar17 | 7;
    if (((*(short *)(uVar15 + *(uint *)(uVar14 - 1)) == 0x411) &&
        ((*(uint *)(uVar14 + 0xb) & 1) != 0)) &&
       (*(ushort *)(uVar15 + *(uint *)((uVar17 | *(uint *)(uVar14 + 0xb)) - 1)) < 0x40)) {
LAB_01501ec0:
      bVar5 = iVar7 == 0;
      bVar4 = false;
      iVar8 = 0;
      bVar6 = false;
      local_a8 = (ulong *)0x0;
    }
    else {
      if (*(short *)(uVar15 + *(uint *)(uVar14 - 1)) != 0xab) {
        if ((*(byte *)((uVar17 | 9) + (ulong)*(uint *)(uVar14 - 1)) >> 5 & 1) == 0)
        goto LAB_01501e80;
        goto LAB_01501ec0;
      }
      local_90 = *(undefined8 *)(uVar17 + 0x2bc8);
      iVar8 = Context::global_object((Context *)&local_90);
      local_80 = 0;
      local_78 = 0;
      local_74 = '\0';
      local_70 = 0;
      local_90 = uVar17;
      local_88 = uVar14;
      PrototypeIterator::Advance((PrototypeIterator *)&local_90);
      if ((int)local_88 != iVar8) goto LAB_01501ec0;
      uVar14 = *param_2;
      if ((uVar14 & 1) == 0) goto LAB_01501d88;
LAB_01501e80:
      if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0xab)
      goto LAB_01501ec0;
      local_90 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
      uVar14 = Map::IsMapInArrayPrototypeChain((Map *)&local_90,*(Isolate **)(this + 8));
      if ((uVar14 & 1) != 0) {
        *(char **)(this + 0x48) = "map in array prototype";
        goto LAB_01501ec0;
      }
      uVar14 = *param_2;
      bVar5 = iVar7 == 0;
      if ((uVar14 & 1) == 0) {
        local_a8 = (ulong *)0x0;
        iVar8 = 0;
        bVar6 = false;
        bVar4 = true;
      }
      else {
        local_a8 = (ulong *)0x0;
        bVar6 = false;
        bVar4 = true;
        iVar8 = 0;
        if ((0xa8 < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)))
           && (iVar7 == 0)) {
          pIVar11 = *(Isolate **)(this + 8);
          uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
          if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            local_a8 = *(ulong **)(pIVar11 + 0x95a0);
            if (local_a8 == *(ulong **)(pIVar11 + 0x95a8)) {
              local_a8 = (ulong *)HandleScope::Extend(pIVar11);
            }
            *(ulong **)(pIVar11 + 0x95a0) = local_a8 + 1;
            *local_a8 = uVar14;
          }
          else {
            local_a8 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar14);
          }
          uVar14 = *param_2;
          uVar15 = uVar14 & 0xffffffff00000000 | 7;
          sVar2 = *(short *)(uVar15 + *(uint *)(uVar14 - 1));
          bVar6 = sVar2 == 0x422;
          if (local_98 < 0) {
            if (*(short *)(uVar15 + *(uint *)(uVar14 - 1)) == 0x41b) {
              local_98 = -1;
              goto LAB_01502320;
            }
          }
          else if ((local_98 < 0xffffffff) || (*(short *)(uVar15 + *(uint *)(uVar14 - 1)) == 0x41b))
          {
LAB_01502320:
            iVar8 = 0;
            if ((sVar2 != 0x422) && (*(short *)(uVar15 + *(uint *)(uVar14 - 1)) != 0xa9)) {
              iVar8 = FUN_015023a4(param_2,local_98);
              bVar6 = false;
            }
            bVar4 = true;
            bVar5 = true;
            goto LAB_01501ed8;
          }
          iVar8 = 0;
          bVar5 = false;
          bVar4 = true;
        }
      }
    }
LAB_01501ed8:
    lVar10 = Runtime::SetObjectProperty(*(undefined8 *)(this + 8),param_2,param_3,param_4,0,0);
    if (lVar10 == 0) goto LAB_0150218c;
    if (bVar4) {
      if (local_a8 == (ulong *)0x0) {
        pcVar16 = "non-JSObject receiver";
LAB_015020d4:
        *(char **)(this + 0x48) = pcVar16;
        goto LAB_015020d8;
      }
      if (bVar6) {
        pcVar16 = "arguments receiver";
        goto LAB_015020d4;
      }
      uVar14 = *param_2;
      if ((uVar14 & 1) != 0) {
        if ((iVar8 == 1) &&
           (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x423))
        {
          uVar14 = JSArray::HasReadOnlyLength(param_2);
          if ((uVar14 & 1) != 0) {
            pcVar16 = "array has read only length";
            goto LAB_015020d4;
          }
          uVar14 = *param_2;
          if ((uVar14 & 1) == 0) goto LAB_01502088;
        }
        if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x423) {
          local_80 = 0;
          local_78 = 0;
          local_74 = '\0';
          local_70 = 0;
          local_90 = uVar14 & 0xffffffff00000000;
          local_88 = uVar14;
          do {
            PrototypeIterator::Advance((PrototypeIterator *)&local_90);
            if (local_74 != '\0') goto LAB_01502088;
            uVar14 = local_88 & 0xffffffff00000000 | 7;
          } while ((*(short *)(uVar14 + *(uint *)(local_88 - 1)) != 0xa9) &&
                  (*(short *)(uVar14 + *(uint *)(local_88 - 1)) != 0x41b));
          pcVar16 = "typed array in the prototype chain of an Array";
          goto LAB_015020d4;
        }
      }
LAB_01502088:
      if (!bVar5) {
        pcVar16 = "non-smi-like key";
        goto LAB_015020d4;
      }
      uVar14 = *local_a8;
      if (((*(uint *)(uVar14 + 0xb) >> 0x14 & 1) != 0) &&
         ((*(uint *)(uVar14 + 0xb) >> 0x16 & 1) == 0)) {
        pcVar16 = "receiver with prototype map";
        goto LAB_015020d4;
      }
      local_90 = uVar14;
      uVar14 = Map::DictionaryElementsInPrototypeChainOnly((Map *)&local_90,*(Isolate **)(this + 8))
      ;
      if ((uVar14 & 1) != 0) {
        pcVar16 = "dictionary or proxy prototype";
        goto LAB_015020d4;
      }
      pIVar11 = *(Isolate **)(this + 8);
      uVar14 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
      if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)(pIVar11 + 0x95a0);
        if (puVar12 == *(ulong **)(pIVar11 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(pIVar11);
        }
        *(ulong **)(pIVar11 + 0x95a0) = puVar12 + 1;
        *puVar12 = uVar14;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar14);
      }
      UpdateStoreElement(this,local_a8,iVar8,puVar12);
      iVar7 = *(int *)(this + 0x18);
    }
    else {
LAB_015020d8:
      iVar7 = *(int *)(this + 0x18);
    }
    if ((iVar7 != 0) && (this[0x10] == (KeyedStoreIC)0x0)) {
      if (iVar7 == 5) {
        pKVar1 = this + 0x58;
        if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
          pKVar1 = *(KeyedStoreIC **)(this + 0x50);
        }
        if (*(uint *)(*(long *)pKVar1 + (long)(*(int *)(this + 0x60) * 4 + 4) + 0x1f) < 2)
        goto LAB_0150217c;
      }
      uVar14 = *param_3;
      if ((uVar14 & 1) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0x41
        ;
      }
      FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)(this + 0x50),bVar5);
      this[0x10] = (KeyedStoreIC)0x1;
      pKVar1 = this + 0x58;
      if (*(KeyedStoreIC **)(this + 0x50) != (KeyedStoreIC *)0x0) {
        pKVar1 = *(KeyedStoreIC **)(this + 0x50);
      }
      IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pKVar1);
    }
LAB_0150217c:
    if (TracingFlags::ic_stats != 0) {
      if (*(int *)(this + 0x18) != 0) goto LAB_01502370;
LAB_01502380:
      uVar13 = 0;
      uVar9 = 0;
LAB_01502388:
      IC::TraceIC((IC *)this,"StoreIC",param_3,uVar13,uVar9);
    }
  }
LAB_0150218c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return lVar10;
  }
LAB_015023a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

