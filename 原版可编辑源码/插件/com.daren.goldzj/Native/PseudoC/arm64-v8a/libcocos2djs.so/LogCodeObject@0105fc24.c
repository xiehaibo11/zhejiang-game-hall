
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::ExistingCodeLogger::LogCodeObject(v8::internal::Object) */

void __thiscall
v8::internal::ExistingCodeLogger::LogCodeObject(ExistingCodeLogger *this,ulong param_2)

{
  Mutex *this_00;
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x9a) {
switchD_0105fc7c_caseD_0:
    return;
  }
  switch(*(uint *)(param_2 + 0x17) >> 1 & 0x1f) {
  case 0:
  case 1:
  case 0xc:
    goto switchD_0105fc7c_caseD_0;
  case 2:
    uVar4 = 0x12;
    pcVar5 = "STUB code";
    plVar3 = *(long **)(this + 8);
    break;
  case 3:
    iVar1 = *(int *)(param_2 + 0x27);
    if ((iVar1 - 0x38U < 9) && ((1 << (ulong)(iVar1 - 0x38U & 0x1f) & 0x181U) != 0)) {
      piVar2 = (int *)Builtins::builtin_handle((Builtins *)(*(long *)this + 0x9e00),0x38);
      if ((int)param_2 != *piVar2) {
        return;
      }
      iVar1 = *(int *)(param_2 + 0x27);
    }
    pcVar5 = (char *)Builtins::name(iVar1);
    uVar4 = 8;
    plVar3 = *(long **)(this + 8);
    break;
  case 4:
    uVar4 = 0x10;
    pcVar5 = "Regular expression code";
    plVar3 = *(long **)(this + 8);
    break;
  case 5:
    uVar4 = 0xb;
    pcVar5 = "A Wasm function";
    plVar3 = *(long **)(this + 8);
    break;
  case 6:
    uVar4 = 0x12;
    pcVar5 = "A Wasm to C-API adapter";
    plVar3 = *(long **)(this + 8);
    break;
  case 7:
    pcVar5 = "A Wasm to JavaScript adapter";
    plVar3 = *(long **)(this + 8);
    goto joined_r0x0105fd80;
  case 8:
    pcVar5 = "A JavaScript to Wasm adapter";
    plVar3 = *(long **)(this + 8);
joined_r0x0105fd80:
    uVar4 = 0x12;
    break;
  case 9:
    pcVar5 = "A WebAssembly.Function adapter";
    plVar3 = *(long **)(this + 8);
    goto joined_r0x0105fd98;
  case 10:
    uVar4 = 0x12;
    pcVar5 = "A Wasm to Interpreter adapter";
    plVar3 = *(long **)(this + 8);
    break;
  case 0xb:
    pcVar5 = "A C to Wasm entry stub";
    plVar3 = *(long **)(this + 8);
joined_r0x0105fd98:
    uVar4 = 0x12;
    break;
  case 0xd:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented code");
  default:
    uVar4 = 0x12;
    pcVar5 = "Unknown code from before profiling";
    plVar3 = *(long **)(this + 8);
  }
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0105fccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar4,param_2,pcVar5);
    return;
  }
  lVar6 = *(long *)(*(long *)this + 0xb6d8);
  this_00 = (Mutex *)(lVar6 + 0x28);
  base::Mutex::Lock(this_00);
  for (plVar3 = *(long **)(lVar6 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    (**(code **)(*(long *)plVar3[2] + 0x10))((long *)plVar3[2],uVar4,param_2,pcVar5);
  }
  base::Mutex::Unlock(this_00);
  return;
}

