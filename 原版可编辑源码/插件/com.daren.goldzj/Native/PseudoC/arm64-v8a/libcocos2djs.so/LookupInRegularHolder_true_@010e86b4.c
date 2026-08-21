
/* v8::internal::LookupIterator::State
   v8::internal::LookupIterator::LookupInRegularHolder<true>(v8::internal::Map,
   v8::internal::JSReceiver) */

undefined4 __thiscall
v8::internal::LookupIterator::LookupInRegularHolder<true>
          (LookupIterator *this,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long local_48;
  
  if (*(int *)(this + 0xc) == 2) {
    return 4;
  }
  if ((*(ulong *)(this + 0x48) < 0xffffffff) ||
     ((*(ulong *)(this + 0x48) != 0xffffffffffffffff &&
      ((byte)((*(byte *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 - 1)) + 10) >> 3)
             - 0x11) < 0xb)))) {
    uVar10 = *(ulong *)(this + 0x18);
    plVar14 = *(long **)(ElementsAccessor::elements_accessors_ +
                        ((ulong)*(byte *)((uVar10 | 10) + (ulong)*(uint *)(param_3 - 1)) & 0xf8));
    lVar8 = (**(code **)(*plVar14 + 0x108))(plVar14,uVar10,param_3,*(uint *)(param_3 + 7) + uVar10);
    *(long *)(this + 0x50) = lVar8;
    if (lVar8 == -1) {
      if (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x41b) {
        return 1;
      }
      return 4;
    }
    uVar5 = (**(code **)(*plVar14 + 0x110))(plVar14,param_3,lVar8);
    *(uint *)(this + 0x10) = uVar5;
    bVar2 = *(byte *)(param_2 + 10) & 0xf0;
    if (bVar2 == 0x40) {
      uVar5 = uVar5 | 0x20;
    }
    else {
      if (bVar2 != 0x50) goto LAB_010e89fc;
      uVar5 = uVar5 | 0x28;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0xb) >> 0x15 & 1) == 0) {
      local_48 = (ulong)*(uint *)(param_2 + 0x17) + *(long *)(this + 0x18);
      uVar15 = **(ulong **)(this + 0x20);
      uVar10 = (ulong)(*(uint *)(param_2 + 0xb) >> 10) & 0x3ff;
      if ((uint)uVar10 == 0) goto LAB_010e8968;
      lVar8 = *(long *)(*(long *)(this + 0x18) + 0x9598);
      uVar5 = (uint)(param_2 >> 2) & 0x3fffffff;
      uVar11 = (ulong)((*(uint *)(uVar15 + 3) ^ uVar5) & 0x3f);
      if (((*(int *)(lVar8 + uVar11 * 0x10) != (int)param_2) ||
          (*(int *)(lVar8 + uVar11 * 0x10 + 8) != (int)uVar15)) ||
         (iVar7 = *(int *)(lVar8 + uVar11 * 4 + 0x400), iVar7 == -2)) {
        if ((uint)uVar10 < 9) {
          uVar9 = 0;
          lVar13 = 0x1000000000;
          do {
            if (*(int *)(local_48 + -1 + (lVar13 >> 0x20)) == (int)uVar15) goto LAB_010e89b8;
            uVar9 = uVar9 + 1;
            lVar13 = lVar13 + 0xc00000000;
          } while (uVar10 != uVar9);
          uVar9 = 0xffffffff;
        }
        else {
          uVar6 = BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                            (&local_48,uVar15,uVar10,0);
          uVar9 = (ulong)uVar6;
          uVar11 = (ulong)((*(uint *)(uVar15 + 3) ^ uVar5) & 0x3f);
        }
LAB_010e89b8:
        puVar1 = (ulong *)(lVar8 + uVar11 * 0x10);
        *puVar1 = param_2;
        puVar1[1] = uVar15;
        iVar7 = (int)uVar9;
        *(int *)(lVar8 + uVar11 * 4 + 0x400) = iVar7;
      }
      *(long *)(this + 0x50) = (long)iVar7;
      if (iVar7 == -1) goto LAB_010e8970;
      iVar7 = *(int *)(local_48 + ((long)iVar7 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U));
    }
    else {
      lVar8 = *(long *)(this + 0x18);
      uVar10 = (ulong)*(uint *)(param_3 + 3) + lVar8;
      if ((uVar10 & 1) == 0) {
        uVar10 = *(ulong *)(lVar8 + 0x410);
      }
      plVar14 = *(long **)(this + 0x20);
      lVar13 = *plVar14;
      uVar5 = *(uint *)(lVar13 + 3);
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar5 >> 3;
      }
      else {
        local_48 = lVar13;
        uVar5 = String::ComputeAndSetHash((String *)&local_48);
      }
      uVar6 = (*(int *)(uVar10 + 0xf) >> 1) - 1;
      uVar15 = (ulong)(uVar6 & uVar5);
      lVar13 = uVar10 + 7;
      iVar7 = *(int *)(((long)(uVar15 * 0xc00000000 + 0x1400000000) >> 0x20) + lVar13);
      if (iVar7 == *(int *)(lVar8 + 0xa0)) {
LAB_010e8968:
        *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
LAB_010e8970:
        if (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x41b) {
          return 4;
        }
        if (*(long *)(this + 0x48) != -1) {
          return 1;
        }
        if (0x3f < *(ushort *)
                    ((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1)
                    )) {
          return 4;
        }
        uVar10 = IsSpecialIndex();
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        return 4;
      }
      iVar3 = (int)*plVar14;
      if (iVar7 != iVar3) {
        iVar7 = 1;
        do {
          uVar15 = (ulong)((int)uVar15 + iVar7 & uVar6);
          iVar4 = *(int *)(((long)(uVar15 * 0xc00000000 + 0x1400000000) >> 0x20) + lVar13);
          if (iVar4 == *(int *)(lVar8 + 0xa0)) goto LAB_010e8968;
          iVar7 = iVar7 + 1;
        } while (iVar4 != iVar3);
      }
      *(ulong *)(this + 0x50) = uVar15;
      iVar7 = *(int *)(lVar13 + ((long)(uVar15 * 0xc00000000 + 0x1c00000000) >> 0x20));
    }
    uVar5 = iVar7 >> 1;
  }
  *(uint *)(this + 0x10) = uVar5;
LAB_010e89fc:
  uVar12 = 5;
  if ((uVar5 & 1) == 0) {
    uVar12 = 6;
  }
  this[8] = (LookupIterator)0x1;
  return uVar12;
}

