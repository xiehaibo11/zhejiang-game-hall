
/* v8::internal::compiler::LoopFinderImpl::CreateLoopInfo(v8::internal::compiler::Node*) */

int __thiscall
v8::internal::compiler::LoopFinderImpl::CreateLoopInfo(LoopFinderImpl *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Node *local_70;
  ulong uStack_68;
  long lStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar3 = *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
                  ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 4);
  if (iVar3 < 1) {
    iVar3 = *(int *)(this + 0xd0) + 1;
    *(int *)(this + 0xd0) = iVar3;
    if (*(int *)(this + 0xd4) <= iVar3 >> 5) {
      ResizeBackwardMarks(this);
    }
    uStack_50 = 0;
    local_58 = 0;
    lStack_60 = 0;
    uStack_68 = 0;
    puVar1 = *(undefined8 **)(this + 0x90);
    if (puVar1 < *(undefined8 **)(this + 0x98)) {
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = param_1;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *(long *)(this + 0x90) = *(long *)(this + 0x90) + 0x28;
    }
    else {
      local_70 = param_1;
      std::__ndk1::
      vector<v8::internal::compiler::TempLoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::TempLoopInfo>>
      ::__push_back_slow_path<v8::internal::compiler::TempLoopInfo>
                ((vector<v8::internal::compiler::TempLoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::TempLoopInfo>>
                  *)(this + 0x88),(TempLoopInfo *)&local_70);
    }
    puVar2 = *(undefined8 **)(this + 200);
    local_48 = *puVar2;
    local_70 = (Node *)0x0;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    lStack_60 = 0;
    local_58 = 0;
    local_40 = 0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
    uStack_50 = 0;
    puVar1 = (undefined8 *)puVar2[6];
    if (puVar1 < (undefined8 *)puVar2[7]) {
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[5] = local_48;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      lStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      puVar1[7] = 0xffffffffffffffff;
      puVar1[6] = 0xffffffffffffffff;
      puVar2[6] = puVar2[6] + 0x40;
    }
    else {
      std::__ndk1::
      vector<v8::internal::compiler::LoopTree::Loop,v8::internal::ZoneAllocator<v8::internal::compiler::LoopTree::Loop>>
      ::__push_back_slow_path<v8::internal::compiler::LoopTree::Loop>
                ((vector<v8::internal::compiler::LoopTree::Loop,v8::internal::ZoneAllocator<v8::internal::compiler::LoopTree::Loop>>
                  *)(puVar2 + 5),(Loop *)&local_70);
      if (lStack_60 != 0) {
        local_58 = lStack_60;
      }
    }
    SetLoopMarkForLoopHeader(this,param_1,iVar3);
  }
  return iVar3;
}

