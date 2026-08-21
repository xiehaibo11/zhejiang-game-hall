
/* v8::internal::LookupIterator::State
   v8::internal::LookupIterator::LookupInRegularHolder<false>(v8::internal::Map,
   v8::internal::JSReceiver) */

undefined4 __thiscall
v8::internal::LookupIterator::LookupInRegularHolder<false>
          (LookupIterator *this,ulong param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long local_48;
  
  if (*(int *)(this + 0xc) == 2) {
    return 4;
  }
  if ((*(uint *)(param_2 + 0xb) >> 0x15 & 1) == 0) {
    local_48 = (ulong)*(uint *)(param_2 + 0x17) + *(long *)(this + 0x18);
    uVar12 = **(ulong **)(this + 0x20);
    uVar8 = (ulong)(*(uint *)(param_2 + 0xb) >> 10) & 0x3ff;
    if ((uint)uVar8 != 0) {
      lVar13 = *(long *)(*(long *)(this + 0x18) + 0x9598);
      uVar4 = (uint)(param_2 >> 2) & 0x3fffffff;
      uVar10 = (ulong)((*(uint *)(uVar12 + 3) ^ uVar4) & 0x3f);
      if (((*(int *)(lVar13 + uVar10 * 0x10) != (int)param_2) ||
          (*(int *)(lVar13 + uVar10 * 0x10 + 8) != (int)uVar12)) ||
         (iVar6 = *(int *)(lVar13 + uVar10 * 4 + 0x400), iVar6 == -2)) {
        if ((uint)uVar8 < 9) {
          uVar7 = 0;
          lVar11 = 0x1000000000;
          do {
            if (*(int *)(local_48 + -1 + (lVar11 >> 0x20)) == (int)uVar12) goto LAB_010e75ac;
            uVar7 = uVar7 + 1;
            lVar11 = lVar11 + 0xc00000000;
          } while (uVar8 != uVar7);
          uVar7 = 0xffffffff;
        }
        else {
          uVar5 = BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                            (&local_48,uVar12,uVar8,0);
          uVar7 = (ulong)uVar5;
          uVar10 = (ulong)((*(uint *)(uVar12 + 3) ^ uVar4) & 0x3f);
        }
LAB_010e75ac:
        puVar1 = (ulong *)(lVar13 + uVar10 * 0x10);
        *puVar1 = param_2;
        puVar1[1] = uVar12;
        iVar6 = (int)uVar7;
        *(int *)(lVar13 + uVar10 * 4 + 0x400) = iVar6;
      }
      *(long *)(this + 0x50) = (long)iVar6;
      if (iVar6 != -1) {
        iVar6 = *(int *)(local_48 + ((long)iVar6 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U));
        goto LAB_010e75e8;
      }
      goto LAB_010e7544;
    }
  }
  else {
    lVar13 = *(long *)(this + 0x18);
    uVar8 = (ulong)*(uint *)(param_3 + 3) + lVar13;
    if ((uVar8 & 1) == 0) {
      uVar8 = *(ulong *)(lVar13 + 0x410);
    }
    plVar14 = *(long **)(this + 0x20);
    lVar11 = *plVar14;
    uVar4 = *(uint *)(lVar11 + 3);
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 >> 3;
    }
    else {
      local_48 = lVar11;
      uVar4 = String::ComputeAndSetHash((String *)&local_48);
    }
    uVar5 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
    uVar12 = (ulong)(uVar5 & uVar4);
    lVar11 = uVar8 + 7;
    iVar6 = *(int *)(((long)(uVar12 * 0xc00000000 + 0x1400000000) >> 0x20) + lVar11);
    if (iVar6 != *(int *)(lVar13 + 0xa0)) {
      iVar2 = (int)*plVar14;
      if (iVar6 != iVar2) {
        iVar6 = 1;
        do {
          uVar12 = (ulong)((int)uVar12 + iVar6 & uVar5);
          iVar3 = *(int *)(((long)(uVar12 * 0xc00000000 + 0x1400000000) >> 0x20) + lVar11);
          if (iVar3 == *(int *)(lVar13 + 0xa0)) goto LAB_010e753c;
          iVar6 = iVar6 + 1;
        } while (iVar3 != iVar2);
      }
      *(ulong *)(this + 0x50) = uVar12;
      iVar6 = *(int *)(lVar11 + ((long)(uVar12 * 0xc00000000 + 0x1c00000000) >> 0x20));
LAB_010e75e8:
      *(int *)(this + 0x10) = iVar6 >> 1;
      uVar9 = 5;
      if ((iVar6 >> 1 & 1U) == 0) {
        uVar9 = 6;
      }
      this[8] = (LookupIterator)0x1;
      return uVar9;
    }
  }
LAB_010e753c:
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
LAB_010e7544:
  if (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(param_3 + -1)) != 0x41b) {
    return 4;
  }
  if (*(long *)(this + 0x48) != -1) {
    return 1;
  }
  if (0x3f < *(ushort *)
              ((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1))) {
    return 4;
  }
  uVar8 = IsSpecialIndex();
  if ((uVar8 & 1) != 0) {
    return 1;
  }
  return 4;
}

