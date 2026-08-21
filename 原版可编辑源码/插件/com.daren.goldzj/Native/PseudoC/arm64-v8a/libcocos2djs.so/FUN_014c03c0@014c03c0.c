
undefined8 FUN_014c03c0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  Isolate *pIVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  char *local_100;
  long lStack_f8;
  char *local_f0;
  undefined8 local_e8;
  char acStack_d8 [128];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x428)) {
    local_e8 = __strlen_chk("Date.prototype.toDateString",0x1c);
    local_f0 = "Date.prototype.toDateString";
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_f0,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar7 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar6,param_2,0);
    uVar10 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
  }
  else {
    uVar4 = *(uint *)(uVar9 + 0xb);
    if ((uVar4 & 1) == 0) {
      dVar11 = (double)((int)uVar4 >> 1);
    }
    else {
      dVar11 = *(double *)((uVar9 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    }
    FUN_014c21c8(&local_f0,dVar11,*(undefined8 *)(param_3 + 0xb638),0);
    lStack_f8 = (long)((int)local_e8 - (int)local_f0);
    local_100 = local_f0;
    pIVar8 = (Isolate *)v8::internal::Factory::NewStringFromUtf8((Factory *)param_3,&local_100,0);
    pIVar1 = param_3 + 0x180;
    if (pIVar8 != (Isolate *)0x0) {
      pIVar1 = pIVar8;
    }
    uVar10 = *(undefined8 *)pIVar1;
    if (local_f0 != acStack_d8) {
      free(local_f0);
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

