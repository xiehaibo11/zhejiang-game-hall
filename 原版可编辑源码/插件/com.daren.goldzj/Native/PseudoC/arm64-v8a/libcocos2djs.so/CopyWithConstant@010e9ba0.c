
/* v8::internal::Map::CopyWithConstant(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes,
   v8::internal::TransitionFlag) */

undefined8
v8::internal::Map::CopyWithConstant
          (ulong param_1,long *param_2,undefined8 param_3,ulong *param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong local_48;
  
  if ((~*(uint *)(*param_2 + 0xb) & 0xff000) == 0) {
    uVar1 = 0;
  }
  else {
    local_48 = *param_4;
    if (FLAG_track_fields == '\0') {
      uVar1 = 4;
    }
    else if ((local_48 & 1) == 0) {
      uVar1 = 1;
    }
    else if ((FLAG_track_double_fields == '\0') ||
            (*(short *)((param_1 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0x42)) {
      if ((FLAG_track_computed_fields == '\0') || ((int)local_48 != *(int *)(param_1 + 0x98))) {
        uVar1 = 3;
        if (FLAG_track_heap_object_fields == '\0') {
          uVar1 = 4;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 2;
    }
    uVar2 = Object::OptimalType((Object *)&local_48,param_1,uVar1);
    uVar1 = CopyWithField(param_1,param_2,param_3,uVar2,param_5,1,uVar1,param_6);
  }
  return uVar1;
}

