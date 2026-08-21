
void FUN_0102a634(long param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong local_80;
  Descriptor aDStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  uVar11 = *param_2;
  uVar10 = *param_3;
  uVar7 = (ulong)(*(uint *)(uVar11 + 0xb) >> 10) & 0x3ff;
  if ((uint)uVar7 == 0) {
    lVar12 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x9598);
    uVar3 = (uint)(uVar11 >> 2) & 0x3fffffff;
    uVar8 = (ulong)((*(uint *)(uVar10 + 3) ^ uVar3) & 0x3f);
    if (((*(int *)(lVar12 + uVar8 * 0x10) != (int)uVar11) ||
        (*(int *)(lVar12 + uVar8 * 0x10 + 8) != (int)uVar10)) ||
       (iVar5 = *(int *)(lVar12 + uVar8 * 4 + 0x400), iVar5 == -2)) {
      if ((uint)uVar7 < 9) {
        uVar6 = 0;
        lVar9 = 0x1000000000;
        do {
          if (*(int *)((local_80 - 1) + (lVar9 >> 0x20)) == (int)uVar10) goto LAB_0102a738;
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 0xc00000000;
        } while (uVar7 != uVar6);
        uVar6 = 0xffffffff;
      }
      else {
        uVar4 = v8::internal::
                BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                          (&local_80,uVar10,uVar7,0);
        uVar6 = (ulong)uVar4;
        uVar8 = (ulong)((*(uint *)(uVar10 + 3) ^ uVar3) & 0x3f);
      }
LAB_0102a738:
      puVar1 = (ulong *)(lVar12 + uVar8 * 0x10);
      *puVar1 = uVar11;
      puVar1[1] = uVar10;
      iVar5 = (int)uVar6;
      *(int *)(lVar12 + uVar8 * 4 + 0x400) = iVar5;
    }
    lVar12 = (long)iVar5;
  }
  v8::internal::Descriptor::AccessorConstant(aDStack_78,param_3,param_4,2);
  v8::internal::DescriptorArray::Replace((DescriptorArray *)&local_80,lVar12,aDStack_78);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

