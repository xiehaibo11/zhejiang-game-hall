
/* WARNING: Type propagation algorithm not settling */

void FUN_00f16aa8(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  vector<v8::internal::SourceChangeRange,std::__ndk1::allocator<v8::internal::SourceChangeRange>>
  *this;
  int iVar5;
  Isolate *pIVar6;
  undefined **local_70;
  undefined8 uStack_68;
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  
  param_2 = *(int *)(param_1 + 0x40) + param_2;
  param_3 = *(int *)(param_1 + 0x44) + param_3;
  if (param_2 == 0) {
    local_60 = 0;
  }
  else if (param_2 + -1 == *(int *)(**(long **)(param_1 + 0x10) + 3) >> 1) {
    local_60 = *(int *)(param_1 + 0x18);
  }
  else {
    local_60 = (*(int *)(**(long **)(param_1 + 0x10) + (long)((param_2 + -1) * 4) + 7) >> 1) + 1;
  }
  if (param_3 == 0) {
    iStack_5c = 0;
  }
  else if (param_3 + -1 == *(int *)(**(long **)(param_1 + 0x20) + 3) >> 1) {
    iStack_5c = *(int *)(param_1 + 0x28);
  }
  else {
    iStack_5c = (*(int *)(**(long **)(param_1 + 0x20) + (long)((param_3 + -1) * 4) + 7) >> 1) + 1;
  }
  if (param_2 + param_4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_2 + param_4 + -1;
    if (iVar5 == *(int *)(**(long **)(param_1 + 0x10) + 3) >> 1) {
      iVar5 = *(int *)(param_1 + 0x18);
    }
    else {
      iVar5 = (*(int *)(**(long **)(param_1 + 0x10) + (long)(iVar5 * 4) + 7) >> 1) + 1;
    }
  }
  iStack_44 = iVar5 - local_60;
  iVar4 = 0;
  if (param_3 + param_5 != 0) {
    iVar4 = param_3 + param_5 + -1;
    if (iVar4 == *(int *)(**(long **)(param_1 + 0x20) + 3) >> 1) {
      iVar4 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar4 = (*(int *)(**(long **)(param_1 + 0x20) + (long)(iVar4 * 4) + 7) >> 1) + 1;
    }
  }
  if ((iStack_44 < 800) && (iStack_34 = iVar4 - iStack_5c, iStack_34 < 800)) {
    pIVar6 = *(Isolate **)(param_1 + 8);
    uVar1 = *(undefined8 *)(pIVar6 + 0x95a0);
    lVar3 = *(long *)(pIVar6 + 0x95a8);
    *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(undefined8 *)(param_1 + 0x38);
    local_58 = &PTR_FUN_01ca4760;
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = &PTR_FUN_01ca4798;
    local_48 = local_60;
    local_38 = iStack_5c;
    FUN_00f12c6c(&local_58,&local_70);
    if (pIVar6 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar6 + 0x95a0) = uVar1;
      *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
      if (*(long *)(pIVar6 + 0x95a8) != lVar3) {
        *(long *)(pIVar6 + 0x95a8) = lVar3;
        v8::internal::HandleScope::DeleteExtensions(pIVar6);
      }
    }
  }
  else {
    this = *(vector<v8::internal::SourceChangeRange,std::__ndk1::allocator<v8::internal::SourceChangeRange>>
             **)(param_1 + 0x48);
    local_58 = (undefined **)CONCAT44(iVar5,local_60);
    uStack_50 = CONCAT44(iVar4,iStack_5c);
    puVar2 = *(undefined8 **)(this + 8);
    if (puVar2 < *(undefined8 **)(this + 0x10)) {
      puVar2[1] = uStack_50;
      *puVar2 = local_58;
      *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
    }
    else {
      std::__ndk1::
      vector<v8::internal::SourceChangeRange,std::__ndk1::allocator<v8::internal::SourceChangeRange>>
      ::__emplace_back_slow_path<v8::internal::SourceChangeRange>
                (this,(SourceChangeRange *)&local_58);
    }
  }
  return;
}

