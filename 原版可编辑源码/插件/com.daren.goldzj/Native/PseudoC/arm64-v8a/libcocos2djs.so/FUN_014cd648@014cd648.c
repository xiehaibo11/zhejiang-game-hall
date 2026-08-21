
undefined8 FUN_014cd648(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (((int)uVar6 != *(int *)(param_3 + 0xb0) && ((int)uVar6 != *(int *)(param_3 + 0xa0))))) {
    uVar7 = param_2[-1];
    if ((((uVar7 & 1) == 0) ||
        ((((int)uVar7 != *(int *)(param_3 + 0xb0) &&
          (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) ||
         ((uVar6 & 1) == 0)))) ||
       ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9 ||
        (cVar3 = v8::internal::JSReceiver::SetPrototype(param_2,param_2 + -1,1,0), cVar3 != '\0'))))
    {
      uVar8 = *(undefined8 *)(param_3 + 0xa0);
    }
    else {
      uVar8 = *(undefined8 *)(param_3 + 0x180);
    }
  }
  else {
    uStack_48 = __strlen_chk("set Object.prototype.__proto__",0x1f);
    local_50 = "set Object.prototype.__proto__";
    lVar4 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x1a,lVar4,0,0);
    uVar8 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

