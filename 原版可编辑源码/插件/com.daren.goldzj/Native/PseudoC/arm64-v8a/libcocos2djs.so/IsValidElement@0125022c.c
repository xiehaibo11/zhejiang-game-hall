
/* v8::internal::WasmTableObject::IsValidElement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, v8::internal::Handle<v8::internal::Object>)
    */

bool v8::internal::WasmTableObject::IsValidElement(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*param_2 + 0x1b) >> 1 & 0xff;
  if (uVar1 == 6 || uVar1 == 9) {
    return true;
  }
  uVar2 = *param_3;
  if ((uVar2 & 1) != 0) {
    if ((int)uVar2 == *(int *)(param_1 + 0xb0)) {
      return true;
    }
    uVar4 = uVar2 & 0xffffffff00000000;
    uVar3 = uVar4 | 7;
    if ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x439) &&
       ((*(uint *)((uVar4 | *(uint *)(uVar2 + 0x17)) + 0x17) & 0x3e) == 0x10)) {
      return true;
    }
    if (((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x439) &&
        (uVar1 = *(uint *)((uVar4 | *(uint *)(uVar2 + 0xb)) + 3), (uVar1 & 1) != 0)) &&
       (*(short *)(uVar3 + *(uint *)((uVar4 | uVar1) - 1)) == 0x75)) {
      return true;
    }
  }
  uVar2 = *param_3;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xffffffff00000000;
    if ((*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x439) &&
       (uVar1 = *(uint *)((uVar3 | *(uint *)(uVar2 + 0xb)) + 3), (uVar1 & 1) != 0)) {
      return *(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) == 0x70;
    }
  }
  return false;
}

