
/* v8::internal::MutableBigInt::BitwiseXor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

undefined8 v8::internal::MutableBigInt::BitwiseXor(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar8 = *param_2;
  if (((*(uint *)(lVar8 + 3) & 1) == 0) && ((*(uint *)(*param_3 + 3) & 1) == 0)) {
    local_80[0] = &PTR_FUN_01cb2710;
    local_60 = (long *)local_80;
    uVar6 = AbsoluteBitwiseOp(param_1,param_2,param_3,0,0,0,local_80);
    if (local_80 == (undefined ***)local_60) {
LAB_0106e830:
      pcVar9 = *(code **)(*local_60 + 0x20);
    }
    else {
LAB_0106e6ec:
      if (local_60 == (long *)0x0) goto LAB_0106e86c;
      pcVar9 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar9)(local_60);
    goto LAB_0106e86c;
  }
  lVar10 = *param_3;
  if (((*(uint *)(lVar8 + 3) & 1) != 0) && ((*(uint *)(lVar10 + 3) & 1) != 0)) {
    uVar2 = *(uint *)(lVar8 + 3) >> 1 & 0x3fffffff;
    uVar4 = *(uint *)(lVar10 + 3) >> 1 & 0x3fffffff;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    puVar7 = (undefined8 *)AbsoluteSubOne(param_1,param_2,uVar4);
    if (puVar7 == (undefined8 *)0x0) {
LAB_0106e89c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    lVar8 = AbsoluteSubOne(param_1,param_3,*(uint *)(*param_3 + 3) >> 1 & 0x3fffffff);
    if (lVar8 == 0) goto LAB_0106e89c;
    local_80[0] = &PTR_FUN_01cb2710;
    local_60 = (long *)local_80;
    uVar6 = AbsoluteBitwiseOp(param_1,puVar7,lVar8,*puVar7,0,0,local_80);
    if (local_80 == (undefined ***)local_60) goto LAB_0106e830;
    goto LAB_0106e6ec;
  }
  uVar2 = *(uint *)(lVar8 + 3);
  uVar3 = *(uint *)(lVar8 + 3) >> 1 & 0x3fffffff;
  uVar4 = *(uint *)(lVar10 + 3) >> 1 & 0x3fffffff;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  plVar1 = param_2;
  if ((uVar2 & 1) == 0) {
    plVar1 = param_3;
  }
  puVar7 = (undefined8 *)AbsoluteSubOne(param_1,plVar1,uVar4 + 1);
  if (puVar7 == (undefined8 *)0x0) {
    uVar6 = 0;
    goto LAB_0106e86c;
  }
  if ((uVar2 & 1) == 0) {
    param_3 = param_2;
  }
  local_80[0] = &PTR_FUN_01cb2710;
  local_60 = (long *)local_80;
  puVar7 = (undefined8 *)AbsoluteBitwiseOp(param_1,puVar7,param_3,*puVar7,0,0,local_80);
  if (local_80 == (undefined ***)local_60) {
    pcVar9 = *(code **)(*local_60 + 0x20);
LAB_0106e84c:
    (*pcVar9)(local_60);
  }
  else if (local_60 != (long *)0x0) {
    pcVar9 = *(code **)(*local_60 + 0x28);
    goto LAB_0106e84c;
  }
  uVar6 = AbsoluteAddOne(param_1,puVar7,1,*puVar7);
LAB_0106e86c:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

