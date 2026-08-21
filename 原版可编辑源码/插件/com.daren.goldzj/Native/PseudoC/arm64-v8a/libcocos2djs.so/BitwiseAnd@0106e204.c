
/* v8::internal::MutableBigInt::BitwiseAnd(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

undefined8 v8::internal::MutableBigInt::BitwiseAnd(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar9 = *param_2;
  if (((*(uint *)(lVar9 + 3) & 1) == 0) && ((*(uint *)(*param_3 + 3) & 1) == 0)) {
    local_80[0] = &PTR_FUN_01cb2638;
    uVar7 = 1;
    uVar8 = 0;
    plVar6 = param_2;
    plVar4 = param_3;
  }
  else {
    if (((*(uint *)(lVar9 + 3) & 1) != 0) && ((*(uint *)(*param_3 + 3) & 1) != 0)) {
      uVar2 = *(uint *)(lVar9 + 3) >> 1 & 0x3fffffff;
      uVar1 = *(uint *)(*param_3 + 3) >> 1 & 0x3fffffff;
      if (uVar1 <= uVar2) {
        uVar1 = uVar2;
      }
      puVar5 = (undefined8 *)AbsoluteSubOne(param_1,param_2,uVar1 + 1);
      if (puVar5 == (undefined8 *)0x0) {
        uVar7 = 0;
        goto LAB_0106e318;
      }
      lVar9 = AbsoluteSubOne(param_1,param_3,*(uint *)(*param_3 + 3) >> 1 & 0x3fffffff);
      if (lVar9 == 0) goto LAB_0106e41c;
      local_80[0] = &PTR_FUN_01cb26c8;
      local_60 = (long *)local_80;
      puVar5 = (undefined8 *)AbsoluteBitwiseOp(param_1,puVar5,lVar9,*puVar5,0,0,local_80);
      if (local_80 == (undefined ***)local_60) {
        pcVar10 = *(code **)(*local_60 + 0x20);
LAB_0106e3f4:
        (*pcVar10)(local_60);
      }
      else if (local_60 != (long *)0x0) {
        pcVar10 = *(code **)(*local_60 + 0x28);
        goto LAB_0106e3f4;
      }
      uVar7 = AbsoluteAddOne(param_1,puVar5,1,*puVar5);
      goto LAB_0106e318;
    }
    uVar1 = *(uint *)(lVar9 + 3);
    plVar4 = param_2;
    if ((uVar1 & 1) == 0) {
      plVar4 = param_3;
    }
    plVar4 = (long *)AbsoluteSubOne(param_1,plVar4,*(uint *)(*plVar4 + 3) >> 1 & 0x3fffffff);
    if (plVar4 == (long *)0x0) {
LAB_0106e41c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    local_80[0] = &PTR_FUN_01cb2680;
    plVar6 = param_3;
    if ((uVar1 & 1) == 0) {
      plVar6 = param_2;
    }
    uVar8 = 1;
    uVar7 = 0;
  }
  local_60 = (long *)local_80;
  uVar7 = AbsoluteBitwiseOp(param_1,plVar6,plVar4,0,uVar7,uVar8,local_80);
  if (local_80 == (undefined ***)local_60) {
    pcVar10 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0106e318;
    pcVar10 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar10)(local_60);
LAB_0106e318:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

