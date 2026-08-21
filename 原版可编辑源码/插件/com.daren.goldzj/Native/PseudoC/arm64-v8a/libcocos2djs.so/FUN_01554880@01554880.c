
undefined8 FUN_01554880(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xd0);
  }
  if (DAT_01d46d68 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46d68 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46d68;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46d68 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_BigIntBinaryOp",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_BigIntBinaryOp";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((param_2[-2] & 1) == 0) {
    uVar7 = *param_2;
    if (((((uVar7 & 1) == 0) ||
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x41)) ||
        (uVar7 = param_2[-1], (uVar7 & 1) == 0)) ||
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x41)) {
      puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x14,0,0,0);
      uVar6 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
    }
    else {
      switch((int)param_2[-2] >> 1) {
      case 0:
        puVar5 = (undefined8 *)v8::internal::BigInt::Add(param_3,param_2);
        break;
      case 1:
        puVar5 = (undefined8 *)v8::internal::BigInt::Subtract(param_3,param_2);
        break;
      case 2:
        puVar5 = (undefined8 *)v8::internal::BigInt::Multiply(param_3,param_2);
        break;
      case 3:
        puVar5 = (undefined8 *)v8::internal::BigInt::Divide(param_3,param_2);
        break;
      case 4:
        puVar5 = (undefined8 *)v8::internal::BigInt::Remainder(param_3,param_2);
        break;
      case 5:
        puVar5 = (undefined8 *)v8::internal::BigInt::Exponentiate(param_3,param_2);
        break;
      case 6:
        puVar5 = (undefined8 *)v8::internal::BigInt::BitwiseAnd(param_3,param_2);
        break;
      case 7:
        puVar5 = (undefined8 *)v8::internal::BigInt::BitwiseOr(param_3,param_2);
        break;
      case 8:
        puVar5 = (undefined8 *)v8::internal::BigInt::BitwiseXor(param_3,param_2);
        break;
      case 9:
        puVar5 = (undefined8 *)v8::internal::BigInt::LeftShift(param_3,param_2);
        break;
      case 10:
        puVar5 = (undefined8 *)v8::internal::BigInt::SignedRightShift(param_3,param_2);
        break;
      case 0xb:
        puVar5 = (undefined8 *)v8::internal::BigInt::UnsignedRightShift(param_3,param_2);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar6 = *puVar5;
      }
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsSmi()");
}

