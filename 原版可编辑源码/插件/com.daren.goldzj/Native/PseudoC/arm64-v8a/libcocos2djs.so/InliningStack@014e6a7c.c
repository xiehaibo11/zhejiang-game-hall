
/* v8::internal::SourcePosition::InliningStack(v8::internal::Handle<v8::internal::Code>) const */

void v8::internal::SourcePosition::InliningStack
               (vector<v8::internal::SourcePositionInfo,std::__ndk1::allocator<v8::internal::SourcePositionInfo>>
                *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  pIVar5 = (Isolate *)(*param_3 & 0xffffffff00000000);
  puVar9 = (undefined8 *)((ulong)pIVar5 | 0x95b8);
  uVar6 = (ulong)pIVar5 | (ulong)*(uint *)(*param_3 + 7);
  if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar6);
  }
  uVar7 = *param_2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar6 = *puVar2;
  uVar4 = uVar6 & 0xffffffff00000000;
  if (((uVar7 & 1) == 0) && ((uVar7 & 0x7fff80000000) != 0)) {
    uVar8 = uVar7;
    do {
      lVar1 = (uVar8 >> 0x1b & 0xffff0) + (uVar4 | *(uint *)(uVar6 + 0x23));
      uVar7 = *(ulong *)(lVar1 + -9);
      local_80 = uVar6;
      uVar6 = DeoptimizationData::GetInlinedFunction
                        ((DeoptimizationData *)&local_80,*(int *)(lVar1 + -1));
      if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar6);
      }
      SourcePositionInfo::SourcePositionInfo((SourcePositionInfo *)&local_80,uVar8,puVar3);
      puVar3 = *(ulong **)(param_1 + 8);
      if (puVar3 < *(ulong **)(param_1 + 0x10)) {
        puVar3[1] = uStack_78;
        *puVar3 = local_80;
        puVar3[3] = uStack_68;
        puVar3[2] = uStack_70;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      else {
        std::__ndk1::
        vector<v8::internal::SourcePositionInfo,std::__ndk1::allocator<v8::internal::SourcePositionInfo>>
        ::__push_back_slow_path<v8::internal::SourcePositionInfo>
                  (param_1,(SourcePositionInfo *)&local_80);
      }
      uVar6 = *puVar2;
      uVar4 = uVar6 & 0xffffffff00000000;
    } while (((uVar7 & 1) == 0) && (uVar8 = uVar7, (uVar7 & 0x7fff80000000) != 0));
  }
  uVar4 = uVar4 | *(uint *)(uVar6 + 0x1f);
  if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar4);
  }
  SourcePositionInfo::SourcePositionInfo((SourcePositionInfo *)&local_80,uVar7,puVar2);
  puVar2 = *(ulong **)(param_1 + 8);
  if (puVar2 < *(ulong **)(param_1 + 0x10)) {
    puVar2[1] = uStack_78;
    *puVar2 = local_80;
    puVar2[3] = uStack_68;
    puVar2[2] = uStack_70;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::SourcePositionInfo,std::__ndk1::allocator<v8::internal::SourcePositionInfo>>
    ::__push_back_slow_path<v8::internal::SourcePositionInfo>
              (param_1,(SourcePositionInfo *)&local_80);
  }
  return;
}

