
undefined8 FUN_014db244(int param_1,ulong *param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  Factory *pFVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42a)) {
    uStack_48 = __strlen_chk("FinalizationGroup.prototype.unregister",0x27);
    local_50 = "FinalizationGroup.prototype.unregister";
    pFVar5 = (Factory *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (pFVar5 == (Factory *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar7 = 0x3d;
  }
  else {
    pFVar5 = (Factory *)(param_2 + -1);
    if (param_1 < 6) {
      pFVar5 = param_3 + 0xa0;
    }
    uVar6 = *(ulong *)pFVar5;
    if (((uVar6 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
      bVar3 = v8::internal::JSFinalizationGroup::Unregister(param_2,pFVar5,param_3);
      puVar4 = (undefined8 *)v8::internal::Factory::ToBoolean(param_3,(bool)(bVar3 & 1));
      uVar7 = *puVar4;
      goto LAB_014db348;
    }
    uVar7 = 0x173;
    param_2 = (ulong *)0x0;
  }
  puVar4 = (undefined8 *)v8::internal::Factory::NewTypeError(param_3,uVar7,pFVar5,param_2,0);
  uVar7 = v8::internal::Isolate::Throw((Isolate *)param_3,*puVar4,0);
LAB_014db348:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar7;
}

