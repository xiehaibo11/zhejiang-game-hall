
/* cocostudio::timeline::ActionTimelineCache::loadEasingDataWithFlatBuffers(cocostudio::timeline::Frame*,
   flatbuffers::EasingData const*) */

void __thiscall
cocostudio::timeline::ActionTimelineCache::loadEasingDataWithFlatBuffers
          (ActionTimelineCache *this,Frame *param_1,EasingData *param_2)

{
  EasingData *pEVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  EasingData *pEVar5;
  float local_64;
  float *local_60;
  float *local_58;
  float *pfStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar4 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar4 == 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + uVar4);
  }
  local_60 = (float *)CONCAT44(local_60._4_4_,uVar3);
  (**(code **)(*(long *)param_1 + 0x50))(param_1,&local_60);
  if (((6 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
      (uVar4 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar4 != 0)) &&
     (pEVar1 = param_2 + uVar4 + *(uint *)(param_2 + uVar4), pEVar1 != (EasingData *)0x0)) {
    local_58 = (float *)0x0;
    pfStack_50 = (float *)0x0;
    local_60 = (float *)0x0;
    pEVar5 = pEVar1 + 4;
    if (*(uint *)pEVar1 != 0) {
      do {
        local_64 = *(float *)pEVar5;
        if (local_58 < pfStack_50) {
          *local_58 = local_64;
          local_58 = local_58 + 1;
        }
        else {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_60,&local_64);
        }
        local_64 = *(float *)(pEVar5 + 4);
        if (local_58 < pfStack_50) {
          *local_58 = local_64;
          local_58 = local_58 + 1;
        }
        else {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_60,&local_64);
        }
        pEVar5 = pEVar5 + 8;
      } while (pEVar5 != pEVar1 + 4 + (ulong)*(uint *)pEVar1 * 8);
    }
    (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_60);
    if (local_60 != (float *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

