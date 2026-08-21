
undefined8 FUN_014c073c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int local_f4;
  int iStack_f0;
  uint local_ec;
  char **local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x428)) {
    uStack_d0 = __strlen_chk("Date.prototype.toISOString",0x1b);
    local_d8 = "Date.prototype.toISOString";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_d8,0);
    if (lVar5 == 0) goto LAB_014c0980;
    puVar6 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar5,param_2,0);
LAB_014c07fc:
    uVar9 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
  }
  else {
    uVar3 = *(uint *)(uVar8 + 0xb);
    if ((uVar3 & 1) == 0) {
      dVar10 = (double)((int)uVar3 >> 1);
    }
    else {
      dVar10 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar3) + 3);
      if (NAN(dVar10)) {
        puVar6 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_3,0xcb,0,0,0);
        goto LAB_014c07fc;
      }
    }
    v8::internal::DateCache::BreakDownTime
              (*(DateCache **)(param_3 + 0xb638),(long)dVar10,(int *)&local_ec,&iStack_f0,&local_f4,
               &iStack_f8,&iStack_fc,&local_100,&iStack_104,&local_108);
    if (local_ec >> 4 < 0x271) {
      pcVar7 = "%04d-%02d-%02dT%02d:%02d:%02d.%03dZ";
    }
    else if ((int)local_ec < 0) {
      local_ec = -local_ec;
      pcVar7 = "-%06d-%02d-%02dT%02d:%02d:%02d.%03dZ";
    }
    else {
      pcVar7 = "+%06d-%02d-%02dT%02d:%02d:%02d.%03dZ";
    }
    v8::internal::SNPrintF
              (&local_d8,0x80,pcVar7,local_ec,iStack_f0 + 1,local_f4,iStack_fc,local_100,iStack_104,
               local_108);
    uStack_e0 = __strlen_chk(&local_d8,0x80);
    local_e8 = &local_d8;
    puVar6 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_e8,0);
    if (puVar6 == (undefined8 *)0x0) {
LAB_014c0980:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar9 = *puVar6;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

