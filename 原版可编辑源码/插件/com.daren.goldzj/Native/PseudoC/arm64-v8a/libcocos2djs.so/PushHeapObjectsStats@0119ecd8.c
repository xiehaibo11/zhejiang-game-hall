
/* v8::internal::HeapObjectsMap::PushHeapObjectsStats(v8::OutputStream*, long*) */

int __thiscall
v8::internal::HeapObjectsMap::PushHeapObjectsStats
          (HeapObjectsMap *this,OutputStream *param_1,long *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  UpdateHeapObjectsMap(this);
  puVar8 = *(undefined4 **)(this + 0x40);
  if (puVar8 < *(undefined4 **)(this + 0x48)) {
    uVar2 = *(undefined4 *)this;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = uVar2;
    uVar6 = base::TimeTicks::Now();
    *(undefined8 *)(puVar8 + 4) = uVar6;
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 0x18;
  }
  else {
    std::__ndk1::
    vector<v8::internal::HeapObjectsMap::TimeInterval,std::__ndk1::allocator<v8::internal::HeapObjectsMap::TimeInterval>>
    ::__emplace_back_slow_path<unsigned_int&>
              ((vector<v8::internal::HeapObjectsMap::TimeInterval,std::__ndk1::allocator<v8::internal::HeapObjectsMap::TimeInterval>>
                *)(this + 0x38),(uint *)this);
  }
  iVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_70 = (undefined4 *)0x0;
  puStack_68 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  lVar7 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x40) != lVar7) {
    puVar1 = *(uint **)(this + 0x28);
    puVar8 = (undefined4 *)0x0;
    puVar11 = (undefined4 *)0x0;
    uVar13 = 0;
    puVar10 = *(uint **)(this + 0x20);
    do {
      puVar14 = puVar10;
      if (puVar10 < puVar1) {
        uVar12 = 0;
        do {
          if (*(uint *)(lVar7 + uVar13 * 0x18) <= *puVar14) break;
          puVar9 = puVar14 + 4;
          puVar14 = puVar14 + 6;
          uVar12 = *puVar9 + uVar12;
        } while (puVar14 < puVar1);
      }
      else {
        uVar12 = 0;
      }
      puVar9 = (uint *)(lVar7 + uVar13 * 0x18 + 8);
      uVar3 = (int)((ulong)((long)puVar14 - (long)puVar10) >> 3) * -0x55555555;
      if ((*puVar9 != uVar3) || (*(uint *)(lVar7 + uVar13 * 0x18 + 4) != uVar12)) {
        local_80 = CONCAT44(local_80._4_4_,(int)uVar13);
        *puVar9 = uVar3;
        puVar10 = (uint *)(lVar7 + uVar13 * 0x18 + 4);
        *puVar10 = uVar12;
        if (local_70 < puStack_68) {
          local_70[2] = uVar12;
          *local_70 = (int)uVar13;
          local_70[1] = uVar3;
          local_70 = local_70 + 3;
        }
        else {
          std::__ndk1::vector<v8::HeapStatsUpdate,std::__ndk1::allocator<v8::HeapStatsUpdate>>::
          __emplace_back_slow_path<unsigned_int,unsigned_int&,unsigned_int&>
                    ((vector<v8::HeapStatsUpdate,std::__ndk1::allocator<v8::HeapStatsUpdate>> *)
                     &local_78,(uint *)&local_80,puVar9,puVar10);
        }
        puVar8 = local_78;
        puVar11 = local_70;
        if (iVar4 <= (int)((ulong)((long)local_70 - (long)local_78) >> 2) * -0x55555555) {
          iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
          if (iVar5 == 1) goto LAB_0119ef14;
          local_70 = local_78;
          puVar8 = local_78;
          puVar11 = local_78;
        }
      }
      lVar7 = *(long *)(this + 0x38);
      uVar13 = uVar13 + 1;
      puVar10 = puVar14;
    } while (uVar13 < (ulong)((*(long *)(this + 0x40) - lVar7 >> 3) * -0x5555555555555555));
    if ((puVar8 != puVar11) &&
       (iVar4 = (**(code **)(*(long *)param_1 + 0x28))
                          (param_1,puVar8,
                           (int)((ulong)((long)puVar11 - (long)puVar8) >> 2) * -0x55555555),
       iVar4 == 1)) goto LAB_0119ef14;
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (param_2 != (long *)0x0) {
    local_80 = *(long *)(*(long *)(this + 0x40) + -8) - *(long *)(*(long *)(this + 0x38) + 0x10);
    lVar7 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_80);
    *param_2 = lVar7;
  }
LAB_0119ef14:
  iVar4 = *(int *)this;
  if (local_78 != (undefined4 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return iVar4 + -2;
}

