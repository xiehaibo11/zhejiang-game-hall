
void FUN_0105e8d8(long param_1,undefined8 param_2,SourcePositionTableIterator *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_1 != 0) {
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_60 = 0;
    local_90 = 4;
    local_48 = *(undefined8 *)(param_1 + 8);
    local_50 = 0;
    (**(code **)(param_1 + 0x18))(&local_90);
    uVar2 = local_70;
    iVar1 = *(int *)(param_3 + 0x18);
    while (local_70 = uVar2, iVar1 != -1) {
      if (param_3[0x30] != (SourcePositionTableIterator)0x0) {
        local_60 = (long)*(int *)(param_3 + 0x20);
        uStack_88 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        local_58 = (*(ulong *)(param_3 + 0x28) >> 1 & 0x3fffffff) - 1;
        local_90 = 3;
        local_50 = 1;
        local_48 = *(undefined8 *)(param_1 + 8);
        (**(code **)(param_1 + 0x18))(&local_90);
      }
      local_60 = (long)*(int *)(param_3 + 0x20);
      uStack_88 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      local_58 = (*(ulong *)(param_3 + 0x28) >> 1 & 0x3fffffff) - 1;
      local_90 = 3;
      local_50 = 0;
      local_48 = *(undefined8 *)(param_1 + 8);
      local_70 = uVar2;
      (**(code **)(param_1 + 0x18))(&local_90);
      v8::internal::SourcePositionTableIterator::Advance(param_3);
      iVar1 = *(int *)(param_3 + 0x18);
    }
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_58 = 0;
    local_60 = 0;
    local_90 = 5;
    local_48 = *(undefined8 *)(param_1 + 8);
    local_50 = 0;
    uStack_88 = param_2;
    (**(code **)(param_1 + 0x18))(&local_90);
  }
  return;
}

