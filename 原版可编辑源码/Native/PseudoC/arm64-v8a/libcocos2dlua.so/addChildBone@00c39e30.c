
/* cocostudio::Bone::addChildBone(cocostudio::Bone*) */

void __thiscall cocostudio::Bone::addChildBone(Bone *this,Bone *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  Bone *pBVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  Bone *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar8 = *(long **)(this + 0x178);
  plVar3 = *(long **)(this + 0x180);
  if (plVar8 == plVar3) {
    if ((ulong)(*(long *)(this + 0x188) - (long)plVar8 >> 3) < 4) {
      lVar7 = (long)plVar3 - (long)plVar8;
      plVar2 = operator_new(0x20);
      plVar3 = (long *)((long)plVar2 + lVar7);
      if (0 < lVar7) {
        __memcpy_chk(plVar2,plVar8,lVar7,0x20);
        plVar8 = *(long **)(this + 0x178);
      }
      *(long **)(this + 0x178) = plVar2;
      *(long **)(this + 0x180) = plVar3;
      *(long **)(this + 0x188) = plVar2 + 4;
      if (plVar8 != (long *)0x0) {
        operator_delete(plVar8);
        plVar8 = *(long **)(this + 0x178);
        plVar3 = *(long **)(this + 0x180);
        goto LAB_00c39e74;
      }
      plVar6 = plVar3;
      plVar8 = plVar2;
      plVar9 = plVar3;
      if (plVar2 == plVar3) goto LAB_00c39f44;
    }
    else {
      plVar6 = plVar3;
      plVar2 = plVar8;
      plVar9 = plVar8;
      if (plVar8 == plVar3) goto LAB_00c39f44;
    }
  }
  else {
LAB_00c39e74:
    plVar6 = plVar3;
    plVar2 = plVar8;
    plVar9 = plVar3;
    if (plVar8 == plVar3) goto LAB_00c39f44;
  }
  pBVar4 = (Bone *)*plVar8;
  plVar5 = plVar8;
  while ((plVar6 = plVar5, plVar2 = plVar5, pBVar4 != param_1 &&
         (plVar5 = plVar5 + 1, plVar6 = plVar3, plVar2 = plVar3, plVar3 != plVar5))) {
    pBVar4 = (Bone *)*plVar5;
  }
LAB_00c39f44:
  lVar7 = (long)plVar2 - (long)plVar8 >> 3;
  if (plVar6 == plVar3) {
    lVar7 = -1;
  }
  if (lVar7 == -1) {
    local_70 = param_1;
    if (plVar9 == *(long **)(this + 0x188)) {
      std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
      __push_back_slow_path<cocos2d::Node*const&>
                ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178),
                 (Node **)&local_70);
    }
    else {
      *plVar9 = (long)param_1;
      *(long **)(this + 0x180) = plVar9 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_70);
    *(Bone **)(param_1 + 0x338) = this;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

