
ulong FUN_014c1658(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double dVar9;
  int iStack_58;
  int iStack_54;
  char *local_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x428)) {
    uStack_48 = __strlen_chk("Date.prototype.getYear",0x17);
    local_50 = "Date.prototype.getYear";
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar7 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar6,param_2,0);
    uVar8 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
  }
  else {
    uVar4 = *(uint *)(uVar8 + 0xb);
    if ((uVar4 & 1) == 0) {
      dVar9 = (double)((int)uVar4 >> 1);
    }
    else {
      uVar8 = uVar8 & 0xffffffff00000000 | (ulong)uVar4;
      dVar9 = *(double *)(uVar8 + 3);
      if (NAN(dVar9)) goto LAB_014c17a4;
    }
    iVar5 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar9,1);
    lVar6 = (long)dVar9 + (long)iVar5;
    lVar1 = lVar6 + -86399999;
    if (-1 < lVar6) {
      lVar1 = lVar6;
    }
    v8::internal::DateCache::YearMonthDayFromDays
              (*(DateCache **)(param_3 + 0xb638),
               (int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
               (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f),(int *)&local_50,
               &iStack_54,&iStack_58);
    uVar8 = (long)(int)local_50 * 2 - 0xed8;
  }
LAB_014c17a4:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

