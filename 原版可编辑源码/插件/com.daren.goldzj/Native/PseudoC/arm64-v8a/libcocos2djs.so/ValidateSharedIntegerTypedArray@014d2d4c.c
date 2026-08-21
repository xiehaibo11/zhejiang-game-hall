
/* v8::internal::ValidateSharedIntegerTypedArray(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, bool) */

ulong * v8::internal::ValidateSharedIntegerTypedArray(Factory *param_1,ulong *param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  uVar5 = *param_2;
  if ((((uVar5 & 1) != 0) &&
      (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x41b)) &&
     (local_18 = uVar5, plVar2 = (long *)JSTypedArray::GetBuffer((JSTypedArray *)&local_18),
     (*(uint *)(*plVar2 + 0x1b) >> 4 & 1) != 0)) {
    if ((param_3 & 1) == 0) {
      local_18 = *param_2;
      iVar1 = JSTypedArray::type((JSTypedArray *)&local_18);
      if (iVar1 != 7) {
        local_38 = *param_2;
        iVar1 = JSTypedArray::type((JSTypedArray *)&local_38);
        if (iVar1 != 8) {
          local_40 = *param_2;
          iVar1 = JSTypedArray::type((JSTypedArray *)&local_40);
          if (iVar1 != 9) {
            return param_2;
          }
        }
      }
    }
    else {
      local_18 = *param_2;
      iVar1 = JSTypedArray::type((JSTypedArray *)&local_18);
      if (iVar1 == 5) {
        return param_2;
      }
      local_38 = *param_2;
      iVar1 = JSTypedArray::type((JSTypedArray *)&local_38);
      if (iVar1 == 10) {
        return param_2;
      }
    }
  }
  uVar4 = 0x66;
  if ((param_3 & 1) != 0) {
    uVar4 = 0x67;
  }
  puVar3 = (undefined8 *)Factory::NewTypeError(param_1,uVar4,param_2,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar3,0);
  return (ulong *)0x0;
}

