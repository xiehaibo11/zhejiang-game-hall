
undefined8 FUN_014b20e8(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  Factory *pFVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  char *local_108;
  undefined8 uStack_100;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if (((uVar12 & 1) == 0) ||
     (*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) < 0xaa)) {
    uStack_100 = __strlen_chk("getPromiseIndex",0x10);
    local_108 = "getPromiseIndex";
    lVar11 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_108,0);
    if (lVar11 == 0) {
LAB_014b22c8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar7 = 0x3d;
  }
  else {
    uVar4 = v8::internal::JSReceiver::HasOwnProperty(param_2,param_3 + 0xb10);
    if ((0xff < uVar4) && ((uVar4 & 0xff) != 0)) {
      uVar7 = FUN_014b47d0(param_3,param_2);
      uVar5 = FUN_014b489c(param_3,param_2);
      v8::internal::FrameArrayIterator::FrameArrayIterator
                ((FrameArrayIterator *)&local_108,param_3,uVar7,uVar5);
      plVar8 = (long *)v8::internal::FrameArrayIterator::Frame((FrameArrayIterator *)&local_108);
      iVar6 = (**(code **)(*plVar8 + 0x80))();
      if (iVar6 < 0) {
        pFVar9 = param_3 + 0xb0;
      }
      else {
        pFVar9 = (Factory *)v8::internal::Factory::NewNumberFromInt(param_3,iVar6);
      }
      uVar7 = *(undefined8 *)pFVar9;
      goto LAB_014b2220;
    }
    uStack_100 = __strlen_chk("getPromiseIndex",0x10);
    local_108 = "getPromiseIndex";
    lVar11 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_108,0);
    if (lVar11 == 0) goto LAB_014b22c8;
    uVar7 = 0x1c;
    param_2 = (ulong *)0x0;
  }
  puVar10 = (undefined8 *)v8::internal::Factory::NewTypeError(param_3,uVar7,lVar11,param_2,0);
  uVar7 = v8::internal::Isolate::Throw((Isolate *)param_3,*puVar10,0);
LAB_014b2220:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

