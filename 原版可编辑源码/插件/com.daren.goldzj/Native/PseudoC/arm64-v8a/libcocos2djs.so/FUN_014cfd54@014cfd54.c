
undefined8 FUN_014cfd54(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  IncrementalStringBuilder aIStack_d0 [8];
  int local_c8;
  int local_c0;
  int local_bc;
  long *local_b0;
  undefined4 local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pIVar2 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar2;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar14 = *param_2;
  if (((uVar14 & 1) == 0) ||
     (*(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
    uVar13 = __strlen_chk("RegExp.prototype.toString",0x1a);
    local_a8 = 0x1a40d7b;
    iStack_a4 = 0;
    uStack_a0 = (undefined4)uVar13;
    local_9c = (undefined4)((ulong)uVar13 >> 0x20);
    lVar11 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_a8,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar8 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar11,param_2,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
    goto LAB_014d0190;
  }
  uVar9 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1))
                                              + 0x13)) + 0x243);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = puVar3;
    if (puVar4 == puVar3) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar9;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
    uVar9 = *puVar6;
  }
  uVar10 = uVar9 & 0xffffffff00000000;
  if ((*(byte *)((uVar10 | 9) + (ulong)*(uint *)(uVar9 - 1)) & 1) == 0) {
    uVar9 = uVar10 | *(uint *)(uVar9 + 0x1b);
    if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xa2) goto LAB_014cfeec;
    iVar12 = *(int *)(uVar9 + 0xf);
  }
  else {
    uVar5 = *(uint *)((uVar10 | 0x13) + (ulong)*(uint *)(uVar9 - 1));
    uVar9 = uVar10 | uVar5;
    if ((uVar5 & 1) != 0) {
      do {
        if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar9 + 0x13);
        uVar9 = uVar10 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
LAB_014cfeec:
    iVar12 = (int)uVar9;
  }
  if ((int)uVar14 == iVar12) {
    v8::internal::Isolate::CountUsage(param_3,0xc);
  }
  v8::internal::IncrementalStringBuilder::IncrementalStringBuilder(aIStack_d0,param_3);
  lVar11 = (long)local_bc;
  local_bc = local_bc + 1;
  if (local_c8 == 0) {
    *(undefined1 *)(*local_b0 + lVar11 + 0xb) = 0x2f;
  }
  else {
    *(undefined2 *)(*local_b0 + lVar11 * 2 + 0xb) = 0x2f;
  }
  if (local_bc == local_c0) {
    v8::internal::IncrementalStringBuilder::Extend(aIStack_d0);
  }
  uVar14 = *(ulong *)(param_3 + 0x9d0);
  local_88 = param_3 + 0x9d0;
  local_a8 = 3;
  if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x40) &&
     (local_a8 = 3, (*(byte *)(uVar14 + 7) & 1) != 0)) {
    local_a8 = 0;
  }
  local_9c = 0;
  uStack_98 = 0xc0;
  local_90 = param_3;
  if ((*(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) & 0xffe0) ==
      0x20) {
    local_88 = (Isolate *)v8::internal::StringTable::LookupString(param_3);
  }
  uStack_80 = 0;
  uStack_70 = 0;
  local_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_78 = param_2;
  local_68 = param_2;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_a8);
  if (iStack_a4 == 4) {
    pIVar7 = local_90 + 0xa0;
    uVar14 = *(ulong *)pIVar7;
joined_r0x014d0014:
    if (((uVar14 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)))) {
      pIVar7 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
    }
    if (pIVar7 != (Isolate *)0x0) {
      v8::internal::IncrementalStringBuilder::AppendString(aIStack_d0);
      lVar11 = (long)local_bc;
      local_bc = local_bc + 1;
      if (local_c8 == 0) {
        *(undefined1 *)(*local_b0 + lVar11 + 0xb) = 0x2f;
      }
      else {
        *(undefined2 *)(*local_b0 + lVar11 * 2 + 0xb) = 0x2f;
      }
      if (local_bc == local_c0) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_d0);
      }
      uVar14 = *(ulong *)(param_3 + 0x6b0);
      pIVar7 = param_3 + 0x6b0;
      local_a8 = 3;
      if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x40) &&
         (local_a8 = 3, (*(byte *)(uVar14 + 7) & 1) != 0)) {
        local_a8 = 0;
      }
      local_9c = 0;
      uStack_98 = 0xc0;
      local_90 = param_3;
      if ((*(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) & 0xffe0)
          == 0x20) {
        pIVar7 = (Isolate *)v8::internal::StringTable::LookupString(param_3);
      }
      uStack_80 = 0;
      uStack_70 = 0;
      local_58 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      local_88 = pIVar7;
      local_78 = param_2;
      local_68 = param_2;
      v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_a8);
      if (iStack_a4 == 4) {
        pIVar7 = local_90 + 0xa0;
        uVar14 = *(ulong *)pIVar7;
      }
      else {
        pIVar7 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_a8,false);
        if (pIVar7 == (Isolate *)0x0) goto LAB_014d018c;
        uVar14 = *(ulong *)pIVar7;
      }
      if (((uVar14 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)))) {
        pIVar7 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
      }
      if (pIVar7 != (Isolate *)0x0) {
        v8::internal::IncrementalStringBuilder::AppendString(aIStack_d0);
        puVar8 = (undefined8 *)v8::internal::IncrementalStringBuilder::Finish(aIStack_d0);
        if (puVar8 != (undefined8 *)0x0) {
          uVar13 = *puVar8;
          goto LAB_014d0190;
        }
      }
    }
  }
  else {
    pIVar7 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_a8,false);
    if (pIVar7 != (Isolate *)0x0) {
      uVar14 = *(ulong *)pIVar7;
      goto joined_r0x014d0014;
    }
  }
LAB_014d018c:
  uVar13 = *(undefined8 *)(param_3 + 0x180);
LAB_014d0190:
  *(ulong **)pIVar2 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

