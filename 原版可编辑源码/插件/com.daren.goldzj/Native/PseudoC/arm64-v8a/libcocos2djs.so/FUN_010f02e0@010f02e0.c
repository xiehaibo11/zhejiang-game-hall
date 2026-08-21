
ulong * FUN_010f02e0(ulong param_1,ulong *param_2,long param_3,int param_4,ulong *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong local_d8 [17];
  
  uVar5 = param_3 * 0xc00000000 + 0x1000000000 >> 0x20;
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar9 = uVar5 | 3;
  uVar6 = uVar4 | *(uint *)(*param_2 + 0x17);
  uVar7 = *param_5;
  uVar1 = *(uint *)(uVar6 + uVar9);
  if (((uVar1 & 6) == 0) && ((param_4 == 1 || ((uVar1 >> 3 & 1) == 0)))) {
    uVar1 = uVar1 >> 7 & 7;
    if ((uVar1 == 1) && (v8::internal::FLAG_track_fields != '\0')) {
      if ((uVar7 & 1) != 0) goto LAB_010f0418;
    }
    else if ((uVar1 == 2) && (v8::internal::FLAG_track_double_fields != '\0')) {
      if (((uVar7 & 1) != 0) &&
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42))
      goto LAB_010f0418;
    }
    else if ((uVar1 == 3) && (v8::internal::FLAG_track_heap_object_fields != '\0')) {
      if ((uVar7 & 1) == 0) goto LAB_010f0418;
    }
    else if ((uVar1 == 0) && (v8::internal::FLAG_track_fields != '\0')) goto LAB_010f0418;
    uVar1 = *(uint *)(uVar5 + uVar6 + 7);
    uVar5 = (ulong)uVar1;
    if (uVar1 == 3) {
      local_d8[0] = v8::internal::FieldType::None();
    }
    else {
      if ((~uVar1 & 3) == 0) {
        uVar5 = uVar5 & 0xfffffffffffffffd;
      }
      local_d8[0] = v8::internal::FieldType::cast(uVar4 | uVar5);
    }
    uVar4 = v8::internal::FieldType::NowContains((FieldType *)local_d8,uVar7);
    if ((uVar4 & 1) != 0) {
      return param_2;
    }
  }
LAB_010f0418:
  uVar1 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17)) + uVar9);
  local_d8[0] = *param_5;
  if (v8::internal::FLAG_track_fields == '\0') {
    uVar8 = 4;
  }
  else if ((local_d8[0] & 1) == 0) {
    uVar8 = 1;
  }
  else if ((v8::internal::FLAG_track_double_fields == '\0') ||
          (*(short *)((param_1 | 7) + (ulong)*(uint *)(local_d8[0] - 1)) != 0x42)) {
    if ((v8::internal::FLAG_track_computed_fields == '\0') ||
       ((int)local_d8[0] != *(int *)(param_1 + 0x98))) {
      uVar8 = 3;
      if (v8::internal::FLAG_track_heap_object_fields == '\0') {
        uVar8 = 4;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 2;
  }
  uVar2 = v8::internal::Object::OptimalType((Object *)local_d8,param_1,uVar8);
  v8::internal::MapUpdater::MapUpdater((MapUpdater *)local_d8,param_1,param_2);
  puVar3 = (ulong *)v8::internal::MapUpdater::ReconfigureToDataField
                              ((MapUpdater *)local_d8,param_3,uVar1 >> 4 & 7,param_4,uVar8,uVar2);
  return puVar3;
}

