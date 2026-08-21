
undefined8 FUN_014b4b3c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x41c)) {
    uStack_48 = __strlen_chk("Map.prototype.clear",0x14);
    local_50 = "Map.prototype.clear";
    lVar3 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar3,param_2,0);
    uVar6 = v8::internal::Isolate::Throw(param_3,*puVar4,0);
  }
  else {
    v8::internal::JSMap::Clear(param_3,param_2);
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

