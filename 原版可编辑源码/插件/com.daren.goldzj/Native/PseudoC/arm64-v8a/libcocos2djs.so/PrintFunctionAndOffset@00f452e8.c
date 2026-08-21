
/* v8::internal::JavaScriptFrame::PrintFunctionAndOffset(v8::internal::JSFunction,
   v8::internal::AbstractCode, int, __sFILE*, bool) */

void v8::internal::JavaScriptFrame::PrintFunctionAndOffset
               (ulong param_1,undefined8 param_2,uint param_3,__sFILE *param_4,uint param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  void *local_58;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  
  uVar5 = param_1 & 0xffffffff00000000;
  if (*(int *)((uVar5 | *(uint *)(param_1 + 0x17)) + 0x27) != 0x42) {
    uVar1 = *(uint *)((uVar5 | *(uint *)(param_1 + 0xb)) + 3);
    if ((uVar1 != 0x84) &&
       (((uVar1 & 1) == 0 ||
        (1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) - 0x95)))) {
      uVar5 = param_1 & 0xffffffff00000000;
      pcVar4 = "~";
      if (((*(byte *)((uVar5 | *(uint *)(param_1 + 0x17)) + 0x17) & 0x3e) == 0) &&
         (pcVar4 = "*",
         (*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(param_1 + 0x17)) + 0xf)) + 7) & 1) != 0))
      {
        pcVar4 = "~";
      }
      goto LAB_00f45344;
    }
  }
  pcVar4 = "~";
LAB_00f45344:
  local_40 = param_2;
  local_38 = param_1;
  PrintF(param_4,"%s",pcVar4);
  JSFunction::PrintName((JSFunction *)&local_38,param_4);
  PrintF(param_4,"+%d",(ulong)param_3);
  if ((param_5 & 1) != 0) {
    uVar1 = *(uint *)(local_38 + 0xb);
    uVar5 = local_38 & 0xffffffff00000000;
    iVar3 = AbstractCode::SourcePosition((AbstractCode *)&local_40,param_3);
    local_48 = uVar5 | *(uint *)((uVar5 | uVar1) + 0xf);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0x5b) {
      local_48 = uVar5 | *(uint *)(local_48 + 0xb);
    }
    if (((local_48 & 1) == 0) ||
       (*(short *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0x65)) {
      PrintF(param_4," at <unknown>:<unknown>");
    }
    else {
      iVar3 = Script::GetLineNumber((Script *)&local_48,iVar3);
      if (((*(uint *)(local_48 + 7) & 1) == 0) ||
         (local_50 = local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 7),
         0x3f < *(ushort *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_50 - 1))))
      {
        PrintF(param_4," at <unknown>:%d",(ulong)(iVar3 + 1U));
      }
      else {
        String::ToCString(&local_58,&local_50,1,0,0);
        PrintF(param_4," at %s:%d",local_58,(ulong)(iVar3 + 1U));
        pvVar2 = local_58;
        local_58 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
      }
    }
  }
  return;
}

