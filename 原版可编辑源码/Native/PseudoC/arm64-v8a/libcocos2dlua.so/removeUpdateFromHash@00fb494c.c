
/* cocos2d::Scheduler::removeUpdateFromHash(cocos2d::_listEntry*) */

void __thiscall cocos2d::Scheduler::removeUpdateFromHash(Scheduler *this,_listEntry *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  _listEntry *p_Var6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  _listEntry *p_Var11;
  long lVar12;
  undefined8 *__ptr;
  _listEntry **pp_Var13;
  
  if (*(long *)(this + 0x40) != 0) {
    plVar5 = *(long **)(*(long *)(this + 0x40) + 0x50);
    uVar1 = ((uint)(byte)param_1[0x43] * 0x1000000 - (*(int *)(param_1 + 0x44) + -0x61c88647)) +
            (uint)(byte)param_1[0x42] * 0x10000 + (uint)(byte)param_1[0x41] * 0x100 +
            (uint)(byte)param_1[0x40] + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = ((*(int *)(param_1 + 0x44) + -0x61c88647) - uVar1) + 0x1124109 ^ uVar1 << 8;
    uVar3 = 0xfeedbef7 - (uVar1 + uVar2) ^ uVar2 >> 0xd;
    uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 0x10;
    uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 5;
    uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 10;
    lVar8 = *(long *)(*plVar5 +
                     (ulong)(((uVar3 - uVar1) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) * 0x10)
    ;
    while (lVar8 != 0) {
      __ptr = (undefined8 *)(lVar8 - plVar5[4]);
      if ((*(int *)(__ptr + 0x10) == 8) && (*(long *)__ptr[0xf] == *(long *)(param_1 + 0x40))) {
        pp_Var13 = (_listEntry **)(__ptr + 1);
        p_Var11 = *pp_Var13;
        puVar9 = (undefined8 *)*__ptr;
        p_Var6 = *(_listEntry **)p_Var11;
        if (p_Var6 == p_Var11) {
          *puVar9 = 0;
        }
        else if (p_Var11 == (_listEntry *)*puVar9) {
          plVar5 = *(long **)(p_Var11 + 8);
          *plVar5 = (long)p_Var6;
          *puVar9 = plVar5;
        }
        else {
          *(long *)(p_Var6 + 8) = *(long *)(p_Var11 + 8);
          if (*(long **)(p_Var11 + 8) == (long *)0x0) {
            *(_listEntry **)*puVar9 = p_Var6;
          }
          else {
            **(long **)(p_Var11 + 8) = (long)p_Var6;
          }
        }
        p_Var6 = *pp_Var13;
        if (this[0x71] != (Scheduler)0x0) {
          p_Var6[0x4d] = (_listEntry)0x1;
          puVar9 = *(undefined8 **)(this + 0x50);
          if (puVar9 == *(undefined8 **)(this + 0x58)) {
            std::__ndk1::vector<cocos2d::_listEntry*,std::__ndk1::allocator<cocos2d::_listEntry*>>::
            __push_back_slow_path<cocos2d::_listEntry*const&>
                      ((vector<cocos2d::_listEntry*,std::__ndk1::allocator<cocos2d::_listEntry*>> *)
                       (this + 0x48),pp_Var13);
            lVar8 = __ptr[0xb];
          }
          else {
            *puVar9 = p_Var6;
            *(undefined8 **)(this + 0x50) = puVar9 + 1;
            lVar8 = __ptr[0xb];
          }
          goto joined_r0x00fb4b70;
        }
        if (p_Var6 != (_listEntry *)0x0) {
          p_Var11 = *(_listEntry **)(p_Var6 + 0x30);
          if (p_Var6 + 0x10 == p_Var11) {
            pcVar7 = *(code **)(*(long *)p_Var11 + 0x20);
LAB_00fb4b5c:
            (*pcVar7)();
          }
          else if (p_Var11 != (_listEntry *)0x0) {
            pcVar7 = *(code **)(*(long *)p_Var11 + 0x28);
            goto LAB_00fb4b5c;
          }
          operator_delete(p_Var6);
        }
        *pp_Var13 = (_listEntry *)0x0;
        lVar8 = __ptr[0xb];
joined_r0x00fb4b70:
        if ((lVar8 == 0) && (__ptr[0xc] == 0)) {
          free((void *)**(undefined8 **)(*(long *)(this + 0x40) + 0x50));
          free(*(void **)(*(long *)(this + 0x40) + 0x50));
          *(undefined8 *)(this + 0x40) = 0;
        }
        else {
          lVar10 = *(long *)(this + 0x40);
          lVar12 = *(long *)(lVar10 + 0x50);
          lVar4 = *(long *)(lVar12 + 0x20);
          if (__ptr == (undefined8 *)(*(long *)(lVar12 + 0x18) - lVar4)) {
            *(long *)(lVar12 + 0x18) = lVar4 + lVar8;
          }
          lVar12 = __ptr[0xc];
          if (lVar8 == 0) {
            *(long *)(this + 0x40) = lVar12;
            lVar10 = lVar12;
          }
          else {
            *(long *)(lVar4 + lVar8 + 0x10) = lVar12;
            lVar12 = __ptr[0xc];
          }
          if (lVar12 != 0) {
            *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x20) + lVar12 + 8) = lVar8;
          }
          plVar5 = *(long **)(lVar10 + 0x50);
          puVar9 = (undefined8 *)
                   (*plVar5 + (ulong)((int)plVar5[1] - 1U & *(uint *)((long)__ptr + 0x84)) * 0x10);
          *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + -1;
          if ((undefined8 *)*puVar9 == __ptr + 10) {
            *puVar9 = __ptr[0xe];
          }
          lVar8 = __ptr[0xd];
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x20) = __ptr[0xe];
          }
          if (__ptr[0xe] != 0) {
            *(long *)(__ptr[0xe] + 0x18) = lVar8;
          }
          *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
        }
        free(__ptr);
        return;
      }
      lVar8 = __ptr[0xe];
    }
  }
  return;
}

