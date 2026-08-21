
/* v8::internal::FrameArrayBuilder::IsNotHidden(v8::internal::Handle<v8::internal::JSFunction>) */

bool __thiscall v8::internal::FrameArrayBuilder::IsNotHidden(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_8;
  
  if (FLAG_builtins_in_stack_traces == '\0') {
    uVar3 = *param_2;
    uVar2 = uVar3 & 0xffffffff00000000;
    local_8 = uVar2 | *(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 0xf);
    if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0x5b) {
      local_8 = uVar2 | *(uint *)(local_8 + 0xb);
    }
    if (((local_8 & 1) == 0) || ((int)local_8 != *(int *)((local_8 & 0xffffffff00000000) + 0xa0))) {
      uVar2 = Script::IsUserJavaScript((Script *)&local_8);
      if ((uVar2 & 1) != 0) {
        return true;
      }
      uVar3 = *param_2;
      uVar2 = uVar3 & 0xffffffff00000000;
    }
    if ((*(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 0x1b) >> 5 & 1) == 0) {
      uVar1 = *(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 3);
      if ((uVar1 & 1) != 0) {
        return *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0x4e;
      }
      return false;
    }
  }
  return true;
}

