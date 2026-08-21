
/* dragonBones::JSONDataParser::_mergeActionFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int,
   dragonBones::ActionType, dragonBones::BoneData*, dragonBones::SlotData*) */

void __thiscall
dragonBones::JSONDataParser::_mergeActionFrame
          (JSONDataParser *this,undefined8 param_1,int param_2,undefined4 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>> *this_00;
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  void *pvVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar1 = *(long *)(*(long *)(this + 0x30) + 0xa8);
  lVar3 = *(long *)(*(long *)(this + 0x30) + 0xb0);
  plVar7 = (long *)(**(code **)(*(long *)this + 0xf0))(this,param_1,param_4,param_5,param_6);
  puVar4 = (undefined8 *)plVar7[1];
  for (puVar12 = (undefined8 *)*plVar7; puVar12 != puVar4; puVar12 = puVar12 + 1) {
    ArmatureData::addAction(*(ArmatureData **)(this + 0x30),(ActionData *)*puVar12,false);
  }
  piVar16 = *(int **)(this + 0x1c8);
  piVar14 = *(int **)(this + 0x1d0);
  this_00 = (vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>> *)
            (this + 0x1c8);
  if (piVar16 == piVar14) {
    if ((long)piVar14 - (long)piVar16 == 0) {
      std::__ndk1::vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>>
      ::__append(this_00,1);
      piVar14 = *(int **)(this + 0x1d0);
    }
    else if (1 < (ulong)((long)piVar14 - (long)piVar16 >> 5)) {
      lVar13 = 0;
      piVar14 = piVar16 + 8;
      do {
        pvVar8 = *(void **)((long)piVar16 + lVar13 + -0x18);
        if (pvVar8 != (void *)0x0) {
          *(void **)((long)piVar16 + lVar13 + -0x10) = pvVar8;
          operator_delete(pvVar8);
        }
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0x20);
      *(int **)(this + 0x1d0) = piVar14;
    }
    piVar16 = *(int **)this_00;
    *piVar16 = 0;
    if (piVar16 != piVar14) goto LAB_00d3f8d8;
  }
  else if (piVar16 != piVar14) {
LAB_00d3f8d8:
    piVar9 = piVar16;
    do {
      piVar15 = piVar9;
      if (*piVar9 == param_2) break;
      bVar6 = piVar14 + -8 != piVar9;
      piVar9 = piVar9 + 8;
      piVar15 = (int *)0x0;
    } while (bVar6);
    if (piVar15 != (int *)0x0) goto LAB_00d3f968;
  }
  if ((long)piVar14 - (long)piVar16 == -0x20) {
    if (piVar16 != piVar14) {
      piVar9 = piVar14 + -8;
      do {
        pvVar8 = *(void **)(piVar9 + 2);
        if (pvVar8 != (void *)0x0) {
          *(void **)(piVar9 + 4) = pvVar8;
          operator_delete(pvVar8);
        }
        piVar9 = piVar9 + -8;
      } while (piVar16 + -8 != piVar9);
    }
    *(int **)(this + 0x1d0) = piVar16;
  }
  else {
    std::__ndk1::vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>>::
    __append(this_00,1);
  }
  piVar15 = (int *)(*(long *)this_00 + ((long)piVar14 - (long)piVar16 >> 5) * 0x20);
  *piVar15 = param_2;
LAB_00d3f968:
  lVar13 = *plVar7;
  lVar10 = plVar7[1];
  if (lVar10 != lVar13) {
    uVar11 = 0;
    do {
      local_6c = (int)((ulong)(lVar3 - lVar1) >> 3) + (int)uVar11;
      puVar2 = *(uint **)(piVar15 + 4);
      if (puVar2 < *(uint **)(piVar15 + 6)) {
        *puVar2 = local_6c;
        *(uint **)(piVar15 + 4) = puVar2 + 1;
      }
      else {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        __push_back_slow_path<unsigned_int>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(piVar15 + 2),
                   &local_6c);
        lVar13 = *plVar7;
        lVar10 = plVar7[1];
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(lVar10 - lVar13 >> 3));
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

