
/* v8::internal::Descriptor::DataConstant(v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::Descriptor::DataConstant
          (undefined8 *param_1,Descriptor *this,ulong *param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  
  if (FLAG_track_fields == '\0') {
    uVar1 = 0x100;
  }
  else {
    uVar2 = *param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0x40;
    }
    else if ((FLAG_track_double_fields == '\0') ||
            (*(short *)(((ulong)*(uint *)(this + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar2 - 1)) !=
             0x42)) {
      if ((FLAG_track_computed_fields == '\0') ||
         ((int)uVar2 != *(int *)(((ulong)*(uint *)(this + 4) << 0x20) + 0x98))) {
        uVar1 = 0x100;
        if (FLAG_track_heap_object_fields != '\0') {
          uVar1 = 0xc0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0x80;
    }
  }
  *param_1 = this;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 1) = 1;
  *(uint *)(param_1 + 3) = uVar1 | param_4 << 3 | 6;
  return;
}

