
/* v8::internal::RuntimeProfiler::MaybeOptimize(v8::internal::JSFunction,
   v8::internal::InterpretedFrame*) */

void __thiscall
v8::internal::RuntimeProfiler::MaybeOptimize
          (RuntimeProfiler *this,ulong param_2,InterpretedFrame *param_3)

{
  byte bVar1;
  RuntimeProfiler *this_00;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  uVar2 = param_2 & 0xffffffff00000000;
  uVar3 = *(uint *)((uVar2 | *(uint *)(param_2 + 0xb)) + 3);
  local_40 = param_2;
  if ((uVar3 != 0x84) &&
     (((uVar3 & 1) == 0 ||
      (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) - 0x95)))) {
    uVar5 = param_2 & 0xffffffff00000000;
    uVar2 = uVar5 | *(uint *)((uVar5 | *(uint *)(param_2 + 0x13)) + 3);
    if ((*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x9f) &&
       (*(int *)(uVar2 + 7) == 8)) {
      if (FLAG_trace_opt_verbose == '\0') {
        return;
      }
      PrintF("[function ");
      JSFunction::PrintName((JSFunction *)&local_40,(__sFILE *)waitpid);
      PrintF(" is already in optimization queue]\n");
      return;
    }
  }
  this_00 = this;
  if ((FLAG_testing_d8_test_runner == '\0') ||
     (this_00 = (RuntimeProfiler *)
                PendingOptimizationTable::IsHeuristicOptimizationAllowed
                          (*(undefined8 *)this,param_2), ((ulong)this_00 & 1) != 0)) {
    uVar2 = local_40;
    if (FLAG_always_osr == '\0') {
      uVar5 = MaybeOSR(this_00,local_40,param_3);
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    else {
      AttemptOnStackReplacement(this_00,param_3,6);
      uVar2 = local_40;
    }
    uVar5 = uVar2 & 0xffffffff00000000;
    if ((*(uint *)((uVar5 | *(uint *)(uVar2 + 0xb)) + 0x1b) & 0xf00000) == 0) {
      uVar4 = uVar5 | *(uint *)(uVar2 + 0xb);
      uVar7 = uVar5 | *(uint *)(uVar4 + 0xf);
      uVar6 = uVar5 | 7;
      if ((*(short *)(uVar6 + *(uint *)(uVar7 - 1)) == 0x5b) &&
         (*(short *)(uVar6 + *(uint *)((uVar5 | *(uint *)(uVar7 + 0x13)) - 1)) == 0x86)) {
        uVar3 = *(uint *)(uVar7 + 0xf);
      }
      else {
        uVar3 = *(uint *)(uVar4 + 3);
        if (((uVar3 & 1) == 0) || (*(short *)(uVar6 + *(uint *)((uVar5 | uVar3) - 1)) != 0x86)) {
          uVar3 = *(uint *)((uVar5 | *(uint *)(uVar4 + 3)) + 3);
        }
        else {
          uVar3 = *(uint *)(uVar4 + 3);
        }
      }
      bVar1 = ShouldOptimize(this,uVar2,uVar5 | uVar3);
      if (bVar1 != 0) {
        local_38 = local_40;
        local_18 = local_40;
        if (FLAG_trace_opt != '\0') {
          puVar8 = (&PTR_s_do_not_optimize_01ca6f10)[bVar1];
          PrintF("[marking ");
          Object::ShortPrint((Object *)&local_18,(__sFILE *)waitpid);
          PrintF(" for %s recompilation, reason: %s","optimized",puVar8);
          PrintF("]\n");
        }
        JSFunction::MarkForOptimization((JSFunction *)&local_38,1);
      }
    }
  }
  else if (FLAG_trace_opt_verbose != '\0') {
    PrintF("[function ");
    JSFunction::PrintName((JSFunction *)&local_40,(__sFILE *)waitpid);
    PrintF(" has been marked manually for optimization]\n");
  }
  return;
}

