
undefined8 FUN_014cf678(undefined8 param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *(ulong *)(param_2 + -8);
  if (((uVar6 & 1) == 0) ||
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9)) {
    uStack_48 = __strlen_chk("Reflect.ownKeys",0x10);
    local_50 = "Reflect.ownKeys";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar4 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x19,lVar5,0,0);
    uVar7 = v8::internal::Isolate::Throw(param_3,*puVar4,0);
  }
  else {
    plVar3 = (long *)v8::internal::KeyAccumulator::GetKeys((ulong *)(param_2 + -8),0,0,0,0,0);
    if (plVar3 == (long *)0x0) {
      uVar7 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      puVar4 = (undefined8 *)
               v8::internal::Factory::NewJSArrayWithElements
                         (param_3,plVar3,3,*(int *)(*plVar3 + 3) >> 1,0);
      uVar7 = *puVar4;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

