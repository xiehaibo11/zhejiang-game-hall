
/* v8::internal::StackFrame::Print(v8::internal::StringStream*, v8::internal::StackFrame::PrintMode,
   int) const */

void __thiscall
v8::internal::StackFrame::Print(StackFrame *this,undefined8 param_1,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  pcVar4 = "%5d: ";
  if (param_3 != 0) {
    pcVar4 = "[%d]: ";
  }
  uVar2 = __strlen_chk(pcVar4,7);
  local_38 = CONCAT44(local_38._4_4_,param_4);
  StringStream::Add(param_1,pcVar4,uVar2,&local_38,1);
  iVar1 = (**(code **)(*(long *)this + 8))(this);
  if (iVar1 - 1U < 0x16) {
    pcVar4 = (&PTR_s_EntryFrame_019b02c6_5_01ca5de8)[(int)(iVar1 - 1U)];
    sVar3 = strlen(pcVar4);
    StringStream::Add(param_1,pcVar4,sVar3,0,0);
    uVar5 = **(undefined8 **)(this + 0x28);
    uVar2 = __strlen_chk(" [pc: %p]\n",0xb);
    local_38 = uVar5;
    StringStream::Add(param_1," [pc: %p]\n",uVar2,&local_38,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

