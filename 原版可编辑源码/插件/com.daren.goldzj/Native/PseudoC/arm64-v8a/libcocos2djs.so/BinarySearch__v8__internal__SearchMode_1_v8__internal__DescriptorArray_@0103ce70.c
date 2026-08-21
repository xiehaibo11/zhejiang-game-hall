
/* int v8::internal::BinarySearch<(v8::internal::SearchMode)1,
   v8::internal::DescriptorArray>(v8::internal::DescriptorArray*, v8::internal::Name, int, int*) */

int v8::internal::BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
              (ulong *param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  uVar3 = *param_1;
  iVar5 = (int)*(short *)(uVar3 + 5);
  iVar4 = iVar5 + -1;
  if (iVar4 != 0) {
    iVar7 = 0;
    do {
      iVar2 = iVar4 - iVar7;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar7 + (iVar2 >> 1);
      if (*(uint *)((uVar3 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar3 - 1) +
                                    (((ulong)(*(uint *)(((long)iVar2 * 0xc00000000 + 0x1000000000 >>
                                                         0x20 | 3U) + uVar3) >> 10) & 0x3ff) *
                                     0xc00000000 + 0x1000000000 >> 0x20))) + 3) <
          *(uint *)(param_2 + 3)) {
        iVar7 = iVar2 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
    } while (iVar4 != iVar7);
  }
  if (iVar4 < iVar5) {
    lVar8 = (long)iVar4 * 0xc00000000 + 0x1000000000;
    iVar5 = iVar5 - iVar4;
    do {
      uVar6 = (ulong)(*(uint *)((lVar8 >> 0x20 | 3U) + uVar3) >> 10) & 0x3ff;
      uVar1 = *(uint *)((uVar3 - 1) + (uVar6 * 0xc00000000 + 0x1000000000 >> 0x20));
      if (*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)uVar1) + 3) != *(uint *)(param_2 + 3)) {
        return -1;
      }
      if (uVar1 == (uint)param_2) {
        iVar5 = (int)uVar6;
        if (param_3 <= iVar5) {
          iVar5 = -1;
        }
        return iVar5;
      }
      iVar5 = iVar5 + -1;
      lVar8 = lVar8 + 0xc00000000;
    } while (iVar5 != 0);
  }
  return -1;
}

