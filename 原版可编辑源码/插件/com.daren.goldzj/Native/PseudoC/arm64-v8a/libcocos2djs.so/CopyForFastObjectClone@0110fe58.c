
/* v8::internal::DescriptorArray::CopyForFastObjectClone(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DescriptorArray>, int, int) */

Factory * v8::internal::DescriptorArray::CopyForFastObjectClone
                    (Factory *param_1,ulong *param_2,int param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_68;
  
  if (param_4 + param_3 == 0) {
    param_1 = param_1 + 0x170;
  }
  else {
    param_1 = (Factory *)Factory::NewDescriptorArray(param_1,param_3,param_4);
    if (param_3 != 0) {
      lVar6 = 0;
      lVar7 = 0x1000000000;
      do {
        uVar5 = *param_2;
        lVar1 = uVar5 + (lVar7 >> 0x20);
        uVar3 = *(uint *)(lVar1 + -1);
        uVar2 = *(int *)(uVar5 + (lVar7 >> 0x20 | 3U)) >> 1;
        uVar8 = uVar2 >> 6 & 7;
        if ((uVar2 >> 1 & 1) == 0) {
          uVar4 = FieldType::Any();
          if (FLAG_modify_field_representation_inplace != '\0') {
            uVar8 = 4;
          }
        }
        else {
          uVar4 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + 7);
        }
        local_68 = *(undefined8 *)param_1;
        Set((DescriptorArray *)&local_68,lVar6,uVar5 & 0xffffffff00000000 | (ulong)uVar3,uVar4,
            uVar2 & 0x1ff80000 | uVar2 & 4 | (uVar2 >> 1 & 1) << 1 | uVar8 << 6);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0xc00000000;
      } while (param_3 != lVar6);
    }
    local_68 = *(undefined8 *)param_1;
    Sort((DescriptorArray *)&local_68);
  }
  return param_1;
}

