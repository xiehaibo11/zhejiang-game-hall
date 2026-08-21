
undefined8 FUN_014c7c44(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
LAB_014c7c80:
    uStack_48 = __strlen_chk("Function.prototype.toString",0x1c);
    local_50 = "Function.prototype.toString";
    lVar3 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x5b,lVar3,param_3 + 0x6d0,0);
    uVar5 = v8::internal::Isolate::Throw(param_3,*puVar4,0);
  }
  else {
    uVar7 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x438) {
      puVar4 = (undefined8 *)v8::internal::JSBoundFunction::ToString(param_2);
    }
    else {
      if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) != 0x439) {
        if ((0xa8 < *(ushort *)(uVar7 + *(uint *)(uVar6 - 1))) &&
           ((*(byte *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 9) >> 1 & 1) !=
            0)) {
          uVar5 = *(undefined8 *)(param_3 + 0x6d8);
          goto LAB_014c7d1c;
        }
        goto LAB_014c7c80;
      }
      puVar4 = (undefined8 *)v8::internal::JSFunction::ToString(param_2);
    }
    uVar5 = *puVar4;
  }
LAB_014c7d1c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

