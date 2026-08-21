
/* v8::internal::JSArray::DefineOwnProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArray>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

ushort v8::internal::JSArray::DefineOwnProperty
                 (Factory *param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  double dVar5;
  byte local_78 [8];
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint local_34;
  
  if (*param_3 == *(int *)(param_1 + 0x7b8)) {
    uVar1 = ArraySetLength(param_1,param_2,param_4,param_5);
  }
  else {
    local_34 = 0;
    uVar3 = PropertyKeyToArrayLength(param_3,&local_34);
    if (((uVar3 & 1) == 0) || (local_34 == 0xffffffff)) {
      uVar1 = JSReceiver::OrdinaryDefineOwnProperty(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      local_78[0] = 0;
      uStack_68 = 0;
      local_70 = (ulong *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      JSReceiver::GetOwnPropertyDescriptor(param_1,param_2,param_1 + 0x7b8,local_78);
      uVar3 = *local_70;
      if ((uVar3 & 1) == 0) {
        if ((int)uVar3 < 0) goto LAB_0110eba4;
        dVar5 = (double)(uVar3 >> 1 & 0x7fffffff);
      }
      else {
        if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x42) {
LAB_0110eba4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","old_len_desc.value()->ToArrayLength(&old_len)");
        }
        dVar5 = *(double *)(uVar3 + 3) + 4503599627370496.0;
        if (((ulong)dVar5 >> 0x20 != 0x43300000) ||
           (*(double *)(uVar3 + 3) != (double)((ulong)dVar5 & 0xffffffff))) goto LAB_0110eba4;
      }
      if ((local_34 < SUB84(dVar5,0)) || ((local_78[0] & 0x30) != 0x20)) {
        uVar1 = JSReceiver::OrdinaryDefineOwnProperty(param_1,param_2,param_3,param_4,param_5);
        if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
          if (SUB84(dVar5,0) <= local_34) {
            local_70 = (ulong *)Factory::NewNumberFromUint(param_1,local_34 + 1);
            JSReceiver::OrdinaryDefineOwnProperty(param_1,param_2,param_1 + 0x7b8,local_78,param_5);
          }
          uVar1 = 0x101;
        }
      }
      else {
        iVar2 = GetShouldThrow(param_1,param_5);
        if (iVar2 == 1) {
          uVar1 = 1;
        }
        else {
          puVar4 = (undefined8 *)Factory::NewTypeError(param_1,0x30,param_3,0,0);
          Isolate::Throw((Isolate *)param_1,*puVar4,0);
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

