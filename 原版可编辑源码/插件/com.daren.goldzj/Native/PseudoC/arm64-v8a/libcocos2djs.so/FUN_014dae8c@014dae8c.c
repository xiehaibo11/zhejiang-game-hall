
undefined8 FUN_014dae8c(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  char *pcVar10;
  char *local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar5 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42a)) {
    uStack_68 = __strlen_chk("FinalizationGroup.prototype.register",0x25);
    local_70 = "FinalizationGroup.prototype.register";
    pIVar8 = (Isolate *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_70,0);
    if (pIVar8 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar7 = 0x3d;
  }
  else {
    param_1 = param_1 + -4;
    pIVar1 = param_3 + 0xa0;
    pIVar2 = (Isolate *)(param_2 + -1);
    if (param_1 < 2) {
      pIVar2 = pIVar1;
    }
    pcVar10 = *(char **)pIVar2;
    if ((((ulong)pcVar10 & 1) == 0) ||
       (*(ushort *)(((ulong)pcVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pcVar10 + -1)) <
        0xa9)) {
      uVar7 = 0x175;
LAB_014daf8c:
      pIVar8 = (Isolate *)0x0;
    }
    else {
      pIVar3 = (Isolate *)(param_2 + -2);
      if (param_1 < 3) {
        pIVar3 = pIVar1;
      }
      local_70 = pcVar10;
      uVar9 = v8::internal::Object::SameValue((Object *)&local_70,*(undefined8 *)pIVar3);
      if ((uVar9 & 1) != 0) {
        uVar7 = 0x176;
        goto LAB_014daf8c;
      }
      pIVar8 = (Isolate *)(param_2 + -3);
      if (param_1 < 4) {
        pIVar8 = pIVar1;
      }
      uVar9 = *(ulong *)pIVar8;
      if (((uVar9 & 1) != 0) &&
         ((0xa8 < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) ||
          ((int)uVar9 == *(int *)((uVar9 & 0xffffffff00000000) + 0xa0))))) {
        v8::internal::JSFinalizationGroup::Register(param_2,pIVar2,pIVar3,pIVar8,param_3);
        uVar7 = *(undefined8 *)(param_3 + 0xa0);
        goto LAB_014dafb4;
      }
      uVar7 = 0x173;
    }
    param_2 = (ulong *)0x0;
  }
  puVar6 = (undefined8 *)
           v8::internal::Factory::NewTypeError((Factory *)param_3,uVar7,pIVar8,param_2,0);
  uVar7 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
LAB_014dafb4:
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar5) {
    *(long *)(param_3 + 0x95a8) = lVar5;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

