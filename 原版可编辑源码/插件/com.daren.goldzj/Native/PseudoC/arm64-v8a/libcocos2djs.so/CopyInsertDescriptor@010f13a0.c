
/* v8::internal::Map::CopyInsertDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Descriptor*, v8::internal::TransitionFlag)
    */

void v8::internal::Map::CopyInsertDescriptor
               (Isolate *param_1,ulong *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong local_68;
  
  uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar13;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
    uVar13 = *puVar3;
  }
  uVar14 = *param_2;
  uVar11 = *(ulong *)*param_3;
  uVar6 = (ulong)(*(uint *)(uVar14 + 0xb) >> 10) & 0x3ff;
  local_68 = uVar13;
  if ((uint)uVar6 != 0) {
    lVar15 = *(long *)(param_1 + 0x9598);
    uVar1 = (uint)(uVar14 >> 2) & 0x3fffffff;
    uVar7 = (ulong)((*(uint *)(uVar11 + 3) ^ uVar1) & 0x3f);
    if (((*(int *)(lVar15 + uVar7 * 0x10) != (int)uVar14) ||
        (*(int *)(lVar15 + uVar7 * 0x10 + 8) != (int)uVar11)) ||
       (iVar9 = *(int *)(lVar15 + uVar7 * 4 + 0x400), iVar9 == -2)) {
      if ((uint)uVar6 < 9) {
        uVar10 = 0;
        lVar8 = 0x1000000000;
        do {
          if (*(int *)((uVar13 - 1) + (lVar8 >> 0x20)) == (int)uVar11) goto LAB_010f14f0;
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 0xc00000000;
        } while (uVar6 != uVar10);
        uVar10 = 0xffffffff;
      }
      else {
        uVar2 = BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                          (&local_68,uVar11,uVar6,0);
        uVar10 = (ulong)uVar2;
        uVar7 = (ulong)((*(uint *)(uVar11 + 3) ^ uVar1) & 0x3f);
      }
LAB_010f14f0:
      puVar4 = (ulong *)(lVar15 + uVar7 * 0x10);
      *puVar4 = uVar14;
      puVar4[1] = uVar11;
      iVar9 = (int)uVar10;
      *(int *)(lVar15 + uVar7 * 4 + 0x400) = iVar9;
    }
    if (iVar9 != -1) {
      uVar12 = *param_3;
      puVar4 = (ulong *)DescriptorArray::CopyUpTo
                                  (param_1,puVar3,*(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,0);
      local_68 = *puVar4;
      DescriptorArray::Replace((DescriptorArray *)&local_68,(long)iVar9,param_3);
      uVar5 = LayoutDescriptor::New(param_1,param_2,puVar4,(int)*(short *)(*puVar4 + 5));
      CopyReplaceDescriptors
                (param_1,param_2,puVar4,uVar5,param_4,uVar12,"CopyReplaceDescriptor",
                 *(short *)(*puVar3 + 5) + -1 != iVar9);
      return;
    }
  }
  CopyAddDescriptor(param_1,param_2,param_3,param_4);
  return;
}

