
undefined8 FUN_014d564c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
LAB_014d5688:
    param_2 = (ulong *)v8::internal::Object::ConvertToString(param_3);
  }
  else {
    if (((int)uVar6 == *(int *)(param_3 + 0xb0)) || ((int)uVar6 == *(int *)(param_3 + 0xa0))) {
      uStack_48 = __strlen_chk("String.prototype.toLowerCase",0x1d);
      local_50 = "String.prototype.toLowerCase";
      lVar4 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x1a,lVar4,0,0);
      uVar3 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
      goto LAB_014d5728;
    }
    if (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))
    goto LAB_014d5688;
  }
  if (param_2 == (ulong *)0x0) {
    uVar3 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    uVar3 = FUN_014d6300(param_2,param_3,param_3 + 0x99f8);
  }
LAB_014d5728:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar3;
}

