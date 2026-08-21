
undefined8 FUN_014d8bec(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_50 = (char *)*param_2;
  if ((((ulong)local_50 & 1) == 0) ||
     (*(short *)(((ulong)local_50 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_50 + -1)) !=
      0x41b)) {
    uStack_48 = __strlen_chk("get %TypedArray%.prototype.buffer",0x22);
    local_50 = "get %TypedArray%.prototype.buffer";
    lVar4 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar3 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar4,param_2,0);
    uVar5 = v8::internal::Isolate::Throw(param_3,*puVar3,0);
  }
  else {
    puVar3 = (undefined8 *)v8::internal::JSTypedArray::GetBuffer((JSTypedArray *)&local_50);
    uVar5 = *puVar3;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

