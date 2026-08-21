
/* v8::internal::Compiler::ValidateDynamicCompilationSource(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::Object>) */

undefined1  [16]
v8::internal::Compiler::ValidateDynamicCompilationSource(long param_1,long *param_2,ulong *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (((*(uint *)(*param_2 + 0x1f) & 1) == 0) ||
     (*(uint *)(*param_2 + 0x1f) != *(uint *)(param_1 + 0xc0))) {
LAB_00ee4440:
    uVar5 = *param_3;
    if ((uVar5 & 1) != 0) {
      uVar2 = *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
      uVar5 = (ulong)(0x3f < uVar2);
      if (0x3f < uVar2) {
        param_3 = (ulong *)0x0;
      }
      goto LAB_00ee4474;
    }
  }
  else {
    pcVar4 = *(code **)(param_1 + 0xb750);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = *(code **)(param_1 + 0xb758);
      if (pcVar4 != (code *)0x0) {
        uVar1 = *(undefined4 *)(param_1 + 0x2c60);
        *(undefined4 *)(param_1 + 0x2c60) = 6;
        local_40 = 0;
        uStack_58 = 0;
        local_60 = (RuntimeCallStats *)0x0;
        uStack_48 = 0;
        uStack_50 = 0;
        if (TracingFlags::runtime_stats != 0) {
          local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
          RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x74);
        }
        auVar6 = (*pcVar4)(param_2,param_3);
        if ((auVar6._0_8_ & 0xff) != 0 && auVar6._8_8_ != (ulong *)0x0) {
          param_3 = auVar6._8_8_;
        }
        if (local_60 != (RuntimeCallStats *)0x0) {
          RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
        }
        *(undefined4 *)(param_1 + 0x2c60) = uVar1;
        if ((auVar6._0_8_ & 0xff) == 0) {
          param_3 = (ulong *)0x0;
          uVar5 = 0;
          goto LAB_00ee4474;
        }
        goto LAB_00ee4440;
      }
      uVar5 = *param_3;
      if ((uVar5 & 1) != 0) {
        param_3 = (ulong *)0x0;
        uVar5 = (ulong)(0x3f < *(ushort *)
                                ((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)));
        goto LAB_00ee4474;
      }
    }
    else {
      uVar5 = *param_3;
      if (((uVar5 & 1) != 0) &&
         (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
        uVar1 = *(undefined4 *)(param_1 + 0x2c60);
        *(undefined4 *)(param_1 + 0x2c60) = 6;
        local_40 = 0;
        uStack_58 = 0;
        local_60 = (RuntimeCallStats *)0x0;
        uStack_48 = 0;
        uStack_50 = 0;
        if (TracingFlags::runtime_stats != 0) {
          local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
          RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x74);
          pcVar4 = *(code **)(param_1 + 0xb750);
        }
        uVar3 = (*pcVar4)(param_2,param_3);
        if (local_60 != (RuntimeCallStats *)0x0) {
          RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
          uVar3 = uVar3 & 0xffffffff;
        }
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x2c60) = uVar1;
        if ((uVar3 & 1) == 0) {
          param_3 = (ulong *)0x0;
        }
        goto LAB_00ee4474;
      }
    }
  }
  param_3 = (ulong *)0x0;
  uVar5 = 1;
LAB_00ee4474:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = param_3;
  return auVar6;
}

