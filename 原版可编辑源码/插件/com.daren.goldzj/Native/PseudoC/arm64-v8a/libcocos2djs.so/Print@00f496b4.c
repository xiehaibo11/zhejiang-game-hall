
/* v8::internal::ArgumentsAdaptorFrame::Print(v8::internal::StringStream*,
   v8::internal::StackFrame::PrintMode, int) const */

void __thiscall
v8::internal::ArgumentsAdaptorFrame::Print
          (ArgumentsAdaptorFrame *this,undefined8 param_1,int param_3,uint param_4)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_70 [2];
  undefined8 local_68;
  
  uVar3 = (**(code **)(*(long *)this + 0x78))();
  uVar4 = (**(code **)(*(long *)this + 0x98))(this);
  uVar2 = *(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x15);
  pcVar1 = "%5d: ";
  if (param_3 != 0) {
    pcVar1 = "[%d]: ";
  }
  uVar5 = __strlen_chk(pcVar1,7);
  local_70[0] = param_4;
  StringStream::Add(param_1,pcVar1,uVar5,local_70,1);
  uVar5 = __strlen_chk("arguments adaptor frame: %d->%d",0x20);
  uVar9 = (uint)uVar2;
  local_68 = CONCAT44(local_68._4_4_,uVar9);
  local_70[0] = uVar3;
  StringStream::Add(param_1,"arguments adaptor frame: %d->%d",uVar5,local_70,2);
  if (param_3 == 0) {
    puVar7 = &DAT_018938a8;
    uVar5 = 2;
  }
  else {
    uVar5 = __strlen_chk(" {\n",4);
    StringStream::Add(param_1," {\n",uVar5,0,0);
    if (0 < (int)uVar3) {
      uVar5 = __strlen_chk("  // actual arguments\n",0x17);
      StringStream::Add(param_1,"  // actual arguments\n",uVar5,0,0);
      uVar8 = 0;
      do {
        uVar5 = (**(code **)(*(long *)this + 0x70))(this,uVar8);
        uVar6 = __strlen_chk(&DAT_019b0226,0xe);
        local_70[0] = uVar8;
        local_68 = uVar5;
        StringStream::Add(param_1,&DAT_019b0226,uVar6,local_70,2);
        if (uVar9 <= uVar8) {
          uVar5 = __strlen_chk("  // not passed to callee",0x1a);
          StringStream::Add(param_1,"  // not passed to callee",uVar5,0,0);
        }
        uVar5 = __strlen_chk(&DAT_018938a8,2);
        StringStream::Add(param_1,&DAT_018938a8,uVar5,0,0);
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    puVar7 = &DAT_019b01eb;
    uVar5 = 4;
  }
  uVar5 = __strlen_chk(puVar7,uVar5);
  StringStream::Add(param_1,puVar7,uVar5,0,0);
  return;
}

