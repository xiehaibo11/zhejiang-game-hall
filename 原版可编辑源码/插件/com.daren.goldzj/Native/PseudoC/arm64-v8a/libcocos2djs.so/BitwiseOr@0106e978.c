
/* v8::internal::MutableBigInt::BitwiseOr(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

undefined8 v8::internal::MutableBigInt::BitwiseOr(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = (long *)local_80;
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar9 = *param_2;
  lVar10 = *param_3;
  uVar2 = *(uint *)(lVar9 + 3) >> 1 & 0x3fffffff;
  uVar3 = *(uint *)(lVar10 + 3) >> 1 & 0x3fffffff;
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  if (((*(uint *)(lVar9 + 3) & 1) == 0) && ((*(uint *)(lVar10 + 3) & 1) == 0)) {
    local_80[0] = &PTR_FUN_01cb26c8;
    uVar5 = AbsoluteBitwiseOp(param_1,param_2,param_3,0,0,0,local_80);
    if (local_80 == (undefined ***)local_60) {
      pcVar11 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_0106eb44;
      pcVar11 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar11)(local_60);
    goto LAB_0106eb44;
  }
  if (((*(uint *)(lVar9 + 3) & 1) == 0) || ((*(uint *)(lVar10 + 3) & 1) == 0)) {
    uVar2 = *(uint *)(lVar9 + 3);
    plVar1 = param_2;
    if ((uVar2 & 1) == 0) {
      plVar1 = param_3;
    }
    puVar6 = (undefined8 *)AbsoluteSubOne(param_1,plVar1,uVar3);
    if (puVar6 == (undefined8 *)0x0) goto LAB_0106eb74;
    uVar5 = *puVar6;
    local_80[0] = &PTR_FUN_01cb2680;
    if ((uVar2 & 1) == 0) {
      param_3 = param_2;
    }
    uVar8 = 1;
    uVar7 = 0;
  }
  else {
    puVar6 = (undefined8 *)AbsoluteSubOne(param_1,param_2,uVar3);
    if (puVar6 == (undefined8 *)0x0) {
LAB_0106eb74:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    param_3 = (long *)AbsoluteSubOne(param_1,param_3,*(uint *)(*param_3 + 3) >> 1 & 0x3fffffff);
    if (param_3 == (long *)0x0) goto LAB_0106eb74;
    uVar5 = *puVar6;
    local_80[0] = &PTR_FUN_01cb2638;
    uVar7 = 1;
    uVar8 = 0;
  }
  local_60 = (long *)local_80;
  puVar6 = (undefined8 *)AbsoluteBitwiseOp(param_1,puVar6,param_3,uVar5,uVar7,uVar8,local_80);
  if (local_80 == (undefined ***)local_60) {
    pcVar11 = *(code **)(*local_60 + 0x20);
LAB_0106eb10:
    (*pcVar11)(local_60);
  }
  else if (local_60 != (long *)0x0) {
    pcVar11 = *(code **)(*local_60 + 0x28);
    goto LAB_0106eb10;
  }
  uVar5 = AbsoluteAddOne(param_1,puVar6,1,*puVar6);
LAB_0106eb44:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

