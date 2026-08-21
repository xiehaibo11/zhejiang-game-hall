
/* v8::internal::Runtime_GetSubstitution(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetSubstitution(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  long lVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined **local_80;
  ulong *puStack_78;
  ulong *local_70;
  ulong *puStack_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_015925bc(param_1,param_2,param_3);
    return uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar4 = param_2 + -1;
  uVar8 = *puVar4;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  if ((param_2[-2] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsSmi()");
  }
  uVar9 = param_2[-3];
  if (((uVar9 & 1) != 0) &&
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40)) {
    uVar9 = param_2[-4];
    if ((uVar9 & 1) == 0) {
      iVar1 = (int)param_2[-2] >> 1;
      local_70 = puVar4;
      if (*(int *)(uVar8 + 7) != iVar1) {
        local_70 = (ulong *)Factory::NewProperSubString((Factory *)param_3,puVar4,0,iVar1);
        uVar7 = *param_2;
      }
      iVar1 = *(int *)(uVar7 + 7) + iVar1;
      if (iVar1 != 0) {
        puVar4 = (ulong *)Factory::NewProperSubString
                                    ((Factory *)param_3,puVar4,iVar1,*(undefined4 *)(*puVar4 + 7));
      }
      local_80 = &PTR_FUN_01cc9398;
      puStack_78 = param_2;
      puStack_68 = puVar4;
      pIVar5 = (Isolate *)String::GetSubstitution(param_3,&local_80,param_2 + -3,(int)uVar9 >> 1);
      pIVar2 = param_3 + 0x180;
      if (pIVar5 != (Isolate *)0x0) {
        pIVar2 = pIVar5;
      }
      uVar10 = *(undefined8 *)pIVar2;
      *(undefined8 *)(param_3 + 0x95a0) = uVar6;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar10;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].IsString()");
}

