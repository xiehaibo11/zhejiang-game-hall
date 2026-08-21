
/* cocostudio::Bone::removeChildBone(cocostudio::Bone*, bool) */

void __thiscall cocostudio::Bone::removeChildBone(Bone *this,Bone *param_1,bool param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  Bone *pBVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar6 != plVar2) {
    pBVar8 = (Bone *)*plVar6;
    plVar9 = plVar6;
    while ((plVar10 = plVar9, pBVar8 != param_1 &&
           (plVar9 = plVar9 + 1, plVar10 = plVar2, plVar2 != plVar9))) {
      pBVar8 = (Bone *)*plVar9;
    }
    lVar7 = (long)plVar10 - (long)plVar6 >> 3;
    if (plVar10 == plVar2) {
      lVar7 = -1;
    }
    if (lVar7 != -1) {
      if (param_2) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        local_60 = (undefined8 *)0x0;
        if ((Bone *)&local_60 == param_1 + 0x178) {
          puVar12 = (undefined8 *)0x0;
          puVar11 = puVar12;
          puVar1 = local_58;
        }
        else {
          std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          assign<cocos2d::Node**>
                    ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_60,
                     *(Node ***)(param_1 + 0x178),*(Node ***)(param_1 + 0x180));
          puVar1 = local_58;
          puVar11 = local_60;
          puVar12 = local_60;
          if (local_60 != local_58) {
            do {
              cocos2d::Ref::retain((Ref *)*puVar11);
              puVar5 = local_58;
              puVar11 = puVar11 + 1;
              puVar4 = local_60;
              puVar12 = local_58;
            } while (puVar1 != puVar11);
            for (; puVar11 = puVar12, puVar1 = local_58, puVar4 != puVar5; puVar4 = puVar4 + 1) {
              removeChildBone(param_1,(Bone *)*puVar4,true);
              puVar12 = local_60;
            }
          }
        }
        for (; puVar4 = local_58, puVar12 != local_58; puVar12 = puVar12 + 1) {
          local_58 = puVar1;
          cocos2d::Ref::release((Ref *)*puVar12);
          puVar11 = local_60;
          puVar1 = local_58;
          local_58 = puVar4;
        }
        local_58 = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          operator_delete(puVar11);
        }
      }
      *(undefined8 *)(param_1 + 0x338) = 0;
      plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x588))(param_1);
      (**(code **)(*plVar6 + 0x18))(plVar6,0);
      puVar12 = *(undefined8 **)(this + 0x178);
      puVar11 = *(undefined8 **)(this + 0x180);
      if (puVar12 != puVar11) {
        if ((Bone *)*puVar12 != param_1) {
          do {
            if (puVar11 + -1 == puVar12) goto LAB_00c3a1c4;
            puVar1 = puVar12 + 1;
            puVar12 = puVar12 + 1;
          } while ((Bone *)*puVar1 != param_1);
        }
        if (puVar12 != puVar11) {
          __n = (long)puVar11 - (long)(puVar12 + 1);
          if (__n != 0) {
            memmove(puVar12,puVar12 + 1,__n);
          }
          *(undefined8 **)(this + 0x180) = puVar12 + ((long)__n >> 3);
          cocos2d::Ref::release((Ref *)param_1);
        }
      }
    }
  }
LAB_00c3a1c4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

