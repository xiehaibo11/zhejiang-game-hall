
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
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *plVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *pvVar9;
  size_t __n;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  
  lVar1 = *(long *)(*(long *)(this + 0x30) + 0xa8);
  lVar2 = *(long *)(*(long *)(this + 0x30) + 0xb0);
  plVar5 = (long *)(**(code **)(*(long *)this + 0xf0))(this,param_1,param_4,param_5,param_6);
  puVar3 = (undefined8 *)plVar5[1];
  for (puVar10 = (undefined8 *)*plVar5; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    ArmatureData::addAction(*(ArmatureData **)(this + 0x30),(ActionData *)*puVar10,false);
  }
  piVar16 = *(int **)(this + 0x1c8);
  piVar13 = *(int **)(this + 0x1d0);
  this_00 = (vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>> *)
            (this + 0x1c8);
  if (piVar16 == piVar13) {
                    /* try { // try from 00d8d49c to 00e8d4a3 has its CatchHandler @ 00d8dc58 */
    if ((long)piVar13 - (long)piVar16 == 0) {
      std::__ndk1::vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>>
      ::__append(this_00,1);
      piVar13 = *(int **)(this + 0x1d0);
                    /* try { // try from 00d8d4f4 to 00e8d533 has its CatchHandler @ 00d8dc44 */
    }
    else if (1 < (ulong)((long)piVar13 - (long)piVar16 >> 5)) {
      lVar6 = 0;
      piVar13 = piVar16 + 8;
      do {
        pvVar9 = *(void **)((long)piVar16 + lVar6 + -0x18);
        if (pvVar9 != (void *)0x0) {
          *(void **)((long)piVar16 + lVar6 + -0x10) = pvVar9;
          operator_delete(pvVar9);
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0x20);
      *(int **)(this + 0x1d0) = piVar13;
    }
    piVar16 = *(int **)this_00;
    *piVar16 = 0;
    if (piVar16 != piVar13) goto LAB_00d8d50c;
  }
  else if (piVar16 != piVar13) {
LAB_00d8d50c:
    piVar8 = piVar16;
    do {
      piVar12 = piVar8;
      if (*piVar8 == param_2) break;
      bVar4 = piVar13 + -8 != piVar8;
      piVar8 = piVar8 + 8;
      piVar12 = (int *)0x0;
    } while (bVar4);
    if (piVar12 != (int *)0x0) goto LAB_00d8d5a4;
  }
                    /* try { // try from 00d8d540 to 00e8d547 has its CatchHandler @ 00d8dc14 */
  piVar8 = piVar13;
                    /* try { // try from 00d8d548 to 00e8d553 has its CatchHandler @ 00d8dc1c */
  if ((long)piVar13 - (long)piVar16 == -0x20) {
    while (piVar12 = piVar8, piVar16 != piVar12) {
      pvVar9 = *(void **)(piVar12 + -6);
      piVar8 = piVar12 + -8;
      if (pvVar9 != (void *)0x0) {
        *(void **)(piVar12 + -4) = pvVar9;
        operator_delete(pvVar9);
      }
    }
    *(int **)(this + 0x1d0) = piVar16;
  }
  else {
    std::__ndk1::vector<dragonBones::ActionFrame,std::__ndk1::allocator<dragonBones::ActionFrame>>::
    __append(this_00,1);
  }
  piVar12 = (int *)(*(long *)this_00 + ((long)piVar13 - (long)piVar16 >> 5) * 0x20);
  *piVar12 = param_2;
LAB_00d8d5a4:
  if (plVar5[1] != *plVar5) {
    uVar14 = 0;
    do {
                    /* try { // try from 00d8d5dc to 00e8d5f7 has its CatchHandler @ 00d8dc74 */
      piVar13 = *(int **)(piVar12 + 4);
      iVar15 = (int)((ulong)(lVar2 - lVar1) >> 3) + (int)uVar14;
      if (piVar13 < *(int **)(piVar12 + 6)) {
        *piVar13 = iVar15;
        *(int **)(piVar12 + 4) = piVar13 + 1;
      }
      else {
        pvVar9 = *(void **)(piVar12 + 2);
        __n = (long)piVar13 - (long)pvVar9;
        uVar11 = ((long)__n >> 2) + 1;
        if (uVar11 >> 0x3e != 0) {
LAB_00d8d6a0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d8d6a0 to 00e8d6a7 has its CatchHandler @ 00d8dc50 */
          abort();
        }
        lVar6 = (long)*(int **)(piVar12 + 6) - (long)pvVar9;
        if ((ulong)(lVar6 >> 2) < 0x1fffffffffffffff) {
          uVar7 = lVar6 >> 1;
          if (uVar11 <= uVar7) {
            uVar11 = uVar7;
          }
          if (uVar11 != 0) {
                    /* try { // try from 00d8d628 to 00e8d62f has its CatchHandler @ 00d8dc54 */
            if (uVar11 >> 0x3e != 0) goto LAB_00d8d6a0;
            goto LAB_00d8d634;
          }
          __dest = (void *)0x0;
        }
        else {
          uVar11 = 0x3fffffffffffffff;
LAB_00d8d634:
          __dest = operator_new(uVar11 << 2);
        }
        piVar13 = (int *)((long)__dest + ((long)__n >> 2) * 4);
        *piVar13 = iVar15;
        if (0 < (long)__n) {
                    /* try { // try from 00d8d65c to 00e8d66f has its CatchHandler @ 00d8dc70 */
          memcpy(__dest,pvVar9,__n);
        }
        *(void **)(piVar12 + 2) = __dest;
        *(int **)(piVar12 + 4) = piVar13 + 1;
        *(void **)(piVar12 + 6) = (void *)((long)__dest + uVar11 * 4);
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)(plVar5[1] - *plVar5 >> 3));
  }
  return;
}

