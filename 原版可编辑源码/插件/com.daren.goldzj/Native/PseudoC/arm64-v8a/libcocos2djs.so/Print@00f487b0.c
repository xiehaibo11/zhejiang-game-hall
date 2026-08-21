
/* v8::internal::WasmInterpreterEntryFrame::Print(v8::internal::StringStream*,
   v8::internal::StackFrame::PrintMode, int) const */

void __thiscall
v8::internal::WasmInterpreterEntryFrame::Print
          (WasmInterpreterEntryFrame *this,StringStream *param_1,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_28 [2];
  
  pcVar1 = "%5d: ";
  if (param_3 != 0) {
    pcVar1 = "[%d]: ";
  }
  uVar2 = __strlen_chk(pcVar1,7);
  local_28[0] = param_4;
  StringStream::Add(param_1,pcVar1,uVar2,local_28,1);
  uVar2 = __strlen_chk("WASM INTERPRETER ENTRY [",0x19);
  StringStream::Add(param_1,"WASM INTERPRETER ENTRY [",uVar2,0,0);
  uVar3 = *(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000;
  StringStream::PrintName
            (param_1,uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(*(long *)(
                                                  this + 0x20) + -0x10) + 0x6f)) + 0x13)) + 7));
  uVar2 = __strlen_chk(&DAT_01890f88,2);
  StringStream::Add(param_1,&DAT_01890f88,uVar2,0,0);
  if (param_3 != 0) {
    uVar2 = __strlen_chk(&DAT_018938a8,2);
    StringStream::Add(param_1,&DAT_018938a8,uVar2,0,0);
  }
  return;
}

