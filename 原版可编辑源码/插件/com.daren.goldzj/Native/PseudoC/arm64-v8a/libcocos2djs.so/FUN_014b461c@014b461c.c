
undefined8 FUN_014b461c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xaa)) {
    uStack_48 = __strlen_chk("toString",9);
    local_50 = "toString";
    lVar7 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar7 == 0) {
LAB_014b47bc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar5 = 0x3d;
  }
  else {
    uVar3 = v8::internal::JSReceiver::HasOwnProperty(param_2,param_3 + 0xb10);
    if ((0xff < uVar3) && ((uVar3 & 0xff) != 0)) {
      uVar5 = FUN_014b47d0(param_3,param_2);
      uVar4 = FUN_014b489c(param_3,param_2);
      uVar5 = v8::internal::Factory::NewStackTraceFrame((Factory *)param_3,uVar5,uVar4);
      puVar6 = (undefined8 *)v8::internal::SerializeStackTraceFrame(param_3,uVar5);
      if (puVar6 == (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar5 = *puVar6;
      }
      goto LAB_014b4730;
    }
    uStack_48 = __strlen_chk("toString",9);
    local_50 = "toString";
    lVar7 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar7 == 0) goto LAB_014b47bc;
    uVar5 = 0x1c;
    param_2 = (ulong *)0x0;
  }
  puVar6 = (undefined8 *)
           v8::internal::Factory::NewTypeError((Factory *)param_3,uVar5,lVar7,param_2,0);
  uVar5 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
LAB_014b4730:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

