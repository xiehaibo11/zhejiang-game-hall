
bool FUN_0170e21c(long param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  
  uVar3 = FUN_0170e154();
  if ((((uVar3 & 1) == 0) || (uVar3 = *param_2, (*(uint *)(uVar3 + 0xb) >> 0x1b & 1) == 0)) ||
     ((*(uint *)(uVar3 + 0xb) >> 0x15 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    local_28 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17);
    uVar3 = (ulong)(*(uint *)(*param_2 + 0xb) >> 10) & 0x3ff;
    if ((uint)uVar3 == 0) {
      uVar3 = 7;
    }
    else {
      if ((uint)uVar3 < 9) {
        uVar4 = 0;
        uVar5 = 0x1000000000;
        do {
          if (*(int *)((local_28 - 1) + (uVar5 >> 0x20)) == (int)*(undefined8 *)(param_1 + 0x7b8))
          goto LAB_0170e2e0;
          uVar4 = uVar4 + 1;
          uVar5 = uVar5 + 0xc00000000;
        } while (uVar3 != uVar4);
        uVar4 = 0xffffffff;
      }
      else {
        uVar2 = v8::internal::
                BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                          (&local_28,*(undefined8 *)(param_1 + 0x7b8),uVar3,0);
        uVar4 = (ulong)uVar2;
      }
LAB_0170e2e0:
      uVar3 = (long)(int)uVar4 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
    }
    bVar1 = (*(uint *)(uVar3 + local_28) & 0x10) == 0;
  }
  return bVar1;
}

