
/* v8::internal::DescriptorArray::IsEqualUpTo(v8::internal::DescriptorArray, int) */

undefined8 __thiscall
v8::internal::DescriptorArray::IsEqualUpTo(DescriptorArray *this,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    lVar2 = *(long *)this;
    lVar3 = (long)param_3;
    lVar4 = 0x1000000000;
    do {
      uVar5 = lVar4 >> 0x20;
      if ((((*(int *)(lVar2 + (uVar5 - 1)) != *(int *)((uVar5 - 1) + param_2)) ||
           (*(int *)(lVar2 + uVar5 + 7) != *(int *)(uVar5 + 7 + param_2))) ||
          (uVar1 = *(uint *)((uVar5 | 3) + param_2) ^ *(uint *)(lVar2 + (uVar5 | 3)),
          (uVar1 & 6) != 0)) || ((uVar1 & 0x380) != 0)) {
        return 0;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0xc00000000;
    } while (lVar3 != 0);
  }
  return 1;
}

