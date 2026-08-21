
/* v8::internal::Map::ReplaceDescriptors(v8::internal::Isolate*, v8::internal::DescriptorArray,
   v8::internal::LayoutDescriptor) */

void v8::internal::Map::ReplaceDescriptors(ulong *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  uVar3 = *param_1;
  if ((*(uint *)(uVar3 + 0xb) & 0xffc00) != 0) {
    uVar2 = *(uint *)(uVar3 + 0x13) + param_2;
    if ((((uVar2 & 1) != 0) && (*(short *)((param_2 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa2)) &&
       ((int)uVar2 != (int)*(undefined8 *)(param_2 + 0xa0))) {
      uVar1 = *(uint *)(uVar3 + 0x17);
      uVar2 = uVar3 & 0xffffffff00000000 | (ulong)uVar1;
      local_38 = uVar3;
      if ((*(byte *)((uVar3 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000) + 10) >> 2 & 1
          ) != 0) {
        Heap_MarkingBarrierForDescriptorArraySlow
                  (param_2 + 0x8850,uVar3,uVar2,(int)*(short *)(uVar2 + 5));
      }
      if (*(int *)(uVar3 + 0x17) + (int)param_2 == uVar1) {
        do {
          uVar2 = *(uint *)(uVar3 + 0x13) + param_2;
          if (((((uVar2 & 1) != 0) &&
               (*(short *)((param_2 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa2)) ||
              (uVar2 = *(ulong *)(param_2 + 0xa0), (uVar2 & 1) != 0)) &&
             ((int)uVar2 == *(int *)(param_2 + 0xa0))) break;
          *(uint *)(uVar3 + 0xb) = *(uint *)(uVar3 + 0xb) | 0x3ff;
          SetInstanceDescriptors
                    ((Map *)&local_38,param_2,param_3,*(uint *)(local_38 + 0xb) >> 10 & 0x3ff);
          uVar3 = uVar2;
          local_38 = uVar2;
        } while (*(int *)(uVar2 + 0x17) + (int)param_2 == uVar1);
      }
      *(uint *)(*param_1 + 0xb) = *(uint *)(*param_1 + 0xb) & 0xffbfffff;
    }
  }
  return;
}

