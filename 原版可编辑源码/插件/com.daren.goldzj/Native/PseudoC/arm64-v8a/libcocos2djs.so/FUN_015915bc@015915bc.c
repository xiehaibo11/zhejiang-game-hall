
undefined8 FUN_015915bc(Isolate *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  if (param_3 == 0) {
    puVar3 = (undefined8 *)
             v8::internal::Factory::NewSyntaxError((Factory *)param_1,0xb0,param_2,0,0);
  }
  else {
    puVar3 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_1,0xb0,param_2,0,0);
  }
  uVar4 = v8::internal::Isolate::Throw(param_1,*puVar3,0);
  *(undefined8 *)(param_1 + 0x95a0) = uVar1;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar2) {
    *(long *)(param_1 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  return uVar4;
}

