
/* cocostudio::ColliderDetector::removeContourData(cocostudio::ContourData*) */

void __thiscall
cocostudio::ColliderDetector::removeContourData(ColliderDetector *this,ContourData *param_1)

{
  long *plVar1;
  ColliderBody **ppCVar2;
  ColliderBody **ppCVar3;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ColliderBody *pCVar9;
  long *__dest;
  Ref *this_00;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  ppCVar2 = *(ColliderBody ***)(this + 0x28);
  ppCVar3 = *(ColliderBody ***)(this + 0x30);
  if (ppCVar2 != ppCVar3) {
    pCVar9 = *ppCVar2;
    while( true ) {
      if ((pCVar9 != (ColliderBody *)0x0) && (*(ContourData **)(pCVar9 + 0x40) == param_1)) {
        if (local_68 == puStack_60) {
          std::__ndk1::
          vector<cocostudio::ColliderBody*,std::__ndk1::allocator<cocostudio::ColliderBody*>>::
          __push_back_slow_path<cocostudio::ColliderBody*const&>
                    ((vector<cocostudio::ColliderBody*,std::__ndk1::allocator<cocostudio::ColliderBody*>>
                      *)&local_70,ppCVar2);
        }
        else {
          *local_68 = pCVar9;
          local_68 = local_68 + 1;
        }
      }
      puVar8 = local_68;
      ppCVar2 = ppCVar2 + 1;
      puVar6 = local_70;
      puVar7 = local_68;
      if (ppCVar3 == ppCVar2) break;
      pCVar9 = *ppCVar2;
    }
    for (; puVar6 != puVar8; puVar6 = puVar6 + 1) {
      __dest = *(long **)(this + 0x28);
      plVar4 = *(long **)(this + 0x30);
      if (__dest != plVar4) {
        this_00 = (Ref *)*puVar6;
        if ((Ref *)*__dest != this_00) {
          do {
            if (plVar4 + -1 == __dest) goto LAB_00c4598c;
            plVar1 = __dest + 1;
            __dest = __dest + 1;
          } while ((Ref *)*plVar1 != this_00);
        }
        if (__dest != plVar4) {
          __n = (long)plVar4 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          *(long **)(this + 0x30) = __dest + ((long)__n >> 3);
          cocos2d::Ref::release(this_00);
        }
      }
LAB_00c4598c:
      puVar7 = local_70;
    }
    if (puVar7 != (undefined8 *)0x0) {
      local_68 = puVar7;
      operator_delete(puVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

