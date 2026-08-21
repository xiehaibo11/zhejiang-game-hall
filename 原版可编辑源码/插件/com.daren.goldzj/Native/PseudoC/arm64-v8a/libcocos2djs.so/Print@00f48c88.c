
/* v8::internal::JavaScriptFrame::Print(v8::internal::StringStream*,
   v8::internal::StackFrame::PrintMode, int) const */

void __thiscall
v8::internal::JavaScriptFrame::Print
          (JavaScriptFrame *this,StringStream *param_1,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  int *piVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  ulong local_78;
  ulong local_70;
  int local_68;
  
  uVar4 = (**(code **)(*(long *)this + 0x98))();
  pIVar5 = *(Isolate **)(this + 0x10);
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar4;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
  }
  SharedFunctionInfo::EnsureSourcePositionsAvailable(*(undefined8 *)(this + 0x10),puVar6);
  uVar4 = (**(code **)(*(long *)this + 0x50))(this);
  uVar7 = (**(code **)(*(long *)this + 0x98))(this);
  StringStream::PrintSecurityTokenIfChanged(param_1,uVar7);
  pcVar13 = "%5d: ";
  if (param_3 != 0) {
    pcVar13 = "[%d]: ";
  }
  uVar8 = __strlen_chk(pcVar13,7);
  local_78 = CONCAT44(local_78._4_4_,param_4);
  StringStream::Add(param_1,pcVar13,uVar8,&local_78,1);
  (**(code **)(*(long *)this + 0xb0))(this,param_1);
  local_80 = 0;
  uVar9 = (**(code **)(*(long *)this + 0x80))(this);
  if ((uVar9 & 1) != 0) {
    uVar8 = __strlen_chk(&DAT_019aff78,5);
    StringStream::Add(param_1,&DAT_019aff78,uVar8,0,0);
  }
  StringStream::PrintFunction(param_1,uVar7,uVar4,&local_80);
  uVar8 = __strlen_chk(" [%p]",6);
  local_78 = uVar7;
  StringStream::Add(param_1," [%p]",uVar8,&local_78,1);
  uVar1 = *(uint *)(*puVar6 + 7);
  pIVar5 = (Isolate *)(*puVar6 & 0xffffffff00000000);
  if (((uVar1 & 1) == 0) ||
     (local_88 = (ulong)pIVar5 | (ulong)uVar1,
     *(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(local_88 - 1)) != 0x83)) {
    local_88 = ScopeInfo::Empty(pIVar5);
  }
  uVar9 = *puVar6 & 0xffffffff00000000;
  uVar7 = uVar9 | *(uint *)(*puVar6 + 0xf);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x5b) {
    uVar7 = uVar9 | *(uint *)(uVar7 + 0xb);
  }
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x65)) {
    local_90 = uVar7;
    uVar8 = __strlen_chk(&DAT_019af7d8,3);
    StringStream::Add(param_1,&DAT_019af7d8,uVar8,0,0);
    StringStream::PrintName(param_1,local_90 & 0xffffffff00000000 | (ulong)*(uint *)(local_90 + 7));
    iVar2 = (**(code **)(*(long *)this + 8))(this);
    if (iVar2 == 0xc) {
      puVar10 = (ulong *)(**(code **)(*(long *)this + 0x90))(this,0xfffffffe);
      uVar7 = *puVar10;
      piVar11 = (int *)(**(code **)(*(long *)this + 0x90))(this,0xffffffff);
      iVar2 = (*piVar11 >> 1) + -0x21;
      local_78 = uVar7;
      iVar3 = AbstractCode::SourcePosition((AbstractCode *)&local_78,iVar2);
      iVar3 = Script::GetLineNumber((Script *)&local_90,iVar3);
      pcVar13 = ":%d] [bytecode=%p offset=%d]";
      uVar8 = __strlen_chk(":%d] [bytecode=%p offset=%d]",0x1d);
      local_78 = CONCAT44(local_78._4_4_,iVar3 + 1);
      uVar14 = 3;
      local_70 = uVar7;
      local_68 = iVar2;
    }
    else {
      local_78 = *puVar6;
      iVar2 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_78);
      iVar2 = Script::GetLineNumber((Script *)&local_90,iVar2);
      pcVar13 = ":~%d] [pc=%p]";
      uVar7 = **(ulong **)(this + 0x28);
      uVar8 = __strlen_chk(":~%d] [pc=%p]",0xe);
      uVar14 = 2;
      local_78 = CONCAT44(local_78._4_4_,iVar2 + 1);
      local_70 = uVar7;
    }
    StringStream::Add(param_1,pcVar13,uVar8,&local_78,uVar14);
  }
  uVar8 = __strlen_chk("(this=%o",9);
  local_78 = uVar4;
  StringStream::Add(param_1,"(this=%o",uVar8,&local_78,1);
  iVar2 = (**(code **)(*(long *)this + 0x78))(this);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      uVar8 = __strlen_chk(&DAT_018bc98e,2);
      StringStream::Add(param_1,&DAT_018bc98e,uVar8,0,0);
      uVar4 = (**(code **)(*(long *)this + 0x70))(this,iVar3);
      uVar8 = __strlen_chk(&DAT_019b0231,3);
      local_78 = uVar4;
      StringStream::Add(param_1,&DAT_019b0231,uVar8,&local_78,1);
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  uVar8 = __strlen_chk(")",2);
  StringStream::Add(param_1,")",uVar8,0,0);
  if (param_3 == 0) {
    puVar15 = &DAT_018938a8;
    uVar8 = 2;
  }
  else {
    iVar2 = (**(code **)(*(long *)this + 8))(this);
    if (iVar2 == 4) {
      uVar8 = __strlen_chk(" {\n// optimized frame\n",0x17);
      StringStream::Add(param_1," {\n// optimized frame\n",uVar8,0,0);
      FUN_00f494e0(param_1,*puVar6,local_80);
      puVar15 = &DAT_019ad8f1;
      uVar8 = 3;
    }
    else {
      uVar8 = __strlen_chk(" {\n",4);
      StringStream::Add(param_1," {\n",uVar8,0,0);
      if (*(int *)(local_88 + 3) < 2) {
        local_98 = 0;
      }
      else {
        local_98 = (ulong)(uint)(*(int *)(local_88 + 0xf) >> 1);
      }
      lVar12 = (**(code **)(*(long *)this + 0x90))(this,0);
      uVar7 = (lVar12 - *(long *)(this + 0x18)) + 8U >> 3;
      uVar4 = (**(code **)(*(long *)this + 0x60))(this);
      if (((uVar4 & 1) == 0) ||
         (9 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x88)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*(long *)this + 0x60))(this);
        uVar1 = *(uint *)(uVar4 - 1);
        uVar9 = uVar4 & 0xffffffff00000000;
        while (*(short *)((uVar9 | uVar1) + 7) == 0x91) {
          uVar4 = uVar9 | *(uint *)(uVar4 + 0xb);
          uVar1 = *(uint *)(uVar4 - 1);
        }
      }
      if (0 < (int)local_98) {
        uVar8 = __strlen_chk("  // heap-allocated locals\n",0x1c);
        StringStream::Add(param_1,"  // heap-allocated locals\n",uVar8,0,0);
        uVar9 = 0;
        iVar2 = 8;
        do {
          uVar8 = __strlen_chk("  var ",7);
          StringStream::Add(param_1,"  var ",uVar8,0,0);
          uVar8 = ScopeInfo::ContextLocalName((ScopeInfo *)&local_88,(int)uVar9);
          StringStream::PrintName(param_1,uVar8);
          uVar8 = __strlen_chk(&DAT_01a59d50,4);
          StringStream::Add(param_1,&DAT_01a59d50,uVar8,0,0);
          if ((int)uVar4 == 0) {
            uVar8 = 0x33;
            pcVar13 = "// warning: no context found - inconsistent frame?";
LAB_00f492d8:
            uVar8 = __strlen_chk(pcVar13,uVar8);
            puVar10 = (ulong *)0x0;
            uVar14 = 0;
          }
          else {
            if ((long)(*(int *)(uVar4 + 3) >> 1) <= (long)(uVar9 + 2)) {
              uVar8 = 0x37;
              pcVar13 = "// warning: missing context slot - inconsistent frame?";
              goto LAB_00f492d8;
            }
            uVar1 = *(uint *)(uVar4 + 7 + (long)iVar2);
            uVar8 = __strlen_chk(&DAT_019b0231,3);
            puVar10 = &local_78;
            uVar14 = 1;
            pcVar13 = "%o";
            local_78 = uVar4 & 0xffffffff00000000 | (ulong)uVar1;
          }
          StringStream::Add(param_1,pcVar13,uVar8,puVar10,uVar14);
          uVar8 = __strlen_chk(&DAT_018938a8,2);
          StringStream::Add(param_1,&DAT_018938a8,uVar8,0,0);
          uVar9 = uVar9 + 1;
          iVar2 = iVar2 + 4;
        } while (local_98 != uVar9);
      }
      if (0 < (int)uVar7) {
        uVar8 = __strlen_chk("  // expression stack (top to bottom)\n",0x27);
        StringStream::Add(param_1,"  // expression stack (top to bottom)\n",uVar8,0,0);
        do {
          uVar1 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar1;
          puVar10 = (ulong *)(**(code **)(*(long *)this + 0x90))(this,uVar7);
          uVar4 = *puVar10;
          uVar8 = __strlen_chk(&DAT_019b01dc,0xf);
          local_78 = CONCAT44(local_78._4_4_,uVar1);
          local_70 = uVar4;
          StringStream::Add(param_1,&DAT_019b01dc,uVar8,&local_78,2);
        } while (0 < (int)uVar1);
      }
      FUN_00f494e0(param_1,*puVar6,local_80);
      puVar15 = &DAT_019b01eb;
      uVar8 = 4;
    }
  }
  uVar8 = __strlen_chk(puVar15,uVar8);
  StringStream::Add(param_1,puVar15,uVar8,0,0);
  return;
}

