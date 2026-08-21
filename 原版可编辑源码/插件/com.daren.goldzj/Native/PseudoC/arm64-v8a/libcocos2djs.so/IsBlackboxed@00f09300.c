
/* v8::internal::Debug::IsBlackboxed(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

bool __thiscall v8::internal::Debug::IsBlackboxed(Debug *this,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  Debug DVar3;
  Debug DVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  Isolate *pIVar15;
  ulong uVar16;
  ulong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0;
  StackGuard *local_a8;
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if (*(long *)this == 0) {
    uVar16 = *param_2;
    uVar14 = uVar16 & 0xffffffff00000000;
    local_b0 = (undefined **)(uVar14 | *(uint *)(uVar16 + 0xf));
    if (*(short *)((uVar14 | 7) + (ulong)*(uint *)((long)local_b0 - 1)) == 0x5b) {
      local_b0 = (undefined **)(uVar14 | *(uint *)((long)local_b0 + 0xb));
    }
    if (((((ulong)local_b0 & 1) == 0) ||
        ((int)local_b0 != *(int *)(((ulong)local_b0 & 0xffffffff00000000) + 0xa0))) &&
       (uVar7 = Script::IsUserJavaScript((Script *)&local_b0), (uVar7 & 1) != 0)) {
      if ((*(uint *)(uVar16 + 3) & 1) == 0) {
        return false;
      }
      return *(short *)((uVar14 | 7) + (ulong)*(uint *)((uVar14 | *(uint *)(uVar16 + 3)) - 1)) ==
             0x57;
    }
    return true;
  }
  plVar6 = (long *)GetOrCreateDebugInfo(this,param_2);
  pbVar10 = (byte *)(*plVar6 + 7);
  if ((*pbVar10 >> 4 & 1) != 0) goto LAB_00f09540;
  uVar16 = *param_2;
  uVar14 = uVar16 & 0xffffffff00000000;
  local_b0 = (undefined **)(uVar14 | *(uint *)(uVar16 + 0xf));
  if (*(short *)((uVar14 | 7) + (ulong)*(uint *)((long)local_b0 - 1)) == 0x5b) {
    local_b0 = (undefined **)(uVar14 | *(uint *)((long)local_b0 + 0xb));
  }
  if (((((ulong)local_b0 & 1) == 0) ||
      ((int)local_b0 != *(int *)(((ulong)local_b0 & 0xffffffff00000000) + 0xa0))) &&
     ((uVar7 = Script::IsUserJavaScript((Script *)&local_b0), (uVar7 & 1) != 0 &&
      (((*(uint *)(uVar16 + 3) & 1) == 0 ||
       (*(short *)((uVar14 | 7) + (ulong)*(uint *)((uVar14 | *(uint *)(uVar16 + 3)) - 1)) != 0x57)))
      ))) {
    uVar16 = *param_2 & 0xffffffff00000000;
    uVar14 = uVar16 | *(uint *)(*param_2 + 0xf);
    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x5b) {
      uVar14 = uVar16 | *(uint *)(uVar14 + 0xb);
    }
    if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x65)
    goto LAB_00f09508;
    pIVar15 = *(Isolate **)(this + 0x88);
    DVar3 = this[10];
    this[10] = (Debug)0x1;
    uVar1 = *(undefined8 *)(pIVar15 + 0x95a0);
    lVar2 = *(long *)(pIVar15 + 0x95a8);
    *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
    InterruptsScope::InterruptsScope
              ((InterruptsScope *)&local_b0,*(undefined8 *)(this + 0x88),0xff,0);
    local_b0 = &PTR__InterruptsScope_01c98490;
    DVar4 = this[0xc];
    this[0xc] = (Debug)0x1;
    uVar14 = *param_2 & 0xffffffff00000000;
    uVar16 = uVar14 | *(uint *)(*param_2 + 0xf);
    if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x5b) {
      uVar16 = uVar14 | *(uint *)(uVar16 + 0xb);
    }
    pIVar8 = *(Isolate **)(this + 0x88);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar16;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar16);
    }
    local_c8 = *param_2;
    uVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c8);
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    Script::GetPositionInfo(puVar9,uVar5,&local_80,1);
    debug::Location::Location
              ((Location *)&local_70,(uint)local_80 & ((int)(uint)local_80 >> 0x1f ^ 0xffffffffU),
               local_80._4_4_ & ((int)local_80._4_4_ >> 0x1f ^ 0xffffffffU));
    local_c0 = local_70;
    local_b8 = local_68;
    local_c8 = *param_2;
    uVar5 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_c8);
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    Script::GetPositionInfo(puVar9,uVar5,&local_80,1);
    debug::Location::Location
              ((Location *)&local_70,(uint)local_80 & ((int)(uint)local_80 >> 0x1f ^ 0xffffffffU),
               local_80._4_4_ & ((int)local_80._4_4_ >> 0x1f ^ 0xffffffffU));
    local_80 = local_70;
    local_78 = CONCAT44(local_78._4_4_,local_68);
    uVar14 = (**(code **)(**(long **)this + 0x28))(*(long **)this,puVar9,&local_c0,&local_80);
    this[0xc] = DVar4;
    local_b0 = &PTR__InterruptsScope_01c984b0;
    if (local_90 != 2) {
      StackGuard::PopInterruptsScope(local_a8);
    }
    if (pIVar15 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar15 + 0x95a0) = uVar1;
      *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
      if (*(long *)(pIVar15 + 0x95a8) != lVar2) {
        *(long *)(pIVar15 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar15);
      }
    }
    this[10] = DVar3;
    puVar11 = (uint *)(*plVar6 + 7);
    uVar12 = *puVar11 & 0xfffffff6;
    if ((uVar14 & 1) != 0) goto LAB_00f09518;
    uVar13 = 0;
  }
  else {
LAB_00f09508:
    puVar11 = (uint *)(*plVar6 + 7);
    uVar12 = *puVar11 & 0xfffffff6;
LAB_00f09518:
    uVar13 = 8;
  }
  *puVar11 = uVar13 | uVar12;
  *(uint *)(*plVar6 + 7) = *(uint *)(*plVar6 + 7) & 0xfffffffe | 0x10;
  pbVar10 = (byte *)(*plVar6 + 7);
LAB_00f09540:
  return (bool)(*pbVar10 >> 3 & 1);
}

