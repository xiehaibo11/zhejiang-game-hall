
undefined8 FUN_014b3af4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  char *local_108;
  undefined8 uStack_100;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xaa)) {
    uStack_100 = __strlen_chk("isNative",9);
    local_108 = "isNative";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_108,0);
    if (lVar9 == 0) {
LAB_014b3ccc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar6 = 0x3d;
  }
  else {
    uVar4 = v8::internal::JSReceiver::HasOwnProperty(param_2,param_3 + 0xb10);
    if ((0xff < uVar4) && ((uVar4 & 0xff) != 0)) {
      uVar6 = FUN_014b47d0(param_3,param_2);
      uVar5 = FUN_014b489c(param_3,param_2);
      v8::internal::FrameArrayIterator::FrameArrayIterator
                ((FrameArrayIterator *)&local_108,param_3,uVar6,uVar5);
      plVar7 = (long *)v8::internal::FrameArrayIterator::Frame((FrameArrayIterator *)&local_108);
      uVar10 = (**(code **)(*plVar7 + 0x88))();
      lVar9 = 0xb8;
      if ((uVar10 & 1) == 0) {
        lVar9 = 0xc0;
      }
      uVar6 = *(undefined8 *)(param_3 + lVar9);
      goto LAB_014b3c30;
    }
    uStack_100 = __strlen_chk("isNative",9);
    local_108 = "isNative";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_108,0);
    if (lVar9 == 0) goto LAB_014b3ccc;
    uVar6 = 0x1c;
    param_2 = (ulong *)0x0;
  }
  puVar8 = (undefined8 *)
           v8::internal::Factory::NewTypeError((Factory *)param_3,uVar6,lVar9,param_2,0);
  uVar6 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
LAB_014b3c30:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

