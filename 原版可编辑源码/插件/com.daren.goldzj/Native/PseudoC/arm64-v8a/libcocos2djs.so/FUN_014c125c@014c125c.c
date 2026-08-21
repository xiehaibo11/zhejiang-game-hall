
undefined8 FUN_014c125c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  char ***pppcVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  int iStack_108;
  int local_104;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  char **local_e8;
  undefined8 uStack_e0;
  char **local_d8;
  undefined8 uStack_d0;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x428)) {
    uStack_d0 = __strlen_chk("Date.prototype.toUTCString",0x1b);
    local_d8 = (char **)0x1a40418;
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_d8,0);
    if (lVar6 == 0) goto LAB_014c1474;
    puVar7 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar6,param_2,0);
    uVar10 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
    goto LAB_014c13fc;
  }
  uVar4 = *(uint *)(uVar9 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar11 = (double)((int)uVar4 >> 1);
LAB_014c1344:
    v8::internal::DateCache::BreakDownTime
              (*(DateCache **)(param_3 + 0xb638),(long)dVar11,&iStack_ec,&local_f0,&iStack_f4,
               &local_f8,&iStack_fc,&local_100,&local_104,&iStack_108);
    pcVar1 = "%s, %02d %s %05d %02d:%02d:%02d GMT";
    if (-1 < iStack_ec) {
      pcVar1 = "%s, %02d %s %04d %02d:%02d:%02d GMT";
    }
    v8::internal::SNPrintF
              (&local_d8,0x80,pcVar1,(&PTR_DAT_01cc42d0)[local_f8],iStack_f4,
               (&PTR_DAT_01cc4308)[local_f0],iStack_ec,iStack_fc,local_100,local_104);
    uStack_e0 = __strlen_chk(&local_d8,0x80);
    pppcVar8 = &local_e8;
    local_e8 = (char **)&local_d8;
  }
  else {
    dVar11 = *(double *)((uVar9 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar11)) goto LAB_014c1344;
    uStack_d0 = __strlen_chk("Invalid Date",0xd);
    pppcVar8 = &local_d8;
    local_d8 = (char **)0x1a3fe0d;
  }
  puVar7 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,pppcVar8,0);
  if (puVar7 == (undefined8 *)0x0) {
LAB_014c1474:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar10 = *puVar7;
LAB_014c13fc:
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

