
undefined8
FUN_0124a624(char *param_1,undefined8 param_2,Object *param_3,undefined8 *param_4,
            undefined1 *param_5,ulong *param_6,ulong param_7,ulong param_8)

{
  Value *pVVar1;
  double dVar2;
  char *pcVar3;
  void *pvVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  void *local_68 [2];
  void *local_58;
  undefined8 local_38;
  
  pVVar1 = (Value *)v8::Object::Get(param_3,param_2,param_4);
  if (pVVar1 == (Value *)0x0) {
    return 0;
  }
  uVar5 = *(ulong *)pVVar1;
  if ((((uVar5 & 3) == 1) &&
      (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar5 - 1)) == 0x43)) &&
     ((*(uint *)(uVar5 + 0x17) & 0xfffffffe) == 10)) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    return 1;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  auVar6 = v8::Value::NumberValue(pVVar1,param_2);
  dVar2 = auVar6._8_8_;
  if ((auVar6._0_8_ & 0xff) == 0) {
    FUN_0124a8a8(local_68,param_4);
    pvVar4 = (void *)((ulong)local_68 | 1);
    if (((ulong)local_68[0] & 1) != 0) {
      pvVar4 = local_58;
    }
    pcVar3 = "%s must be convertible to a number";
  }
  else if ((ABS(dVar2) < INFINITY) || (ABS(dVar2) != INFINITY)) {
    if (dVar2 < 0.0) {
      FUN_0124a8a8(local_68,param_4);
      pvVar4 = (void *)((ulong)local_68 | 1);
      if (((ulong)local_68[0] & 1) != 0) {
        pvVar4 = local_58;
      }
      pcVar3 = "%s must be non-negative";
    }
    else {
      if (dVar2 <= 4294967295.0) {
        uVar5 = (ulong)(uint)(int)dVar2;
        if ((long)uVar5 < (long)param_7) {
          local_38 = *param_4;
          v8::internal::String::ToCString(local_68,&local_38,1,1,0);
          pcVar3 = "Property \'%s\': value %u is below the lower bound %lx";
          param_8 = param_7;
        }
        else {
          if (uVar5 <= param_8) {
            *param_6 = uVar5;
            return 1;
          }
          local_38 = *param_4;
          v8::internal::String::ToCString(local_68,&local_38,1,1,0);
          pcVar3 = "Property \'%s\': value %u is above the upper bound %lu";
        }
        v8::internal::wasm::ErrorThrower::RangeError(param_1,pcVar3,local_68[0],uVar5,param_8);
        pvVar4 = local_68[0];
        local_68[0] = (void *)0x0;
        if (pvVar4 == (void *)0x0) {
          return 0;
        }
        operator_delete__(pvVar4);
        return 0;
      }
      FUN_0124a8a8(local_68,param_4);
      pvVar4 = (void *)((ulong)local_68 | 1);
      if (((ulong)local_68[0] & 1) != 0) {
        pvVar4 = local_58;
      }
      pcVar3 = "%s must be in the unsigned long range";
    }
  }
  else {
    FUN_0124a8a8(local_68,param_4);
    pvVar4 = (void *)((ulong)local_68 | 1);
    if (((ulong)local_68[0] & 1) != 0) {
      pvVar4 = local_58;
    }
    pcVar3 = "%s must be convertible to a valid number";
  }
  v8::internal::wasm::ErrorThrower::TypeError(param_1,pcVar3,pvVar4);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  return 0;
}

