
/* v8::internal::RuntimeProfiler::AttemptOnStackReplacement(v8::internal::InterpretedFrame*, int) */

void __thiscall
v8::internal::RuntimeProfiler::AttemptOnStackReplacement
          (RuntimeProfiler *this,InterpretedFrame *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  ulong local_18;
  
  local_38 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  if (FLAG_use_osr != '\0') {
    uVar4 = local_38 & 0xffffffff00000000;
    uVar5 = uVar4 | *(uint *)(local_38 + 0xb);
    local_18 = uVar4 | *(uint *)(uVar5 + 0xf);
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
      local_18 = uVar4 | *(uint *)(local_18 + 0xb);
    }
    if (((local_18 & 1) == 0) || ((int)local_18 != *(int *)((local_18 & 0xffffffff00000000) + 0xa0))
       ) {
      uVar4 = Script::IsUserJavaScript((Script *)&local_18);
      if (((uVar4 & 1) != 0) && ((*(uint *)(uVar5 + 0x1b) & 0xf00000) == 0)) {
        if (FLAG_trace_osr != '\0') {
          PrintF("[OSR - arming back edges in ");
          JSFunction::PrintName((JSFunction *)&local_38,(__sFILE *)waitpid);
          PrintF("]\n");
        }
        lVar3 = InterpretedFrame::GetBytecodeArray(param_1);
        cVar2 = *(char *)(lVar3 + 0x1f);
        lVar3 = InterpretedFrame::GetBytecodeArray(param_1);
        iVar1 = cVar2 + param_2;
        if (5 < iVar1) {
          iVar1 = 6;
        }
        *(char *)(lVar3 + 0x1f) = (char)iVar1;
      }
    }
  }
  return;
}

