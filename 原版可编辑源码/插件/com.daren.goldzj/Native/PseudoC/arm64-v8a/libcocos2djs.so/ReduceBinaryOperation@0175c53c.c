
/* v8::internal::compiler::JSTypeHintLowering::ReduceBinaryOperation(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::FeedbackSlot) const
    */

void v8::internal::compiler::JSTypeHintLowering::ReduceBinaryOperation
               (undefined4 *param_1_00,JSTypeHintLowering *param_1,long param_2,undefined8 param_3,
               undefined8 param_4,undefined8 param_5,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  JSTypeHintLowering *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  switch(*(undefined2 *)(param_2 + 0x10)) {
  case 0x2b1:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
    lVar2 = TryBuildSoftDeopt(param_1,param_8,param_5,param_7,0xc);
    if (lVar2 != 0) goto LAB_0175c67c;
    local_a0 = param_1;
    lStack_98 = param_2;
    local_90 = param_3;
    uStack_88 = param_4;
    local_80 = param_5;
    uStack_78 = param_7;
    local_70 = param_8;
    lVar2 = JSSpeculativeBinopBuilder::TryBuildNumberCompare((JSSpeculativeBinopBuilder *)&local_a0)
    ;
joined_r0x0175c600:
    if (lVar2 != 0) {
LAB_0175c640:
      *(long *)(param_1_00 + 2) = lVar2;
      *(long *)(param_1_00 + 4) = lVar2;
      *param_1_00 = 1;
      *(undefined8 *)(param_1_00 + 6) = param_7;
      goto LAB_0175c68c;
    }
    goto LAB_0175c6bc;
  case 0x2b2:
  case 0x2c4:
    uVar3 = 0xc;
    break;
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2bd:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
    lVar2 = TryBuildSoftDeopt(param_1,param_8,param_5,param_7,0xb);
    if (lVar2 == 0) {
      local_a0 = param_1;
      lStack_98 = param_2;
      local_90 = param_3;
      uStack_88 = param_4;
      local_80 = param_5;
      uStack_78 = param_7;
      local_70 = param_8;
      lVar2 = JSSpeculativeBinopBuilder::TryBuildNumberBinop((JSSpeculativeBinopBuilder *)&local_a0)
      ;
      if (lVar2 != 0) goto LAB_0175c640;
      if (*(ushort *)(param_2 + 0x10) - 0x2bd < 2) {
        lVar2 = JSSpeculativeBinopBuilder::TryBuildBigIntBinop
                          ((JSSpeculativeBinopBuilder *)&local_a0);
        goto joined_r0x0175c600;
      }
      goto LAB_0175c6bc;
    }
    goto LAB_0175c67c;
  case 0x2c2:
    uVar3 = 0xb;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar2 = TryBuildSoftDeopt(param_1,param_8,param_5,param_7,uVar3);
  if (lVar2 == 0) {
LAB_0175c6bc:
    *param_1_00 = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *(undefined8 *)(param_1_00 + 6) = 0;
    *(undefined8 *)(param_1_00 + 2) = 0;
  }
  else {
LAB_0175c67c:
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *param_1_00 = 2;
    *(long *)(param_1_00 + 6) = lVar2;
  }
LAB_0175c68c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

