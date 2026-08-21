
/* v8::internal::Object::InstanceOf(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::Object::InstanceOf(Factory *param_1,undefined8 param_2,ulong *param_3)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar5 = *param_3;
  local_18 = param_2;
  if (((uVar5 & 1) == 0) ||
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
    uVar4 = 0x53;
  }
  else {
    puVar2 = (ulong *)GetMethod(param_3,param_1 + 0xc68);
    if (puVar2 == (ulong *)0x0) {
      return 0;
    }
    if (((*puVar2 & 1) == 0) || ((int)*puVar2 != *(int *)(param_1 + 0xa0))) {
      puVar3 = (undefined8 *)Execution::Call(param_1,puVar2,param_3,1,&local_18);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      local_38 = *puVar3;
      bVar1 = BooleanValue((Object *)&local_38,(Isolate *)param_1);
      uVar4 = Factory::ToBoolean(param_1,(bool)(bVar1 & 1));
      return uVar4;
    }
    uVar5 = *param_3;
    if (((uVar5 & 1) != 0) &&
       ((*(byte *)((uVar5 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar5 - 1)) >> 1 & 1) != 0))
    {
      uVar4 = OrdinaryHasInstance(param_1,param_3,param_2);
      return uVar4;
    }
    uVar4 = 0x4f;
  }
  puVar3 = (undefined8 *)Factory::NewTypeError(param_1,uVar4,0,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar3,0);
  return 0;
}

