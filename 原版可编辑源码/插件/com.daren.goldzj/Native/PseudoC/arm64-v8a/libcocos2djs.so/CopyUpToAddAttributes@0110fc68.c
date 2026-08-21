
/* v8::internal::DescriptorArray::CopyUpToAddAttributes(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DescriptorArray>, int, v8::internal::PropertyAttributes, int)
    */

Factory * v8::internal::DescriptorArray::CopyUpToAddAttributes
                    (Factory *param_1,ulong *param_2,int param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_58;
  
  if (param_5 + param_3 == 0) {
    param_1 = param_1 + 0x170;
  }
  else {
    param_1 = (Factory *)Factory::NewDescriptorArray(param_1,param_3,param_5);
    if (param_4 == 0) {
      if (param_3 != 0) {
        lVar8 = 0;
        lVar9 = 0x1000000000;
        do {
          local_58 = *(undefined8 *)param_1;
          uVar6 = *param_2;
          lVar1 = uVar6 + (lVar9 >> 0x20);
          Set((DescriptorArray *)&local_58,lVar8,
              uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + -1),
              uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + 7),
              *(int *)(uVar6 + (lVar9 >> 0x20 | 3U)) >> 1);
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0xc00000000;
        } while (param_3 != lVar8);
      }
    }
    else if (param_3 != 0) {
      lVar8 = 0;
      lVar9 = 0x1000000000;
      do {
        uVar6 = *param_2;
        lVar1 = uVar6 + (lVar9 >> 0x20);
        uVar5 = (ulong)*(uint *)(lVar1 + 7);
        uVar7 = uVar6 & 0xffffffff00000000;
        uVar4 = *(uint *)(uVar6 + (lVar9 >> 0x20 | 3U));
        uVar6 = uVar7 | *(uint *)(lVar1 + -1);
        uVar3 = uVar7 | uVar5;
        uVar2 = (int)uVar4 >> 1;
        if ((*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x40) ||
           ((*(byte *)(uVar6 + 7) & 1) == 0)) {
          if (((uVar5 & 3) == 1) &&
             (((uVar4 >> 1 & 1) != 0 &&
              (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x52)))) {
            uVar4 = 6;
          }
          else {
            uVar4 = 7;
          }
          uVar2 = uVar2 | (uVar4 & param_4) << 3;
        }
        local_58 = *(undefined8 *)param_1;
        Set((DescriptorArray *)&local_58,lVar8,uVar6,uVar3,uVar2);
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0xc00000000;
      } while (param_3 != lVar8);
    }
    if (param_3 != *(short *)(*param_2 + 5)) {
      local_58 = *(undefined8 *)param_1;
      Sort((DescriptorArray *)&local_58);
    }
  }
  return param_1;
}

