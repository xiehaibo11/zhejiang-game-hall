
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::StoreIC::Store(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::StoreOrigin) */

undefined8 __thiscall
v8::internal::StoreIC::Store
          (StoreIC *this,ulong *param_2,ulong *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  Factory *pFVar17;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  Factory *local_a8;
  ulong *local_a0;
  undefined8 local_98;
  ulong *local_90;
  undefined8 local_88;
  ulong *local_80;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  
  bVar4 = FLAG_use_ic;
  uVar15 = *param_2;
  lVar14 = *(long *)(this + 8);
  if ((((uVar15 & 1) != 0) &&
      (0xa9 < *(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)))) &&
     ((*(uint *)((uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 - 1)) + 0xb) >> 0x18 & 1) !=
      0)) {
    JSObject::MigrateInstance(lVar14,param_2);
    uVar8 = Object::SetProperty(*(undefined8 *)(this + 8),param_2,param_3,param_4,0,0);
    return uVar8;
  }
  iVar1 = *(int *)(this + 0x18);
  bVar3 = FLAG_use_ic & iVar1 != 0;
  if (((uVar15 & 1) != 0) &&
     (((int)uVar15 == *(int *)(lVar14 + 0xb0) || ((int)uVar15 == *(int *)(lVar14 + 0xa0))))) {
    if (bVar3 != 0) {
      if (TracingFlags::runtime_stats == 0) {
        if ((uVar15 & 1) != 0) goto LAB_014ffe3c;
LAB_014ffa38:
        pIVar7 = *(Isolate **)(this + 8);
        pIVar9 = pIVar7 + 0x140;
      }
      else {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(lVar14 + 0x9520) + 0x58a0),0x421,0);
        uVar15 = *param_2;
        if ((uVar15 & 1) == 0) goto LAB_014ffa38;
LAB_014ffe3c:
        pIVar7 = *(Isolate **)(this + 8);
        uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 - 1);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pIVar9 = *(Isolate **)(pIVar7 + 0x95a0);
          if (pIVar9 == *(Isolate **)(pIVar7 + 0x95a8)) {
            pIVar9 = (Isolate *)HandleScope::Extend(pIVar7);
          }
          *(Isolate **)(pIVar7 + 0x95a0) = pIVar9 + 8;
          *(ulong *)pIVar9 = uVar15;
        }
        else {
          pIVar9 = (Isolate *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar15);
        }
        pIVar7 = *(Isolate **)(this + 8);
      }
      *(Isolate **)(this + 0x20) = pIVar9;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(undefined8 **)(pIVar7 + 0x95a0);
        if (puVar11 == *(undefined8 **)(pIVar7 + 0x95a8)) {
          puVar11 = (undefined8 *)HandleScope::Extend(pIVar7);
        }
        *(undefined8 **)(pIVar7 + 0x95a0) = puVar11 + 1;
        *puVar11 = 0x14;
      }
      else {
        puVar11 = (undefined8 *)
                  CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),0x14);
      }
      local_c0 = CONCAT44(local_c0._4_4_,1);
      uStack_b8 = SUB84(puVar11,0);
      local_b4 = (undefined4)((ulong)puVar11 >> 0x20);
      IC::SetCache((IC *)this,param_3,&local_c0);
      if (TracingFlags::ic_stats != 0) {
        if (*(int *)(this + 0x18) == 0) {
          uVar13 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
          uVar13 = *(undefined4 *)(this + 0x18);
        }
        IC::TraceIC((IC *)this,"StoreIC",param_3,uVar13,uVar6);
      }
    }
    pIVar9 = *(Isolate **)(this + 8);
    uVar8 = *(undefined8 *)(pIVar9 + 0x95a0);
    lVar14 = *(long *)(pIVar9 + 0x95a8);
    *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
    pFVar17 = *(Factory **)(this + 8);
    puVar11 = (undefined8 *)Factory::NewTypeError(pFVar17,0x55,param_3,param_2,0);
    Isolate::Throw((Isolate *)pFVar17,*puVar11,0);
    if (pIVar9 == (Isolate *)0x0) {
      return 0;
    }
    *(undefined8 *)(pIVar9 + 0x95a0) = uVar8;
    *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
    if (*(long *)(pIVar9 + 0x95a8) == lVar14) {
      return 0;
    }
    *(long *)(pIVar9 + 0x95a8) = lVar14;
    goto LAB_014fff84;
  }
  JSObject::MakePrototypesFast(param_2,1,lVar14);
  pFVar17 = *(Factory **)(this + 8);
  local_68 = 0;
  uVar15 = *param_3;
  local_80 = param_2;
  local_a8 = pFVar17;
  local_90 = param_2;
  if (*(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) < 0x40) {
    uVar2 = *(uint *)(uVar15 + 3);
    local_c0 = uVar15;
    if ((uVar2 & 0xc0000003) == 0) {
      local_68 = (ulong)(uVar2 >> 3) & 0xffffff;
      uVar15 = *param_2;
      if ((uVar15 & 1) == 0) goto LAB_014ffb7c;
LAB_014ffb64:
      local_78 = local_68;
      if (*(ushort *)(((ulong)pFVar17 | 7) + (ulong)*(uint *)(uVar15 - 1)) < 0xa9)
      goto LAB_014ffb7c;
    }
    else {
      if (((uVar2 & 5) == 4) ||
         (uVar15 = String::SlowAsIntegerIndex((String *)&local_c0,&local_68), (uVar15 & 1) == 0))
      goto LAB_014ffa44;
      uVar15 = *param_2;
      if ((uVar15 & 1) != 0) goto LAB_014ffb64;
LAB_014ffb7c:
      uVar15 = local_68;
      local_80 = (ulong *)LookupIterator::GetRootForNonJSReceiver(pFVar17,param_2,local_68);
      local_78 = uVar15;
    }
    local_c0 = CONCAT44(local_c0._4_4_,3);
    local_a0 = (ulong *)0x0;
    local_98 = 0;
    local_88 = 0;
    local_b4 = 0;
    uStack_b0 = 0xc0;
    local_70 = 0xffffffffffffffff;
    if ((local_78 < 0xffffffff) ||
       (*(short *)((*local_80 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_80 - 1)) == 0x41b)
       ) {
      puVar10 = local_a0;
      if ((param_3 != (ulong *)0x0) &&
         (*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0x20))
      {
        puVar10 = param_3;
      }
    }
    else {
      puVar10 = param_3;
      if (param_3 == (ulong *)0x0) {
        puVar10 = (ulong *)Factory::SizeToString(pFVar17,local_78,true);
      }
      if ((*(ushort *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) &
          0xffe0) == 0x20) {
        puVar10 = (ulong *)StringTable::LookupString(pFVar17);
      }
    }
    local_a0 = puVar10;
    LookupIterator::Start<true>((LookupIterator *)&local_c0);
  }
  else {
LAB_014ffa44:
    if (((*param_2 & 1) == 0) ||
       (*(ushort *)(((ulong)pFVar17 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
      local_80 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                    (pFVar17,param_2,0xffffffffffffffff);
    }
    uVar13 = 3;
    if ((*(short *)(((ulong)pFVar17 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) &&
       (uVar13 = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
      uVar13 = 0;
    }
    local_c0 = CONCAT44(local_c0._4_4_,uVar13);
    local_b4 = 0;
    uStack_b0 = 0xc0;
    local_a0 = param_3;
    if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
        == 0x20) {
      local_a0 = (ulong *)StringTable::LookupString(pFVar17,param_3);
    }
    local_98 = 0;
    local_88 = 0;
    local_70 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    LookupIterator::Start<false>((LookupIterator *)&local_c0);
  }
  uVar15 = *param_3;
  uVar16 = uVar15 & 0xffffffff00000000 | 7;
  if ((*(short *)(uVar16 + *(uint *)(uVar15 - 1)) == 0x40) && ((*(uint *)(uVar15 + 7) & 1) != 0)) {
    if ((*(short *)(uVar16 + *(uint *)(uVar15 - 1)) == 0x40) &&
       (((*(uint *)(uVar15 + 7) >> 4 & 1) != 0 && (local_c0._4_4_ == 4)))) {
      pIVar9 = *(Isolate **)(this + 8);
      uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar15;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar15);
      }
      pIVar9 = *(Isolate **)(this + 8);
      uVar8 = *(undefined8 *)(pIVar9 + 0x95a0);
      lVar14 = *(long *)(pIVar9 + 0x95a8);
      *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
      pFVar17 = *(Factory **)(this + 8);
      puVar11 = (undefined8 *)Factory::NewTypeError(pFVar17,0x105,puVar10,param_2,0);
      Isolate::Throw((Isolate *)pFVar17,*puVar11,0);
      if (pIVar9 == (Isolate *)0x0) {
        return 0;
      }
      *(undefined8 *)(pIVar9 + 0x95a0) = uVar8;
      *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
      if (*(long *)(pIVar9 + 0x95a8) == lVar14) {
        return 0;
      }
      *(long *)(pIVar9 + 0x95a8) = lVar14;
LAB_014fff84:
      HandleScope::DeleteExtensions(pIVar9);
      return 0;
    }
    uVar15 = *param_2;
    if ((uVar15 & 1) == 0) goto joined_r0x014ffcd8;
    if ((*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0xa9) &&
       (iVar1 != 0)) {
      bVar3 = bVar4 & 1;
      goto joined_r0x014ffcd8;
    }
  }
  else {
joined_r0x014ffcd8:
    if (bVar3 != 0) {
      UpdateCaches(this,&local_c0,param_4,param_5);
      goto LAB_014ffd60;
    }
  }
  if (*(int *)(this + 0x18) == 0) {
    if ((*(int *)(this + 0x1c) == 10) || (*(int *)(this + 0x1c) == 1)) {
      if (TracingFlags::ic_stats == 0) goto LAB_014ffd60;
      pcVar12 = "StoreGlobalIC";
    }
    else {
      if (TracingFlags::ic_stats == 0) goto LAB_014ffd60;
      pcVar12 = "StoreIC";
    }
    IC::TraceIC((IC *)this,pcVar12,param_3,0,0);
  }
LAB_014ffd60:
  cVar5 = Object::SetProperty(&local_c0,param_4,param_5,0);
  uVar8 = 0;
  if (cVar5 != '\0') {
    uVar8 = param_4;
  }
  return uVar8;
}

