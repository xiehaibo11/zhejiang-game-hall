
/* v8::internal::BuiltinExitFrame::Print(v8::internal::StringStream*,
   v8::internal::StackFrame::PrintMode, int) const */

void __thiscall
v8::internal::BuiltinExitFrame::Print
          (BuiltinExitFrame *this,StringStream *param_1,int param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar4 = *(long *)(this + 0x20);
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar6 = *(undefined8 *)(lVar4 + (int)((*(uint *)(lVar4 + 0x20) & 0x3ffffffe) * 4 + 8));
  StringStream::PrintSecurityTokenIfChanged(param_1,uVar8);
  pcVar1 = "%5d: ";
  if (param_3 != 0) {
    pcVar1 = "[%d]: ";
  }
  uVar3 = __strlen_chk(pcVar1,7);
  local_48 = CONCAT44(local_48._4_4_,param_4);
  StringStream::Add(param_1,pcVar1,uVar3,&local_48,1);
  uVar3 = __strlen_chk("builtin exit frame: ",0x15);
  StringStream::Add(param_1,"builtin exit frame: ",uVar3,0,0);
  local_50 = 0;
  if (((*(ulong *)(*(long *)(this + 0x20) + 0x10) & 1) == 0) ||
     ((int)*(ulong *)(*(long *)(this + 0x20) + 0x10) != *(int *)(*(long *)(this + 0x10) + 0xa0))) {
    uVar3 = __strlen_chk(&DAT_019aff78,5);
    StringStream::Add(param_1,&DAT_019aff78,uVar3,0,0);
  }
  StringStream::PrintFunction(param_1,uVar8,uVar6,&local_50);
  uVar8 = __strlen_chk("(this=%o",9);
  local_48 = uVar6;
  StringStream::Add(param_1,"(this=%o",uVar8,&local_48,1);
  lVar4 = *(long *)(this + 0x20);
  uVar2 = (*(int *)(lVar4 + 0x20) >> 1) - 4;
  if (0 < (int)uVar2) {
    uVar5 = (ulong)uVar2;
    iVar7 = 0x30;
    while( true ) {
      uVar5 = uVar5 - 1;
      uVar8 = *(undefined8 *)(lVar4 + iVar7);
      uVar6 = __strlen_chk(&DAT_019aff86,4);
      local_48 = uVar8;
      StringStream::Add(param_1,&DAT_019aff86,uVar6,&local_48,1);
      if (uVar5 == 0) break;
      lVar4 = *(long *)(this + 0x20);
      iVar7 = iVar7 + 8;
    }
  }
  uVar6 = __strlen_chk(&DAT_019aff8a,4);
  StringStream::Add(param_1,&DAT_019aff8a,uVar6,0,0);
  return;
}

